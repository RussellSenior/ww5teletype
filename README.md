Exploration of the IBM Wheelwriter 5

This is a project motivated by a desire to create a daisywheel teletype, to give a 
similar experience to that of a Model 33ASR teletype, but with upper and lowercase 
characters. Thanks to Hugh Pyle and his fantastic twitch.tv/33asr channel for the 
inspiration.  Thanks also to Chris Gregg and his project:
https://github.com/tofergregg/IBM-Wheelwriter-Hack and to this very similar project 
by Stephen Casner: https://github.com/IBM-1620/Junior.

The goal is to intercept user input from the keyboard and send it to a remote computer
and receive the echoed characters from the remote computer and send the corresponding
commands to the printing mechanism for hardcopy output.

I obtained an IBM Wheelwriter 5 from the Tektronix Surplus Store (open two days a month,
first and third Thursdays, from 2pm to 4pm) on the Beaverton Oregon campus of Tektronix. 
This typewriter came with the parallel port option, which hangs on the back of the case
and interfaces by a 6 (or 7?) pin bus. The cost of the typewriter was $25. I purchased 
two new-in-box ribbon cartridges from the same location for $0.50 each.

Following the lead of Chris Gregg, I began by putting a logic analyzer on the "bus" pin
between the keyboard controller board near the front of the typewriter and the motor 
control board in the rear of the typewriter and watching the response to keystrokes.

The keyboard controller board uses an Intel 8031 (romless version of the venerable 8051).
Reading the MCS-51 MICROCONTROLLER FAMILY USER’S MANUAL from Intel, it appears that the 
interboard communication takes place using a UART signaling but with the wrinkle that
both transmit and receive occur on the same wire. It appears that the UART is placed in 
the so-called "mode 2", which uses a 9-bit message, lsb first, where a one in the ninth bit 
indicates a corresponding target device (specified by the normal 8 bits) on the bus should 
listen to the message. Each message is ACK'd with nine bits of zero, presumably by the 
target device. Communication is at 1/64 of the crystal oscillator speed of 12MHz, which 
works out to 187500 baud (the logic analyzer, a Saleae clone using pulseview of the Sigrok
project, estimated the baud rate was 187060, which is very close, within 1/4%).

My original plan was to man-in-the-middle this serial bus wire, intercepting the commands 
coming from the keyboard controller board, decoding them, and sending a corresponding 
ASCII character (or, perhaps, string) to the remote computer over a normal 8N1 like UART,
receiving a ASCII back from the remote computer and injecting the corresponding commands
on the split bus.  However, due to some challenges, this is easier said than done:

Amongst other things, the keyboard has no "Control" key, therefore it becomes necessary
to hijack another key to act on its behalf. The most obvious candidate is the "Code"
key, which sits on the space bar row, to the left of the space bar. The difficulty arises
when you discover that the combination of "Code" and some other keys generates a rather 
complex series of commands, which would need to be decoded. This isn't impossible, but it
seems like a lot of complex work.

A second alternative, one taken by Stephen Casner for the IBM 1620 Junior project, is to 
intercept key presses directly from the FFC cables coming from the keyboard itself, and decode
the matrix. The corresponding ASCII characters can be sent to the remote computer and a fake
keyboard can be presented to the keyboard controller board.  I need to learn more about how
the keyboard matrix works.

One desirable feature is the ability to return to a "local" (vs "line") mode, where normal
typewriter functionality is restored, either through software or perhaps a hardware switch.

Thanks to the able assistance of Jared Boone of ShareBrained Technology, of Chronulator and 
PortaPak fame, I was able to obtain dumps of the off-chip ROMs for the keyboard controller 
and printer option boards (there are some other ROMs, but they seem less important).  They
can be found in the rom subdirectory.

One oddity found in the disassembled firmware so far, it's not clear where the UART is 
configured in the keyboard controller firmware. I see references to the control register 
SCON in the printer board firmware, but not in the keyboard controller. Setting up the 
9-bit serial mode must require twiddling that register, so wtf? 

This particular project may go on the back burner, however, due to the acquisition of two 
almost functional DEC LQP02 wheelwriting printers. These have some advantages, including the 
availability of a native RS-232 interface and full ASCII character set wheels. They IBM wheels 
are missing some useful characters, including tilde, pipe, and caret.

The current plan is to attach a ps2 keyboard, decode keyboard events using the nice teensy
library, send them over serial to the remote computer, etc. The DEC printers are serial
devices, so it may be possible to simply connect the remote computer's TX pin to the RX pin
of the printer and be done.

The current obstacle with the LQP02 is that the carriage belts (I think they were MXL timing
belts) had substantially rotted, so I'm currently waiting for some replacement belts to 
effect repairs. At that point, I'll be able to tell whether the printers are otherwise
functional and whether the approach is viable.



. hh



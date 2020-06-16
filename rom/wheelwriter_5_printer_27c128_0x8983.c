typedef unsigned char   undefined;

typedef unsigned char    undefined1;



void FUN_CODE_00dd(void)

{
  nop();
  if (((20_2 == '\0') && (21_7 != '\0')) && (24_7 != '\0')) {
    if (24_5 == '\x01') {
      if ((DAT_INTMEM_33 < '\0') && (24_6 == '\0')) {
        TB8 = 0;
        P1_4 = 0;
        24_7 = '\0';
        20_2 = '\x01';
        write_volatile_1(SBUF,DAT_INTMEM_34);
        24_6 = '\x01';
      }
      else {
        21_7 = '\0';
      }
    }
    else {
      TB8 = 0;
      P1_4 = 0;
      24_7 = '\0';
      20_2 = '\x01';
      write_volatile_1(SBUF,DAT_INTMEM_33);
      24_5 = '\x01';
    }
  }
  EA = 1;
  return;
}



void FUN_CODE_0119(byte param_1)

{
  ET1 = 0;
  nop();
  if (20_2 == '\0') {
    if (20_3 == '\0') {
      if (((21_6 != '\0') && (20_7 != '\0')) && (20_4 != '\x01')) {
        param_1 = DAT_INTMEM_44 ^ DAT_INTMEM_43;
        if (param_1 == 0) {
          21_6 = '\0';
        }
        else {
          20_4 = '\x01';
          if (DAT_INTMEM_44 != 0) {
            param_1 = *(byte *)(ushort)(DAT_INTMEM_44 + 0x50);
            write_volatile_1(SBUF,param_1);
          }
          else {
            write_volatile_1(SBUF,DAT_EXTMEM_0050);
            param_1 = DAT_EXTMEM_0050;
          }
          TB8 = DAT_INTMEM_44 == 0;
          P1_4 = 1;
          20_2 = '\x01';
          DAT_INTMEM_44 = DAT_INTMEM_44 + 1;
        }
      }
    }
    else {
      if (21_1 != '\0') {
        param_1 = 0x21;
        do {
          param_1 = param_1 - 1;
        } while (param_1 != 0);
      }
      20_3 = '\0';
      TB8 = false;
      P1_4 = 1;
      20_2 = '\x01';
      write_volatile_1(SBUF,DAT_INTMEM_45);
    }
  }
  FUN_CODE_00dd(param_1);
  ET1 = 1;
  return;
}



void FUN_CODE_116e(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x28;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + '\x01';
  } while (puVar1 != (undefined *)0x2f);
  puVar1 = (undefined *)0x4a;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + '\x01';
  } while (puVar1 != (undefined *)0x58);
  return;
}



void FUN_CODE_117e(void)

{
  if (INT1 != '\x01') {
    nop();
    nop();
    nop();
    nop();
    P1_7 = 0;
    EA = 1;
  }
  28_5 = 1;
  2a_2 = 0;
  P1_5 = 0;
  P1_6 = 1;
  EX1 = 0;
  return;
}



void FUN_CODE_1180(void)

{
  if (INT1 != '\x01') {
    nop();
    nop();
    nop();
    nop();
    P1_7 = 0;
    EA = 1;
  }
  28_5 = 1;
  2a_2 = 0;
  P1_6 = 1;
  EX1 = 0;
  return;
}



void FUN_CODE_1182(void)

{
  if (INT1 != '\x01') {
    nop();
    nop();
    nop();
    nop();
    P1_7 = 0;
    EA = 1;
  }
  2a_2 = 0;
  P1_6 = 1;
  EX1 = 0;
  return;
}



void FUN_CODE_1198(void)

{
  byte bVar1;
  char in_PSW;
  
  if (2a_2 == '\0') {
    28_7 = '\x01';
  }
  else {
    FUN_CODE_34d9();
    if (((in_PSW < '\0') && (BANK2_R2 == '\0')) && (IE1 == '\0')) {
      28_7 = '\0';
    }
    else {
      if (28_7 != '\x01') {
        28_7 = '\x01';
        BANK1_R2 = 2;
        BANK1_R3 = 0xbc;
        FUN_CODE_2fba();
        22_6 = '\x01';
      }
    }
    if (((22_6 != '\0') && (24_0 != '\x01')) && (BANK2_R2 != -0x10)) {
      28_7 = '\0';
      22_6 = '\0';
    }
  }
  if (((28_7 != '\x01') && (2c_7 != '\x01')) &&
     (((2d_5 != '\x01' && (((2e_4 != '\x01' && (2e_5 != '\x01')) && (INT1 != '\x01')))) &&
      (IE1 != '\x01')))) {
    BANK1_R4 = 0x96;
    FUN_CODE_2fc0();
    bVar1 = read_volatile_1(P1);
    write_volatile_1(P1,bVar1 ^ 0x81);
    P1_0 = 0;
    nop();
    nop();
    nop();
    P1_7 = 0;
    EA = 1;
  }
  return;
}



void FUN_CODE_1ba4(char param_1,char param_2,byte param_3,byte param_4)

{
  undefined uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  
  sVar6 = CONCAT11(DAT_INTMEM_37,DAT_INTMEM_38);
  bVar4 = 0;
  2c_1 = '\0';
  2e_4 = false;
  do {
    FUN_CODE_2f17();
    if (param_1 == '\x03') {
      if (((param_2 == '\0') || (param_2 == 'O')) &&
         (((param_3 != 6 && ((param_3 < 6) << 7 < '\0')) || (param_4 >> 4 != param_3)))) {
        2e_4 = true;
      }
      else {
        if ((param_2 == '\0') || (param_2 == 'O')) {
          2e_4 = 2c_1 == '\0';
          if (!2e_4) {
            bVar4 = bVar4 + 1;
          }
          2c_1 = '\x01';
        }
        else {
          if ((2c_1 == '\0') || (param_4 >> 4 == param_3)) {
            bVar4 = bVar4 + 1;
            2e_4 = false;
          }
          else {
            2e_4 = true;
          }
          2c_1 = '\0';
        }
      }
    }
    else {
      if (((param_1 == '\x02') && (2e_4 != false)) && (param_2 != 'O')) {
        bVar4 = bVar4 + 1;
        2e_4 = false;
      }
    }
    cVar2 = (char)((ushort)sVar6 >> 8);
  } while ((bVar4 != 0x15) && ((cVar2 != DAT_INTMEM_35 || ((char)sVar6 != DAT_INTMEM_36))));
  if ((cVar2 != DAT_INTMEM_35) || ((char)sVar6 != DAT_INTMEM_36)) {
    do {
      do {
        FUN_CODE_2f17();
      } while (param_1 == '\x02');
    } while (param_1 == '\x05');
  }
  sVar6 = sVar6 + 4;
  FUN_CODE_2f9c();
  DAT_INTMEM_4e = (char)((ushort)sVar6 >> 8);
  DAT_INTMEM_4f = (char)sVar6;
  if ((bVar4 == 0x15) && ((27_7 == '\x01' || (27_6 != '\0')))) {
    do {
      FUN_CODE_2f17();
      if (param_1 == '\n') break;
    } while (((char)((ushort)sVar6 >> 8) != DAT_INTMEM_35) || ((char)sVar6 != DAT_INTMEM_36));
  }
  cVar2 = DAT_EXTMEM_07d4;
  if (param_1 == '\n') {
    cVar2 = param_2;
  }
  if (cVar2 != DAT_INTMEM_52) {
    FUN_CODE_2558(cVar2);
  }
  2d_0 = '\x01';
  if ((DAT_INTMEM_52 == '\x1e') || (DAT_INTMEM_52 == '#')) {
    2d_0 = '\0';
  }
  DAT_INTMEM_4a = 6;
  DAT_INTMEM_4b = 0x11;
  DAT_INTMEM_4c = 6;
  DAT_INTMEM_4d = 0x11;
  FUN_CODE_2b15(0x60);
  FUN_CODE_2b15(0x40);
  FUN_CODE_2b15(0x20);
  2e_3 = 0;
  if ((bVar4 == 0x15) || ((bVar4 < 0x15) << 7 < '\0')) {
    FUN_CODE_2b15(100);
  }
  DAT_INTMEM_29 = DAT_INTMEM_29 | 0x81;
  FUN_CODE_2b15(0xe1,0x1b);
  29_5 = 1;
  2c_2 = 0;
  DAT_EXTMEM_07e0 = 0;
  DAT_EXTMEM_07e1 = 0;
  DAT_EXTMEM_07e2 = 0;
  DAT_EXTMEM_07e3 = 0;
  DAT_EXTMEM_07e4 = 0;
  if ((DAT_INTMEM_4e != DAT_INTMEM_37) || (DAT_INTMEM_4f != DAT_INTMEM_38)) {
    2c_1 = '\0';
    cVar3 = DAT_INTMEM_4f;
    cVar5 = DAT_INTMEM_4e;
    do {
      do {
        FUN_CODE_2f2f();
        FUN_CODE_2862();
      } while (cVar5 != DAT_INTMEM_37);
    } while (cVar3 != DAT_INTMEM_38);
  }
  2e_3 = 0;
  cVar3 = '\0';
  28_5 = '\0';
  if (DAT_INTMEM_55 == '\0') {
    if (((((DAT_INTMEM_39 != DAT_INTMEM_3b) || (DAT_INTMEM_3a != DAT_INTMEM_3c)) &&
         (FUN_CODE_2f2f(0), param_1 == '\x03')) &&
        ((cVar2 == '\0' || ((cVar2 == 'O' && (2d_0 != '\0')))))) &&
       (((param_3 < 6) << 7 < '\0' ||
        ((param_4 >> 4 != BANK0_R4 ||
         ((bVar4 = (param_4 >> 4) - 6, DAT_EXTMEM_07e1 != bVar4 &&
          (-1 < (DAT_EXTMEM_07e1 < bVar4) << 7)))))))) {
      28_5 = '\x01';
    }
  }
  else {
    28_5 = '\x01';
  }
  DAT_EXTMEM_07e0 = 0;
  DAT_EXTMEM_07e2 = 0;
  2c_1 = 0;
  cVar2 = DAT_INTMEM_3a;
  cVar5 = DAT_INTMEM_39;
  if (28_5 != '\0') {
    uVar1 = 0x1a;
    if (28_1 != '\0') {
      FUN_CODE_2f2f(0xe1,0x1a);
      uVar1 = 0x95;
      if (param_4 == 2) {
        uVar1 = 0x96;
      }
    }
    FUN_CODE_2b15(uVar1);
    29_5 = 1;
    cVar3 = cVar3 + '\x01';
  }
  do {
    if ((cVar5 == DAT_INTMEM_3b) && (cVar2 == DAT_INTMEM_3c)) {
      29_1 = 0;
      FUN_CODE_2b15(DAT_INTMEM_29,0);
      29_5 = 1;
      cVar3 = cVar3 + '\x01';
    }
    else {
      FUN_CODE_2f2f();
      FUN_CODE_2862();
    }
  } while (cVar3 != '\a');
  FUN_CODE_2b15(0x61,0);
  return;
}



void FUN_CODE_2000(undefined param_1,char param_2,undefined param_3,undefined param_4)

{
  *(undefined *)CONCAT11(param_3,param_4) = param_1;
  if (-1 < (param_2 + 1U < 0x48) << 7) {
    T0 = 0;
  }
  return;
}



byte FUN_CODE_2020(byte param_1)

{
  byte bVar1;
  
  if ((param_1 & 0x80) == 0) {
    if ((param_1 & 0x20) == 0) {
      bVar1 = (&LAB_CODE_2049)[param_1 & 0xbf];
      if (DAT_INTMEM_46 == '\0') {
        bVar1 = bVar1 >> 4;
      }
      bVar1 = bVar1 & 0xf;
    }
    else {
      bVar1 = (&LAB_CODE_205a_2)[param_1 & 0x9f];
    }
  }
  else {
    bVar1 = (&LAB_CODE_2058)[param_1 & 0x3f];
  }
  return bVar1;
}



byte FUN_CODE_2070(byte param_1,undefined param_2,undefined param_3)

{
  undefined *puVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  
  21_5 = false;
  bVar3 = param_1;
  if (param_1 != 0) {
    bVar2 = FUN_CODE_2020(*(undefined *)CONCAT11(param_2,param_3));
    bVar2 = bVar2 & 0xf7;
    bVar3 = (bVar2 - 1) - param_1;
    if ((bVar2 - 1 < param_1) << 7 < '\0') {
      puVar1 = (undefined *)0x2f;
      puVar4 = (undefined *)CONCAT11(param_2,param_3);
      do {
        *puVar1 = *puVar4;
        puVar1 = puVar1 + '\x01';
        puVar4 = puVar4 + 1;
        if (((char)((ushort)puVar4 >> 8) == '\0') && ((char)puVar4 == 'P')) {
          puVar4 = (undefined *)0x0;
        }
        bVar2 = bVar2 - 1;
      } while (bVar2 != 0);
      21_5 = true;
      if (((DAT_INTMEM_2f >> 6 & 1) != 0) && (-1 < (char)DAT_INTMEM_2f)) {
        20_3 = 1;
        22_2 = 1;
      }
      DAT_INTMEM_2f = DAT_INTMEM_2f & 0x9f;
      if (DAT_INTMEM_2f == 10) {
        22_1 = 22_1 ^ 1;
        21_5 = DAT_EXTMEM_0056 != DAT_INTMEM_30;
        bVar3 = DAT_EXTMEM_0056;
        if (21_5) {
          DAT_EXTMEM_0056 = DAT_INTMEM_30;
          bVar3 = DAT_INTMEM_30;
        }
      }
      else {
        if (DAT_INTMEM_2f == 0) {
          DAT_INTMEM_46 = DAT_INTMEM_30 & 0xe0;
          do {
            bVar3 = DAT_INTMEM_46;
          } while ((char)DAT_INTMEM_30 < '\0');
        }
        else {
          if ((DAT_INTMEM_2f == 1) || (DAT_INTMEM_2f == 8)) {
            DAT_EXTMEM_0055 = DAT_INTMEM_30;
            bVar3 = DAT_INTMEM_30;
          }
          else {
            if ((DAT_INTMEM_2f == 4) || (bVar3 = DAT_INTMEM_2f, (DAT_INTMEM_2f < 4) << 7 < '\0')) {
              DAT_INTMEM_31 = DAT_INTMEM_31 & 0x3f;
              bVar3 = DAT_INTMEM_31;
            }
          }
        }
      }
    }
  }
  return bVar3;
}



undefined FUN_CODE_2216(undefined param_1)

{
  DAT_INTMEM_44 = 0;
  if (20_7 == '\x01') {
    20_1 = 1;
    if (20_2 != '\x01') {
      20_4 = 1;
      TB8 = 1;
      P1_4 = 1;
      20_2 = '\x01';
      write_volatile_1(SBUF,DAT_EXTMEM_0050);
      DAT_INTMEM_44 = 1;
    }
  }
  else {
    T0 = 0;
  }
  21_6 = 1;
  ET1 = 1;
  return param_1;
}



void FUN_CODE_2241(void)

{
  if ((20_2 == '\x01') || (24_7 == '\0')) {
    24_5 = 0;
  }
  else {
    24_5 = 1;
    TB8 = 0;
    P1_4 = 0;
    24_7 = '\0';
    20_2 = '\x01';
    write_volatile_1(SBUF,DAT_INTMEM_33);
  }
  21_7 = 1;
  24_6 = 0;
  EA = 1;
  return;
}



byte FUN_CODE_2261(byte param_1,byte param_2)

{
  FUN_CODE_226c(param_2);
  return param_2 | param_1;
}



byte FUN_CODE_226c(short param_1)

{
  byte bVar1;
  
  if (param_1 < 0) {
    bVar1 = FUN_CODE_2fcc();
  }
  else {
    bVar1 = (byte)((ushort)param_1 >> 8) | 0x80;
  }
  return bVar1;
}



void FUN_CODE_2282(undefined param_1,undefined param_2)

{
  if (2c_6 != '\x01') {
    FUN_CODE_2653();
    FUN_CODE_226c();
    *(undefined *)(CONCAT11(DAT_INTMEM_35,DAT_INTMEM_36) + 1) = param_1;
    *(undefined *)(CONCAT11(DAT_INTMEM_35,DAT_INTMEM_36) + 2) = param_2;
  }
  return;
}



void FUN_CODE_2298(undefined2 param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  
  bVar3 = (byte)param_1;
  cVar2 = (char)((ushort)param_1 >> 8);
  FUN_CODE_2404();
  bVar1 = DAT_INTMEM_31;
  cVar4 = cVar2;
  bVar5 = bVar3;
  FUN_CODE_268d(0x80,DAT_INTMEM_31);
  cVar4 = FUN_CODE_2fed(bVar5,cVar4);
  if ((C == '\x01') || (cVar4 == '\0')) {
    FUN_CODE_26c8(0x80,DAT_INTMEM_31);
  }
  else {
    do {
      FUN_CODE_2df1();
    } while (25_3 != '\0');
    DAT_INTMEM_55 = 0;
    FUN_CODE_226c(cVar2 + (((DAT_INTMEM_31 < bVar3) << 7) >> 7),DAT_INTMEM_31 - bVar3);
    bVar5 = bVar1;
    FUN_CODE_2d21(bVar1);
    if (param_2 == '\x03') {
      bVar5 = bVar1 + bVar5;
    }
    else {
      if (param_2 == '\x05') {
        FUN_CODE_25f3();
      }
    }
    FUN_CODE_25f3(bVar5);
  }
  return;
}



void FUN_CODE_2302(undefined2 param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  
  cVar2 = BANK2_R2;
  bVar1 = BANK2_R3;
  if (DAT_INTMEM_54 == '\0') {
    bVar1 = DAT_INTMEM_49 - DAT_INTMEM_51;
    cVar2 = DAT_INTMEM_48 - (DAT_INTMEM_50 - (((DAT_INTMEM_49 < DAT_INTMEM_51) << 7) >> 7));
  }
  cVar3 = (byte)param_1 - bVar1;
  if (((char)((ushort)param_1 >> 8) != cVar2 - ((((byte)param_1 < bVar1) << 7) >> 7)) ||
     (cVar3 != '\0')) {
    if (28_1 != '\0') {
      uVar4 = BANK1_R6;
      uVar5 = BANK1_R7;
      FUN_CODE_2fcc(BANK1_R7);
      FUN_CODE_25f3(5,uVar4,uVar5);
    }
    FUN_CODE_2282();
    FUN_CODE_2523();
    FUN_CODE_226c(cVar3);
    FUN_CODE_25f3(6,6);
    if (28_1 != '\0') {
      FUN_CODE_25f3(5,BANK1_R6,BANK1_R7);
    }
    FUN_CODE_2ec4();
    FUN_CODE_27f5();
  }
  return;
}



void FUN_CODE_236d(void)

{
  if (25_4 != '\x01') {
    FUN_CODE_25e3();
  }
  return;
}



void FUN_CODE_2374(void)

{
  if (((DAT_INTMEM_54 != '\x04') && (27_5 != '\x01')) && (28_6 != '\x01')) {
    FUN_CODE_2fde();
  }
  return;
}



void FUN_CODE_2385(byte param_1,undefined param_2,char param_3,char param_4,undefined param_5,
                  byte param_6)

{
  byte bVar1;
  char cVar2;
  
  if ((param_1 >> 5 & 1) == 0) {
    if (((param_6 == 5) || ((param_6 < 5) << 7 < '\0')) &&
       ((param_3 != '\x02' || ((param_4 != '\0' || (29_1 != '\0')))))) {
      if (param_6 == 5) {
        bVar1 = DAT_INTMEM_4d - 10;
        cVar2 = DAT_INTMEM_4c + (((DAT_INTMEM_4d < 10) << 7) >> 7);
        FUN_CODE_2fed(DAT_INTMEM_4b,DAT_INTMEM_4a);
        if (C != '\0') {
          param_1 = param_1 | 0x20;
          DAT_INTMEM_4c = cVar2;
          DAT_INTMEM_4d = bVar1;
        }
        param_1 = param_1 | 0x42;
        param_2 = 0x20;
      }
      FUN_CODE_2b15(param_1,param_2,param_5,param_6 + 1);
    }
  }
  else {
    FUN_CODE_2b15(param_6 + 1);
  }
  return;
}



void FUN_CODE_23dd(char param_1)

{
  FUN_CODE_2cbf();
  if (25_6 != '\0') {
    DAT_INTMEM_39 = DAT_INTMEM_3d;
    DAT_INTMEM_3a = DAT_INTMEM_3e;
    DAT_INTMEM_3b = DAT_INTMEM_3d;
    DAT_INTMEM_3c = DAT_INTMEM_3e;
    BANK2_R2 = DAT_INTMEM_48;
    BANK2_R3 = DAT_INTMEM_49;
    FUN_CODE_2d21();
    FUN_CODE_25f3(param_1 - DAT_INTMEM_55);
    DAT_INTMEM_55 = '\0';
  }
  return;
}



char FUN_CODE_2404(void)

{
  return BANK2_R2 - (DAT_INTMEM_48 - (((BANK2_R3 < DAT_INTMEM_49) << 7) >> 7));
}



void FUN_CODE_2412(undefined param_1,undefined param_2)

{
  if ((28_0 != '\0') && (21_7 != '\x01')) {
    FUN_CODE_2aca();
    DAT_INTMEM_33 = param_1;
    DAT_INTMEM_34 = param_2;
    FUN_CODE_2241();
  }
  return;
}



void FUN_CODE_2423(void)

{
  DAT_EXTMEM_07da = BANK2_R0;
  DAT_EXTMEM_07db = BANK2_R1;
  DAT_EXTMEM_07dc = BANK2_R2;
  DAT_EXTMEM_07dd = BANK2_R3;
  2c_7 = 1;
  return;
}



void FUN_CODE_2438(char param_1,char param_2)

{
  char cVar1;
  
  if ((DAT_INTMEM_54 != '\x04') && (((27_5 == '\x01' || (27_3 == '\x01')) || (2c_6 != '\0')))) {
    FUN_CODE_2ba7();
    FUN_CODE_2684();
    if (param_1 == '\x03') {
      if ((27_3 == '\x01') || (28_6 != '\0')) {
        if (25_6 == '\0') {
          cVar1 = '\n';
        }
        else {
          cVar1 = '\x05';
        }
      }
      else {
        cVar1 = '\a';
      }
    }
    else {
      if (param_1 == '\x04') {
        if (24_3 == '\0') {
          cVar1 = '\n';
        }
        else {
          cVar1 = '\a';
        }
      }
      else {
        if ((param_1 == '\x06') && (param_2 != '\x05')) {
          if (param_2 == '\a') {
            if (27_3 == '\0') {
              cVar1 = '\r';
            }
            else {
              T0 = 0;
              23_4 = 1;
              2d_4 = 1;
              cVar1 = '\0';
            }
          }
          else {
            if (27_3 == '\0') {
              cVar1 = '\a';
            }
            else {
              if (25_6 == '\0') {
                cVar1 = '\n';
              }
              else {
                cVar1 = '\x05';
              }
            }
          }
        }
        else {
          if (param_1 == '\x05') {
            if (27_3 == '\0') {
              cVar1 = '\x04';
            }
            else {
              T0 = 0;
              23_4 = 1;
              cVar1 = '\0';
            }
          }
          else {
            cVar1 = '\0';
          }
        }
      }
    }
    if (cVar1 != '\0') {
      T0 = 0;
      23_0 = 1;
      BANK1_R4 = cVar1;
      FUN_CODE_2fc0();
    }
  }
  return;
}



void FUN_CODE_24c5(char param_1)

{
  char cVar1;
  char cVar2;
  
  FUN_CODE_2d12();
  cVar1 = DAT_INTMEM_39;
  cVar2 = DAT_INTMEM_3a;
  if (25_3 != '\0') {
    do {
      FUN_CODE_2f2f();
      if (((param_1 != '\x03') && (cVar1 == DAT_INTMEM_3b)) && (cVar2 == DAT_INTMEM_3c)) {
        25_3 = '\0';
      }
    } while ((25_3 != '\0') && (param_1 != '\x03'));
  }
  return;
}



void FUN_CODE_24f1(void)

{
  undefined uVar1;
  undefined uVar2;
  
  FUN_CODE_2df1();
  uVar2 = BANK0_R4;
  uVar1 = BANK0_R3;
  FUN_CODE_2684();
  FUN_CODE_26a2(DAT_INTMEM_27,2);
  FUN_CODE_25f3();
  FUN_CODE_2fcc(uVar2);
  FUN_CODE_25f3(5,uVar1,uVar2,3);
  return;
}



void FUN_CODE_251c(void)

{
  FUN_CODE_2523();
  FUN_CODE_27f5();
  return;
}



void FUN_CODE_2523(void)

{
  if (DAT_INTMEM_54 == '\f') {
    FUN_CODE_2ec4();
  }
  else {
    FUN_CODE_2eaf();
    if ((DAT_INTMEM_54 == '\0') && (2c_4 != '\x01')) {
      FUN_CODE_2ff5(0x6d);
    }
  }
  return;
}



void FUN_CODE_253e(undefined2 param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = (byte)param_1;
  cVar2 = (char)((ushort)param_1 >> 8);
  if ((DAT_INTMEM_54 != '\x04') && (2c_0 != '\x01')) {
    FUN_CODE_268d();
    bVar1 = CARRY1(bVar3,DAT_INTMEM_51);
    DAT_INTMEM_51 = bVar3 + DAT_INTMEM_51;
    DAT_INTMEM_50 = cVar2 + (DAT_INTMEM_50 - ((bVar1 << 7) >> 7));
  }
  return;
}



void FUN_CODE_2558(char param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  undefined uVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  undefined *puVar8;
  byte *pbStack3;
  
  29_6 = 0;
  if ((param_1 == '\x12') || (param_1 == '\x1e')) {
    29_6 = 1;
  }
  cVar3 = '0';
  bVar6 = 0x24;
  pbVar7 = &DAT_CODE_2fff;
  cVar2 = param_1;
  while (cVar2 != '\0') {
    bVar5 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    bVar1 = CARRY1(bVar5,bVar6);
    bVar6 = bVar5 + bVar6;
    if (bVar1 << 7 < '\0') {
      cVar3 = cVar3 + '\x01';
    }
    cVar2 = cVar2 + -1;
  }
  bVar5 = *pbVar7;
  DAT_INTMEM_52 = param_1;
  if (bVar5 == 0) {
    29_6 = 1;
    puVar8 = (undefined *)0x5b0;
    cVar2 = 'a';
    do {
      *puVar8 = 0x20;
      puVar8 = puVar8 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    2d_1 = 1;
  }
  else {
    2d_1 = 0;
    if (bVar5 == 0x60) {
      FUN_CODE_2b50();
    }
    else {
      pbStack3 = (byte *)CONCAT11(cVar3,bVar6);
      FUN_CODE_2b50();
      do {
        bVar6 = *pbStack3;
        pbVar7 = pbStack3 + 1;
        uVar4 = 5;
        if ((0x4f < bVar6) << 7 < '\0') {
          uVar4 = 6;
        }
        pbStack3 = pbStack3 + 2;
        *(byte *)CONCAT11(uVar4,bVar6 + 0xb0) = *pbVar7;
        bVar5 = bVar5 - 2;
      } while (bVar5 != 0);
    }
  }
  return;
}



void FUN_CODE_25e3(void)

{
  BANK2_R0 = DAT_INTMEM_48;
  BANK2_R1 = DAT_INTMEM_49;
  BANK2_R2 = DAT_INTMEM_48;
  BANK2_R3 = DAT_INTMEM_49;
  DAT_INTMEM_55 = 0;
  return;
}



void FUN_CODE_25f3(void)

{
  if (25_4 != '\x01') {
    FUN_CODE_25e3();
  }
  FUN_CODE_2de3();
  return;
}



void FUN_CODE_25fc(char param_1,byte param_2)

{
  byte bVar1;
  
  if ((DAT_INTMEM_32 == '\x01') || (DAT_INTMEM_32 == '\x02')) {
    if (28_2 != '\x01') {
      FUN_CODE_2684();
      param_1 = '\0';
      param_2 = 0;
      FUN_CODE_2dea();
      28_2 = '\x01';
      28_3 = '\0';
    }
    FUN_CODE_2d4d();
    bVar1 = param_1 + (DAT_INTMEM_30 - ((CARRY1(param_2,DAT_INTMEM_31) << 7) >> 7));
    if ((bVar1 | param_2 + DAT_INTMEM_31) == 0) {
      28_1 = 0;
      28_2 = '\0';
    }
    else {
      FUN_CODE_2dea(bVar1);
    }
    FUN_CODE_2684();
    FUN_CODE_2261();
    FUN_CODE_2374();
  }
  else {
    if (DAT_INTMEM_32 == '\x03') {
      if (28_3 != '\x01') {
        FUN_CODE_2d4d();
        28_3 = '\x01';
      }
      FUN_CODE_2684();
      FUN_CODE_2261();
      FUN_CODE_2374();
    }
  }
  return;
}



char FUN_CODE_2653(void)

{
  return (BANK2_R0 - (DAT_INTMEM_48 - (((BANK2_R1 < DAT_INTMEM_49) << 7) >> 7))) +
         (DAT_INTMEM_50 - ((CARRY1(BANK2_R1 - DAT_INTMEM_49,DAT_INTMEM_51) << 7) >> 7));
}



void FUN_CODE_266d(char param_1)

{
  do {
    FUN_CODE_2df1();
    if (25_3 == '\0') {
      return;
    }
  } while (param_1 != '\x03');
  return;
}



void FUN_CODE_2684(void)

{
  return;
}



byte FUN_CODE_268d(byte param_1,undefined param_2)

{
  if ((char)param_1 < '\0') {
    param_1 = param_1 & 0x7f;
  }
  else {
    param_1 = FUN_CODE_2fcc(param_2);
  }
  return param_1;
}



byte FUN_CODE_26a2(char param_1,byte param_2)

{
  return (param_1 << 4 | param_2) >> 4 | param_2 << 4;
}



void FUN_CODE_26ab(void)

{
  if ((DAT_INTMEM_54 != '\0') && (2c_6 != '\0')) {
    2c_0 = 1;
  }
  return;
}



void FUN_CODE_26b8(void)

{
  if (DAT_INTMEM_54 != '\0') {
    FUN_CODE_2404();
  }
  return;
}



void FUN_CODE_26c8(undefined2 param_1,byte param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  
  bVar4 = (byte)param_1;
  cVar3 = (char)((ushort)param_1 >> 8);
  FUN_CODE_268d();
  bVar2 = bVar4 - DAT_INTMEM_55;
  cVar3 = cVar3 + (((bVar4 < DAT_INTMEM_55) << 7) >> 7);
  if ((bVar2 == 0) && (cVar3 == '\0')) {
    bVar2 = 0;
  }
  else {
    if (cVar3 < '\0') {
      FUN_CODE_2fcc();
      while (FUN_CODE_2785(), 25_3 != '\0') {
        bVar1 = bVar2 < param_2;
        bVar2 = bVar2 - param_2;
        cVar3 = cVar3 + ((bVar1 << 7) >> 7);
        if ((cVar3 < '\0') || ((cVar3 == '\0' && (bVar2 == 0)))) break;
      }
      if (cVar3 < '\0') {
        FUN_CODE_266d();
        bVar2 = bVar2 + param_2;
      }
    }
    else {
      while (FUN_CODE_266d(), 25_3 != '\0') {
        bVar1 = bVar2 < param_2;
        bVar2 = bVar2 - param_2;
        cVar3 = cVar3 + ((bVar1 << 7) >> 7);
        if ((cVar3 < '\0') || ((cVar3 == '\0' && (bVar2 == 0)))) break;
      }
      if ((25_3 != '\x01') && (-1 < cVar3)) {
        bVar2 = 0;
      }
      if (cVar3 < '\0') {
        FUN_CODE_2fcc();
      }
    }
  }
  DAT_INTMEM_55 = bVar2;
  return;
}



void FUN_CODE_276a(void)

{
  FUN_CODE_2ed6();
  FUN_CODE_236d();
  FUN_CODE_26b8();
  FUN_CODE_2fcc();
  FUN_CODE_226c();
  FUN_CODE_25f3(6);
  FUN_CODE_2282();
  FUN_CODE_251c();
  return;
}



undefined FUN_CODE_2785(char param_1,undefined param_2,char param_3)

{
  do {
    FUN_CODE_2dfb();
    if ((param_1 == '\x06') && (param_3 == '?')) {
      FUN_CODE_2df1();
      25_3 = 0;
    }
  } while ((25_3 != 0) && (param_1 != '\x03'));
  2c_1 = 25_3 & 1;
  if (25_3 != 0) {
    FUN_CODE_2c0b();
  }
  25_3 = 2c_1 & 1;
  return param_2;
}



void FUN_CODE_27bb(void)

{
  FUN_CODE_27d6();
  FUN_CODE_1ba4();
  return;
}



void FUN_CODE_27d6(void)

{
  undefined uVar1;
  
  uVar1 = DAT_INTMEM_51;
  FUN_CODE_276a();
  if (DAT_INTMEM_54 == '\0') {
    FUN_CODE_226c(uVar1);
    FUN_CODE_25f3(6);
    FUN_CODE_2ec4();
    FUN_CODE_27f5();
  }
  return;
}



void FUN_CODE_27f5(void)

{
  FUN_CODE_25f3(6,0,0,0x3f);
  DAT_INTMEM_50 = 0;
  DAT_INTMEM_51 = 0;
  DAT_EXTMEM_07d4 = DAT_EXTMEM_0056;
  25_4 = 0;
  2c_3 = 1;
  return;
}



void FUN_CODE_2813(void)

{
  if (DAT_INTMEM_54 == '\x04') {
    FUN_CODE_2eaf();
  }
  else {
    FUN_CODE_2ec4();
  }
  return;
}



void FUN_CODE_2823(void)

{
  FUN_CODE_2813();
  FUN_CODE_27f5();
  return;
}



void FUN_CODE_282a(void)

{
  FUN_CODE_2b85();
  FUN_CODE_2fed(DAT_INTMEM_49,DAT_INTMEM_48,BANK2_R0,BANK2_R1);
  if (C != '\0') {
    FUN_CODE_25e3();
  }
  FUN_CODE_2fed(DAT_INTMEM_49,DAT_INTMEM_48,BANK2_R2,BANK2_R3);
  if (C != '\x01') {
    BANK2_R2 = DAT_INTMEM_48;
    BANK2_R3 = DAT_INTMEM_49;
  }
  return;
}



undefined FUN_CODE_2855(byte param_1)

{
  undefined uVar1;
  
  uVar1 = 5;
  if ((0x4f < param_1) << 7 < '\0') {
    uVar1 = 6;
  }
  return *(undefined *)CONCAT11(uVar1,param_1 + 0xb0);
}



void FUN_CODE_2862(undefined2 param_1,byte param_2,byte param_3,byte param_4,byte param_5)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  
  cVar5 = (char)((ushort)param_1 >> 8);
  cVar6 = (char)param_1;
  29_1 = false;
  if ((param_2 == 3) || (param_2 == 2)) {
    if ((((param_5 & 4) != 0) || (DAT_EXTMEM_07e3 != 0)) || (2c_2 != '\0')) {
      29_1 = true;
    }
    FUN_CODE_2855(param_3,DAT_INTMEM_29);
    if ((DAT_INTMEM_52 == 2) && (((param_3 == 0x27 || (param_3 == 0x25)) && (2e_3 == '\0')))) {
      bVar4 = param_2;
      bVar2 = param_3;
      if (param_3 == 0x27) {
        bVar3 = 0x25;
      }
      else {
        bVar3 = 0x27;
      }
      while (((2e_3 != '\x01' && (bVar4 == 2)) &&
             ((cVar5 != DAT_INTMEM_37 || (cVar6 != DAT_INTMEM_38))))) {
        FUN_CODE_2f2f();
        if ((bVar2 == bVar3) && ((bVar4 == 2 || (bVar4 == 3)))) {
          2e_3 = '\x01';
        }
      }
    }
    if (((param_3 == 0) && ((param_5 & 4) != 0)) || ((2d_0 != '\0' && (param_3 == 0x4f)))) {
      bVar4 = param_5 >> 4;
      if ((bVar4 != DAT_EXTMEM_07e2) && (-1 < (bVar4 < DAT_EXTMEM_07e2) << 7)) {
        DAT_EXTMEM_07e2 = bVar4;
      }
    }
    else {
      if (param_3 != 0) {
        bVar4 = param_5 >> 4;
        if ((bVar4 != DAT_EXTMEM_07e0) && (-1 < (bVar4 < DAT_EXTMEM_07e0) << 7)) {
          DAT_EXTMEM_07e0 = bVar4;
        }
      }
    }
    if (param_2 == 3) {
      bVar4 = param_4 - 6;
      if ((char)bVar4 < '\0') {
        bVar4 = 0;
      }
      if (((((27_7 == '\x01') || (27_6 == '\x01')) ||
           ((param_3 != 0 && ((2d_0 == '\0' || (param_3 != 0x4f)))))) || (2c_1 == '\x01')) ||
         (((bVar4 == DAT_EXTMEM_07e1 || (-1 < (bVar4 < DAT_EXTMEM_07e1) << 7)) &&
          ((param_4 == 6 || (-1 < (param_4 < 6) << 7)))))) {
        FUN_CODE_2385();
        29_5 = '\x01';
        2e_3 = '\0';
        DAT_EXTMEM_07e4 = 0;
      }
      else {
        if (((29_5 != '\0') && ((param_5 & 4) != 0)) && (DAT_EXTMEM_07e3 != 0)) {
          FUN_CODE_2b15(0x83,0);
        }
        DAT_EXTMEM_07e4 = (DAT_EXTMEM_07e4 + param_4) - DAT_EXTMEM_07e1;
        if ((char)DAT_EXTMEM_07e4 < '\0') {
          DAT_EXTMEM_07e4 = 0;
        }
        if (-1 < (DAT_EXTMEM_07e4 < 6) << 7) {
          DAT_EXTMEM_07e4 = DAT_EXTMEM_07e4 - 6;
          FUN_CODE_2385();
          29_5 = '\x01';
          2e_3 = '\0';
        }
      }
      2c_1 = '\0';
      2c_2 = '\0';
      if ((DAT_EXTMEM_07e2 != DAT_EXTMEM_07e3) && (-1 < (DAT_EXTMEM_07e2 < DAT_EXTMEM_07e3) << 7)) {
        DAT_EXTMEM_07e3 = DAT_EXTMEM_07e2;
      }
      DAT_EXTMEM_07e3 = DAT_EXTMEM_07e3 - param_4;
      if ((char)DAT_EXTMEM_07e3 < '\0') {
        DAT_EXTMEM_07e3 = 0;
      }
      DAT_EXTMEM_07e2 = 0;
      if ((DAT_EXTMEM_07e0 != DAT_EXTMEM_07e1) && (-1 < (DAT_EXTMEM_07e0 < DAT_EXTMEM_07e1) << 7)) {
        DAT_EXTMEM_07e1 = DAT_EXTMEM_07e0;
      }
      DAT_EXTMEM_07e1 = DAT_EXTMEM_07e1 - param_4;
      if ((char)DAT_EXTMEM_07e1 < '\0') {
        DAT_EXTMEM_07e1 = 0;
      }
      DAT_EXTMEM_07e0 = 0;
    }
    else {
      if ((param_3 == 0) || ((2d_0 != '\0' && (param_3 == 0x4f)))) {
        if ((param_3 != 0) || ((param_5 & 4) != 0)) {
          2c_2 = '\x01';
        }
      }
      else {
        FUN_CODE_2385();
        29_5 = '\0';
        2c_1 = '\x01';
      }
    }
  }
  else {
    if (param_2 == 5) {
      if (param_5 == 2) {
        FUN_CODE_2385(0x96);
        29_5 = '\0';
      }
      else {
        if (param_5 == 1) {
          FUN_CODE_2385(0x95);
          29_5 = '\0';
        }
        else {
          if ((param_5 != 7) && (param_5 != 3)) {
            FUN_CODE_2b15(DAT_INTMEM_29 | 0x62,0x20);
            29_5 = '\x01';
            2e_3 = '\0';
          }
        }
      }
    }
    else {
      if (param_2 == 6) {
        if (param_5 == 7) {
          uVar1 = 0xae;
          bVar4 = DAT_INTMEM_29;
        }
        else {
          uVar1 = 0x20;
          bVar4 = DAT_INTMEM_29 | 2;
        }
        FUN_CODE_2b15(bVar4 | 0x60,uVar1);
        if ((((param_2 < 0x40) << 7 < '\0') || (param_3 != 0)) || (param_4 != 0)) {
          29_5 = '\x01';
          2e_3 = '\0';
        }
        else {
          29_5 = '\0';
        }
      }
      else {
        if (param_2 == 9) {
          29_1 = (param_3 & 4) != 0;
        }
        else {
          if (param_2 == 0xc) {
            FUN_CODE_2b15(DAT_INTMEM_29 | 0x62,0x20);
            29_5 = '\x01';
            2e_3 = '\0';
          }
          else {
            if (param_2 == 10) {
              if (param_3 != DAT_INTMEM_52) {
                DAT_INTMEM_52 = param_3;
                FUN_CODE_2558(param_3,DAT_INTMEM_29);
              }
              2d_0 = '\x01';
              if ((DAT_INTMEM_52 == 0x1e) || (DAT_INTMEM_52 == 0x23)) {
                2d_0 = '\0';
              }
            }
          }
        }
      }
    }
  }
  return;
}



void FUN_CODE_2aca(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = (undefined *)CONCAT11(DAT_INTMEM_4a,DAT_INTMEM_4b);
  puVar2 = puVar1 + 1;
  if (((char)((ushort)puVar2 >> 8) == '\a') && ((char)puVar2 == -0x2e)) {
    DAT_INTMEM_4a = 6;
    DAT_INTMEM_4b = 0x11;
    FUN_CODE_2b04(*puVar1,*puVar2);
    return;
  }
  DAT_INTMEM_4a = (char)((ushort)(puVar1 + 2) >> 8);
  DAT_INTMEM_4b = (char)(puVar1 + 2);
  if ((DAT_INTMEM_4a == DAT_INTMEM_4c) && (DAT_INTMEM_4b == DAT_INTMEM_4d)) {
    28_0 = 0;
  }
  return;
}



void FUN_CODE_2b04(void)

{
  if ((DAT_INTMEM_4a == DAT_INTMEM_4c) && (DAT_INTMEM_4b == DAT_INTMEM_4d)) {
    28_0 = 0;
  }
  return;
}



void FUN_CODE_2b15(undefined param_1,undefined param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)CONCAT11(DAT_INTMEM_4c,DAT_INTMEM_4d);
  *puVar2 = param_1;
  puVar1 = puVar2 + 1;
  *puVar1 = param_2;
  if (((char)((ushort)puVar1 >> 8) == '\a') && ((char)puVar1 == -0x2e)) {
    puVar2 = (undefined *)0x611;
  }
  else {
    puVar2 = puVar2 + 2;
  }
  DAT_INTMEM_4c = (char)((ushort)puVar2 >> 8);
  DAT_INTMEM_4d = (char)puVar2;
  28_0 = 1;
  return;
}



void FUN_CODE_2b50(undefined *param_1)

{
  char cVar1;
  undefined uVar2;
  undefined *puVar3;
  
  DAT_EXTMEM_05b0 = 0;
  BANK1_R6 = 5;
  BANK1_R7 = 0xb1;
  cVar1 = '\0';
  do {
    uVar2 = *param_1;
    param_1 = param_1 + 1;
    *(undefined *)CONCAT11(BANK1_R6,BANK1_R7) = uVar2;
    puVar3 = (undefined *)CONCAT11(BANK1_R6,BANK1_R7) + 1;
    BANK1_R6 = (undefined)((ushort)puVar3 >> 8);
    BANK1_R7 = SUB21(puVar3,0);
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '`');
  return;
}



void FUN_CODE_2b85(undefined2 param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = (byte)param_1;
  cVar2 = (char)((ushort)param_1 >> 8);
  FUN_CODE_2684();
  if ((param_2 == '\x03') || (param_2 == '\x06')) {
    FUN_CODE_268d();
    bVar1 = CARRY1(bVar3,DAT_INTMEM_49);
    DAT_INTMEM_49 = bVar3 + DAT_INTMEM_49;
    DAT_INTMEM_48 = cVar2 + (DAT_INTMEM_48 - ((bVar1 << 7) >> 7));
    22_0 = 1;
  }
  return;
}



void FUN_CODE_2ba7(char param_1,char param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  
  25_6 = '\x01';
  FUN_CODE_2d03();
  cVar1 = DAT_INTMEM_37;
  cVar2 = DAT_INTMEM_38;
  if (25_3 == '\x01') {
    do {
      FUN_CODE_2f17();
      if ((param_1 == '\x03') || (param_1 == '\x02')) {
        if ((param_2 != '\0') || ((param_3 >> 2 & 1) != 0)) {
          25_6 = '\0';
        }
      }
      else {
        if ((param_1 == '\x05') && ((param_3 == 1 || (param_3 == 2)))) {
          25_6 = '\0';
        }
      }
    } while ((25_6 != '\0') && ((cVar1 != DAT_INTMEM_35 || (cVar2 != DAT_INTMEM_36))));
  }
  if (25_6 != '\0') {
    FUN_CODE_2cbf();
  }
  return;
}



void FUN_CODE_2bf3(char param_1)

{
  FUN_CODE_2df1();
  if ((25_3 != '\0') && ((param_1 == '\x02' || (param_1 == '\x05')))) {
    FUN_CODE_2bf3();
    return;
  }
  if (25_3 != '\0') {
    FUN_CODE_2dfb();
  }
  return;
}



void FUN_CODE_2c0b(char param_1)

{
  FUN_CODE_2dfb();
  if ((25_3 != '\0') && ((param_1 == '\x02' || (param_1 == '\x05')))) {
    FUN_CODE_2c0b();
    return;
  }
  if (25_3 != '\0') {
    FUN_CODE_2df1();
  }
  return;
}



undefined FUN_CODE_2c23(undefined2 param_1,undefined param_2,char param_3,char param_4,byte param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = (char)param_1;
  cVar2 = (char)((ushort)param_1 >> 8);
  cVar1 = '\0';
  do {
    if (param_3 == '\x03') {
      param_4 = -0x80;
    }
    if (param_3 != '\x02') {
      cVar3 = cVar4;
      FUN_CODE_268d();
      cVar1 = cVar3 + cVar1;
    }
    if ((cVar2 == DAT_INTMEM_35) && (cVar4 == DAT_INTMEM_36)) {
      param_3 = -1;
    }
    else {
      FUN_CODE_2f2f();
    }
  } while ((param_3 == '\x06') ||
          (((param_4 == '\0' && ((param_5 & 4) == 0)) &&
           ((param_3 == '\x03' || (param_3 == '\x02'))))));
  if (param_3 != -1) {
    FUN_CODE_2fd4();
    FUN_CODE_2f8a();
    FUN_CODE_2fd4();
    FUN_CODE_2fd4();
    FUN_CODE_2fd4();
  }
  DAT_INTMEM_3d = cVar2;
  DAT_INTMEM_3e = cVar4;
  FUN_CODE_226c(cVar1);
  return param_2;
}



byte FUN_CODE_2c9d(char param_1,byte param_2)

{
  byte bVar1;
  
  bVar1 = param_2 >> 4 | param_1 << 4;
  if ((-1 < param_1) && (bVar1 != 0)) {
    26_0 = 1;
    bVar1 = 0;
  }
  if ((bVar1 != 0) && (25_7 != '\x01')) {
    bVar1 = bVar1 + 0x10;
  }
  return bVar1;
}



void FUN_CODE_2cbf(char param_1,char param_2,byte param_3)

{
  char cVar1;
  char cVar2;
  
  25_6 = 1;
  FUN_CODE_2d12();
  if (25_3 != '\0') {
    25_3 = '\0';
    cVar1 = DAT_INTMEM_39;
    cVar2 = DAT_INTMEM_3a;
    do {
      FUN_CODE_2f2f();
      if ((param_1 == '\x03') || (param_1 == '\x02')) {
        25_3 = '\x01';
        if ((param_2 != '\0') || ((param_3 >> 2 & 1) != 0)) {
          25_6 = 0;
        }
      }
      else {
        if ((param_1 == '\x05') && ((param_3 == 1 || (param_3 == 2)))) {
          25_6 = 0;
        }
      }
    } while ((cVar1 != DAT_INTMEM_3b) || (cVar2 != DAT_INTMEM_3c));
  }
  return;
}



void FUN_CODE_2d03(void)

{
  25_3 = 1;
  if ((DAT_INTMEM_35 == DAT_INTMEM_37) && (DAT_INTMEM_36 == DAT_INTMEM_38)) {
    25_3 = 0;
  }
  return;
}



void FUN_CODE_2d12(void)

{
  25_3 = 1;
  if ((DAT_INTMEM_39 == DAT_INTMEM_3b) && (DAT_INTMEM_3a == DAT_INTMEM_3c)) {
    25_3 = 0;
  }
  return;
}



void FUN_CODE_2d21(void)

{
  FUN_CODE_2d03();
  if (25_3 != '\0') {
    FUN_CODE_2f17();
    if ((((DAT_INTMEM_35 == DAT_INTMEM_37) && (DAT_INTMEM_36 == DAT_INTMEM_38)) &&
        (DAT_INTMEM_3b == DAT_INTMEM_39)) && (DAT_INTMEM_3c == DAT_INTMEM_3a)) {
      25_4 = 0;
    }
  }
  return;
}



void FUN_CODE_2d4d(void)

{
  FUN_CODE_2d12();
  if (25_3 != '\0') {
    FUN_CODE_2f2f();
    if ((((DAT_INTMEM_35 == DAT_INTMEM_37) && (DAT_INTMEM_36 == DAT_INTMEM_38)) &&
        (DAT_INTMEM_3b == DAT_INTMEM_39)) && (DAT_INTMEM_3c == DAT_INTMEM_3a)) {
      25_4 = 0;
    }
  }
  return;
}



void FUN_CODE_2d79(void)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  char cVar4;
  undefined uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  25_3 = 1;
  if (((DAT_INTMEM_37 == DAT_INTMEM_39) && (DAT_INTMEM_38 == DAT_INTMEM_3a)) && (25_4 != '\0')) {
    25_3 = 0;
    uVar2 = DAT_INTMEM_3e;
    bVar1 = DAT_INTMEM_3d;
    FUN_CODE_2fd4();
    FUN_CODE_2f8a();
    puVar6 = (undefined *)CONCAT11(DAT_INTMEM_3b,DAT_INTMEM_3c);
    FUN_CODE_2fd4();
    FUN_CODE_2f8a();
    do {
      do {
        FUN_CODE_2fd4(*puVar6);
        uVar5 = FUN_CODE_2f8a();
        bVar3 = (byte)((ushort)puVar6 >> 8);
        cVar4 = (char)puVar6;
        puVar7 = (undefined *)CONCAT11(bVar1,uVar2);
        *puVar7 = uVar5;
        FUN_CODE_2fd4();
        FUN_CODE_2f8a();
        bVar1 = (byte)((ushort)puVar7 >> 8);
        uVar2 = SUB21(puVar7,0);
        puVar6 = (undefined *)CONCAT11(bVar3,cVar4);
      } while (bVar3 != DAT_INTMEM_39);
    } while (cVar4 != DAT_INTMEM_3a);
    *(undefined *)((ushort)puVar7 & 0xff | (ushort)bVar1 << 8) = *puVar6;
    DAT_INTMEM_3a = (char)((ushort)puVar7 & 0xff);
    DAT_INTMEM_3b = DAT_INTMEM_3d;
    DAT_INTMEM_3c = DAT_INTMEM_3e;
    DAT_INTMEM_39 = bVar1;
  }
  return;
}



void FUN_CODE_2de3(void)

{
  FUN_CODE_2d79();
  FUN_CODE_2e64();
  return;
}



void FUN_CODE_2dea(void)

{
  FUN_CODE_2d79();
  FUN_CODE_2e82();
  return;
}



void FUN_CODE_2df1(void)

{
  FUN_CODE_2d4d();
  if (25_3 != '\0') {
    FUN_CODE_2e64();
  }
  return;
}



void FUN_CODE_2dfb(void)

{
  FUN_CODE_2d21();
  if (25_3 != '\0') {
    FUN_CODE_2e82();
  }
  return;
}



void FUN_CODE_2e05(undefined2 param_1)

{
  undefined uVar1;
  undefined uVar2;
  
  uVar2 = (undefined)param_1;
  uVar1 = (undefined)((ushort)param_1 >> 8);
  FUN_CODE_2d12();
  if (25_3 != '\x01') {
    DAT_INTMEM_39 = uVar1;
    DAT_INTMEM_3a = uVar2;
    DAT_INTMEM_3b = uVar1;
    DAT_INTMEM_3c = uVar2;
  }
  return;
}



void FUN_CODE_2e18(undefined *param_1,undefined param_2,undefined param_3,undefined param_4,
                  undefined param_5)

{
  FUN_CODE_2fd4();
  FUN_CODE_2f8a();
  *param_1 = param_5;
  FUN_CODE_2fd4();
  *param_1 = param_4;
  FUN_CODE_2fd4();
  *param_1 = param_3;
  FUN_CODE_2fd4();
  *param_1 = param_2;
  return;
}



void FUN_CODE_2e30(void)

{
  FUN_CODE_2e18();
  FUN_CODE_2e05();
  return;
}



void FUN_CODE_2e43(void)

{
  25_3 = 1;
  if ((DAT_INTMEM_3d == DAT_INTMEM_35) && (DAT_INTMEM_3e == DAT_INTMEM_36)) {
    25_3 = 0;
    23_4 = 0;
  }
  return;
}



void FUN_CODE_2e64(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)CONCAT11(DAT_INTMEM_37,DAT_INTMEM_38);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  puVar1 = puVar1 + 4;
  FUN_CODE_2f9c();
  DAT_INTMEM_37 = (char)((ushort)puVar1 >> 8);
  DAT_INTMEM_38 = (char)puVar1;
  25_4 = 1;
  return;
}



void FUN_CODE_2e82(void)

{
  FUN_CODE_2e18();
  25_4 = 1;
  return;
}



void FUN_CODE_2e94(void)

{
  FUN_CODE_2e43();
  if (25_3 != '\0') {
    FUN_CODE_2f2f();
    FUN_CODE_2e05();
    25_3 = '\x01';
  }
  return;
}



void FUN_CODE_2eaf(void)

{
  DAT_INTMEM_37 = DAT_INTMEM_35;
  DAT_INTMEM_38 = DAT_INTMEM_36;
  DAT_INTMEM_39 = DAT_INTMEM_3d;
  DAT_INTMEM_3a = DAT_INTMEM_3e;
  DAT_INTMEM_3b = DAT_INTMEM_3d;
  DAT_INTMEM_3c = DAT_INTMEM_3e;
  25_4 = 0;
  return;
}



void FUN_CODE_2ec4(undefined param_1,undefined param_2)

{
  if (25_4 == '\x01') {
    FUN_CODE_2ed6();
    25_4 = '\0';
    DAT_INTMEM_35 = param_1;
    DAT_INTMEM_36 = param_2;
  }
  else {
    FUN_CODE_2eaf();
  }
  return;
}



void FUN_CODE_2ed6(void)

{
  undefined uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined uVar6;
  undefined uVar7;
  char cVar8;
  char cVar9;
  undefined uVar10;
  undefined *puVar11;
  
  uVar6 = DAT_INTMEM_37;
  uVar7 = DAT_INTMEM_38;
  cVar8 = DAT_INTMEM_39;
  cVar9 = DAT_INTMEM_3a;
  FUN_CODE_2d12();
  uVar10 = DAT_INTMEM_37;
  uVar1 = DAT_INTMEM_38;
  cVar2 = DAT_INTMEM_39;
  cVar3 = DAT_INTMEM_3a;
  cVar4 = DAT_INTMEM_3b;
  cVar5 = DAT_INTMEM_3c;
  if (25_3 != '\0') {
    do {
      do {
        puVar11 = (undefined *)CONCAT11(cVar8,cVar9) + 1;
        uVar10 = FUN_CODE_2f9c(*(undefined *)CONCAT11(cVar8,cVar9));
        cVar8 = (char)((ushort)puVar11 >> 8);
        cVar9 = (char)puVar11;
        *(undefined *)CONCAT11(uVar6,uVar7) = uVar10;
        puVar11 = (undefined *)CONCAT11(uVar6,uVar7) + 1;
        FUN_CODE_2f9c();
        uVar6 = (undefined)((ushort)puVar11 >> 8);
        uVar7 = SUB21(puVar11,0);
      } while (cVar8 != DAT_INTMEM_3b);
      uVar10 = uVar6;
      uVar1 = uVar7;
      cVar2 = cVar8;
      cVar3 = cVar9;
      cVar4 = cVar8;
      cVar5 = cVar9;
    } while (cVar9 != DAT_INTMEM_3c);
  }
  DAT_INTMEM_3c = cVar5;
  DAT_INTMEM_3b = cVar4;
  DAT_INTMEM_3a = cVar3;
  DAT_INTMEM_39 = cVar2;
  DAT_INTMEM_38 = uVar1;
  DAT_INTMEM_37 = uVar10;
  return;
}



undefined FUN_CODE_2f17(undefined *param_1)

{
  FUN_CODE_2fd4();
  FUN_CODE_2f8a();
  FUN_CODE_2fd4(*param_1);
  FUN_CODE_2fd4(*param_1);
  FUN_CODE_2fd4(*param_1);
  return *param_1;
}



void FUN_CODE_2f2f(undefined *param_1)

{
  FUN_CODE_2f9c(param_1 + 4,*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



char FUN_CODE_2f3f(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  
  cVar2 = FUN_CODE_2e43();
  if ((25_4 == '\x01') || (25_3 == '\x01')) {
    bVar3 = DAT_INTMEM_3a - DAT_INTMEM_38;
    cVar2 = DAT_INTMEM_39 - (DAT_INTMEM_37 - (((DAT_INTMEM_3a < DAT_INTMEM_38) << 7) >> 7));
    if (cVar2 < '\0') {
      bVar1 = 0xab < bVar3;
      bVar3 = bVar3 + 0x54;
      cVar2 = (cVar2 - ((bVar1 << 7) >> 7)) + '\x05';
    }
    bVar4 = DAT_INTMEM_3e - DAT_INTMEM_3c;
    cVar5 = DAT_INTMEM_3d - (DAT_INTMEM_3b - (((DAT_INTMEM_3e < DAT_INTMEM_3c) << 7) >> 7));
    if (cVar5 < '\0') {
      bVar1 = 0xab < bVar4;
      bVar4 = bVar4 + 0x54;
      cVar5 = cVar5 + ('\x05' - ((bVar1 << 7) >> 7));
    }
    cVar2 = cVar2 + (cVar5 - ((CARRY1(bVar3,bVar4) << 7) >> 7));
  }
  return cVar2;
}



undefined FUN_CODE_2f8a(undefined param_1)

{
  return param_1;
}



undefined FUN_CODE_2f9c(undefined param_1)

{
  return param_1;
}



void FUN_CODE_2fae(void)

{
  if (TR0 != '\x01') {
    write_volatile_1(TH0,0xd8);
    write_volatile_1(TL0,0xef);
    TR0 = '\x01';
  }
  return;
}



void FUN_CODE_2fba(void)

{
  24_0 = 1;
  FUN_CODE_2fae();
  return;
}



void FUN_CODE_2fc0(void)

{
  24_1 = 1;
  FUN_CODE_2fae();
  return;
}



void FUN_CODE_2fc6(void)

{
  20_5 = 1;
  FUN_CODE_2fae();
  return;
}



void FUN_CODE_2fcc(void)

{
  return;
}



undefined FUN_CODE_2fd4(undefined param_1)

{
  return param_1;
}



void FUN_CODE_2fde(undefined param_1,undefined param_2,undefined param_3,undefined param_4)

{
  DAT_INTMEM_3f = param_1;
  DAT_INTMEM_40 = param_2;
  DAT_INTMEM_41 = param_3;
  DAT_INTMEM_42 = param_4;
  23_2 = 1;
  24_3 = 1;
  T0 = 0;
  return;
}



byte FUN_CODE_2fed(byte param_1,char param_2,char param_3,byte param_4)

{
  return param_2 - (param_3 - (((param_1 < param_4) << 7) >> 7)) | param_1 - param_4;
}



void FUN_CODE_2ff5(void)

{
  FUN_CODE_2fde(0xe);
  return;
}



void FUN_CODE_2ffb(void)

{
  nop();
  EA = 0;
  return;
}



// WARNING: Instruction at (CODE,0x3121) overlaps instruction at (CODE,0x3120)
// 

byte ** FUN_CODE_3370(char param_1,byte *param_2,byte **param_3,byte **param_4,byte **param_5,
                     byte param_6,byte param_7,byte *param_8,byte param_9,byte param_10)

{
  bool bVar1;
  char cVar2;
  byte **ppbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte **ppbVar7;
  byte *pbVar8;
  byte **ppbVar9;
  byte **ppbVar10;
  char cVar11;
  undefined uVar12;
  byte bVar13;
  byte bVar14;
  undefined *puVar15;
  undefined uStackX0;
  
  puVar15 = (undefined *)0x0;
  read_volatile(CH);
  cVar11 = read_volatile_1(CH);
  ppbVar3 = (byte **)(*param_4 + param_1 + cVar11);
  ppbVar10 = param_5 + -((CARRY1(param_1 + cVar11,(byte)*param_4) << 7) >> 7) + param_9;
  cVar2 = CARRY1((byte)param_4,
                 (byte)(param_8 +
                       -((CARRY1(param_10,param_7 - ((CARRY1(param_9,(byte)(param_5 +
                                                                           -((CARRY1(param_1 + 
                                                  cVar11,(byte)*param_4) << 7) >> 7))) << 7) >> 7))
                         << 7) >> 7))) << 7;
  if (-1 < cVar2) {
    bVar14 = read_volatile_1(DAT_SFR_d6);
    write_volatile_1(DAT_SFR_d6,bVar14 | 0x44);
    *param_4 = (byte *)((byte)*param_4 & 0xf0 |
                       (byte)(param_4 +
                             (char)(param_8 + -((CARRY1(param_10,param_7 - ((CARRY1(param_9,(byte)(
                                                  param_5 + -((CARRY1(param_1 + cVar11,
                                                                      (byte)*param_4) << 7) >> 7)))
                                                  << 7) >> 7)) << 7) >> 7) + '\x01')) & 0xf);
    read_volatile(HIFLG);
    if (param_7 != 1) {
      *param_4 = (byte *)((byte)param_5 | (byte)*param_4);
      read_volatile(P1);
      read_volatile(P1);
      28_0 = 0;
      pbVar8 = (byte *)(param_6 | 0x30 | (byte)*param_3);
      DAT_INTMEM_37 = ppbVar10;
      *param_4 = pbVar8;
      param_7 = (byte)pbVar8 | (byte)*param_4;
      read_volatile(DAT_SFR_bf);
      cVar2 = read_volatile_1(DAT_SFR_bf);
      ppbVar10 = (byte **)(*param_4 + cVar2);
      goto LAB_CODE_32f2;
    }
LAB_CODE_32c1:
    bVar1 = CARRY1((byte)DAT_INTMEM_4b,DAT_INTMEM_4f);
    DAT_INTMEM_4b = (byte **)((char)DAT_INTMEM_4b + DAT_INTMEM_4f);
    DAT_INTMEM_30 = param_5;
LAB_CODE_3740:
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4e - ((bVar1 << 7) >> 7));
    cVar2 = (0xf7 < DAT_INTMEM_4c) << 7;
    cVar11 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
    if ((cVar2 < '\0') || (cVar11 == '\0')) {
      bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
      DAT_INTMEM_4b = DAT_INTMEM_4b + -(char)DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      uVar12 = FUN_CODE_37a5();
      return (byte **)uVar12;
    }
    bVar13 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != (byte **)0x0) << 7) >> 7));
    bVar14 = DAT_INTMEM_4a - ((((byte **)-(char)DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
    if (((bVar13 < bVar14) << 7 < '\0') &&
       ((bVar13 - bVar14 | (byte)((byte **)-(char)DAT_INTMEM_4d + -(char)DAT_INTMEM_4b)) != 0)) {
      uVar12 = FUN_CODE_37a5();
      return (byte **)uVar12;
    }
    bVar1 = CARRY1((byte)DAT_INTMEM_4b,(byte)DAT_INTMEM_4d);
    DAT_INTMEM_4b = DAT_INTMEM_4b + (char)DAT_INTMEM_4d;
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
    cVar2 = '\x02';
    while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar2 != '\0'))) {
      if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
        bVar1 = DAT_INTMEM_4f == 0;
        DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
        DAT_INTMEM_4e = (bVar1 << 7) >> 7;
        if (2b_6 == '\0') {
          uVar12 = 0x46;
        }
        else {
          uVar12 = 0x54;
        }
      }
      else {
        bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
        DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
        if (2b_6 == '\0') {
          uVar12 = 0x52;
        }
        else {
          uVar12 = 0x51;
        }
      }
      FUN_CODE_3d32(uVar12);
      cVar2 = cVar2 + -1;
    }
    bVar14 = DAT_INTMEM_4f | DAT_INTMEM_4e;
    if (bVar14 != 0) {
      2b_5 = 1;
      29_7 = 1;
    }
    if ((2b_4 != '\0') && (2c_4 != '\x01')) {
      bVar14 = FUN_CODE_34c2();
    }
    2b_4 = 0;
    return (byte **)bVar14;
  }
  bVar14 = read_volatile_1(DAT_SFR_9a);
  write_volatile_1(DAT_SFR_9a,bVar14 | 0x57);
  bVar14 = (byte)(param_4 +
                 (char)(param_8 + -((CARRY1(param_10,param_7 - ((CARRY1(param_9,(byte)(param_5 +
                                                                                      -((CARRY1(
                                                  param_1 + cVar11,(byte)*param_4) << 7) >> 7))) <<
                                                  7) >> 7)) << 7) >> 7) + '\x01')) |
           (byte)DAT_INTMEM_4d;
  do {
    if (21_3 == '\0') {
      *param_2 = bVar14;
      uVar12 = FUN_CODE_2fed(DAT_INTMEM_51);
      return (byte **)uVar12;
    }
    ppbVar3 = ppbVar3 + -1;
    cVar11 = CARRY1(bVar14 - (char)(*param_3 + -(cVar2 >> 7)),(byte)*param_3) << 7;
    pbVar8 = *param_3 + (bVar14 - (char)(*param_3 + -(cVar2 >> 7)));
    bVar14 = param_7;
    param_8 = DAT_INTMEM_32;
LAB_CODE_311e_1:
    bVar13 = read_volatile_1(P1);
    pbVar6 = (byte *)((byte)param_8 | 0xb8 | bVar13);
    param_7 = bVar14;
    param_8 = pbVar8;
code_c0x3124:
    bVar14 = (byte)pbVar6 | (byte)*param_3;
    param_3 = param_3 + -1;
    DAT_INTMEM_47 = ppbVar10;
    if (param_3 == (byte **)0x0) {
      ppbVar9 = ppbVar3 + DAT_INTMEM_34 + bVar14;
      ppbVar7 = ppbVar9 + (char)*param_4;
      bVar14 = BANK0_R0 - ((CARRY1((byte)ppbVar9,(byte)*param_4) << 7) >> 7);
      ppbVar9 = ppbVar7 + bVar14;
      bVar14 = -((CARRY1((byte)ppbVar7,bVar14) << 7) >> 7);
      bVar14 = param_7 - ((CARRY1((byte)(param_4 + -((CARRY1((byte)ppbVar9,bVar14) << 7) >> 7) +
                                        (char)(ppbVar9 + bVar14)),
                                  (byte)(param_5 +
                                        -((CARRY1((byte)(ppbVar9 + bVar14),
                                                  (byte)(param_4 +
                                                        -((CARRY1((byte)ppbVar9,bVar14) << 7) >> 7))
                                                 ) << 7) >> 7))) << 7) >> 7);
      pbVar8 = param_8 + (DAT_INTMEM_3d - ((CARRY1((byte)param_8,bVar14) << 7) >> 7)) + bVar14;
      bVar14 = read_volatile_1(SOFL);
      write_volatile_1(SOFL,bVar14 | (byte)param_8);
      bVar14 = read_volatile_1(FIFLG1);
      write_volatile_1(FIFLG1,bVar14 | 0x46);
      ppbVar9 = (byte **)FUN_CODE_3447(param_8);
      param_7 = param_7 - 1;
      if (param_7 == 0) {
        if (ppbVar10 != (byte **)0x49) {
          bVar14 = 0x80;
          goto LAB_CODE_3231;
        }
        ppbVar9 = ppbVar9 + (char)(*param_4 + DAT_INTMEM_3d);
        DAT_INTMEM_3a = *param_3;
        DAT_INTMEM_3b = *param_4;
        bVar13 = ((char)(param_4 +
                        (char)(param_3 + -((CARRY1((byte)ppbVar9,param_6) << 7) >> 7) +
                              (char)(ppbVar9 + param_6 +
                                    ('\x01' - ((CARRY1((byte)(ppbVar9 + param_6),
                                                       (byte)(param_3 +
                                                             -((CARRY1((byte)ppbVar9,param_6) << 7)
                                                              >> 7))) << 7) >> 7))))) +
                 (char)ppbVar3) -
                 ((CARRY1((byte)(param_4 +
                                (char)(param_3 + -((CARRY1((byte)ppbVar9,param_6) << 7) >> 7) +
                                      (char)(ppbVar9 + param_6 +
                                            ('\x01' - ((CARRY1((byte)(ppbVar9 + param_6),
                                                               (byte)(param_3 +
                                                                     -((CARRY1((byte)ppbVar9,param_6
                                                                              ) << 7) >> 7))) << 7)
                                                      >> 7))))),(byte)ppbVar3) << 7) >> 7);
        bVar14 = CARRY1((byte)(pbVar8 + bVar13),
                        (byte)(pbVar8 + -((CARRY1(bVar13,(byte)pbVar8) << 7) >> 7))) << 7;
        ppbVar9 = (byte **)(pbVar8 + -((CARRY1(bVar13,(byte)pbVar8) << 7) >> 7) +
                           (char)(pbVar8 + bVar13));
        param_3 = param_3 + '\x01';
        if (-1 < (char)bVar14) goto LAB_CODE_3231;
        bVar14 = 0x27 - ((char)bVar14 >> 7);
        ppbVar9 = param_3 + (((char)(ppbVar9 + bVar14) +
                             (char)(*param_3 + -((CARRY1((byte)ppbVar9,bVar14) << 7) >> 7))) -
                            ((CARRY1((byte)(ppbVar9 + bVar14),
                                     (byte)(*param_3 + -((CARRY1((byte)ppbVar9,bVar14) << 7) >> 7)))
                             << 7) >> 7));
      }
      bVar14 = (byte)ppbVar9 & (byte)param_4;
      goto LAB_CODE_355f;
    }
    bVar13 = DAT_INTMEM_3d - (cVar11 >> 7);
    bVar1 = CARRY1(bVar14,bVar13);
    cVar11 = bVar1 << 7;
    pbVar6 = *param_3;
    *param_3 = (byte *)(bVar14 + bVar13);
    ppbVar9 = ppbVar10;
    if (-1 < cVar11) {
LAB_CODE_3291:
      DAT_INTMEM_41 = ppbVar9;
      DAT_INTMEM_30 = (byte **)((byte)DAT_INTMEM_30 | 0x44);
      param_7 = param_7 - 1;
      if (param_7 != 0) {
        cVar2 = CARRY1((byte)ppbVar3,
                       (byte)(param_8 + -((CARRY1((byte)pbVar6,param_7 - (cVar11 >> 7)) << 7) >> 7))
                      ) << 7;
        param_5 = (byte **)func_0x363f(0x42a8);
        ppbVar10 = param_5;
        if (-1 < cVar2) goto LAB_CODE_32f5;
        cVar2 = (CARRY1((byte)(ppbVar3 +
                              (char)(param_8 +
                                    (param_6 -
                                    ((CARRY1((byte)param_5,(byte)(param_5 + -(cVar2 >> 7))) << 7) >>
                                    7)))),
                        param_7 - ((CARRY1((byte)(param_8 +
                                                 (param_6 -
                                                 ((CARRY1((byte)param_5,
                                                          (byte)(param_5 + -(cVar2 >> 7))) << 7) >>
                                                 7))),(byte)ppbVar3) << 7) >> 7)) & 27_5) << 7;
        DAT_INTMEM_3f = uStackX0;
        puVar15 = (undefined *)0xff;
        pbVar8 = (byte *)func_0x3640();
        do {
          bVar1 = pbVar8 < *param_4 + -(cVar2 >> 7);
LAB_CODE_32fd:
          cVar2 = bVar1 << 7;
          param_5 = ppbVar3;
          while( true ) {
            cVar2 = CARRY1((byte)param_5,(byte)(param_8 + -(cVar2 >> 7))) << 7;
            puVar15['\x01'] = 1;
            puVar15['\x02'] = 0x33;
            param_5 = (byte **)func_0x363f();
            ppbVar10 = param_5;
            if (cVar2 < '\0') break;
LAB_CODE_32f5:
            while( true ) {
              ppbVar10 = ppbVar10 +
                         (char)(*param_4 + (param_6 - ((CARRY1((byte)ppbVar10,param_6) << 7) >> 7)))
              ;
              ppbVar9 = ppbVar10 + (char)*param_4;
              ppbVar10 = param_3 + -((CARRY1((byte)ppbVar10,(byte)*param_4) << 7) >> 7);
              if (param_5 == (byte **)0x1) {
                bVar1 = CARRY1((byte)(ppbVar10 + (char)ppbVar9 + (char)param_8),
                               param_7 - ((CARRY1((byte)(ppbVar10 + (char)ppbVar9),(byte)param_8) <<
                                          7) >> 7));
                goto LAB_CODE_32fd;
              }
              cVar2 = CARRY1((byte)ppbVar3,
                             (byte)(param_8 +
                                   -((CARRY1((byte)param_8,
                                             param_7 - ((CARRY1((byte)ppbVar9,(byte)ppbVar10) << 7)
                                                       >> 7)) << 7) >> 7))) << 7;
              puVar15['\x01'] = 0x3b;
              puVar15['\x02'] = 0x33;
              param_5 = (byte **)func_0x363f();
              ppbVar10 = param_5;
              if (cVar2 < '\0') break;
LAB_CODE_32f2:
              ppbVar10 = param_3 + (char)(*param_3 +
                                         (char)(ppbVar10 + (char)*param_4 +
                                               -((CARRY1((byte)(ppbVar10 + (char)*param_4),
                                                         (byte)param_3) << 7) >> 7)));
            }
          }
          ppbVar10 = param_5 + -(cVar2 >> 7);
          ppbVar9 = param_5 + (char)ppbVar10;
          bVar14 = 0x3c - ((CARRY1((byte)param_5,(byte)ppbVar10) << 7) >> 7);
          cVar2 = CARRY1((byte)(ppbVar9 +
                               (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar9,bVar14) << 7) >> 7)) + bVar14
                               ),(byte)*param_3) << 7;
          pbVar8 = *param_3 +
                   (char)(ppbVar9 +
                         (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar9,bVar14) << 7) >> 7)) + bVar14);
        } while( true );
      }
      bVar14 = (byte)(pbVar6 + DAT_INTMEM_46) | param_6;
      break;
    }
    if (bVar1 == false) {
      DAT_INTMEM_75 = DAT_INTMEM_54;
      ppbVar9 = (byte **)(((byte)pbVar6 | (byte)param_3) ^ (byte)ppbVar10);
      goto LAB_CODE_3239_2;
    }
    pbVar8 = (byte *)((byte)pbVar6 | (byte)param_5);
LAB_CODE_30c3:
    do {
      bVar13 = (byte)(*param_3 + -(cVar11 >> 7) + (char)pbVar8) | (byte)param_3;
      bVar14 = DAT_INTMEM_4a - ((CARRY1((byte)pbVar8,(byte)(*param_3 + -(cVar11 >> 7))) << 7) >> 7);
      param_3 = param_3 + '\x01';
      bVar4 = bVar13 + bVar14 | param_6;
      bVar5 = (byte)(param_4 + -((CARRY1(bVar13,bVar14) << 7) >> 7) + bVar4) | param_7;
      bVar14 = 0x4e - ((CARRY1(bVar4,(byte)(param_4 + -((CARRY1(bVar13,bVar14) << 7) >> 7))) << 7)
                      >> 7);
      bVar1 = CARRY1(bVar5,bVar14);
      pbVar8 = (byte *)(bVar5 + bVar14);
      bVar14 = param_7;
      do {
        param_7 = DAT_INTMEM_40;
        cVar11 = bVar1 << 7;
        param_6 = param_6 - 1;
        if (param_6 != 0) goto LAB_CODE_311e_1;
        param_3 = param_3 + -1;
        if (param_3 == (byte **)0x0) {
          FUN_CODE_3425();
          pbVar6 = (byte *)FUN_CODE_3627();
          param_7 = bVar14;
LAB_CODE_30d5:
          pbVar6 = pbVar6 + '\x01';
          bVar14 = param_7 - (cVar11 >> 7);
          pbVar8 = pbVar6 + bVar14;
          bVar14 = DAT_INTMEM_40 - ((CARRY1((byte)pbVar6,bVar14) << 7) >> 7);
          pbVar6 = pbVar8 + bVar14;
          ppbVar3 = param_4 + -((CARRY1((byte)pbVar8,bVar14) << 7) >> 7);
          ppbVar10 = (byte **)(param_7 - ((CARRY1((byte)pbVar6,(byte)ppbVar3) << 7) >> 7));
          bVar14 = (ppbVar3 + (char)pbVar6 < ppbVar10) << 7;
          ppbVar9 = ppbVar3 + (char)pbVar6 + -(char)ppbVar10;
          goto LAB_CODE_322d;
        }
        pbVar6 = pbVar8 + (char)(param_8 + -(cVar11 >> 7));
        cVar11 = (param_8 < (byte *)0x41) << 7;
        if (param_8 != (byte *)0x41) goto LAB_CODE_30d5;
        bVar14 = read_volatile_1(TH2);
        write_volatile_1(TH2,bVar14 | 0x44);
        cVar11 = (param_3 < (byte **)0x45) << 7;
        if (param_3 == (byte **)0x45) goto code_c0x3124;
        ppbVar9 = DAT_INTMEM_41;
        if (param_3 >= (byte **)0x45) goto LAB_CODE_3291;
        *param_3 = *param_3 + '\x01';
        DAT_INTMEM_68 = DAT_INTMEM_68 + -1;
        *param_3 = (byte *)0x16;
        bVar14 = func_0x6714();
        bVar14 = bVar14 & (byte)ppbVar3 ^ (byte)*param_3;
        DAT_INTMEM_5c = DAT_INTMEM_5c ^ 0x3a;
        cVar11 = (param_7 < 0x3c) << 7;
        if (param_7 != 0x3c) {
          bVar13 = read_volatile_1(PCON);
          pbVar8 = (byte *)(bVar14 | bVar13 | (byte)*param_3);
          DAT_INTMEM_47 = (byte **)*param_3;
          goto LAB_CODE_30c3;
        }
        bVar1 = CARRY1(bVar14,(byte)(param_8 + -(cVar11 >> 7)));
        pbVar8 = param_8 + -(cVar11 >> 7) + bVar14;
        param_3 = param_3 + -1;
        bVar14 = param_7;
      } while (param_3 != (byte **)0x0);
      cVar11 = (param_8 < (byte *)0x43) << 7;
    } while (param_8 != (byte *)0x43);
    while( true ) {
      bVar14 = read_volatile_1(CCAPM1);
      bVar13 = FUN_CODE_3425((byte)pbVar8 | bVar14 | (byte)*param_3);
      bVar14 = 0x27 - (cVar11 >> 7);
      bVar4 = bVar13 + bVar14;
      bVar14 = param_7 - ((CARRY1((byte)(*param_3 + -((CARRY1(bVar13,bVar14) << 7) >> 7) + bVar4),
                                  (byte)(param_5 +
                                        -((CARRY1(bVar4,(byte)(*param_3 +
                                                              -((CARRY1(bVar13,bVar14) << 7) >> 7)))
                                          << 7) >> 7))) << 7) >> 7);
      pbVar8 = param_8 + bVar14;
      *(byte **)ZEXT12(param_3) = pbVar8;
      ppbVar9 = (byte **)*param_3;
      *param_3 = param_8 + -((CARRY1((byte)param_8,bVar14) << 7) >> 7) + (char)pbVar8;
      if (-1 < CARRY1((byte)pbVar8,(byte)(param_8 + -((CARRY1((byte)param_8,bVar14) << 7) >> 7))) <<
               7) break;
      bVar14 = ((byte)ppbVar9 | (byte)*param_4 | param_7) + DAT_INTMEM_34;
      cVar11 = CARRY1(bVar14,(byte)*param_4) << 7;
      pbVar8 = *param_4 + bVar14;
    }
    ppbVar10 = ppbVar10 + -1;
    param_8 = param_8 + -1;
    bVar14 = (ppbVar3 < (byte **)0xc1) << 7;
    if (ppbVar3 != (byte **)0xc1) {
      ppbVar9 = (byte **)((byte)ppbVar9 | (byte)ppbVar3);
      param_6 = param_6 - 1;
      if (param_6 == 0) {
        if (param_3 == (byte **)0x1) {
          return param_5 + (char)(ppbVar9 + (char)(*param_4 + (char)(param_8 + -((char)bVar14 >> 7))
                                                  ) +
                                 (-(((ppbVar9 + (char)(*param_4 +
                                                      (char)(param_8 + -((char)bVar14 >> 7))) <
                                     *param_4) << 7) >> 7) - (char)*param_4));
        }
LAB_CODE_3239_2:
        DAT_INTMEM_48 = 0x6f;
        bVar14 = FUN_CODE_3370((byte)ppbVar9 & DAT_INTMEM_6d ^ (byte)ppbVar3 ^ param_7);
                    // WARNING: Could not recover jumptable at 0x3246. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar12 = (*(code *)(param_2 + bVar14))();
        return (byte **)uVar12;
      }
LAB_CODE_322d:
                    // WARNING: Call to offcut address within same function
      ppbVar9 = (byte **)func_0x329c(ppbVar9);
      28_6 = bVar14 >> 7;
      pbVar8 = param_8;
LAB_CODE_3231:
      cVar2 = (ppbVar9 < param_4 + -((char)bVar14 >> 7)) << 7;
      cVar11 = FUN_CODE_3448((byte)(ppbVar9 + -(char)(param_4 + -((char)bVar14 >> 7))) |
                             (byte)*param_4 | param_7 | (byte)*param_3);
      param_6 = cVar11 + (DAT_INTMEM_25 - (cVar2 >> 7)) + param_6;
      if (*param_3 == (byte *)0x3c) {
        bVar1 = CARRY1((byte)(param_5 +
                             (char)(*param_3 + -((CARRY1(param_6,(byte)*param_4) << 7) >> 7) +
                                   (char)(*param_4 + param_6 +
                                         -((CARRY1((byte)(*param_4 + param_6),
                                                   (byte)(*param_3 +
                                                         -((CARRY1(param_6,(byte)*param_4) << 7) >>
                                                          7))) << 7) >> 7)))),
                       (byte)(pbVar8 + -(((*param_3 < (byte *)0x3c) << 7) >> 7)));
        DAT_INTMEM_4b =
             param_5 + (char)(*param_3 + -((CARRY1(param_6,(byte)*param_4) << 7) >> 7) +
                             (char)(*param_4 + param_6 +
                                   -((CARRY1((byte)(*param_4 + param_6),
                                             (byte)(*param_3 +
                                                   -((CARRY1(param_6,(byte)*param_4) << 7) >> 7)))
                                     << 7) >> 7))) +
             (char)(pbVar8 + -(((*param_3 < (byte *)0x3c) << 7) >> 7));
        goto LAB_CODE_3740;
      }
      goto LAB_CODE_32c1;
    }
    DAT_INTMEM_53 = DAT_INTMEM_53 + '\x01';
    param_3 = (byte **)0x44;
    DAT_INTMEM_43 = DAT_INTMEM_43 & (byte)ppbVar9;
    cVar2 = (ppbVar9 < param_5 + -((char)bVar14 >> 7)) << 7;
    bVar14 = (byte)(ppbVar9 + -(char)(param_5 + -((char)bVar14 >> 7))) & (byte)*param_4 |
             (byte)DAT_INTMEM_4d;
  } while( true );
code_c0x3548:
  FUN_CODE_2dea(bVar14);
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_CODE_2d21();
        if (25_3 != '\x01') goto LAB_CODE_356e;
        if (param_5 == (byte **)0x23) break;
        FUN_CODE_2dea();
      }
      bVar14 = param_6 & 0x7f;
      if (param_6 != 0xe7) break;
      29_3 = '\x01';
      FUN_CODE_2dea();
    }
    if (param_6 == 0x67) break;
    if (29_3 == '\0') {
      if (bVar14 != 0x47) {
        if ((((bVar14 == 0x51) || (bVar14 == 0x52)) || (bVar14 == 0x56)) || (bVar14 == 0x5f))
        goto LAB_CODE_3559;
        goto LAB_CODE_355f;
      }
      if (28_0 == 1) {
LAB_CODE_355f:
        FUN_CODE_2dea(bVar14);
LAB_CODE_356e:
        uVar12 = FUN_CODE_2ed6();
        29_7 = 1;
        return (byte **)uVar12;
      }
    }
    else {
      if (param_6 == 0x22) {
        28_0 = 28_0 ^ 1;
        FUN_CODE_2dea();
      }
      else {
        if (param_6 != 0xa2) goto LAB_CODE_355f;
LAB_CODE_3559:
        FUN_CODE_2dea();
      }
    }
  }
  29_3 = '\0';
  goto code_c0x3548;
}



void FUN_CODE_3425(char param_1,short param_2,byte *param_3,byte *param_4,byte param_5,char param_6,
                  byte param_7,byte *param_8)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  char cVar6;
  char in_PSW;
  undefined uStackX0;
  
  bVar2 = param_1 + (param_5 - (in_PSW >> 7));
  cVar6 = (CARRY1((byte)(param_8 + bVar2),param_6 - ((CARRY1(bVar2,(byte)param_8) << 7) >> 7)) &
          27_5) << 7;
  DAT_INTMEM_3f = uStackX0;
  pbVar3 = (byte *)func_0x3640(param_2 + 1);
  do {
    bVar1 = pbVar3 < (byte *)(*param_4 - (cVar6 >> 7));
LAB_CODE_32fd:
    cVar6 = bVar1 << 7;
    pbVar3 = param_8;
    while( true ) {
      cVar6 = CARRY1((byte)pbVar3,param_7 - (cVar6 >> 7)) << 7;
      pbVar3 = (byte *)func_0x363f();
      pbVar4 = pbVar3;
      if (cVar6 < '\0') break;
      while( true ) {
        pbVar4 = pbVar4 + (*param_4 - ((CARRY1((byte)pbVar4,param_5) << 7) >> 7)) + param_5;
        pbVar5 = pbVar4 + *param_4;
        pbVar4 = param_3 + -((CARRY1((byte)pbVar4,*param_4) << 7) >> 7);
        if (pbVar3 == (byte *)0x1) {
          bVar1 = CARRY1((byte)(pbVar4 + (char)pbVar5 + param_7),
                         param_6 - ((CARRY1((byte)(pbVar4 + (char)pbVar5),param_7) << 7) >> 7));
          goto LAB_CODE_32fd;
        }
        cVar6 = CARRY1((byte)param_8,
                       param_7 - ((CARRY1(param_7,param_6 - ((CARRY1((byte)pbVar5,(byte)pbVar4) << 7
                                                             ) >> 7)) << 7) >> 7)) << 7;
        pbVar3 = (byte *)func_0x363f();
        if (cVar6 < '\0') break;
        pbVar4 = param_3 + (char)(pbVar3 + *param_4 +
                                 (*param_3 -
                                 ((CARRY1((byte)(pbVar3 + *param_4),(byte)param_3) << 7) >> 7)));
      }
    }
    pbVar4 = pbVar3 + -(cVar6 >> 7);
    pbVar5 = pbVar3 + (char)pbVar4;
    bVar2 = 0x3c - ((CARRY1((byte)pbVar3,(byte)pbVar4) << 7) >> 7);
    cVar6 = CARRY1((byte)(pbVar5 + (DAT_INTMEM_40 - ((CARRY1((byte)pbVar5,bVar2) << 7) >> 7)) +
                                   bVar2),*param_3) << 7;
    pbVar3 = pbVar5 + (DAT_INTMEM_40 - ((CARRY1((byte)pbVar5,bVar2) << 7) >> 7)) + bVar2 + *param_3;
  } while( true );
}



// WARNING: Control flow encountered bad instruction data
// WARNING: Instruction at (CODE,0x3121) overlaps instruction at (CODE,0x3120)
// 

byte * FUN_CODE_343a(byte param_1,char param_2,byte **param_3,byte **param_4,byte param_5,
                    byte param_6,byte param_7,byte *param_8,char param_9)

{
  bool bVar1;
  char cVar2;
  byte **ppbVar3;
  byte bVar4;
  byte bVar5;
  byte **ppbVar6;
  byte **ppbVar7;
  char cVar8;
  byte **ppbVar9;
  byte bVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined uVar14;
  byte bVar15;
  undefined *puVar16;
  byte **ppbVar17;
  undefined uStackX0;
  
  puVar16 = (undefined *)0x0;
  bVar10 = param_1 + param_5;
  if (23_2 != '\0') {
    23_2 = '\0';
    param_4 = (byte **)read_volatile_1(DAT_SFR_ac);
    bVar15 = read_volatile_1(WCON);
    cVar8 = read_volatile_1(WCON);
    bVar15 = param_9 - ((CARRY1(bVar10,bVar15) << 7) >> 7);
    read_volatile(FADDR);
    cVar2 = read_volatile_1(FADDR);
    bVar10 = ((bVar10 + cVar8 + bVar15) -
             (char)(*param_4 + -((CARRY1(bVar10 + cVar8,bVar15) << 7) >> 7))) * param_2 + cVar2;
    pbVar11 = *param_4 + bVar10;
    pbVar13 = *param_3 + -((CARRY1(bVar10,(byte)*param_4) << 7) >> 7);
    pbVar12 = pbVar13 + (char)pbVar11;
    pbVar13 = *param_4 + -((CARRY1((byte)pbVar11,(byte)pbVar13) << 7) >> 7);
    bVar10 = param_7 - ((CARRY1((byte)(pbVar12 + (char)pbVar13 +
                                      -(char)(param_8 +
                                             -((CARRY1((byte)pbVar12,(byte)pbVar13) << 7) >> 7))),
                                param_5 - (((pbVar12 + (char)pbVar13 <
                                            param_8 + -((CARRY1((byte)pbVar12,(byte)pbVar13) << 7)
                                                       >> 7)) << 7) >> 7)) << 7) >> 7);
    pbVar13 = param_8 + bVar10;
    *(byte **)ZEXT12(param_3) = pbVar13;
    cVar2 = CARRY1((byte)pbVar13,(byte)(param_8 + -((CARRY1((byte)param_8,bVar10) << 7) >> 7))) << 7
    ;
    ppbVar7 = (byte **)*param_3;
    *param_3 = param_8 + -((CARRY1((byte)param_8,bVar10) << 7) >> 7) + (char)pbVar13;
    if (cVar2 < '\0') {
      23_2 = 0;
                    // WARNING: Bad instruction - Truncating control flow here
      halt_baddata();
    }
LAB_CODE_322e:
    ppbVar3 = (byte **)(param_7 - (cVar2 >> 7));
    bVar10 = (ppbVar7 < ppbVar3) << 7;
    ppbVar7 = ppbVar7 + -(char)ppbVar3;
LAB_CODE_322f:
    28_6 = bVar10 >> 7;
    pbVar11 = param_8;
LAB_CODE_3231:
    cVar2 = (ppbVar7 < param_4 + -((char)bVar10 >> 7)) << 7;
    cVar8 = FUN_CODE_3448((byte)(ppbVar7 + -(char)(param_4 + -((char)bVar10 >> 7))) | (byte)*param_4
                          | param_7 | (byte)*param_3);
    param_6 = cVar8 + (DAT_INTMEM_25 - (cVar2 >> 7)) + param_6;
    pbVar13 = *param_3 + -((CARRY1(param_6,(byte)*param_4) << 7) >> 7);
    if (*param_3 == (byte *)0x3c) {
      bVar1 = CARRY1((byte)(pbVar13 +
                           (char)(*param_4 + param_6 +
                                 (param_5 -
                                 ((CARRY1((byte)(*param_4 + param_6),(byte)pbVar13) << 7) >> 7)))),
                     (byte)(pbVar11 + -(((*param_3 < (byte *)0x3c) << 7) >> 7)));
      DAT_INTMEM_4b =
           pbVar13 + (char)(*param_4 + param_6 +
                           (param_5 - ((CARRY1((byte)(*param_4 + param_6),(byte)pbVar13) << 7) >> 7)
                           )) + (char)(pbVar11 + -(((*param_3 < (byte *)0x3c) << 7) >> 7));
    }
    else {
      bVar1 = CARRY1((byte)DAT_INTMEM_4b,DAT_INTMEM_4f);
      DAT_INTMEM_4b = (byte *)((char)DAT_INTMEM_4b + DAT_INTMEM_4f);
      DAT_INTMEM_30 = param_5;
    }
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4e - ((bVar1 << 7) >> 7));
    cVar2 = (0xf7 < DAT_INTMEM_4c) << 7;
    cVar8 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
    if ((-1 < cVar2) && (cVar8 != '\0')) {
      bVar15 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != (byte *)0x0) << 7) >> 7));
      bVar10 = DAT_INTMEM_4a - ((((byte *)-(char)DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
      if (((bVar15 < bVar10) << 7 < '\0') &&
         ((bVar15 - bVar10 | (byte)((byte *)-(char)DAT_INTMEM_4d + -(char)DAT_INTMEM_4b)) != 0)) {
        uVar14 = FUN_CODE_37a5();
        return (byte *)uVar14;
      }
      bVar1 = CARRY1((byte)DAT_INTMEM_4b,(byte)DAT_INTMEM_4d);
      DAT_INTMEM_4b = DAT_INTMEM_4b + (char)DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      cVar2 = '\x02';
      while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar2 != '\0'))) {
        if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
          bVar1 = DAT_INTMEM_4f == 0;
          DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
          DAT_INTMEM_4e = (bVar1 << 7) >> 7;
          if (2b_6 == '\0') {
            uVar14 = 0x46;
          }
          else {
            uVar14 = 0x54;
          }
        }
        else {
          bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
          DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
          DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
          if (2b_6 == '\0') {
            uVar14 = 0x52;
          }
          else {
            uVar14 = 0x51;
          }
        }
        FUN_CODE_3d32(uVar14);
        cVar2 = cVar2 + -1;
      }
      bVar10 = DAT_INTMEM_4f | DAT_INTMEM_4e;
      if (bVar10 != 0) {
        2b_5 = 1;
        29_7 = 1;
      }
      if ((2b_4 != '\0') && (2c_4 != '\x01')) {
        bVar10 = FUN_CODE_34c2();
      }
      2b_4 = 0;
      return (byte *)bVar10;
    }
    bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
    DAT_INTMEM_4b = DAT_INTMEM_4b + -(char)DAT_INTMEM_4d;
    DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
    uVar14 = FUN_CODE_37a5();
    return (byte *)uVar14;
  }
                    // WARNING: Call to offcut address within same function
  cVar2 = func_0x350f(bVar10 * '\x02' | CARRY1(param_1,param_5));
  param_7 = 0x1c;
  pbVar13 = (byte *)read_volatile_1(P3);
  *param_4 = *param_4 + -1;
  ppbVar17 = (byte **)0x8f2c;
  bVar1 = CARRY1((byte)(param_8 + cVar2 + param_9),param_6);
  pbVar11 = param_8 + cVar2 + param_9 + param_6;
  ppbVar3 = (byte **)(param_9 + '\x01');
  DAT_INTMEM_2f = DAT_INTMEM_2f | (byte)pbVar11;
  do {
    if (21_3 == '\0') {
      *ppbVar17 = pbVar11;
      uVar14 = FUN_CODE_2fed(DAT_INTMEM_51);
      return (byte *)uVar14;
    }
    ppbVar3 = ppbVar3 + -1;
    cVar2 = CARRY1((byte)(pbVar11 + -(char)(*param_3 + -((bVar1 << 7) >> 7))),(byte)*param_3) << 7;
    bVar10 = param_7;
    pbVar12 = DAT_INTMEM_32;
    pbVar11 = *param_3 + (char)(pbVar11 + -(char)(*param_3 + -((bVar1 << 7) >> 7)));
LAB_CODE_311e_1:
    param_8 = pbVar11;
    bVar15 = read_volatile_1(P1);
    pbVar11 = (byte *)((byte)pbVar12 | 0xb8 | bVar15);
    param_7 = bVar10;
code_c0x3124:
    bVar10 = (byte)pbVar11 | (byte)*param_3;
    param_3 = param_3 + -1;
    DAT_INTMEM_47 = pbVar13;
    if (param_3 == (byte **)0x0) {
      ppbVar7 = ppbVar3 + DAT_INTMEM_34 + bVar10;
      ppbVar6 = ppbVar7 + (char)*param_4;
      bVar10 = BANK0_R0 - ((CARRY1((byte)ppbVar7,(byte)*param_4) << 7) >> 7);
      ppbVar7 = ppbVar6 + bVar10;
      bVar10 = -((CARRY1((byte)ppbVar6,bVar10) << 7) >> 7);
      bVar10 = param_7 - ((CARRY1((byte)(param_4 + -((CARRY1((byte)ppbVar7,bVar10) << 7) >> 7) +
                                        (char)(ppbVar7 + bVar10)),
                                  param_5 - ((CARRY1((byte)(ppbVar7 + bVar10),
                                                     (byte)(param_4 +
                                                           -((CARRY1((byte)ppbVar7,bVar10) << 7) >>
                                                            7))) << 7) >> 7)) << 7) >> 7);
      pbVar11 = param_8 + (DAT_INTMEM_3d - ((CARRY1((byte)param_8,bVar10) << 7) >> 7)) + bVar10;
      bVar10 = read_volatile_1(SOFL);
      write_volatile_1(SOFL,bVar10 | (byte)param_8);
      bVar10 = read_volatile_1(FIFLG1);
      write_volatile_1(FIFLG1,bVar10 | 0x46);
      ppbVar7 = (byte **)FUN_CODE_3447(param_8);
      param_7 = param_7 - 1;
      if (param_7 == 0) {
        if (pbVar13 != (byte *)0x49) {
          bVar10 = 0x80;
          goto LAB_CODE_3231;
        }
        ppbVar7 = ppbVar7 + (char)(*param_4 + DAT_INTMEM_3d);
        DAT_INTMEM_3a = *param_3;
        DAT_INTMEM_3b = *param_4;
        bVar15 = ((char)(param_4 +
                        (char)(param_3 + -((CARRY1((byte)ppbVar7,param_6) << 7) >> 7) +
                              (char)(ppbVar7 + param_6 +
                                    ('\x01' - ((CARRY1((byte)(ppbVar7 + param_6),
                                                       (byte)(param_3 +
                                                             -((CARRY1((byte)ppbVar7,param_6) << 7)
                                                              >> 7))) << 7) >> 7))))) +
                 (char)ppbVar3) -
                 ((CARRY1((byte)(param_4 +
                                (char)(param_3 + -((CARRY1((byte)ppbVar7,param_6) << 7) >> 7) +
                                      (char)(ppbVar7 + param_6 +
                                            ('\x01' - ((CARRY1((byte)(ppbVar7 + param_6),
                                                               (byte)(param_3 +
                                                                     -((CARRY1((byte)ppbVar7,param_6
                                                                              ) << 7) >> 7))) << 7)
                                                      >> 7))))),(byte)ppbVar3) << 7) >> 7);
        bVar10 = CARRY1((byte)(pbVar11 + bVar15),
                        (byte)(pbVar11 + -((CARRY1(bVar15,(byte)pbVar11) << 7) >> 7))) << 7;
        ppbVar7 = (byte **)(pbVar11 + -((CARRY1(bVar15,(byte)pbVar11) << 7) >> 7) +
                           (char)(pbVar11 + bVar15));
        param_3 = param_3 + '\x01';
        if (-1 < (char)bVar10) goto LAB_CODE_3231;
        bVar10 = 0x27 - ((char)bVar10 >> 7);
        ppbVar7 = param_3 + (((char)(ppbVar7 + bVar10) +
                             (char)(*param_3 + -((CARRY1((byte)ppbVar7,bVar10) << 7) >> 7))) -
                            ((CARRY1((byte)(ppbVar7 + bVar10),
                                     (byte)(*param_3 + -((CARRY1((byte)ppbVar7,bVar10) << 7) >> 7)))
                             << 7) >> 7));
      }
      bVar10 = (byte)ppbVar7 & (byte)param_4;
      goto LAB_CODE_355f;
    }
    bVar15 = DAT_INTMEM_3d - (cVar2 >> 7);
    bVar1 = CARRY1(bVar10,bVar15);
    cVar2 = bVar1 << 7;
    pbVar11 = *param_3;
    *param_3 = (byte *)(bVar10 + bVar15);
    pbVar12 = pbVar13;
    if (-1 < cVar2) {
LAB_CODE_3291:
      DAT_INTMEM_41 = pbVar12;
      DAT_INTMEM_30 = DAT_INTMEM_30 | 0x44;
      cVar8 = param_7 - 1;
      if (cVar8 != '\0') {
        cVar2 = CARRY1((byte)ppbVar3,
                       (byte)(param_8 + -((CARRY1((byte)pbVar11,cVar8 - (cVar2 >> 7)) << 7) >> 7)))
                << 7;
        ppbVar6 = (byte **)func_0x363f(0x42a8);
        ppbVar7 = ppbVar6;
        if (-1 < cVar2) goto LAB_CODE_32f5;
        cVar2 = (CARRY1((byte)(ppbVar3 +
                              (char)(param_8 +
                                    (param_6 -
                                    ((CARRY1((byte)ppbVar6,(byte)(ppbVar6 + -(cVar2 >> 7))) << 7) >>
                                    7)))),
                        cVar8 - ((CARRY1((byte)(param_8 +
                                               (param_6 -
                                               ((CARRY1((byte)ppbVar6,
                                                        (byte)(ppbVar6 + -(cVar2 >> 7))) << 7) >> 7)
                                               )),(byte)ppbVar3) << 7) >> 7)) & 27_5) << 7;
        DAT_INTMEM_3f = uStackX0;
        puVar16 = (undefined *)0xff;
        pbVar13 = (byte *)func_0x3640();
        do {
          bVar1 = pbVar13 < *param_4 + -(cVar2 >> 7);
LAB_CODE_32fd:
          cVar2 = bVar1 << 7;
          ppbVar6 = ppbVar3;
          while( true ) {
            cVar2 = CARRY1((byte)ppbVar6,(byte)(param_8 + -(cVar2 >> 7))) << 7;
            puVar16['\x01'] = 1;
            puVar16['\x02'] = 0x33;
            ppbVar6 = (byte **)func_0x363f();
            ppbVar7 = ppbVar6;
            if (cVar2 < '\0') break;
LAB_CODE_32f5:
            while( true ) {
              ppbVar7 = ppbVar7 + (char)(*param_4 +
                                        (param_6 - ((CARRY1((byte)ppbVar7,param_6) << 7) >> 7)));
              ppbVar9 = ppbVar7 + (char)*param_4;
              ppbVar7 = param_3 + -((CARRY1((byte)ppbVar7,(byte)*param_4) << 7) >> 7);
              if (ppbVar6 == (byte **)0x1) {
                bVar1 = CARRY1((byte)(ppbVar7 + (char)ppbVar9 + (char)param_8),
                               cVar8 - ((CARRY1((byte)(ppbVar7 + (char)ppbVar9),(byte)param_8) << 7)
                                       >> 7));
                goto LAB_CODE_32fd;
              }
              cVar2 = CARRY1((byte)ppbVar3,
                             (byte)(param_8 +
                                   -((CARRY1((byte)param_8,
                                             cVar8 - ((CARRY1((byte)ppbVar9,(byte)ppbVar7) << 7) >>
                                                     7)) << 7) >> 7))) << 7;
              puVar16['\x01'] = 0x3b;
              puVar16['\x02'] = 0x33;
              ppbVar6 = (byte **)func_0x363f();
              if (cVar2 < '\0') break;
              ppbVar7 = param_3 + (char)(*param_3 +
                                        (char)(ppbVar6 + (char)*param_4 +
                                              -((CARRY1((byte)(ppbVar6 + (char)*param_4),
                                                        (byte)param_3) << 7) >> 7)));
            }
          }
          ppbVar7 = ppbVar6 + -(cVar2 >> 7);
          ppbVar9 = ppbVar6 + (char)ppbVar7;
          bVar10 = 0x3c - ((CARRY1((byte)ppbVar6,(byte)ppbVar7) << 7) >> 7);
          cVar2 = CARRY1((byte)(ppbVar9 +
                               (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar9,bVar10) << 7) >> 7)) + bVar10
                               ),(byte)*param_3) << 7;
          pbVar13 = *param_3 +
                    (char)(ppbVar9 +
                          (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar9,bVar10) << 7) >> 7)) + bVar10);
        } while( true );
      }
      bVar10 = (byte)(pbVar11 + DAT_INTMEM_46) | param_6;
      break;
    }
    if (bVar1 == false) {
      DAT_INTMEM_75 = DAT_INTMEM_54;
      bVar15 = ((byte)pbVar11 | (byte)param_3) ^ (byte)pbVar13;
      goto LAB_CODE_3239_2;
    }
    pbVar11 = (byte *)((byte)pbVar11 | param_5);
LAB_CODE_30c3:
    do {
      bVar15 = (byte)(*param_3 + -(cVar2 >> 7) + (char)pbVar11) | (byte)param_3;
      bVar10 = DAT_INTMEM_4a - ((CARRY1((byte)pbVar11,(byte)(*param_3 + -(cVar2 >> 7))) << 7) >> 7);
      param_3 = param_3 + '\x01';
      bVar4 = bVar15 + bVar10 | param_6;
      bVar5 = (byte)(param_4 + -((CARRY1(bVar15,bVar10) << 7) >> 7) + bVar4) | param_7;
      bVar10 = 0x4e - ((CARRY1(bVar4,(byte)(param_4 + -((CARRY1(bVar15,bVar10) << 7) >> 7))) << 7)
                      >> 7);
      bVar1 = CARRY1(bVar5,bVar10);
      pbVar11 = (byte *)(bVar5 + bVar10);
      bVar10 = param_7;
      do {
        param_7 = DAT_INTMEM_40;
        cVar2 = bVar1 << 7;
        param_6 = param_6 - 1;
        pbVar12 = param_8;
        if (param_6 != 0) goto LAB_CODE_311e_1;
        param_3 = param_3 + -1;
        if (param_3 == (byte **)0x0) {
          FUN_CODE_3425();
          pbVar11 = (byte *)FUN_CODE_3627();
LAB_CODE_30d5:
          pbVar11 = pbVar11 + '\x01';
          bVar15 = bVar10 - (cVar2 >> 7);
          pbVar13 = pbVar11 + bVar15;
          bVar15 = DAT_INTMEM_40 - ((CARRY1((byte)pbVar11,bVar15) << 7) >> 7);
          cVar2 = CARRY1((byte)(pbVar13 + bVar15),
                         (byte)(param_4 + -((CARRY1((byte)pbVar13,bVar15) << 7) >> 7))) << 7;
          ppbVar7 = param_4 + -((CARRY1((byte)pbVar13,bVar15) << 7) >> 7) + (char)(pbVar13 + bVar15)
          ;
          param_7 = bVar10;
          goto LAB_CODE_322e;
        }
        pbVar11 = pbVar11 + (char)(param_8 + -(cVar2 >> 7));
        cVar2 = (param_8 < (byte *)0x41) << 7;
        bVar10 = DAT_INTMEM_40;
        if (param_8 != (byte *)0x41) goto LAB_CODE_30d5;
        bVar10 = read_volatile_1(TH2);
        write_volatile_1(TH2,bVar10 | 0x44);
        cVar2 = (param_3 < (byte **)0x45) << 7;
        if (param_3 == (byte **)0x45) goto code_c0x3124;
        pbVar12 = DAT_INTMEM_41;
        if (param_3 >= (byte **)0x45) goto LAB_CODE_3291;
        *param_3 = *param_3 + '\x01';
        DAT_INTMEM_68 = DAT_INTMEM_68 + -1;
        *param_3 = (byte *)0x16;
        bVar10 = func_0x6714();
        bVar10 = bVar10 & (byte)ppbVar3 ^ (byte)*param_3;
        DAT_INTMEM_5c = DAT_INTMEM_5c ^ 0x3a;
        cVar2 = (param_7 < 0x3c) << 7;
        if (param_7 != 0x3c) {
          bVar15 = read_volatile_1(PCON);
          pbVar11 = (byte *)(bVar10 | bVar15 | (byte)*param_3);
          DAT_INTMEM_47 = *param_3;
          goto LAB_CODE_30c3;
        }
        bVar1 = CARRY1(bVar10,(byte)(param_8 + -(cVar2 >> 7)));
        pbVar11 = param_8 + -(cVar2 >> 7) + bVar10;
        param_3 = param_3 + -1;
        bVar10 = param_7;
      } while (param_3 != (byte **)0x0);
      cVar2 = (param_8 < (byte *)0x43) << 7;
    } while (param_8 != (byte *)0x43);
    while( true ) {
      bVar10 = read_volatile_1(CCAPM1);
      bVar15 = FUN_CODE_3425((byte)pbVar11 | bVar10 | (byte)*param_3);
      bVar10 = 0x27 - (cVar2 >> 7);
      bVar4 = bVar15 + bVar10;
      bVar10 = param_7 - ((CARRY1((byte)(*param_3 + -((CARRY1(bVar15,bVar10) << 7) >> 7) + bVar4),
                                  param_5 - ((CARRY1(bVar4,(byte)(*param_3 +
                                                                 -((CARRY1(bVar15,bVar10) << 7) >> 7
                                                                  ))) << 7) >> 7)) << 7) >> 7);
      pbVar12 = param_8 + bVar10;
      *(byte **)ZEXT12(param_3) = pbVar12;
      pbVar11 = *param_3;
      *param_3 = param_8 + -((CARRY1((byte)param_8,bVar10) << 7) >> 7) + (char)pbVar12;
      if (-1 < CARRY1((byte)pbVar12,(byte)(param_8 + -((CARRY1((byte)param_8,bVar10) << 7) >> 7)))
               << 7) break;
      bVar10 = ((byte)pbVar11 | (byte)*param_4 | param_7) + DAT_INTMEM_34;
      cVar2 = CARRY1(bVar10,(byte)*param_4) << 7;
      pbVar11 = *param_4 + bVar10;
    }
    pbVar13 = pbVar13 + -1;
    param_8 = param_8 + -1;
    bVar10 = (ppbVar3 < (byte **)0xc1) << 7;
    if (ppbVar3 != (byte **)0xc1) {
      bVar15 = (byte)pbVar11 | (byte)ppbVar3;
      param_6 = param_6 - 1;
      if (param_6 != 0) {
                    // WARNING: Call to offcut address within same function
        ppbVar7 = (byte **)func_0x329c();
        goto LAB_CODE_322f;
      }
      if (param_3 == (byte **)0x1) {
        return param_8 + (char)(*param_4 + (bVar15 - ((char)bVar10 >> 7))) +
               ((param_5 -
                (((param_8 + (char)(*param_4 + (bVar15 - ((char)bVar10 >> 7))) < *param_4) << 7) >>
                7)) - (char)*param_4);
      }
LAB_CODE_3239_2:
      DAT_INTMEM_48 = 0x6f;
      bVar10 = FUN_CODE_3370(bVar15 & DAT_INTMEM_6d ^ (byte)ppbVar3 ^ param_7);
                    // WARNING: Could not recover jumptable at 0x3246. Too many branches
                    // WARNING: Treating indirect jump as call
      uVar14 = (*(code *)(ppbVar17 + bVar10))();
      return (byte *)uVar14;
    }
    DAT_INTMEM_53 = DAT_INTMEM_53 + '\x01';
    param_3 = (byte **)0x44;
    DAT_INTMEM_43 = DAT_INTMEM_43 & (byte)pbVar11;
    pbVar12 = (byte *)(param_5 - ((char)bVar10 >> 7));
    bVar1 = pbVar11 < pbVar12;
    pbVar11 = (byte *)((byte)(pbVar11 + -(char)pbVar12) & (byte)*param_4 | (byte)DAT_INTMEM_4d);
  } while( true );
code_c0x3548:
  FUN_CODE_2dea(bVar10);
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_CODE_2d21();
        if (25_3 != '\x01') goto LAB_CODE_356e;
        if (param_5 == 0x23) break;
        FUN_CODE_2dea();
      }
      bVar10 = param_6 & 0x7f;
      if (param_6 != 0xe7) break;
      29_3 = '\x01';
      FUN_CODE_2dea();
    }
    if (param_6 == 0x67) break;
    if (29_3 == '\0') {
      if (bVar10 != 0x47) {
        if ((((bVar10 == 0x51) || (bVar10 == 0x52)) || (bVar10 == 0x56)) || (bVar10 == 0x5f))
        goto LAB_CODE_3559;
        goto LAB_CODE_355f;
      }
      if (28_0 == 1) {
LAB_CODE_355f:
        FUN_CODE_2dea(bVar10);
LAB_CODE_356e:
        uVar14 = FUN_CODE_2ed6();
        29_7 = 1;
        return (byte *)uVar14;
      }
    }
    else {
      if (param_6 == 0x22) {
        28_0 = 28_0 ^ 1;
        FUN_CODE_2dea();
      }
      else {
        if (param_6 != 0xa2) goto LAB_CODE_355f;
LAB_CODE_3559:
        FUN_CODE_2dea();
      }
    }
  }
  29_3 = '\0';
  goto code_c0x3548;
}



// WARNING: Instruction at (CODE,0x3121) overlaps instruction at (CODE,0x3120)
// 
// WARNING: Type propagation algorithm not settling

byte ** FUN_CODE_3447(byte param_1,byte **param_2,byte **param_3,byte param_4,byte param_5,
                     byte param_6,char param_7,byte *param_8)

{
  bool bVar1;
  char cVar2;
  byte **ppbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  byte bVar10;
  char cVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  undefined uVar15;
  undefined *puVar16;
  byte *pbVar17;
  undefined uStackX0;
  
  puVar16 = (undefined *)0x0;
  *param_3 = *param_3 + -1;
  pbVar17 = (byte *)0x8f2c;
  bVar1 = CARRY1(param_1,param_5);
  param_1 = param_1 + param_5;
  ppbVar3 = (byte **)(param_7 + '\x01');
  DAT_INTMEM_2f = DAT_INTMEM_2f | param_1;
  do {
    if (21_3 == '\0') {
      *pbVar17 = param_1;
      uVar15 = FUN_CODE_2fed(DAT_INTMEM_51);
      return (byte **)uVar15;
    }
    ppbVar3 = ppbVar3 + -1;
    cVar2 = CARRY1(param_1 - (char)(*param_2 + -((bVar1 << 7) >> 7)),(byte)*param_2) << 7;
    pbVar14 = *param_2 + (param_1 - (char)(*param_2 + -((bVar1 << 7) >> 7)));
    bVar7 = param_6;
    pbVar12 = DAT_INTMEM_32;
LAB_CODE_311e_1:
    bVar10 = read_volatile_1(P1);
    pbVar6 = (byte *)((byte)pbVar12 | 0xb8 | bVar10);
    param_6 = bVar7;
    pbVar12 = pbVar14;
code_c0x3124:
    bVar7 = (byte)pbVar6 | (byte)*param_2;
    param_2 = param_2 + -1;
    DAT_INTMEM_47 = param_8;
    if (param_2 == (byte **)0x0) {
      ppbVar8 = ppbVar3 + DAT_INTMEM_34 + bVar7;
      ppbVar9 = ppbVar8 + (char)*param_3;
      bVar7 = BANK0_R0 - ((CARRY1((byte)ppbVar8,(byte)*param_3) << 7) >> 7);
      ppbVar8 = ppbVar9 + bVar7;
      bVar7 = -((CARRY1((byte)ppbVar9,bVar7) << 7) >> 7);
      bVar7 = param_6 - ((CARRY1((byte)(param_3 + -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7) +
                                       (char)(ppbVar8 + bVar7)),
                                 param_4 - ((CARRY1((byte)(ppbVar8 + bVar7),
                                                    (byte)(param_3 +
                                                          -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7)
                                                          )) << 7) >> 7)) << 7) >> 7);
      pbVar14 = pbVar12 + (DAT_INTMEM_3d - ((CARRY1((byte)pbVar12,bVar7) << 7) >> 7)) + bVar7;
      bVar7 = read_volatile_1(SOFL);
      write_volatile_1(SOFL,bVar7 | (byte)pbVar12);
      bVar7 = read_volatile_1(FIFLG1);
      write_volatile_1(FIFLG1,bVar7 | 0x46);
      ppbVar8 = (byte **)FUN_CODE_3447(pbVar12);
      param_6 = param_6 - 1;
      if (param_6 == 0) {
        if (param_8 != (byte *)0x49) {
          bVar7 = 0x80;
          goto LAB_CODE_3231;
        }
        ppbVar8 = ppbVar8 + (char)(*param_3 + DAT_INTMEM_3d);
        DAT_INTMEM_3a = *param_2;
        DAT_INTMEM_3b = *param_3;
        bVar10 = ((char)(param_3 +
                        (char)(param_2 + -((CARRY1((byte)ppbVar8,param_5) << 7) >> 7) +
                              (char)(ppbVar8 + param_5 +
                                    ('\x01' - ((CARRY1((byte)(ppbVar8 + param_5),
                                                       (byte)(param_2 +
                                                             -((CARRY1((byte)ppbVar8,param_5) << 7)
                                                              >> 7))) << 7) >> 7))))) +
                 (char)ppbVar3) -
                 ((CARRY1((byte)(param_3 +
                                (char)(param_2 + -((CARRY1((byte)ppbVar8,param_5) << 7) >> 7) +
                                      (char)(ppbVar8 + param_5 +
                                            ('\x01' - ((CARRY1((byte)(ppbVar8 + param_5),
                                                               (byte)(param_2 +
                                                                     -((CARRY1((byte)ppbVar8,param_5
                                                                              ) << 7) >> 7))) << 7)
                                                      >> 7))))),(byte)ppbVar3) << 7) >> 7);
        bVar7 = CARRY1((byte)(pbVar14 + bVar10),
                       (byte)(pbVar14 + -((CARRY1(bVar10,(byte)pbVar14) << 7) >> 7))) << 7;
        ppbVar8 = (byte **)(pbVar14 + -((CARRY1(bVar10,(byte)pbVar14) << 7) >> 7) +
                           (char)(pbVar14 + bVar10));
        param_2 = param_2 + '\x01';
        if (-1 < (char)bVar7) goto LAB_CODE_3231;
        bVar7 = 0x27 - ((char)bVar7 >> 7);
        ppbVar8 = param_2 + (char)(ppbVar8 + bVar7 +
                                  (char)(*param_2 + -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7) +
                                        -((CARRY1((byte)(ppbVar8 + bVar7),
                                                  (byte)(*param_2 +
                                                        -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7)))
                                          << 7) >> 7)));
      }
      bVar7 = (byte)ppbVar8 & (byte)param_3;
      goto LAB_CODE_355f;
    }
    bVar10 = DAT_INTMEM_3d - (cVar2 >> 7);
    bVar1 = CARRY1(bVar7,bVar10);
    cVar2 = bVar1 << 7;
    pbVar6 = *param_2;
    *param_2 = (byte *)(bVar7 + bVar10);
    pbVar14 = param_8;
    if (-1 < cVar2) {
LAB_CODE_3291:
      DAT_INTMEM_41 = pbVar14;
      DAT_INTMEM_30 = DAT_INTMEM_30 | 0x44;
      cVar11 = param_6 - 1;
      if (cVar11 != '\0') {
        cVar2 = CARRY1((byte)ppbVar3,
                       (byte)(pbVar12 + -((CARRY1((byte)pbVar6,cVar11 - (cVar2 >> 7)) << 7) >> 7)))
                << 7;
        ppbVar9 = (byte **)func_0x363f(0x42a8);
        ppbVar8 = ppbVar9;
        if (-1 < cVar2) goto LAB_CODE_32f5;
        cVar2 = (CARRY1((byte)(ppbVar3 +
                              (char)(pbVar12 +
                                    (param_5 -
                                    ((CARRY1((byte)ppbVar9,(byte)(ppbVar9 + -(cVar2 >> 7))) << 7) >>
                                    7)))),
                        cVar11 - ((CARRY1((byte)(pbVar12 +
                                                (param_5 -
                                                ((CARRY1((byte)ppbVar9,
                                                         (byte)(ppbVar9 + -(cVar2 >> 7))) << 7) >> 7
                                                ))),(byte)ppbVar3) << 7) >> 7)) & 27_5) << 7;
        DAT_INTMEM_3f = uStackX0;
        puVar16 = (undefined *)0xff;
        ppbVar8 = (byte **)func_0x3640();
        do {
          bVar1 = ppbVar8 < *param_3 + -(cVar2 >> 7);
LAB_CODE_32fd:
          cVar2 = bVar1 << 7;
          ppbVar9 = ppbVar3;
          while( true ) {
            cVar2 = CARRY1((byte)ppbVar9,(byte)(pbVar12 + -(cVar2 >> 7))) << 7;
            puVar16['\x01'] = 1;
            puVar16['\x02'] = 0x33;
            ppbVar9 = (byte **)func_0x363f();
            ppbVar8 = ppbVar9;
            if (cVar2 < '\0') break;
LAB_CODE_32f5:
            while( true ) {
              ppbVar8 = ppbVar8 + (char)(*param_3 +
                                        (param_5 - ((CARRY1((byte)ppbVar8,param_5) << 7) >> 7)));
              ppbVar13 = ppbVar8 + (char)*param_3;
              ppbVar8 = param_2 + -((CARRY1((byte)ppbVar8,(byte)*param_3) << 7) >> 7);
              if (ppbVar9 == (byte **)0x1) {
                bVar1 = CARRY1((byte)(ppbVar8 + (char)ppbVar13 + (char)pbVar12),
                               cVar11 - ((CARRY1((byte)(ppbVar8 + (char)ppbVar13),(byte)pbVar12) <<
                                         7) >> 7));
                goto LAB_CODE_32fd;
              }
              cVar2 = CARRY1((byte)ppbVar3,
                             (byte)(pbVar12 +
                                   -((CARRY1((byte)pbVar12,
                                             cVar11 - ((CARRY1((byte)ppbVar13,(byte)ppbVar8) << 7)
                                                      >> 7)) << 7) >> 7))) << 7;
              puVar16['\x01'] = 0x3b;
              puVar16['\x02'] = 0x33;
              ppbVar9 = (byte **)func_0x363f();
              if (cVar2 < '\0') break;
              ppbVar8 = param_2 + (char)(ppbVar9 + (char)*param_3 +
                                        (char)(*param_2 +
                                              -((CARRY1((byte)(ppbVar9 + (char)*param_3),
                                                        (byte)param_2) << 7) >> 7)));
            }
          }
          ppbVar8 = ppbVar9 + -(cVar2 >> 7);
          ppbVar13 = ppbVar9 + (char)ppbVar8;
          bVar7 = 0x3c - ((CARRY1((byte)ppbVar9,(byte)ppbVar8) << 7) >> 7);
          cVar2 = CARRY1((byte)(ppbVar13 +
                               (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar13,bVar7) << 7) >> 7)) + bVar7)
                         ,(byte)*param_2) << 7;
          ppbVar8 = ppbVar13 + (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar13,bVar7) << 7) >> 7)) + bVar7
                    + (char)*param_2;
        } while( true );
      }
      bVar7 = (byte)(pbVar6 + DAT_INTMEM_46) | param_5;
      break;
    }
    if (bVar1 == false) {
      DAT_INTMEM_75 = DAT_INTMEM_54;
      ppbVar8 = (byte **)(((byte)pbVar6 | (byte)param_2) ^ (byte)param_8);
      goto LAB_CODE_3239_2;
    }
    pbVar14 = (byte *)((byte)pbVar6 | param_4);
LAB_CODE_30c3:
    do {
      bVar10 = (byte)(pbVar14 + (char)(*param_2 + -(cVar2 >> 7))) | (byte)param_2;
      bVar7 = DAT_INTMEM_4a - ((CARRY1((byte)pbVar14,(byte)(*param_2 + -(cVar2 >> 7))) << 7) >> 7);
      param_2 = param_2 + '\x01';
      bVar4 = bVar10 + bVar7 | param_5;
      bVar5 = (byte)(param_3 + -((CARRY1(bVar10,bVar7) << 7) >> 7) + bVar4) | param_6;
      bVar7 = 0x4e - ((CARRY1(bVar4,(byte)(param_3 + -((CARRY1(bVar10,bVar7) << 7) >> 7))) << 7) >>
                     7);
      bVar1 = CARRY1(bVar5,bVar7);
      pbVar14 = (byte *)(bVar5 + bVar7);
      bVar7 = param_6;
      do {
        param_6 = DAT_INTMEM_40;
        cVar2 = bVar1 << 7;
        param_5 = param_5 - 1;
        if (param_5 != 0) goto LAB_CODE_311e_1;
        param_2 = param_2 + -1;
        if (param_2 == (byte **)0x0) {
          FUN_CODE_3425();
          pbVar6 = (byte *)FUN_CODE_3627();
          param_6 = bVar7;
LAB_CODE_30d5:
          pbVar6 = pbVar6 + '\x01';
          bVar7 = param_6 - (cVar2 >> 7);
          pbVar14 = pbVar6 + bVar7;
          bVar7 = DAT_INTMEM_40 - ((CARRY1((byte)pbVar6,bVar7) << 7) >> 7);
          pbVar6 = pbVar14 + bVar7;
          ppbVar3 = param_3 + -((CARRY1((byte)pbVar14,bVar7) << 7) >> 7);
          ppbVar8 = (byte **)(param_6 - ((CARRY1((byte)pbVar6,(byte)ppbVar3) << 7) >> 7));
          bVar7 = (ppbVar3 + (char)pbVar6 < ppbVar8) << 7;
          ppbVar8 = ppbVar3 + (char)pbVar6 + -(char)ppbVar8;
          goto LAB_CODE_322d;
        }
        pbVar6 = pbVar14 + (char)(pbVar12 + -(cVar2 >> 7));
        cVar2 = (pbVar12 < (byte *)0x41) << 7;
        if (pbVar12 != (byte *)0x41) goto LAB_CODE_30d5;
        bVar7 = read_volatile_1(TH2);
        write_volatile_1(TH2,bVar7 | 0x44);
        cVar2 = (param_2 < (byte **)0x45) << 7;
        if (param_2 == (byte **)0x45) goto code_c0x3124;
        pbVar14 = DAT_INTMEM_41;
        if (param_2 >= (byte **)0x45) goto LAB_CODE_3291;
        *param_2 = *param_2 + '\x01';
        DAT_INTMEM_68 = DAT_INTMEM_68 + -1;
        *param_2 = (byte *)0x16;
        bVar7 = func_0x6714();
        bVar7 = bVar7 & (byte)ppbVar3 ^ (byte)*param_2;
        DAT_INTMEM_5c = DAT_INTMEM_5c ^ 0x3a;
        cVar2 = (param_6 < 0x3c) << 7;
        if (param_6 != 0x3c) {
          bVar10 = read_volatile_1(PCON);
          pbVar14 = (byte *)(bVar7 | bVar10 | (byte)*param_2);
          DAT_INTMEM_47 = *param_2;
          goto LAB_CODE_30c3;
        }
        bVar1 = CARRY1(bVar7,(byte)(pbVar12 + -(cVar2 >> 7)));
        pbVar14 = pbVar12 + -(cVar2 >> 7) + bVar7;
        param_2 = param_2 + -1;
        bVar7 = param_6;
      } while (param_2 != (byte **)0x0);
      cVar2 = (pbVar12 < (byte *)0x43) << 7;
    } while (pbVar12 != (byte *)0x43);
    while( true ) {
      bVar7 = read_volatile_1(CCAPM1);
      bVar10 = FUN_CODE_3425((byte)pbVar14 | bVar7 | (byte)*param_2);
      bVar7 = 0x27 - (cVar2 >> 7);
      bVar4 = bVar10 + bVar7;
      bVar7 = param_6 - ((CARRY1((byte)(*param_2 + -((CARRY1(bVar10,bVar7) << 7) >> 7) + bVar4),
                                 param_4 - ((CARRY1(bVar4,(byte)(*param_2 +
                                                                -((CARRY1(bVar10,bVar7) << 7) >> 7))
                                                   ) << 7) >> 7)) << 7) >> 7);
      pbVar6 = pbVar12 + bVar7;
      *(byte **)ZEXT12(param_2) = pbVar6;
      pbVar14 = *param_2;
      *param_2 = pbVar12 + -((CARRY1((byte)pbVar12,bVar7) << 7) >> 7) + (char)pbVar6;
      if (-1 < CARRY1((byte)pbVar6,(byte)(pbVar12 + -((CARRY1((byte)pbVar12,bVar7) << 7) >> 7))) <<
               7) break;
      bVar7 = ((byte)pbVar14 | (byte)*param_3 | param_6) + DAT_INTMEM_34;
      cVar2 = CARRY1(bVar7,(byte)*param_3) << 7;
      pbVar14 = *param_3 + bVar7;
    }
    param_8 = param_8 + -1;
    pbVar12 = pbVar12 + -1;
    bVar7 = (ppbVar3 < (byte **)0xc1) << 7;
    if (ppbVar3 != (byte **)0xc1) {
      ppbVar8 = (byte **)((byte)pbVar14 | (byte)ppbVar3);
      param_5 = param_5 - 1;
      if (param_5 == 0) {
        if (param_2 == (byte **)0x1) {
          return ppbVar8 + (char)(*param_3 + (char)(pbVar12 + -((char)bVar7 >> 7))) +
                 ((param_4 -
                  (((ppbVar8 + (char)(*param_3 + (char)(pbVar12 + -((char)bVar7 >> 7))) < *param_3)
                   << 7) >> 7)) - (char)*param_3);
        }
LAB_CODE_3239_2:
        DAT_INTMEM_48 = 0x6f;
        bVar7 = FUN_CODE_3370((byte)ppbVar8 & DAT_INTMEM_6d ^ (byte)ppbVar3 ^ param_6);
                    // WARNING: Could not recover jumptable at 0x3246. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar15 = (*(code *)(pbVar17 + bVar7))();
        return (byte **)uVar15;
      }
LAB_CODE_322d:
                    // WARNING: Call to offcut address within same function
      ppbVar8 = (byte **)func_0x329c(ppbVar8);
      28_6 = bVar7 >> 7;
      pbVar14 = pbVar12;
LAB_CODE_3231:
      cVar2 = (ppbVar8 < param_3 + -((char)bVar7 >> 7)) << 7;
      cVar11 = FUN_CODE_3448((byte)(ppbVar8 + -(char)(param_3 + -((char)bVar7 >> 7))) |
                             (byte)*param_3 | param_6 | (byte)*param_2);
      param_5 = cVar11 + (DAT_INTMEM_25 - (cVar2 >> 7)) + param_5;
      pbVar12 = *param_3 + param_5;
      if (*param_2 == (byte *)0x3c) {
        bVar1 = CARRY1((byte)(pbVar12 +
                             (char)(*param_2 + -((CARRY1(param_5,(byte)*param_3) << 7) >> 7) +
                                   (param_4 -
                                   ((CARRY1((byte)pbVar12,
                                            (byte)(*param_2 +
                                                  -((CARRY1(param_5,(byte)*param_3) << 7) >> 7))) <<
                                    7) >> 7)))),
                       (byte)(pbVar14 + -(((*param_2 < (byte *)0x3c) << 7) >> 7)));
        DAT_INTMEM_4b =
             pbVar14 + -(((*param_2 < (byte *)0x3c) << 7) >> 7) +
             (char)(pbVar12 +
                   (char)(*param_2 + -((CARRY1(param_5,(byte)*param_3) << 7) >> 7) +
                         (param_4 -
                         ((CARRY1((byte)pbVar12,
                                  (byte)(*param_2 + -((CARRY1(param_5,(byte)*param_3) << 7) >> 7)))
                          << 7) >> 7))));
      }
      else {
        bVar1 = CARRY1((byte)DAT_INTMEM_4b,DAT_INTMEM_4f);
        DAT_INTMEM_4b = (byte *)((char)DAT_INTMEM_4b + DAT_INTMEM_4f);
        DAT_INTMEM_30 = param_4;
      }
      DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4e - ((bVar1 << 7) >> 7));
      cVar2 = (0xf7 < DAT_INTMEM_4c) << 7;
      cVar11 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
      if ((-1 < cVar2) && (cVar11 != '\0')) {
        bVar10 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != (byte *)0x0) << 7) >> 7));
        bVar7 = DAT_INTMEM_4a - ((((byte *)-(char)DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
        if (((bVar10 < bVar7) << 7 < '\0') &&
           ((bVar10 - bVar7 | (byte)((byte *)-(char)DAT_INTMEM_4d + -(char)DAT_INTMEM_4b)) != 0)) {
          uVar15 = FUN_CODE_37a5();
          return (byte **)uVar15;
        }
        bVar1 = CARRY1((byte)DAT_INTMEM_4b,(byte)DAT_INTMEM_4d);
        DAT_INTMEM_4b = DAT_INTMEM_4b + (char)DAT_INTMEM_4d;
        DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
        cVar2 = '\x02';
        while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar2 != '\0'))) {
          if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
            bVar1 = DAT_INTMEM_4f == 0;
            DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
            DAT_INTMEM_4e = (bVar1 << 7) >> 7;
            if (2b_6 == '\0') {
              uVar15 = 0x46;
            }
            else {
              uVar15 = 0x54;
            }
          }
          else {
            bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
            DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
            DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
            if (2b_6 == '\0') {
              uVar15 = 0x52;
            }
            else {
              uVar15 = 0x51;
            }
          }
          FUN_CODE_3d32(uVar15);
          cVar2 = cVar2 + -1;
        }
        bVar7 = DAT_INTMEM_4f | DAT_INTMEM_4e;
        if (bVar7 != 0) {
          2b_5 = 1;
          29_7 = 1;
        }
        if ((2b_4 != '\0') && (2c_4 != '\x01')) {
          bVar7 = FUN_CODE_34c2();
        }
        2b_4 = 0;
        return (byte **)bVar7;
      }
      bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
      DAT_INTMEM_4b = DAT_INTMEM_4b + -(char)DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      uVar15 = FUN_CODE_37a5();
      return (byte **)uVar15;
    }
    DAT_INTMEM_53 = DAT_INTMEM_53 + '\x01';
    param_2 = (byte **)0x44;
    DAT_INTMEM_43 = DAT_INTMEM_43 & (byte)pbVar14;
    pbVar12 = (byte *)(param_4 - ((char)bVar7 >> 7));
    bVar1 = pbVar14 < pbVar12;
    param_1 = (byte)(pbVar14 + -(char)pbVar12) & (byte)*param_3 | (byte)DAT_INTMEM_4d;
  } while( true );
code_c0x3548:
  FUN_CODE_2dea(bVar7);
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_CODE_2d21();
        if (25_3 != '\x01') goto LAB_CODE_356e;
        if (param_4 == 0x23) break;
        FUN_CODE_2dea();
      }
      bVar7 = param_5 & 0x7f;
      if (param_5 != 0xe7) break;
      29_3 = '\x01';
      FUN_CODE_2dea();
    }
    if (param_5 == 0x67) break;
    if (29_3 == '\0') {
      if (bVar7 != 0x47) {
        if ((((bVar7 == 0x51) || (bVar7 == 0x52)) || (bVar7 == 0x56)) || (bVar7 == 0x5f))
        goto LAB_CODE_3559;
        goto LAB_CODE_355f;
      }
      if (28_0 == 1) {
LAB_CODE_355f:
        FUN_CODE_2dea(bVar7);
LAB_CODE_356e:
        uVar15 = FUN_CODE_2ed6();
        29_7 = 1;
        return (byte **)uVar15;
      }
    }
    else {
      if (param_5 == 0x22) {
        28_0 = 28_0 ^ 1;
        FUN_CODE_2dea();
      }
      else {
        if (param_5 != 0xa2) goto LAB_CODE_355f;
LAB_CODE_3559:
        FUN_CODE_2dea();
      }
    }
  }
  29_3 = '\0';
  goto code_c0x3548;
}



// WARNING: Instruction at (CODE,0x3121) overlaps instruction at (CODE,0x3120)
// 
// WARNING: Type propagation algorithm not settling

byte ** FUN_CODE_3448(byte param_1,byte **param_2,byte **param_3,byte param_4,byte param_5,
                     byte param_6,char param_7,byte *param_8)

{
  bool bVar1;
  char cVar2;
  byte **ppbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  byte bVar7;
  byte **ppbVar8;
  byte **ppbVar9;
  byte bVar10;
  char cVar11;
  byte *pbVar12;
  byte **ppbVar13;
  byte *pbVar14;
  undefined uVar15;
  undefined *puVar16;
  byte *pbVar17;
  undefined uStackX0;
  
  puVar16 = (undefined *)0x0;
  pbVar17 = (byte *)0x8f2c;
  bVar1 = CARRY1(param_1,param_5);
  param_1 = param_1 + param_5;
  ppbVar3 = (byte **)(param_7 + '\x01');
  DAT_INTMEM_2f = DAT_INTMEM_2f | param_1;
  do {
    if (21_3 == '\0') {
      *pbVar17 = param_1;
      uVar15 = FUN_CODE_2fed(DAT_INTMEM_51);
      return (byte **)uVar15;
    }
    ppbVar3 = ppbVar3 + -1;
    cVar2 = CARRY1(param_1 - (char)(*param_2 + -((bVar1 << 7) >> 7)),(byte)*param_2) << 7;
    pbVar14 = *param_2 + (param_1 - (char)(*param_2 + -((bVar1 << 7) >> 7)));
    bVar7 = param_6;
    pbVar12 = DAT_INTMEM_32;
LAB_CODE_311e_1:
    bVar10 = read_volatile_1(P1);
    pbVar6 = (byte *)((byte)pbVar12 | 0xb8 | bVar10);
    param_6 = bVar7;
    pbVar12 = pbVar14;
code_c0x3124:
    bVar7 = (byte)pbVar6 | (byte)*param_2;
    param_2 = param_2 + -1;
    DAT_INTMEM_47 = param_8;
    if (param_2 == (byte **)0x0) {
      ppbVar8 = ppbVar3 + DAT_INTMEM_34 + bVar7;
      ppbVar9 = ppbVar8 + (char)*param_3;
      bVar7 = BANK0_R0 - ((CARRY1((byte)ppbVar8,(byte)*param_3) << 7) >> 7);
      ppbVar8 = ppbVar9 + bVar7;
      bVar7 = -((CARRY1((byte)ppbVar9,bVar7) << 7) >> 7);
      bVar7 = param_6 - ((CARRY1((byte)(param_3 + -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7) +
                                       (char)(ppbVar8 + bVar7)),
                                 param_4 - ((CARRY1((byte)(ppbVar8 + bVar7),
                                                    (byte)(param_3 +
                                                          -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7)
                                                          )) << 7) >> 7)) << 7) >> 7);
      pbVar14 = pbVar12 + (DAT_INTMEM_3d - ((CARRY1((byte)pbVar12,bVar7) << 7) >> 7)) + bVar7;
      bVar7 = read_volatile_1(SOFL);
      write_volatile_1(SOFL,bVar7 | (byte)pbVar12);
      bVar7 = read_volatile_1(FIFLG1);
      write_volatile_1(FIFLG1,bVar7 | 0x46);
      ppbVar8 = (byte **)FUN_CODE_3447(pbVar12);
      param_6 = param_6 - 1;
      if (param_6 == 0) {
        if (param_8 != (byte *)0x49) {
          bVar7 = 0x80;
          goto LAB_CODE_3231;
        }
        ppbVar8 = ppbVar8 + (char)(*param_3 + DAT_INTMEM_3d);
        DAT_INTMEM_3a = *param_2;
        DAT_INTMEM_3b = *param_3;
        bVar10 = ((char)(param_3 +
                        (char)(param_2 + -((CARRY1((byte)ppbVar8,param_5) << 7) >> 7) +
                              (char)(ppbVar8 + param_5 +
                                    ('\x01' - ((CARRY1((byte)(ppbVar8 + param_5),
                                                       (byte)(param_2 +
                                                             -((CARRY1((byte)ppbVar8,param_5) << 7)
                                                              >> 7))) << 7) >> 7))))) +
                 (char)ppbVar3) -
                 ((CARRY1((byte)(param_3 +
                                (char)(param_2 + -((CARRY1((byte)ppbVar8,param_5) << 7) >> 7) +
                                      (char)(ppbVar8 + param_5 +
                                            ('\x01' - ((CARRY1((byte)(ppbVar8 + param_5),
                                                               (byte)(param_2 +
                                                                     -((CARRY1((byte)ppbVar8,param_5
                                                                              ) << 7) >> 7))) << 7)
                                                      >> 7))))),(byte)ppbVar3) << 7) >> 7);
        bVar7 = CARRY1((byte)(pbVar14 + bVar10),
                       (byte)(pbVar14 + -((CARRY1(bVar10,(byte)pbVar14) << 7) >> 7))) << 7;
        ppbVar8 = (byte **)(pbVar14 + -((CARRY1(bVar10,(byte)pbVar14) << 7) >> 7) +
                           (char)(pbVar14 + bVar10));
        param_2 = param_2 + '\x01';
        if (-1 < (char)bVar7) goto LAB_CODE_3231;
        bVar7 = 0x27 - ((char)bVar7 >> 7);
        ppbVar8 = param_2 + (char)(ppbVar8 + bVar7 +
                                  (char)(*param_2 + -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7) +
                                        -((CARRY1((byte)(ppbVar8 + bVar7),
                                                  (byte)(*param_2 +
                                                        -((CARRY1((byte)ppbVar8,bVar7) << 7) >> 7)))
                                          << 7) >> 7)));
      }
      bVar7 = (byte)ppbVar8 & (byte)param_3;
      goto LAB_CODE_355f;
    }
    bVar10 = DAT_INTMEM_3d - (cVar2 >> 7);
    bVar1 = CARRY1(bVar7,bVar10);
    cVar2 = bVar1 << 7;
    pbVar6 = *param_2;
    *param_2 = (byte *)(bVar7 + bVar10);
    pbVar14 = param_8;
    if (-1 < cVar2) {
LAB_CODE_3291:
      DAT_INTMEM_41 = pbVar14;
      DAT_INTMEM_30 = DAT_INTMEM_30 | 0x44;
      cVar11 = param_6 - 1;
      if (cVar11 != '\0') {
        cVar2 = CARRY1((byte)ppbVar3,
                       (byte)(pbVar12 + -((CARRY1((byte)pbVar6,cVar11 - (cVar2 >> 7)) << 7) >> 7)))
                << 7;
        ppbVar9 = (byte **)func_0x363f(0x42a8);
        ppbVar8 = ppbVar9;
        if (-1 < cVar2) goto LAB_CODE_32f5;
        cVar2 = (CARRY1((byte)(ppbVar3 +
                              (char)(pbVar12 +
                                    (param_5 -
                                    ((CARRY1((byte)ppbVar9,(byte)(ppbVar9 + -(cVar2 >> 7))) << 7) >>
                                    7)))),
                        cVar11 - ((CARRY1((byte)(pbVar12 +
                                                (param_5 -
                                                ((CARRY1((byte)ppbVar9,
                                                         (byte)(ppbVar9 + -(cVar2 >> 7))) << 7) >> 7
                                                ))),(byte)ppbVar3) << 7) >> 7)) & 27_5) << 7;
        DAT_INTMEM_3f = uStackX0;
        puVar16 = (undefined *)0xff;
        ppbVar8 = (byte **)func_0x3640();
        do {
          bVar1 = ppbVar8 < *param_3 + -(cVar2 >> 7);
LAB_CODE_32fd:
          cVar2 = bVar1 << 7;
          ppbVar9 = ppbVar3;
          while( true ) {
            cVar2 = CARRY1((byte)ppbVar9,(byte)(pbVar12 + -(cVar2 >> 7))) << 7;
            puVar16['\x01'] = 1;
            puVar16['\x02'] = 0x33;
            ppbVar9 = (byte **)func_0x363f();
            ppbVar8 = ppbVar9;
            if (cVar2 < '\0') break;
LAB_CODE_32f5:
            while( true ) {
              ppbVar8 = ppbVar8 + (char)(*param_3 +
                                        (param_5 - ((CARRY1((byte)ppbVar8,param_5) << 7) >> 7)));
              ppbVar13 = ppbVar8 + (char)*param_3;
              ppbVar8 = param_2 + -((CARRY1((byte)ppbVar8,(byte)*param_3) << 7) >> 7);
              if (ppbVar9 == (byte **)0x1) {
                bVar1 = CARRY1((byte)(ppbVar8 + (char)ppbVar13 + (char)pbVar12),
                               cVar11 - ((CARRY1((byte)(ppbVar8 + (char)ppbVar13),(byte)pbVar12) <<
                                         7) >> 7));
                goto LAB_CODE_32fd;
              }
              cVar2 = CARRY1((byte)ppbVar3,
                             (byte)(pbVar12 +
                                   -((CARRY1((byte)pbVar12,
                                             cVar11 - ((CARRY1((byte)ppbVar13,(byte)ppbVar8) << 7)
                                                      >> 7)) << 7) >> 7))) << 7;
              puVar16['\x01'] = 0x3b;
              puVar16['\x02'] = 0x33;
              ppbVar9 = (byte **)func_0x363f();
              if (cVar2 < '\0') break;
              ppbVar8 = param_2 + (char)(ppbVar9 + (char)*param_3 +
                                        (char)(*param_2 +
                                              -((CARRY1((byte)(ppbVar9 + (char)*param_3),
                                                        (byte)param_2) << 7) >> 7)));
            }
          }
          ppbVar8 = ppbVar9 + -(cVar2 >> 7);
          ppbVar13 = ppbVar9 + (char)ppbVar8;
          bVar7 = 0x3c - ((CARRY1((byte)ppbVar9,(byte)ppbVar8) << 7) >> 7);
          cVar2 = CARRY1((byte)(ppbVar13 +
                               (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar13,bVar7) << 7) >> 7)) + bVar7)
                         ,(byte)*param_2) << 7;
          ppbVar8 = ppbVar13 + (DAT_INTMEM_40 - ((CARRY1((byte)ppbVar13,bVar7) << 7) >> 7)) + bVar7
                    + (char)*param_2;
        } while( true );
      }
      bVar7 = (byte)(pbVar6 + DAT_INTMEM_46) | param_5;
      break;
    }
    if (bVar1 == false) {
      DAT_INTMEM_75 = DAT_INTMEM_54;
      ppbVar8 = (byte **)(((byte)pbVar6 | (byte)param_2) ^ (byte)param_8);
      goto LAB_CODE_3239_2;
    }
    pbVar14 = (byte *)((byte)pbVar6 | param_4);
LAB_CODE_30c3:
    do {
      bVar10 = (byte)(pbVar14 + (char)(*param_2 + -(cVar2 >> 7))) | (byte)param_2;
      bVar7 = DAT_INTMEM_4a - ((CARRY1((byte)pbVar14,(byte)(*param_2 + -(cVar2 >> 7))) << 7) >> 7);
      param_2 = param_2 + '\x01';
      bVar4 = bVar10 + bVar7 | param_5;
      bVar5 = (byte)(param_3 + -((CARRY1(bVar10,bVar7) << 7) >> 7) + bVar4) | param_6;
      bVar7 = 0x4e - ((CARRY1(bVar4,(byte)(param_3 + -((CARRY1(bVar10,bVar7) << 7) >> 7))) << 7) >>
                     7);
      bVar1 = CARRY1(bVar5,bVar7);
      pbVar14 = (byte *)(bVar5 + bVar7);
      bVar7 = param_6;
      do {
        param_6 = DAT_INTMEM_40;
        cVar2 = bVar1 << 7;
        param_5 = param_5 - 1;
        if (param_5 != 0) goto LAB_CODE_311e_1;
        param_2 = param_2 + -1;
        if (param_2 == (byte **)0x0) {
          FUN_CODE_3425();
          pbVar6 = (byte *)FUN_CODE_3627();
          param_6 = bVar7;
LAB_CODE_30d5:
          pbVar6 = pbVar6 + '\x01';
          bVar7 = param_6 - (cVar2 >> 7);
          pbVar14 = pbVar6 + bVar7;
          bVar7 = DAT_INTMEM_40 - ((CARRY1((byte)pbVar6,bVar7) << 7) >> 7);
          pbVar6 = pbVar14 + bVar7;
          ppbVar3 = param_3 + -((CARRY1((byte)pbVar14,bVar7) << 7) >> 7);
          ppbVar8 = (byte **)(param_6 - ((CARRY1((byte)pbVar6,(byte)ppbVar3) << 7) >> 7));
          bVar7 = (ppbVar3 + (char)pbVar6 < ppbVar8) << 7;
          ppbVar8 = ppbVar3 + (char)pbVar6 + -(char)ppbVar8;
          goto LAB_CODE_322d;
        }
        pbVar6 = pbVar14 + (char)(pbVar12 + -(cVar2 >> 7));
        cVar2 = (pbVar12 < (byte *)0x41) << 7;
        if (pbVar12 != (byte *)0x41) goto LAB_CODE_30d5;
        bVar7 = read_volatile_1(TH2);
        write_volatile_1(TH2,bVar7 | 0x44);
        cVar2 = (param_2 < (byte **)0x45) << 7;
        if (param_2 == (byte **)0x45) goto code_c0x3124;
        pbVar14 = DAT_INTMEM_41;
        if (param_2 >= (byte **)0x45) goto LAB_CODE_3291;
        *param_2 = *param_2 + '\x01';
        DAT_INTMEM_68 = DAT_INTMEM_68 + -1;
        *param_2 = (byte *)0x16;
        bVar7 = func_0x6714();
        bVar7 = bVar7 & (byte)ppbVar3 ^ (byte)*param_2;
        DAT_INTMEM_5c = DAT_INTMEM_5c ^ 0x3a;
        cVar2 = (param_6 < 0x3c) << 7;
        if (param_6 != 0x3c) {
          bVar10 = read_volatile_1(PCON);
          pbVar14 = (byte *)(bVar7 | bVar10 | (byte)*param_2);
          DAT_INTMEM_47 = *param_2;
          goto LAB_CODE_30c3;
        }
        bVar1 = CARRY1(bVar7,(byte)(pbVar12 + -(cVar2 >> 7)));
        pbVar14 = pbVar12 + -(cVar2 >> 7) + bVar7;
        param_2 = param_2 + -1;
        bVar7 = param_6;
      } while (param_2 != (byte **)0x0);
      cVar2 = (pbVar12 < (byte *)0x43) << 7;
    } while (pbVar12 != (byte *)0x43);
    while( true ) {
      bVar7 = read_volatile_1(CCAPM1);
      bVar10 = FUN_CODE_3425((byte)pbVar14 | bVar7 | (byte)*param_2);
      bVar7 = 0x27 - (cVar2 >> 7);
      bVar4 = bVar10 + bVar7;
      bVar7 = param_6 - ((CARRY1((byte)(*param_2 + -((CARRY1(bVar10,bVar7) << 7) >> 7) + bVar4),
                                 param_4 - ((CARRY1(bVar4,(byte)(*param_2 +
                                                                -((CARRY1(bVar10,bVar7) << 7) >> 7))
                                                   ) << 7) >> 7)) << 7) >> 7);
      pbVar6 = pbVar12 + bVar7;
      *(byte **)ZEXT12(param_2) = pbVar6;
      pbVar14 = *param_2;
      *param_2 = pbVar12 + -((CARRY1((byte)pbVar12,bVar7) << 7) >> 7) + (char)pbVar6;
      if (-1 < CARRY1((byte)pbVar6,(byte)(pbVar12 + -((CARRY1((byte)pbVar12,bVar7) << 7) >> 7))) <<
               7) break;
      bVar7 = ((byte)pbVar14 | (byte)*param_3 | param_6) + DAT_INTMEM_34;
      cVar2 = CARRY1(bVar7,(byte)*param_3) << 7;
      pbVar14 = *param_3 + bVar7;
    }
    param_8 = param_8 + -1;
    pbVar12 = pbVar12 + -1;
    bVar7 = (ppbVar3 < (byte **)0xc1) << 7;
    if (ppbVar3 != (byte **)0xc1) {
      ppbVar8 = (byte **)((byte)pbVar14 | (byte)ppbVar3);
      param_5 = param_5 - 1;
      if (param_5 == 0) {
        if (param_2 == (byte **)0x1) {
          return ppbVar8 + (char)(*param_3 + (char)(pbVar12 + -((char)bVar7 >> 7))) +
                 ((param_4 -
                  (((ppbVar8 + (char)(*param_3 + (char)(pbVar12 + -((char)bVar7 >> 7))) < *param_3)
                   << 7) >> 7)) - (char)*param_3);
        }
LAB_CODE_3239_2:
        DAT_INTMEM_48 = 0x6f;
        bVar7 = FUN_CODE_3370((byte)ppbVar8 & DAT_INTMEM_6d ^ (byte)ppbVar3 ^ param_6);
                    // WARNING: Could not recover jumptable at 0x3246. Too many branches
                    // WARNING: Treating indirect jump as call
        uVar15 = (*(code *)(pbVar17 + bVar7))();
        return (byte **)uVar15;
      }
LAB_CODE_322d:
                    // WARNING: Call to offcut address within same function
      ppbVar8 = (byte **)func_0x329c(ppbVar8);
      28_6 = bVar7 >> 7;
      pbVar14 = pbVar12;
LAB_CODE_3231:
      cVar2 = (ppbVar8 < param_3 + -((char)bVar7 >> 7)) << 7;
      cVar11 = FUN_CODE_3448((byte)(ppbVar8 + -(char)(param_3 + -((char)bVar7 >> 7))) |
                             (byte)*param_3 | param_6 | (byte)*param_2);
      param_5 = cVar11 + (DAT_INTMEM_25 - (cVar2 >> 7)) + param_5;
      pbVar12 = *param_3 + param_5;
      if (*param_2 == (byte *)0x3c) {
        bVar1 = CARRY1((byte)(pbVar12 +
                             (char)(*param_2 + -((CARRY1(param_5,(byte)*param_3) << 7) >> 7) +
                                   (param_4 -
                                   ((CARRY1((byte)pbVar12,
                                            (byte)(*param_2 +
                                                  -((CARRY1(param_5,(byte)*param_3) << 7) >> 7))) <<
                                    7) >> 7)))),
                       (byte)(pbVar14 + -(((*param_2 < (byte *)0x3c) << 7) >> 7)));
        DAT_INTMEM_4b =
             pbVar14 + -(((*param_2 < (byte *)0x3c) << 7) >> 7) +
             (char)(pbVar12 +
                   (char)(*param_2 + -((CARRY1(param_5,(byte)*param_3) << 7) >> 7) +
                         (param_4 -
                         ((CARRY1((byte)pbVar12,
                                  (byte)(*param_2 + -((CARRY1(param_5,(byte)*param_3) << 7) >> 7)))
                          << 7) >> 7))));
      }
      else {
        bVar1 = CARRY1((byte)DAT_INTMEM_4b,DAT_INTMEM_4f);
        DAT_INTMEM_4b = (byte *)((char)DAT_INTMEM_4b + DAT_INTMEM_4f);
        DAT_INTMEM_30 = param_4;
      }
      DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4e - ((bVar1 << 7) >> 7));
      cVar2 = (0xf7 < DAT_INTMEM_4c) << 7;
      cVar11 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
      if ((-1 < cVar2) && (cVar11 != '\0')) {
        bVar10 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != (byte *)0x0) << 7) >> 7));
        bVar7 = DAT_INTMEM_4a - ((((byte *)-(char)DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
        if (((bVar10 < bVar7) << 7 < '\0') &&
           ((bVar10 - bVar7 | (byte)((byte *)-(char)DAT_INTMEM_4d + -(char)DAT_INTMEM_4b)) != 0)) {
          uVar15 = FUN_CODE_37a5();
          return (byte **)uVar15;
        }
        bVar1 = CARRY1((byte)DAT_INTMEM_4b,(byte)DAT_INTMEM_4d);
        DAT_INTMEM_4b = DAT_INTMEM_4b + (char)DAT_INTMEM_4d;
        DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
        cVar2 = '\x02';
        while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar2 != '\0'))) {
          if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
            bVar1 = DAT_INTMEM_4f == 0;
            DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
            DAT_INTMEM_4e = (bVar1 << 7) >> 7;
            if (2b_6 == '\0') {
              uVar15 = 0x46;
            }
            else {
              uVar15 = 0x54;
            }
          }
          else {
            bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
            DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
            DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
            if (2b_6 == '\0') {
              uVar15 = 0x52;
            }
            else {
              uVar15 = 0x51;
            }
          }
          FUN_CODE_3d32(uVar15);
          cVar2 = cVar2 + -1;
        }
        bVar7 = DAT_INTMEM_4f | DAT_INTMEM_4e;
        if (bVar7 != 0) {
          2b_5 = 1;
          29_7 = 1;
        }
        if ((2b_4 != '\0') && (2c_4 != '\x01')) {
          bVar7 = FUN_CODE_34c2();
        }
        2b_4 = 0;
        return (byte **)bVar7;
      }
      bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
      DAT_INTMEM_4b = DAT_INTMEM_4b + -(char)DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      uVar15 = FUN_CODE_37a5();
      return (byte **)uVar15;
    }
    DAT_INTMEM_53 = DAT_INTMEM_53 + '\x01';
    param_2 = (byte **)0x44;
    DAT_INTMEM_43 = DAT_INTMEM_43 & (byte)pbVar14;
    pbVar12 = (byte *)(param_4 - ((char)bVar7 >> 7));
    bVar1 = pbVar14 < pbVar12;
    param_1 = (byte)(pbVar14 + -(char)pbVar12) & (byte)*param_3 | (byte)DAT_INTMEM_4d;
  } while( true );
code_c0x3548:
  FUN_CODE_2dea(bVar7);
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_CODE_2d21();
        if (25_3 != '\x01') goto LAB_CODE_356e;
        if (param_4 == 0x23) break;
        FUN_CODE_2dea();
      }
      bVar7 = param_5 & 0x7f;
      if (param_5 != 0xe7) break;
      29_3 = '\x01';
      FUN_CODE_2dea();
    }
    if (param_5 == 0x67) break;
    if (29_3 == '\0') {
      if (bVar7 != 0x47) {
        if ((((bVar7 == 0x51) || (bVar7 == 0x52)) || (bVar7 == 0x56)) || (bVar7 == 0x5f))
        goto LAB_CODE_3559;
        goto LAB_CODE_355f;
      }
      if (28_0 == 1) {
LAB_CODE_355f:
        FUN_CODE_2dea(bVar7);
LAB_CODE_356e:
        uVar15 = FUN_CODE_2ed6();
        29_7 = 1;
        return (byte **)uVar15;
      }
    }
    else {
      if (param_5 == 0x22) {
        28_0 = 28_0 ^ 1;
        FUN_CODE_2dea();
      }
      else {
        if (param_5 != 0xa2) goto LAB_CODE_355f;
LAB_CODE_3559:
        FUN_CODE_2dea();
      }
    }
  }
  29_3 = '\0';
  goto code_c0x3548;
}



void FUN_CODE_347d(void)

{
  FUN_CODE_2fed(DAT_INTMEM_51,DAT_INTMEM_50,DAT_INTMEM_48,DAT_INTMEM_49);
  return;
}



void FUN_CODE_348a(undefined param_1)

{
  FUN_CODE_3d41(0x67);
  FUN_CODE_3d32(param_1);
  FUN_CODE_3d41(0xe7);
  return;
}



void FUN_CODE_3493(void)

{
  FUN_CODE_3d32();
  FUN_CODE_3d41(0xe7);
  return;
}



void FUN_CODE_349c(void)

{
  undefined uVar1;
  
  uVar1 = BANK0_R0;
  2b_4 = 1;
  2d_6 = 1;
  FUN_CODE_3667();
  BANK0_R0 = uVar1;
  return;
}



void FUN_CODE_349e(void)

{
  undefined uVar1;
  
  uVar1 = BANK0_R0;
  2d_6 = 1;
  FUN_CODE_3667();
  BANK0_R0 = uVar1;
  return;
}



void FUN_CODE_34aa(void)

{
  DAT_EXTMEM_06c6 = 0;
  return;
}



void FUN_CODE_34b1(void)

{
  2d_7 = 1;
  FUN_CODE_366c();
  return;
}



void FUN_CODE_34b3(void)

{
  FUN_CODE_366c();
  return;
}



void FUN_CODE_34b7(void)

{
  FUN_CODE_3d32(0x46);
  FUN_CODE_3d32(0x46);
  return;
}



void FUN_CODE_34c2(void)

{
  if ((28_5 != '\0') && (BANK2_R2 == '\0')) {
    FUN_CODE_1182();
  }
  FUN_CODE_2ec4();
  2d_0 = 0;
  return;
}



void FUN_CODE_34d2(void)

{
  if ((BANK2_R2 == '\0') && (25_4 != '\x01')) {
    FUN_CODE_2e43();
  }
  return;
}



void FUN_CODE_34d6(void)

{
  if (25_4 != '\x01') {
    FUN_CODE_2e43();
  }
  return;
}



void FUN_CODE_34d9(void)

{
  FUN_CODE_2e43();
  return;
}



void FUN_CODE_34e4(char param_1,byte param_2)

{
  byte bVar1;
  
  28_0 = 2c_3 != '\0';
  29_3 = '\0';
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            FUN_CODE_2d21();
            if (25_3 != '\x01') goto LAB_CODE_356e;
            if (param_1 == '#') break;
            FUN_CODE_2dea();
          }
          bVar1 = param_2 & 0x7f;
          if (param_2 != 0xe7) break;
          29_3 = '\x01';
          FUN_CODE_2dea();
        }
        if (param_2 != 0x67) break;
        29_3 = '\0';
        FUN_CODE_2dea();
      }
      if (29_3 == '\0') break;
      if (param_2 == 0x22) {
        28_0 = (bool)(28_0 ^ 1);
        FUN_CODE_2dea();
      }
      else {
        if (param_2 != 0xa2) goto LAB_CODE_355f;
LAB_CODE_3559:
        FUN_CODE_2dea();
      }
    }
    if (bVar1 != 0x47) {
      if ((((bVar1 == 0x51) || (bVar1 == 0x52)) || (bVar1 == 0x56)) || (bVar1 == 0x5f))
      goto LAB_CODE_3559;
      break;
    }
  } while (28_0 != true);
LAB_CODE_355f:
  FUN_CODE_2dea();
LAB_CODE_356e:
  FUN_CODE_2ed6();
  29_7 = 1;
  return;
}



void FUN_CODE_3576(void)

{
  short sVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  char in_PSW;
  byte *pbVar7;
  
  if (2d_2 == '\0') {
    cVar6 = FUN_CODE_347d();
    if ((((in_PSW < '\0') || (cVar6 == '\0')) || (2d_4 == '\x01')) || (22_0 == '\0')) {
      FUN_CODE_347d();
      if (in_PSW < '\0') {
        FUN_CODE_348a(0x50);
        FUN_CODE_348a(0x49);
        29_7 = 1;
        2d_4 = '\x01';
      }
      else {
        29_1 = '\0';
        2d_4 = '\0';
        if (2c_3 != '\0') {
          FUN_CODE_348a(0x22);
        }
        22_5 = 1;
      }
    }
    else {
      22_0 = '\0';
      FUN_CODE_3d32(0x47);
      FUN_CODE_348a(0x49);
      29_7 = 1;
    }
  }
  else {
    2d_2 = '\0';
    if (DAT_EXTMEM_0055 == '\x10') {
      bVar3 = 8;
    }
    else {
      if (DAT_EXTMEM_0055 == '@') {
        bVar3 = 0xc;
      }
      else {
        bVar3 = 10;
      }
    }
    pbVar7 = (byte *)0x6a0;
    do {
      if (*pbVar7 == 0) {
        29_1 = '\0';
        break;
      }
      sVar1 = (ushort)*pbVar7 * (ushort)bVar3;
      bVar4 = (byte)sVar1;
      bVar2 = (byte)((ushort)sVar1 >> 8);
      DAT_INTMEM_51 = bVar4 + DAT_INTMEM_53;
      bVar4 = DAT_INTMEM_52 - ((CARRY1(bVar4,DAT_INTMEM_53) << 7) >> 7);
      cVar6 = CARRY1(bVar2,bVar4) << 7;
      DAT_INTMEM_50 = bVar2 + bVar4;
      pbVar7 = pbVar7 + 1;
      cVar5 = FUN_CODE_347d(DAT_INTMEM_51);
    } while ((cVar6 < '\0') || (cVar5 == '\0'));
    if ((29_1 != '\0') && (2c_3 != '\0')) {
      FUN_CODE_348a(0x22);
    }
    22_0 = '\x01';
  }
  return;
}



void FUN_CODE_3605(void)

{
  if (22_7 != '\x01') {
    IE1 = 0;
    P1_0 = 0;
  }
  2a_2 = 1;
  P1_5 = 1;
  P1_6 = 0;
  EX0 = 1;
  EX1 = 1;
  EA = 1;
  return;
}



void FUN_CODE_361d(void)

{
  if (2c_6 != '\0') {
    2c_6 = '\0';
    FUN_CODE_349e();
    if (((BANK2_R0 != '\n') && (BANK2_R0 != '\v')) && (BANK2_R0 != '\f')) {
      2e_5 = 1;
    }
  }
  return;
}



void FUN_CODE_3627(char param_1)

{
  if (((param_1 != '\n') && (param_1 != '\v')) && (param_1 != '\f')) {
    2e_5 = 1;
  }
  return;
}



void FUN_CODE_3639(void)

{
  undefined uVar1;
  
  uVar1 = BANK0_R0;
  FUN_CODE_361d();
  if (2c_4 == '\0') {
    if (P1_1 == '\0') {
      2c_6 = 1;
    }
    else {
      FUN_CODE_349e();
    }
  }
  else {
    2c_4 = '\0';
    FUN_CODE_34c2();
  }
  FUN_CODE_3da8(BANK2_R0);
  BANK0_R0 = uVar1;
  return;
}



void FUN_CODE_365c(void)

{
  undefined uVar1;
  
  uVar1 = BANK0_R0;
  FUN_CODE_361d();
  FUN_CODE_3da8();
  BANK0_R0 = uVar1;
  return;
}



void FUN_CODE_3667(void)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined uVar7;
  
  2b_6 = '\x01';
  if ((2b_1 == '\x01') || (2e_4 == '\x01')) {
    if (2b_0 != '\0') {
      BANK1_R4 = 0x32;
      FUN_CODE_2fc0();
    }
    if (DAT_EXTMEM_0055 == '\x10') {
      DAT_INTMEM_54 = 3;
    }
    else {
      DAT_INTMEM_54 = 4;
    }
    if (2e_2 != '\0') {
      2e_2 = '\0';
      sVar2 = (ushort)(DAT_INTMEM_57 << 1 | DAT_INTMEM_57 >> 7) * (ushort)DAT_INTMEM_54;
      DAT_INTMEM_4d = (byte)sVar2;
      DAT_INTMEM_4c = (byte)((ushort)sVar2 >> 8);
    }
    if (2d_7 != '\0') {
      DAT_INTMEM_4f = DAT_INTMEM_54;
    }
    if (2d_6 != '\0') {
      DAT_INTMEM_4f = DAT_INTMEM_54 << 1;
    }
    2d_7 = '\0';
    2d_6 = '\0';
    if (2e_3 != '\0') {
      2e_3 = '\0';
      if ((DAT_INTMEM_4a < 8) << 7 < '\0') {
        DAT_INTMEM_4f = -DAT_INTMEM_4b;
        DAT_INTMEM_4e = 8 - (DAT_INTMEM_4a - (((DAT_INTMEM_4b != 0) << 7) >> 7));
      }
      else {
        DAT_INTMEM_4f = DAT_INTMEM_4d - DAT_INTMEM_4b;
        DAT_INTMEM_4e =
             (DAT_INTMEM_4c + 8) - (DAT_INTMEM_4a - (((DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7));
      }
    }
    if (2b_4 != '\0') {
      FUN_CODE_3d32(0x56);
      bVar4 = DAT_INTMEM_54 << 1 | DAT_INTMEM_54 >> 7;
      bVar1 = CARRY1(DAT_INTMEM_4b,bVar4);
      DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
      DAT_INTMEM_4a = DAT_INTMEM_4a - ((bVar1 << 7) >> 7);
      if ((DAT_INTMEM_4e == 0) &&
         (bVar5 = DAT_INTMEM_4f - bVar4, (DAT_INTMEM_4f < bVar4) << 7 < '\0')) {
        2b_6 = '\0';
        DAT_INTMEM_4f = bVar4 - DAT_INTMEM_4f;
        bVar4 = bVar5;
      }
      else {
        bVar1 = DAT_INTMEM_4f < bVar4;
        DAT_INTMEM_4f = DAT_INTMEM_4f - bVar4;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
      }
      2e_7 = 1;
      FUN_CODE_348a(0x49,bVar4);
    }
    if (2b_6 == '\0') {
      bVar4 = -DAT_INTMEM_4f;
      cVar3 = -(DAT_INTMEM_4e - (((DAT_INTMEM_4b < DAT_INTMEM_4f) << 7) >> 7));
    }
    else {
      cVar3 = DAT_INTMEM_4e - ((CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4f) << 7) >> 7);
      bVar4 = DAT_INTMEM_4f;
    }
    DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
    DAT_INTMEM_4a = DAT_INTMEM_4a + cVar3;
    cVar3 = (0xf7 < DAT_INTMEM_4c) << 7;
    cVar6 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
    if ((cVar3 < '\0') || (cVar6 == '\0')) {
      bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
      DAT_INTMEM_4b = DAT_INTMEM_4b - DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      FUN_CODE_37a5();
      return;
    }
    bVar5 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != 0) << 7) >> 7));
    bVar4 = DAT_INTMEM_4a - (((-DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
    if (((bVar5 < bVar4) << 7 < '\0') && ((bVar5 - bVar4 | -DAT_INTMEM_4d - DAT_INTMEM_4b) != 0)) {
      FUN_CODE_37a5();
      return;
    }
    bVar1 = CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4d);
    DAT_INTMEM_4b = DAT_INTMEM_4b + DAT_INTMEM_4d;
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
    cVar3 = '\x02';
    while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar3 != '\0'))) {
      if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
        bVar1 = DAT_INTMEM_4f == 0;
        DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
        DAT_INTMEM_4e = (bVar1 << 7) >> 7;
        if (2b_6 == '\0') {
          uVar7 = 0x46;
        }
        else {
          uVar7 = 0x54;
        }
      }
      else {
        bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
        DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
        if (2b_6 == '\0') {
          uVar7 = 0x52;
        }
        else {
          uVar7 = 0x51;
        }
      }
      FUN_CODE_3d32(uVar7);
      cVar3 = cVar3 + -1;
    }
    if ((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0) {
      2b_5 = 1;
      29_7 = 1;
    }
    if ((2b_4 != '\0') && (2c_4 != '\x01')) {
      FUN_CODE_34c2();
    }
    2b_4 = '\0';
  }
  else {
    if (24_4 != '\x01') {
      24_4 = '\x01';
      BANK1_R1 = 0;
    }
    2d_5 = 1;
  }
  return;
}



void FUN_CODE_366c(void)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined uVar7;
  
  2b_6 = '\0';
  if ((2b_1 == '\x01') || (2e_4 == '\x01')) {
    if (2b_0 != '\0') {
      BANK1_R4 = 0x32;
      FUN_CODE_2fc0();
    }
    if (DAT_EXTMEM_0055 == '\x10') {
      DAT_INTMEM_54 = 3;
    }
    else {
      DAT_INTMEM_54 = 4;
    }
    if (2e_2 != '\0') {
      2e_2 = '\0';
      sVar2 = (ushort)(DAT_INTMEM_57 << 1 | DAT_INTMEM_57 >> 7) * (ushort)DAT_INTMEM_54;
      DAT_INTMEM_4d = (byte)sVar2;
      DAT_INTMEM_4c = (byte)((ushort)sVar2 >> 8);
    }
    if (2d_7 != '\0') {
      DAT_INTMEM_4f = DAT_INTMEM_54;
    }
    if (2d_6 != '\0') {
      DAT_INTMEM_4f = DAT_INTMEM_54 << 1;
    }
    2d_7 = '\0';
    2d_6 = '\0';
    if (2e_3 != '\0') {
      2e_3 = '\0';
      if ((DAT_INTMEM_4a < 8) << 7 < '\0') {
        DAT_INTMEM_4f = -DAT_INTMEM_4b;
        DAT_INTMEM_4e = 8 - (DAT_INTMEM_4a - (((DAT_INTMEM_4b != 0) << 7) >> 7));
      }
      else {
        DAT_INTMEM_4f = DAT_INTMEM_4d - DAT_INTMEM_4b;
        DAT_INTMEM_4e =
             (DAT_INTMEM_4c + 8) - (DAT_INTMEM_4a - (((DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7));
      }
    }
    if (2b_4 != '\0') {
      FUN_CODE_3d32(0x56);
      bVar4 = DAT_INTMEM_54 << 1 | DAT_INTMEM_54 >> 7;
      bVar1 = CARRY1(DAT_INTMEM_4b,bVar4);
      DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
      DAT_INTMEM_4a = DAT_INTMEM_4a - ((bVar1 << 7) >> 7);
      if ((DAT_INTMEM_4e == 0) &&
         (bVar5 = DAT_INTMEM_4f - bVar4, (DAT_INTMEM_4f < bVar4) << 7 < '\0')) {
        2b_6 = '\0';
        DAT_INTMEM_4f = bVar4 - DAT_INTMEM_4f;
        bVar4 = bVar5;
      }
      else {
        bVar1 = DAT_INTMEM_4f < bVar4;
        DAT_INTMEM_4f = DAT_INTMEM_4f - bVar4;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
      }
      2e_7 = 1;
      FUN_CODE_348a(0x49,bVar4);
    }
    if (2b_6 == '\0') {
      bVar4 = -DAT_INTMEM_4f;
      cVar3 = -(DAT_INTMEM_4e - (((DAT_INTMEM_4b < DAT_INTMEM_4f) << 7) >> 7));
    }
    else {
      cVar3 = DAT_INTMEM_4e - ((CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4f) << 7) >> 7);
      bVar4 = DAT_INTMEM_4f;
    }
    DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
    DAT_INTMEM_4a = DAT_INTMEM_4a + cVar3;
    cVar3 = (0xf7 < DAT_INTMEM_4c) << 7;
    cVar6 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
    if ((cVar3 < '\0') || (cVar6 == '\0')) {
      bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
      DAT_INTMEM_4b = DAT_INTMEM_4b - DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      FUN_CODE_37a5();
      return;
    }
    bVar5 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != 0) << 7) >> 7));
    bVar4 = DAT_INTMEM_4a - (((-DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
    if (((bVar5 < bVar4) << 7 < '\0') && ((bVar5 - bVar4 | -DAT_INTMEM_4d - DAT_INTMEM_4b) != 0)) {
      FUN_CODE_37a5();
      return;
    }
    bVar1 = CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4d);
    DAT_INTMEM_4b = DAT_INTMEM_4b + DAT_INTMEM_4d;
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
    cVar3 = '\x02';
    while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar3 != '\0'))) {
      if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
        bVar1 = DAT_INTMEM_4f == 0;
        DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
        DAT_INTMEM_4e = (bVar1 << 7) >> 7;
        if (2b_6 == '\0') {
          uVar7 = 0x46;
        }
        else {
          uVar7 = 0x54;
        }
      }
      else {
        bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
        DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
        if (2b_6 == '\0') {
          uVar7 = 0x52;
        }
        else {
          uVar7 = 0x51;
        }
      }
      FUN_CODE_3d32(uVar7);
      cVar3 = cVar3 + -1;
    }
    if ((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0) {
      2b_5 = 1;
      29_7 = 1;
    }
    if ((2b_4 != '\0') && (2c_4 != '\x01')) {
      FUN_CODE_34c2();
    }
    2b_4 = '\0';
  }
  else {
    if (24_4 != '\x01') {
      24_4 = '\x01';
      BANK1_R1 = 0;
    }
    2d_5 = 1;
  }
  return;
}



void FUN_CODE_3671(void)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined uVar7;
  
  2b_6 = '\x01';
  2b_4 = '\x01';
  2e_3 = '\x01';
  if ((2b_1 == '\x01') || (2e_4 == '\x01')) {
    if (2b_0 != '\0') {
      BANK1_R4 = 0x32;
      FUN_CODE_2fc0();
    }
    if (DAT_EXTMEM_0055 == '\x10') {
      DAT_INTMEM_54 = 3;
    }
    else {
      DAT_INTMEM_54 = 4;
    }
    if (2e_2 != '\0') {
      2e_2 = '\0';
      sVar2 = (ushort)(DAT_INTMEM_57 << 1 | DAT_INTMEM_57 >> 7) * (ushort)DAT_INTMEM_54;
      DAT_INTMEM_4d = (byte)sVar2;
      DAT_INTMEM_4c = (byte)((ushort)sVar2 >> 8);
    }
    if (2d_7 != '\0') {
      DAT_INTMEM_4f = DAT_INTMEM_54;
    }
    if (2d_6 != '\0') {
      DAT_INTMEM_4f = DAT_INTMEM_54 << 1;
    }
    2d_7 = '\0';
    2d_6 = '\0';
    if (2e_3 != '\0') {
      2e_3 = '\0';
      if ((DAT_INTMEM_4a < 8) << 7 < '\0') {
        DAT_INTMEM_4f = -DAT_INTMEM_4b;
        DAT_INTMEM_4e = 8 - (DAT_INTMEM_4a - (((DAT_INTMEM_4b != 0) << 7) >> 7));
      }
      else {
        DAT_INTMEM_4f = DAT_INTMEM_4d - DAT_INTMEM_4b;
        DAT_INTMEM_4e =
             (DAT_INTMEM_4c + 8) - (DAT_INTMEM_4a - (((DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7));
      }
    }
    if (2b_4 != '\0') {
      FUN_CODE_3d32(0x56);
      bVar4 = DAT_INTMEM_54 << 1 | DAT_INTMEM_54 >> 7;
      bVar1 = CARRY1(DAT_INTMEM_4b,bVar4);
      DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
      DAT_INTMEM_4a = DAT_INTMEM_4a - ((bVar1 << 7) >> 7);
      if ((DAT_INTMEM_4e == 0) &&
         (bVar5 = DAT_INTMEM_4f - bVar4, (DAT_INTMEM_4f < bVar4) << 7 < '\0')) {
        2b_6 = '\0';
        DAT_INTMEM_4f = bVar4 - DAT_INTMEM_4f;
        bVar4 = bVar5;
      }
      else {
        bVar1 = DAT_INTMEM_4f < bVar4;
        DAT_INTMEM_4f = DAT_INTMEM_4f - bVar4;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
      }
      2e_7 = 1;
      FUN_CODE_348a(0x49,bVar4);
    }
    if (2b_6 == '\0') {
      bVar4 = -DAT_INTMEM_4f;
      cVar3 = -(DAT_INTMEM_4e - (((DAT_INTMEM_4b < DAT_INTMEM_4f) << 7) >> 7));
    }
    else {
      cVar3 = DAT_INTMEM_4e - ((CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4f) << 7) >> 7);
      bVar4 = DAT_INTMEM_4f;
    }
    DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
    DAT_INTMEM_4a = DAT_INTMEM_4a + cVar3;
    cVar3 = (0xf7 < DAT_INTMEM_4c) << 7;
    cVar6 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
    if ((cVar3 < '\0') || (cVar6 == '\0')) {
      bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
      DAT_INTMEM_4b = DAT_INTMEM_4b - DAT_INTMEM_4d;
      DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
      FUN_CODE_37a5();
      return;
    }
    bVar5 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != 0) << 7) >> 7));
    bVar4 = DAT_INTMEM_4a - (((-DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
    if (((bVar5 < bVar4) << 7 < '\0') && ((bVar5 - bVar4 | -DAT_INTMEM_4d - DAT_INTMEM_4b) != 0)) {
      FUN_CODE_37a5();
      return;
    }
    bVar1 = CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4d);
    DAT_INTMEM_4b = DAT_INTMEM_4b + DAT_INTMEM_4d;
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
    cVar3 = '\x02';
    while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar3 != '\0'))) {
      if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
        bVar1 = DAT_INTMEM_4f == 0;
        DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
        DAT_INTMEM_4e = (bVar1 << 7) >> 7;
        if (2b_6 == '\0') {
          uVar7 = 0x46;
        }
        else {
          uVar7 = 0x54;
        }
      }
      else {
        bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
        DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
        if (2b_6 == '\0') {
          uVar7 = 0x52;
        }
        else {
          uVar7 = 0x51;
        }
      }
      FUN_CODE_3d32(uVar7);
      cVar3 = cVar3 + -1;
    }
    if ((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0) {
      2b_5 = 1;
      29_7 = 1;
    }
    if ((2b_4 != '\0') && (2c_4 != '\x01')) {
      FUN_CODE_34c2();
    }
    2b_4 = '\0';
  }
  else {
    if (24_4 != '\x01') {
      24_4 = '\x01';
      BANK1_R1 = 0;
    }
    2d_5 = 1;
  }
  return;
}



void FUN_CODE_368a(void)

{
  bool bVar1;
  short sVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined uVar7;
  
  if (2b_0 != '\0') {
    BANK1_R4 = 0x32;
    FUN_CODE_2fc0();
  }
  if (DAT_EXTMEM_0055 == '\x10') {
    DAT_INTMEM_54 = 3;
  }
  else {
    DAT_INTMEM_54 = 4;
  }
  if (2e_2 != '\0') {
    2e_2 = '\0';
    sVar2 = (ushort)(DAT_INTMEM_57 << 1 | DAT_INTMEM_57 >> 7) * (ushort)DAT_INTMEM_54;
    DAT_INTMEM_4d = (byte)sVar2;
    DAT_INTMEM_4c = (byte)((ushort)sVar2 >> 8);
  }
  if (2d_7 != '\0') {
    DAT_INTMEM_4f = DAT_INTMEM_54;
  }
  if (2d_6 != '\0') {
    DAT_INTMEM_4f = DAT_INTMEM_54 << 1;
  }
  2d_7 = 0;
  2d_6 = 0;
  if (2e_3 != '\0') {
    2e_3 = '\0';
    if ((DAT_INTMEM_4a < 8) << 7 < '\0') {
      DAT_INTMEM_4f = -DAT_INTMEM_4b;
      DAT_INTMEM_4e = 8 - (DAT_INTMEM_4a - (((DAT_INTMEM_4b != 0) << 7) >> 7));
    }
    else {
      DAT_INTMEM_4f = DAT_INTMEM_4d - DAT_INTMEM_4b;
      DAT_INTMEM_4e =
           (DAT_INTMEM_4c + 8) - (DAT_INTMEM_4a - (((DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7));
    }
  }
  if (2b_4 != '\0') {
    FUN_CODE_3d32(0x56);
    bVar4 = DAT_INTMEM_54 << 1 | DAT_INTMEM_54 >> 7;
    bVar1 = CARRY1(DAT_INTMEM_4b,bVar4);
    DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
    DAT_INTMEM_4a = DAT_INTMEM_4a - ((bVar1 << 7) >> 7);
    if ((DAT_INTMEM_4e == 0) && (bVar5 = DAT_INTMEM_4f - bVar4, (DAT_INTMEM_4f < bVar4) << 7 < '\0')
       ) {
      2b_6 = '\0';
      DAT_INTMEM_4f = bVar4 - DAT_INTMEM_4f;
      bVar4 = bVar5;
    }
    else {
      bVar1 = DAT_INTMEM_4f < bVar4;
      DAT_INTMEM_4f = DAT_INTMEM_4f - bVar4;
      DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
    }
    2e_7 = 1;
    FUN_CODE_348a(0x49,bVar4);
  }
  if (2b_6 == '\0') {
    bVar4 = -DAT_INTMEM_4f;
    cVar3 = -(DAT_INTMEM_4e - (((DAT_INTMEM_4b < DAT_INTMEM_4f) << 7) >> 7));
  }
  else {
    cVar3 = DAT_INTMEM_4e - ((CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4f) << 7) >> 7);
    bVar4 = DAT_INTMEM_4f;
  }
  DAT_INTMEM_4b = DAT_INTMEM_4b + bVar4;
  DAT_INTMEM_4a = DAT_INTMEM_4a + cVar3;
  cVar3 = (0xf7 < DAT_INTMEM_4c) << 7;
  cVar6 = FUN_CODE_2fed(DAT_INTMEM_4d,DAT_INTMEM_4c + 8,DAT_INTMEM_4a,DAT_INTMEM_4b);
  if ((-1 < cVar3) && (cVar6 != '\0')) {
    bVar5 = 8 - (DAT_INTMEM_4c - (((DAT_INTMEM_4d != 0) << 7) >> 7));
    bVar4 = DAT_INTMEM_4a - (((-DAT_INTMEM_4d < DAT_INTMEM_4b) << 7) >> 7);
    if (((bVar5 < bVar4) << 7 < '\0') && ((bVar5 - bVar4 | -DAT_INTMEM_4d - DAT_INTMEM_4b) != 0)) {
      FUN_CODE_37a5();
      return;
    }
    bVar1 = CARRY1(DAT_INTMEM_4b,DAT_INTMEM_4d);
    DAT_INTMEM_4b = DAT_INTMEM_4b + DAT_INTMEM_4d;
    DAT_INTMEM_4a = DAT_INTMEM_4a + (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
    cVar3 = '\x02';
    while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar3 != '\0'))) {
      if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
        bVar1 = DAT_INTMEM_4f == 0;
        DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
        DAT_INTMEM_4e = (bVar1 << 7) >> 7;
        if (2b_6 == '\0') {
          uVar7 = 0x46;
        }
        else {
          uVar7 = 0x54;
        }
      }
      else {
        bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
        DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
        DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
        if (2b_6 == '\0') {
          uVar7 = 0x52;
        }
        else {
          uVar7 = 0x51;
        }
      }
      FUN_CODE_3d32(uVar7);
      cVar3 = cVar3 + -1;
    }
    if ((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0) {
      2b_5 = 1;
      29_7 = 1;
    }
    if ((2b_4 != '\0') && (2c_4 != '\x01')) {
      FUN_CODE_34c2();
    }
    2b_4 = 0;
    return;
  }
  bVar1 = DAT_INTMEM_4b < DAT_INTMEM_4d;
  DAT_INTMEM_4b = DAT_INTMEM_4b - DAT_INTMEM_4d;
  DAT_INTMEM_4a = DAT_INTMEM_4a - (DAT_INTMEM_4c - ((bVar1 << 7) >> 7));
  FUN_CODE_37a5();
  return;
}



void FUN_CODE_37a5(void)

{
  bool bVar1;
  char cVar2;
  undefined uVar3;
  
  cVar2 = '\x02';
  while (((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0 && (cVar2 != '\0'))) {
    if ((DAT_INTMEM_4e == 0) && ((DAT_INTMEM_4f < DAT_INTMEM_54) << 7 < '\0')) {
      bVar1 = DAT_INTMEM_4f == 0;
      DAT_INTMEM_4f = DAT_INTMEM_4f - 1;
      DAT_INTMEM_4e = (bVar1 << 7) >> 7;
      if (2b_6 == '\0') {
        uVar3 = 0x46;
      }
      else {
        uVar3 = 0x54;
      }
    }
    else {
      bVar1 = DAT_INTMEM_4f < DAT_INTMEM_54;
      DAT_INTMEM_4f = DAT_INTMEM_4f - DAT_INTMEM_54;
      DAT_INTMEM_4e = DAT_INTMEM_4e + ((bVar1 << 7) >> 7);
      if (2b_6 == '\0') {
        uVar3 = 0x52;
      }
      else {
        uVar3 = 0x51;
      }
    }
    FUN_CODE_3d32(uVar3);
    cVar2 = cVar2 + -1;
  }
  if ((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0) {
    2b_5 = 1;
    29_7 = 1;
  }
  if ((2b_4 != '\0') && (2c_4 != '\x01')) {
    FUN_CODE_34c2();
  }
  2b_4 = 0;
  return;
}



void FUN_CODE_37f0(void)

{
  if ((DAT_INTMEM_4f | DAT_INTMEM_4e) != 0) {
    2b_5 = 1;
    29_7 = 1;
  }
  if ((2b_4 != '\0') && (2c_4 != '\x01')) {
    FUN_CODE_34c2();
  }
  2b_4 = 0;
  return;
}



void FUN_CODE_3806(void)

{
  char in_PSW;
  
  FUN_CODE_34d2();
  if ((((in_PSW < '\0') && (2d_0 != '\x01')) && (2c_6 != '\x01')) &&
     ((2c_4 != '\x01' && (22_4 != '\x01')))) {
    FUN_CODE_1182();
  }
  else {
    28_5 = 1;
    FUN_CODE_348a(0x49);
  }
  return;
}



void FUN_CODE_3824(void)

{
  2b_0 = 1;
  if (DAT_INTMEM_55 == 'Q') {
    FUN_CODE_3d97();
  }
  else {
    if (DAT_INTMEM_55 == 'R') {
      FUN_CODE_34b1();
    }
    else {
      if (DAT_INTMEM_55 == 'T') {
        DAT_INTMEM_4f = 1;
        FUN_CODE_3667();
      }
      else {
        if (DAT_INTMEM_55 == 'F') {
          DAT_INTMEM_4f = 1;
          FUN_CODE_366c();
        }
        else {
          if (DAT_INTMEM_55 == 'V') {
            FUN_CODE_349c();
          }
          else {
            2b_0 = 0;
          }
        }
      }
    }
  }
  return;
}



void FUN_CODE_3826(void)

{
  if (DAT_INTMEM_55 == 'Q') {
    FUN_CODE_3d97();
  }
  else {
    if (DAT_INTMEM_55 == 'R') {
      FUN_CODE_34b1();
    }
    else {
      if (DAT_INTMEM_55 == 'T') {
        DAT_INTMEM_4f = 1;
        FUN_CODE_3667();
      }
      else {
        if (DAT_INTMEM_55 == 'F') {
          DAT_INTMEM_4f = 1;
          FUN_CODE_366c();
        }
        else {
          if (DAT_INTMEM_55 == 'V') {
            FUN_CODE_349c();
          }
          else {
            2b_0 = 0;
          }
        }
      }
    }
  }
  return;
}



void FUN_CODE_384c(void)

{
  FUN_CODE_366c();
  return;
}



void FUN_CODE_385e(char param_1)

{
  undefined uVar1;
  
  uVar1 = read_volatile_1(IE);
  write_volatile_1(IE,uVar1);
  28_4 = param_1 != '\0';
  EX1 = 0;
  return;
}



void FUN_CODE_3890(byte param_1)

{
  if ((char)param_1 < '\0') {
    if (28_3 != '\x01') {
      28_3 = '\x01';
      FUN_CODE_3d41(0x5f);
    }
  }
  else {
    if (28_3 != '\0') {
      28_3 = '\0';
      FUN_CODE_3d41(0xdf);
    }
  }
  FUN_CODE_3d32(param_1 & 0xbf);
  return;
}



undefined FUN_CODE_38b3(byte param_1,byte param_2)

{
  byte bVar1;
  char cVar2;
  undefined uVar3;
  byte bVar4;
  byte *pbVar5;
  
  uVar3 = 0xff;
  if (-1 < (param_2 < 0x20) << 7) {
    bVar1 = 0xff;
    if ((0x7f < param_2) << 7 < '\0') {
      if (param_1 == 1) {
        bVar4 = 0xff;
      }
      else {
        if (param_1 == 0x20) {
          if (param_2 == 0x9c) {
            bVar4 = 0x91;
          }
          else {
            if (param_2 == 0xab) {
              bVar4 = 0xbb;
            }
            else {
              if (param_2 == 0xe6) {
                bVar4 = 0x28;
              }
              else {
                if (param_2 == 0xf1) {
                  bVar4 = 0;
                }
                else {
                  if (param_2 == 0xf8) {
                    bVar4 = 0x80;
                  }
                  else {
                    if (param_2 == 0xfd) {
                      bVar4 = 0x3e;
                    }
                    else {
                      bVar4 = 0xff;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          if ((0xa3 < param_2) << 7 < '\0') {
            pbVar5 = (byte *)0x3cf0;
            cVar2 = '\x05';
            do {
              do {
                pbVar5 = pbVar5 + 1;
                cVar2 = cVar2 + -1;
              } while (cVar2 != '\0');
              bVar4 = *pbVar5;
              if (bVar4 == 0xff) break;
              cVar2 = '\x05';
              bVar4 = bVar4 ^ param_2;
            } while (bVar4 != 0);
            if (bVar4 == 0) {
              if (param_1 == 2) {
                bVar4 = 1;
              }
              else {
                if (param_1 == 4) {
                  bVar4 = 2;
                }
                else {
                  if (param_1 == 8) {
                    bVar4 = 3;
                  }
                  else {
                    bVar4 = 4;
                  }
                }
              }
            }
          }
          else {
            pbVar5 = &LAB_CODE_3bef;
            cVar2 = '\t';
            do {
              do {
                pbVar5 = pbVar5 + 1;
                cVar2 = cVar2 + -1;
              } while (cVar2 != '\0');
              bVar4 = *pbVar5;
              if (bVar4 == 0xff) break;
              cVar2 = '\t';
              bVar4 = bVar4 ^ param_2;
            } while (bVar4 != 0);
            if (bVar4 == 0) {
              if (param_1 == 2) {
                bVar4 = 1;
              }
              else {
                if (param_1 == 4) {
                  bVar4 = 3;
                }
                else {
                  if (param_1 == 8) {
                    bVar4 = 5;
                  }
                  else {
                    bVar4 = 7;
                  }
                }
              }
            }
          }
          if (bVar4 != 0xff) {
            if ((0xa3 < param_2) << 7 < '\0') {
              bVar4 = pbVar5[bVar4];
            }
            else {
              bVar1 = pbVar5[bVar4];
              bVar4 = pbVar5[(ushort)bVar4 + 1];
            }
          }
        }
      }
    }
    else {
      pbVar5 = (byte *)CONCAT11((&LAB_CODE_3af8)[param_2 << 1 | param_2 >> 7],
                                (&LAB_CODE_3af8_1)[param_2 << 1 | param_2 >> 7]);
      do {
        bVar4 = *pbVar5;
        if ((bVar4 >> 6 & 1) == 1) {
          if ((bVar4 & param_1) != 0) {
            bVar4 = pbVar5[1];
            break;
          }
          bVar4 = 0xff;
        }
        else {
          if ((bVar4 & param_1) != 0) {
            bVar4 = pbVar5[1];
            break;
          }
          pbVar5 = pbVar5 + 2;
          bVar4 = 0;
        }
      } while (bVar4 == 0);
    }
    if (bVar1 != 0xff) {
      FUN_CODE_3890(bVar1);
    }
    if (bVar4 == 0xff) {
      uVar3 = FUN_CODE_3d32(0x47);
    }
    else {
      uVar3 = FUN_CODE_3890();
    }
  }
  return uVar3;
}



// WARNING: Removing unreachable block (CODE,0x3996)

void FUN_CODE_3986(short param_1,byte param_2,char param_3)

{
  char cVar1;
  
  if ((0xa3 < param_2) << 7 < '\0') {
    cVar1 = *(char *)(param_1 + 2);
  }
  else {
    param_3 = *(char *)(param_1 + 2);
    cVar1 = *(char *)(param_1 + 3);
  }
  if (param_3 != -1) {
    FUN_CODE_3890(param_3);
  }
  if (cVar1 == -1) {
    FUN_CODE_3d32(0x47);
  }
  else {
    FUN_CODE_3890();
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void thunk_EXT_FUN_CODE_c004(void)

{
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



// WARNING: Instruction at (CODE,0x3c65) overlaps instruction at (CODE,0x3c64)
// 

char * FUN_CODE_3c33(byte param_1,byte param_2,char param_3,byte param_4,undefined param_5,
                    byte param_6)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  char in_PSW;
  char *pcVar12;
  char *pcVar13;
  
  puVar9 = (undefined *)0x0;
  pcVar4 = (char *)(param_3 + -1);
  bVar1 = param_6 - (in_PSW >> 7);
  pcVar7 = (char *)(param_1 + bVar1);
  write_volatile_1(DAT_SFR_ff,pcVar4);
  if (CARRY1(param_1,bVar1) << 7 < '\0') {
    pcVar6 = (char *)0x12;
  }
  else {
    pcVar6 = (char *)func_0x89ff(pcVar7,pcVar7);
    pcVar5 = (char *)func_0xc012(pcVar6);
    func_0x8ae8();
    pcVar7 = (char *)func_0xff21();
    if (2f_3 == '\x01') goto code_c0x3c64;
  }
  write_volatile_1(DAT_SFR_ff,pcVar6);
  pcVar5 = pcVar7 + param_4;
  puVar9 = (undefined *)0x1;
  pcVar6 = pcVar5 + param_4;
  write_volatile_1(DAT_SFR_ff,param_5);
  if (CARRY1((byte)pcVar5,param_4) << 7 < '\0') {
    return pcVar6;
  }
  pcVar7 = pcVar6 + param_4;
code_c0x3c64:
  do {
    write_volatile_1(HIFLG,pcVar5);
    pcVar7 = pcVar7 + (char)(pcVar6 + (param_4 - ((CARRY1((byte)pcVar7,param_4) << 7) >> 7)));
    write_volatile_1(DAT_SFR_ff,param_6);
    if (pcVar5 != (char *)0xfb) {
      bVar1 = 0x2a - (((pcVar5 < (char *)0xfb) << 7) >> 7);
      pcVar6 = pcVar7 + bVar1;
      bVar2 = *pcVar4 - ((CARRY1((byte)pcVar7,bVar1) << 7) >> 7);
      bVar1 = 0x2a - ((CARRY1((byte)pcVar6,bVar2) << 7) >> 7);
      return pcVar4 + (char)(pcVar6 + bVar2 +
                            ('*' - (((param_6 < 0x81) << 7) >> 7)) +
                            (bVar1 - ((CARRY1((byte)(pcVar6 + bVar2),bVar1) << 7) >> 7)));
    }
    puVar10 = puVar9 + '\x01';
    uVar3 = read_volatile_1(DPXL);
    puVar9['\x01'] = uVar3;
    cVar8 = '\0';
    pcVar6 = pcVar7;
    puVar9 = puVar9 + '\x01';
    if (param_2 != 0) {
      pcVar6 = (char *)((byte)pcVar7 / param_2);
      param_2 = (byte)pcVar7 % param_2;
      puVar9 = puVar10;
    }
    while( true ) {
      pcVar5 = (char *)0x92;
      pcVar6 = *(char **)(ZEXT12(pcVar6) + 0x6892);
      if (-1 < cVar8) {
        return pcVar6;
      }
      FIFLG_0 = FIFLG_0 ^ 1;
      F8_5 = F8_5 ^ 1;
      RB8 = RB8 ^ 1;
      pcVar7 = pcVar4;
      if (pcVar6 != (char *)0xfb) break;
      puVar11 = puVar9 + '\x01';
      puVar9 = puVar9 + '\x01';
      uVar3 = read_volatile_1(FIE);
      *puVar11 = uVar3;
      cVar8 = (param_6 != 0xff) << 7;
      if (param_6 == 0xff) {
        cVar8 = -4;
        uEXTMEM6892 = 0xfc;
        BANK1_R6 = -6;
        pcVar13 = (char *)0x6892;
        do {
          pcVar12 = pcVar13;
          cVar8 = cVar8 + '\b';
          pcVar13 = pcVar12 + 1;
          *pcVar13 = cVar8;
          BANK1_R6 = BANK1_R6 + -1;
        } while (BANK1_R6 != '\0');
        pcVar12[2] = '\0';
        28_1 = 0;
        29_0 = 0;
        return (char *)0;
      }
    }
  } while( true );
}



// WARNING: Instruction at (CODE,0x3cb8) overlaps instruction at (CODE,0x3cb7)
// 

char * FUN_CODE_3d01(char *param_1,char **param_2,byte param_3,char *param_4,char param_5,
                    byte param_6,char *param_7,byte param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  char **ppcVar9;
  
  puVar7 = (undefined *)0x1;
  pcVar4 = (char *)(((char)param_1 << 1 | (byte)param_1 >> 7) -
                   (param_5 - (((param_8 < 0xa6) << 7) >> 7)));
  if (param_8 != 0xfb) goto LAB_CODE_3c65;
  puVar7 = (undefined *)0x2;
  read_volatile(IPL1);
  pcVar5 = pcVar4;
  while( true ) {
    RB8 = RB8 ^ 1;
    param_1 = pcVar4;
    if (param_7 == (char *)0xfb) {
      uVar3 = read_volatile_1(FIE);
      puVar7['\x01'] = uVar3;
      cVar8 = (param_9 != 0xff) << 7;
      puVar7 = puVar7 + '\x01';
      if (param_9 == 0xff) {
        pcVar5 = pcVar5 + '\x01';
        *param_2 = pcVar5;
        BANK1_R6 = -6;
        do {
          ppcVar9 = param_2;
          pcVar5 = pcVar5 + '\b';
          param_2 = ppcVar9 + 1;
          *param_2 = pcVar5;
          BANK1_R6 = BANK1_R6 + -1;
        } while (BANK1_R6 != '\0');
        ppcVar9[2] = (char *)0x0;
        28_1 = 0;
        29_0 = 0;
        return (char *)0;
      }
    }
    else {
LAB_CODE_3c65:
      pcVar4 = param_4 + (char)(param_7 + (param_6 - ((CARRY1((byte)param_4,param_6) << 7) >> 7)));
      write_volatile_1(DAT_SFR_ff,param_9);
      if (param_1 != (char *)0xfb) {
        bVar1 = 0x2a - (((param_1 < (char *)0xfb) << 7) >> 7);
        pcVar5 = pcVar4 + bVar1;
        bVar2 = *param_4 - ((CARRY1((byte)pcVar4,bVar1) << 7) >> 7);
        bVar1 = 0x2a - ((CARRY1((byte)pcVar5,bVar2) << 7) >> 7);
        return param_4 + (char)(pcVar5 + bVar2 +
                               ('*' - (((param_9 < 0x81) << 7) >> 7)) +
                               (bVar1 - ((CARRY1((byte)(pcVar5 + bVar2),bVar1) << 7) >> 7)));
      }
      puVar6 = puVar7 + '\x01';
      uVar3 = read_volatile_1(DPXL);
      puVar7['\x01'] = uVar3;
      cVar8 = '\0';
      pcVar5 = pcVar4;
      puVar7 = puVar7 + '\x01';
      if (param_3 != 0) {
        pcVar5 = (char *)((byte)pcVar4 / param_3);
        param_3 = (byte)pcVar4 % param_3;
        puVar7 = puVar6;
      }
    }
    param_2 = (char **)0x6892;
    pcVar4 = (char *)0x92;
    param_7 = *(char **)(ZEXT12(pcVar5) + 0x6892);
    if (-1 < cVar8) break;
    FIFLG_0 = FIFLG_0 ^ 1;
    F8_5 = F8_5 ^ 1;
    pcVar5 = param_7;
  }
  return param_7;
}



// WARNING: Instruction at (CODE,0x3cb8) overlaps instruction at (CODE,0x3cb7)
// 

char * FUN_CODE_3d04(char *param_1,char **param_2,byte param_3,char *param_4,char param_5,
                    byte param_6,char *param_7,char param_8,byte param_9)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  char in_PSW;
  char **ppcVar9;
  
  cVar8 = read_volatile_1(DAT_SFR_ff);
  *param_4 = cVar8;
  puVar7 = (undefined *)0x1;
  pcVar4 = (char *)(((char)param_1 << 1 | (byte)param_1 >> 7) - (param_5 - (in_PSW >> 7)));
  if (param_8 != -5) goto LAB_CODE_3c65;
  puVar7 = (undefined *)0x2;
  read_volatile(IPL1);
  pcVar5 = pcVar4;
  while( true ) {
    RB8 = RB8 ^ 1;
    param_1 = pcVar4;
    if (param_7 == (char *)0xfb) {
      uVar3 = read_volatile_1(FIE);
      puVar7['\x01'] = uVar3;
      cVar8 = (param_9 != 0xff) << 7;
      puVar7 = puVar7 + '\x01';
      if (param_9 == 0xff) {
        pcVar5 = pcVar5 + '\x01';
        *param_2 = pcVar5;
        BANK1_R6 = -6;
        do {
          ppcVar9 = param_2;
          pcVar5 = pcVar5 + '\b';
          param_2 = ppcVar9 + 1;
          *param_2 = pcVar5;
          BANK1_R6 = BANK1_R6 + -1;
        } while (BANK1_R6 != '\0');
        ppcVar9[2] = (char *)0x0;
        28_1 = 0;
        29_0 = 0;
        return (char *)0;
      }
    }
    else {
LAB_CODE_3c65:
      pcVar4 = param_4 + (char)(param_7 + (param_6 - ((CARRY1((byte)param_4,param_6) << 7) >> 7)));
      write_volatile_1(DAT_SFR_ff,param_9);
      if (param_1 != (char *)0xfb) {
        bVar1 = 0x2a - (((param_1 < (char *)0xfb) << 7) >> 7);
        pcVar5 = pcVar4 + bVar1;
        bVar2 = *param_4 - ((CARRY1((byte)pcVar4,bVar1) << 7) >> 7);
        bVar1 = 0x2a - ((CARRY1((byte)pcVar5,bVar2) << 7) >> 7);
        return param_4 + (char)(pcVar5 + bVar2 +
                               ('*' - (((param_9 < 0x81) << 7) >> 7)) +
                               (bVar1 - ((CARRY1((byte)(pcVar5 + bVar2),bVar1) << 7) >> 7)));
      }
      puVar6 = puVar7 + '\x01';
      uVar3 = read_volatile_1(DPXL);
      puVar7['\x01'] = uVar3;
      cVar8 = '\0';
      pcVar5 = pcVar4;
      puVar7 = puVar7 + '\x01';
      if (param_3 != 0) {
        pcVar5 = (char *)((byte)pcVar4 / param_3);
        param_3 = (byte)pcVar4 % param_3;
        puVar7 = puVar6;
      }
    }
    param_2 = (char **)0x6892;
    pcVar4 = (char *)0x92;
    param_7 = *(char **)(ZEXT12(pcVar5) + 0x6892);
    if (-1 < cVar8) break;
    FIFLG_0 = FIFLG_0 ^ 1;
    F8_5 = F8_5 ^ 1;
    pcVar5 = param_7;
  }
  return param_7;
}



void FUN_CODE_3d32(byte param_1)

{
  FUN_CODE_3d41(param_1 & 0x7f);
  FUN_CODE_3d41(param_1 | 0x80);
  return;
}



void FUN_CODE_3d41(undefined param_1)

{
  FUN_CODE_2de3(0x23,param_1);
  return;
}



void FUN_CODE_3d48(undefined param_1)

{
  DAT_EXTMEM_06c6 = param_1;
  return;
}



void FUN_CODE_3d4d(void)

{
  BANK1_R6 = 0x1c;
  DAT_INTMEM_50 = 6;
  DAT_INTMEM_51 = 0xa0;
  29_0 = 1;
  return;
}



void FUN_CODE_3d5a(char param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)CONCAT11(DAT_INTMEM_50,DAT_INTMEM_51);
  if ((param_1 == '\0') && (BANK1_R6 == '\x1c')) {
    cVar1 = '\b';
    *pcVar3 = '\b';
    BANK1_R6 = '\x1b';
    do {
      pcVar2 = pcVar3;
      cVar1 = cVar1 + '\b';
      pcVar3 = pcVar2 + 1;
      *pcVar3 = cVar1;
      BANK1_R6 = BANK1_R6 + -1;
    } while (BANK1_R6 != '\0');
    pcVar2[2] = '\0';
    29_0 = 0;
    28_1 = 0;
  }
  else {
    if ((param_1 == '\0') || (BANK1_R6 == '\0')) {
      *pcVar3 = '\0';
      29_0 = 0;
      28_1 = 0;
    }
    else {
      *pcVar3 = param_1;
      BANK1_R6 = BANK1_R6 + -1;
      DAT_INTMEM_50 = (undefined)((ushort)(pcVar3 + 1) >> 8);
      DAT_INTMEM_51 = SUB21(pcVar3 + 1,0);
    }
  }
  return;
}



void FUN_CODE_3d97(void)

{
  2d_7 = 1;
  FUN_CODE_3667();
  return;
}



void FUN_CODE_3d9d(void)

{
  FUN_CODE_3d32(0x54);
  FUN_CODE_3d32(0x54);
  return;
}



void FUN_CODE_3da8(char param_1)

{
  if (2c_4 != '\0') {
    2c_4 = '\0';
    2d_6 = 1;
    FUN_CODE_366c();
    if (param_1 != '\f') {
      2e_5 = 1;
    }
  }
  return;
}



void FUN_CODE_3dba(byte param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  do {
    do {
    } while (~*pbVar1 != param_1);
    *pbVar1 = param_1;
    do {
    } while (*pbVar1 != param_1);
    pbVar1 = pbVar1 + 1;
  } while ((char)((ushort)pbVar1 >> 8) != '\b');
  return;
}



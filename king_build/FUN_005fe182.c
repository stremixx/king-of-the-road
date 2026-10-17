
undefined8 __fastcall
FUN_005fe182(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 *param_4,
            undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined4 in_EAX;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  
  uVar10 = param_3 | param_3 << 8;
  uVar11 = uVar10 | uVar10 << 0x10;
  uVar5 = (undefined1)((uint)DAT_00682b80 >> 0x18);
  sVar6 = CONCAT11(uVar5,(char)(uVar11 >> 0x18));
  uVar4 = (undefined1)((uint)DAT_00682b80 >> 0x10);
  uVar3 = (undefined1)((uint)DAT_00682b80 >> 8);
  uVar2 = (undefined1)DAT_00682b80;
  iVar13 = -1 - uVar11;
  sVar7 = CONCAT11(uVar5,(char)((uint)iVar13 >> 0x18));
  sVar8 = CONCAT11(uVar5,(char)((uint)param_5 >> 0x18));
  iVar12 = param_6 + 1;
  while (iVar12 + -1 != 0 && 0 < iVar12) {
    uVar1 = *param_4;
    sVar9 = CONCAT11((char)((uint)DAT_00682b80 >> 0x18),(char)((uint)uVar1 >> 0x18));
    uVar14 = paddusw(CONCAT26(sVar9 * sVar7,
                              CONCAT24((short)(CONCAT35(CONCAT21(sVar9,(char)((uint)DAT_00682b80 >>
                                                                             0x10)),
                                                        CONCAT14((char)((uint)uVar1 >> 0x10),uVar1))
                                              >> 0x20) *
                                       (short)(CONCAT35(CONCAT21(sVar7,uVar4),
                                                        CONCAT14((char)((uint)iVar13 >> 0x10),iVar13
                                                                )) >> 0x20),
                                       CONCAT22(CONCAT11((char)((uint)DAT_00682b80 >> 8),
                                                         (char)((uint)uVar1 >> 8)) *
                                                CONCAT11(uVar3,(char)((uint)iVar13 >> 8)),
                                                CONCAT11((char)DAT_00682b80,(char)uVar1) *
                                                CONCAT11(uVar2,(char)iVar13)))),
                     CONCAT26(sVar8 * sVar6,
                              CONCAT24((short)(CONCAT35(CONCAT21(sVar8,uVar4),
                                                        CONCAT14((char)((uint)param_5 >> 0x10),
                                                                 param_5)) >> 0x20) *
                                       (short)(CONCAT35(CONCAT21(sVar6,uVar4),
                                                        CONCAT14((char)(uVar11 >> 0x10),uVar11)) >>
                                              0x20),
                                       CONCAT22(CONCAT11(uVar3,(char)((uint)param_5 >> 8)) *
                                                CONCAT11(uVar3,(char)(uVar10 >> 8)),
                                                CONCAT11(uVar2,(char)param_5) *
                                                CONCAT11(uVar2,(char)param_3)))));
    uVar14 = psraw(uVar14,8);
    uVar14 = packsswb(uVar14,uVar14);
    *param_4 = (int)uVar14;
    param_4 = param_4 + 1;
    iVar12 = iVar12 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


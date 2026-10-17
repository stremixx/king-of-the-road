
byte * FUN_006203be(byte *param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  bool bVar6;
  
  pbVar5 = (byte *)0x0;
  if (DAT_0077d82c == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
  }
  else {
    FUN_006238a4(0x19);
    do {
      bVar4 = *param_1;
      if ((*(byte *)((int)&DAT_0077d940 + bVar4 + 1) & 4) == 0) {
        bVar6 = param_2 == bVar4;
LAB_00620419:
        pbVar3 = param_1;
        if (bVar6) {
          pbVar5 = param_1;
        }
      }
      else {
        bVar1 = param_1[1];
        pbVar3 = param_1 + 1;
        if (bVar1 == 0) {
          bVar6 = pbVar5 == (byte *)0x0;
          param_1 = pbVar3;
          bVar4 = bVar1;
          goto LAB_00620419;
        }
        uVar2 = CONCAT11(bVar4,bVar1);
        bVar4 = bVar1;
        if (param_2 == uVar2) {
          pbVar5 = param_1;
        }
      }
      param_1 = pbVar3 + 1;
    } while (bVar4 != 0);
    FUN_00623905(0x19);
  }
  return pbVar5;
}



undefined8 __fastcall
FUN_005fe0dc(undefined4 param_1,undefined4 param_2,int param_3,short *param_4,byte param_5,
            int param_6)

{
  undefined4 in_EAX;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (DAT_0071d734 == 0) {
    uVar2 = (uint)param_5 << 0x10;
    iVar3 = param_6 + 1;
    while (iVar3 + -1 != 0 && 0 < iVar3) {
      uVar2 = CONCAT22((short)(uVar2 >> 0x10),*param_4) & 0xfffffffe;
      *param_4 = *(short *)(uVar2 + param_3);
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  else {
    iVar1 = (uint)param_5 << 0x10;
    iVar3 = param_6 + 1;
    while (iVar3 + -1 != 0 && 0 < iVar3) {
      iVar1 = CONCAT22((short)((uint)iVar1 >> 0x10),*param_4 << 1);
      *param_4 = *(short *)(iVar1 + param_3);
      param_4 = param_4 + 1;
      iVar3 = iVar3 + -1;
    }
  }
  return CONCAT44(param_2,in_EAX);
}



bool FUN_00528790(ushort *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1 / 0x14;
  if ((int)(*param_1 / 3 - uVar1) < param_2) {
    return true;
  }
  if (param_2 < (int)uVar1) {
    return true;
  }
  iVar2 = (int)(uint)param_1[1] >> 2;
  if ((int)((uint)param_1[1] - iVar2) < param_3) {
    return true;
  }
  return param_3 < iVar2;
}


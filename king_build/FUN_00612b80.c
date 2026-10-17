
int __fastcall FUN_00612b80(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if ((iVar1 == 0) && (param_1[1] == 0)) {
    return 0;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  else if (iVar1 != 0) goto LAB_00612ba6;
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00612ba6:
  if (*(float *)(iVar1 + 0x1c) < *(float *)(iVar2 + 0x1c)) {
    return iVar2;
  }
  return iVar1;
}


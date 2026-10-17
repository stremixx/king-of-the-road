
int __fastcall FUN_0060f0b0(int *param_1)

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
  else if (iVar1 != 0) goto LAB_0060f0d6;
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0060f0d6:
  if (*(float *)(iVar2 + 0x48) <= *(float *)(iVar1 + 0x48)) {
    return iVar2;
  }
  return iVar1;
}


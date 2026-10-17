
int __fastcall FUN_0060ee90(int *param_1)

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
  else if (iVar1 != 0) goto LAB_0060eeb6;
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_0060eeb6:
  if (*(float *)(iVar1 + 0x1c) <= *(float *)(iVar2 + 0x1c)) {
    return iVar2;
  }
  return iVar1;
}



void FUN_0041b9e0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_2 = 0;
  param_2[1] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  if ((*(int *)(param_1 + 0x204) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x204) + 4), iVar1 != -1)) {
    FUN_0041b900(iVar1,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x208);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != -1)) {
    local_8 = 0;
    local_4 = 0;
    FUN_0041b900(*(undefined4 *)(iVar1 + 4),&local_8,param_3);
  }
  return;
}


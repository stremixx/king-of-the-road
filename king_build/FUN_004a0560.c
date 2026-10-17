
void FUN_004a0560(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x1080);
  iVar1 = *(int *)(param_2 + 0x1084);
  iVar3 = FUN_004a2d60(iVar1,*(undefined4 *)(param_2 + 0x1084),iVar4,param_2,0);
  iVar2 = *(int *)(param_2 + 0x1084);
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0xc) {
    FUN_00492340();
  }
  iVar4 = (int)((ulonglong)((longlong)(iVar1 - iVar4) * -0x2aaaaaab) >> 0x20);
  *(int *)(param_2 + 0x1084) = *(int *)(param_2 + 0x1084) + ((iVar4 >> 1) - (iVar4 >> 0x1f)) * 0xc;
  FUN_004a1b40(*(undefined4 *)(param_2 + 0x1084),*param_3 + 0xc,param_3[1]);
  FUN_004a5a90(param_2,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



void FUN_004827e0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490d40(param_1,&DAT_0066ee98,local_10);
  piVar2 = param_2;
  uVar4 = 0;
  param_1 = param_2[1] - *param_2;
  local_4 = 0;
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,&param_2);
  iVar3 = *piVar2;
  if (piVar2[1] != iVar3) {
    do {
      param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(iVar3 + uVar4));
      FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,(int)&param_1 + 1);
      iVar3 = *piVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(piVar2[1] - iVar3));
  }
  param_1 = CONCAT31(param_1._1_3_,(char)piVar2[7]);
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,(int)&param_1 + 1);
  local_4 = 0xffffffff;
  FUN_00490d90(iVar1,local_10);
  ExceptionList = local_c;
  return;
}


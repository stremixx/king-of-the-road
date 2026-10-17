
void FUN_004823f0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006402b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490d40(param_1,&DAT_0066ee74,local_10);
  piVar2 = param_2;
  param_1 = param_2[1] - *param_2;
  uVar5 = 0;
  local_4 = 0;
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,&param_2);
  iVar3 = *piVar2;
  uVar6 = 0;
  if (piVar2[1] != iVar3) {
    do {
      param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(iVar3 + uVar6));
      FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,(int)&param_1 + 1);
      iVar3 = *piVar2;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(piVar2[1] - iVar3));
  }
  param_1._0_1_ = (char)piVar2[0x3c];
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,(int)&param_1 + 1);
  param_1 = CONCAT31(param_1._1_3_,(char)piVar2[7]);
  FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,(int)&param_1 + 1);
  iVar3 = piVar2[0x1f];
  if (iVar3 == DAT_0068a8f0) {
    param_1 = 0;
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,&param_2);
  }
  else {
    param_1 = *(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8);
    FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,&param_2);
    iVar4 = *(int *)(iVar3 + 8);
    if (*(int *)(iVar3 + 0xc) != iVar4) {
      do {
        param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(iVar4 + uVar5));
        FUN_0046e460(*(undefined4 *)(iVar1 + 4),&param_1,(int)&param_1 + 1);
        iVar4 = *(int *)(iVar3 + 8);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)(*(int *)(iVar3 + 0xc) - iVar4));
    }
  }
  local_4 = 0xffffffff;
  FUN_00490d90(iVar1,local_10);
  ExceptionList = local_c;
  return;
}


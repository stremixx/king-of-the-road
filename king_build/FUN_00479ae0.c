
void FUN_00479ae0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = param_2;
  param_2 = (int *)(param_2[1] - *param_2);
  FUN_0046e460(*(undefined4 *)(param_1 + 4),&param_2,&stack0x0000000c);
  iVar2 = *piVar1;
  uVar3 = 0;
  if (piVar1[1] != iVar2) {
    do {
      param_2 = (int *)CONCAT31(param_2._1_3_,*(undefined1 *)(iVar2 + uVar3));
      FUN_0046e460(*(undefined4 *)(param_1 + 4),&param_2,(int)&param_2 + 1);
      iVar2 = *piVar1;
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(piVar1[1] - iVar2));
  }
  return;
}


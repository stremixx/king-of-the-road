
void __thiscall FUN_0055e590(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x5468) == 0) {
    iVar1 = *(int *)(&DAT_006d1158 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    if (iVar1 == 0) goto LAB_0055e64d;
    uVar2 = 1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x5468) + 0x509c);
    if (iVar1 == DAT_0068a8f0) {
      FUN_005e10c0(*(undefined4 *)(&DAT_006d1480 + *(int *)(param_1 + 0x27a4) * 0x5d0),0);
    }
    else {
      iVar1 = FUN_0043f920(iVar1);
      FUN_005e10c0(*(undefined4 *)(&DAT_006d1480 + *(int *)(param_1 + 0x27a4) * 0x5d0),iVar1 + 1);
    }
    iVar1 = *(int *)(&DAT_006d1158 + *(int *)(param_1 + 0x27a4) * 0x5d0);
    if (iVar1 == 0) goto LAB_0055e64d;
    uVar2 = 0;
  }
  FUN_004e409c(iVar1,uVar2);
LAB_0055e64d:
  if (*(int *)(&DAT_006d161c + *(int *)(param_1 + 0x27a4) * 0x5d0) != 0) {
    FUN_005e10c0(*(int *)(&DAT_006d161c + *(int *)(param_1 + 0x27a4) * 0x5d0),
                 *(int *)(param_1 + 0x4e9c) == 2);
  }
  FUN_00546740(param_2,param_3);
  return;
}


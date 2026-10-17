
undefined4 __thiscall
FUN_005c1a40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(int *)(param_1 + 0x8a0) == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x8a0) == 1) {
    *(undefined4 *)(param_1 + 0x8a0) = 2;
    FUN_005c20d0();
    fVar4 = (float10)thunk_FUN_00603580();
    *(double *)(param_1 + 0x8a8) = (double)fVar4;
  }
  thunk_FUN_00603580();
  iVar3 = __ftol();
  iVar2 = *(int *)(param_1 + 0x884);
  iVar1 = iVar2 + 10;
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0x884) = iVar1;
    if (iVar1 < *(int *)(param_1 + 8)) {
      *(int *)(param_1 + 0x884) = iVar2 + 0xb;
      FUN_005c10f0(iVar1);
    }
  }
  else {
    do {
      if (iVar3 <= iVar2) break;
      *(int *)(param_1 + 0x884) = iVar2 + 1;
      FUN_005c10f0(iVar2);
      iVar2 = *(int *)(param_1 + 0x884);
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0x884)) {
    *(undefined4 *)(param_1 + 0x8a0) = 1;
    *(undefined4 *)(param_1 + 0x884) = 0;
    *(undefined4 *)(param_1 + 0x88c) = 0;
    *(undefined4 *)(param_1 + 0x888) = 0;
    *(undefined4 *)(param_1 + 0x890) = 0;
    return 1;
  }
  FUN_005c1440(param_2,param_3,param_4,param_5,param_6);
  return 0;
}


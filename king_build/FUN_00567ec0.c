
void __fastcall FUN_00567ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xddc) == 0) {
    piVar1 = (int *)FUN_0053ee80(*(undefined4 *)(param_1 + 0xcb0));
    *(int **)(param_1 + 0xcb0) = piVar1;
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 4))();
      if (iVar2 == 1) {
        *(undefined4 *)(param_1 + 0xcb4) = *(undefined4 *)(*(int *)(param_1 + 0xcb0) + 0x5578);
      }
      else {
        *(undefined4 *)(param_1 + 0xcb4) = 0;
      }
    }
    FUN_005677a0();
    FUN_00566080();
    FUN_005674d0();
    FUN_00562d10();
    FUN_00561640();
    FUN_00567d90();
  }
  return;
}


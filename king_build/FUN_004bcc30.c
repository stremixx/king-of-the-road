
void __fastcall FUN_004bcc30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00631d5c(*param_1);
  FUN_00631d5c(param_1[1]);
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    FUN_0061ccb5(iVar1,0xf0,*(undefined4 *)(iVar1 + -4),FUN_004030a0);
    FUN_00631d5c(iVar1 + -4);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    FUN_0061ccb5(iVar1,0xf0,*(undefined4 *)(iVar1 + -4),FUN_004030a0);
    FUN_00631d5c(iVar1 + -4);
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 0x24))();
    if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[9])(1);
    }
    param_1[9] = 0;
  }
  puVar2 = param_1 + 10;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x15] = 0;
  return;
}


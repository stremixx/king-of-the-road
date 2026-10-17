
void __thiscall
FUN_005e11e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (param_5 == -1) {
    param_5 = *(int *)(param_1 + 0x10c);
  }
  uVar1 = thunk_FUN_005b5b70();
  iVar2 = *(int *)(param_1 + 0xf0);
  while (iVar2 != 0) {
    FUN_004843e0();
    iVar2 = FUN_005d2730();
  }
  FUN_005d7870(param_2,param_3,*(undefined4 *)(param_1 + 0x108),param_5);
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar2);
    uVar3 = FUN_005e3890(s_menu_fon_006751b8);
    iVar2 = FUN_005e8290(uVar3);
    *(int *)(param_1 + 0x110) = iVar2;
    if (iVar2 == 0) {
      uVar3 = FUN_005e8290(s_menu_fon_006751b8);
      *(undefined4 *)(param_1 + 0x110) = uVar3;
    }
    if (*(int *)(param_1 + 0x110) == 0) {
      uVar3 = FUN_005e3890(s_menu_sft_00681e30);
      iVar2 = FUN_005e8290(uVar3);
      *(int *)(param_1 + 0x110) = iVar2;
      if (iVar2 == 0) {
        uVar3 = FUN_005e8290(s_menu_sft_00681e30);
        *(undefined4 *)(param_1 + 0x110) = uVar3;
      }
    }
  }
  piVar4 = *(int **)(param_1 + 0xf0);
  while (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 0x28))(param_2,param_3,param_4,param_5);
    piVar4 = (int *)FUN_005d2730();
  }
  *(undefined4 *)(param_1 + 0x100) = param_2;
  *(undefined4 *)(param_1 + 0x11c) = param_2;
  *(undefined4 *)(param_1 + 0x104) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_3;
  FUN_005b5b90(uVar1);
  return;
}



void __fastcall FUN_00577520(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 auStack_104 [10];
  undefined4 *puStack_dc;
  undefined4 uStack_d8;
  undefined1 *puStack_d4;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1);
    puVar4 = auStack_104;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puStack_dc = &uStack_118;
    uStack_114 = 10000;
    uStack_110 = 0;
    uStack_10c = 1000;
    uStack_108 = 500000;
    uStack_118 = 0x14;
    auStack_104[0] = 0x38;
    uStack_d8 = 0x10;
    puStack_d4 = &stack0xfffffed8;
    __ftol();
    uVar2 = __ftol();
    uVar5 = 0x100;
    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),auStack_104,0x100);
    if ((((iVar3 == -0x7ff8ffeb) || (iVar3 == -0x7ffbfdfa)) || (iVar3 == -0x7ff8ffe2)) ||
       ((iVar3 == -0x7ff8ffa9 || (iVar3 == -0x7ffbfdf8)))) {
      FUN_0061c369(&uStack_d8,s_JOYSTICK_cFFBEF_bounce__play_set_0067b8e0,iVar3,uVar5,uVar2);
      FUN_00576420(&uStack_d8);
    }
    (**(code **)(**(int **)(param_1 + 4) + 0x1c))(*(int **)(param_1 + 4),1,0);
  }
  return;
}


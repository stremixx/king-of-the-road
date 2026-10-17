
void __fastcall FUN_005580a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x5578) != 0) {
    iVar1 = *(int *)(param_1 + 0x5460);
    iVar2 = *(int *)(*(int *)(param_1 + 0x5578) + 0x5460);
    *(undefined4 *)(iVar2 + 0x275c) = *(undefined4 *)(iVar1 + 0x275c);
    *(undefined4 *)(iVar2 + 10000) = *(undefined4 *)(iVar1 + 10000);
    *(undefined4 *)(iVar2 + 0x270c) = *(undefined4 *)(iVar1 + 0x270c);
    *(undefined2 *)(iVar2 + 0x2714) = *(undefined2 *)(iVar1 + 0x2714);
    *(undefined2 *)(iVar2 + 0x2716) = *(undefined2 *)(iVar1 + 0x2716);
    *(undefined1 *)(iVar2 + 0x2700) = *(undefined1 *)(iVar1 + 0x2700);
    *(undefined2 *)(iVar2 + 0x271a) = *(undefined2 *)(iVar1 + 0x271a);
    *(undefined2 *)(iVar2 + 0x2718) = *(undefined2 *)(iVar1 + 0x2718);
    *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0x517c) = *(undefined4 *)(param_1 + 0x517c);
    *(undefined4 *)(*(int *)(param_1 + 0x5578) + 0x51b4) = *(undefined4 *)(param_1 + 0x51b4);
    if (*(int *)(param_1 + 0x5584) != 0) {
      *(undefined2 *)(iVar2 + 0x2716) = 0;
      *(undefined4 *)(iVar2 + 10000) = 0;
    }
  }
  return;
}


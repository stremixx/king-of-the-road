
void __fastcall FUN_0051ace0(int param_1)

{
  int iVar1;
  
  FUN_005d7cc0();
  iVar1 = FUN_005bd200(0x70 - (uint)(*(int *)(DAT_006cdbcc + 0x518) != 0));
  *(uint *)(iVar1 + 0x11c) = *(uint *)(iVar1 + 0x11c) | 2;
  iVar1 = FUN_005bd200((*(int *)(DAT_006cdbcc + 0x518) != 0) + 'o');
  *(uint *)(iVar1 + 0x11c) = *(uint *)(iVar1 + 0x11c) & 0xfffffffd;
  *(undefined2 *)(param_1 + 0x178) = *(undefined2 *)(param_1 + 0x184);
  *(undefined2 *)(param_1 + 0x17a) = *(undefined2 *)(param_1 + 0x186);
  *(undefined2 *)(param_1 + 0x17c) = *(undefined2 *)(param_1 + 0x188);
  return;
}



void __thiscall FUN_00605ac0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00631d33(0xc);
  *(undefined4 **)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4) = puVar1;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(undefined2 *)(puVar1 + 2) = 0xffff;
  *(undefined2 *)(puVar1 + 2) = *(undefined2 *)(param_1 + 0x24);
  *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
  return;
}



void __thiscall FUN_00609420(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  ushort *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_28 [40];
  
  puVar2 = (undefined4 *)FUN_00608330(local_28,param_2);
  puVar5 = (undefined4 *)(*(int *)(param_1 + 0x10) + (uint)*(ushort *)(param_1 + 0x28) * 0x28);
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  uVar1 = *(ushort *)(param_1 + 0x28);
  puVar2 = (undefined4 *)((uint)uVar1 * 0x10 + *(int *)(param_1 + 0xc));
  puVar3 = (ushort *)FUN_00631d33(2);
  if (puVar3 == (ushort *)0x0) {
    puVar3 = (ushort *)0x0;
  }
  else {
    *puVar3 = uVar1;
  }
  *puVar2 = puVar3;
  puVar2[2] = *param_2;
  puVar2[3] = param_2[1];
  puVar2[1] = 0;
  *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + 1;
  return;
}


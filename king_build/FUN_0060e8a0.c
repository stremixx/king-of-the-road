
undefined4 __thiscall FUN_0060e8a0(int param_1,uint param_2)

{
  ushort *puVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 local_28 [40];
  
  fVar2 = (float)param_2 - (float)*(int *)(param_1 + 8);
  if ((float)*(uint *)(param_1 + 0xc) < fVar2) {
    puVar3 = (undefined4 *)(param_1 + 0x14);
    puVar5 = (undefined4 *)
             (*(int *)(*(int *)(param_1 + 100) + 0x10) +
             (uint)*(ushort *)**(undefined4 **)(param_1 + 0x10) * 0x28);
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar5 = puVar5 + 1;
    }
    return 1;
  }
  puVar1 = (ushort *)**(undefined4 **)(param_1 + 0x10);
  puVar3 = (undefined4 *)
           FUN_0061ba10(local_28,param_1 + 0x3c,param_1 + 0x14,
                        fVar2 / (float)*(uint *)(param_1 + 0xc));
  puVar5 = (undefined4 *)(*(int *)(*(int *)(param_1 + 100) + 0x10) + (uint)*puVar1 * 0x28);
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  return 0;
}


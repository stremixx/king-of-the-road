
ushort * __thiscall FUN_005b5a90(ushort *param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[2] = *(ushort *)(param_2 + 0x18);
  uVar1 = *(ushort *)(param_2 + 0x14);
  *param_1 = uVar1;
  uVar2 = *(ushort *)(param_2 + 0x16);
  param_1[1] = uVar2;
  puVar3 = (undefined4 *)FUN_00631d33((uint)param_1[2] * (uint)uVar2 * (uint)uVar1);
  *(undefined4 **)(param_1 + 0xc) = puVar3;
  if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
    uVar4 = (uint)param_1[2] * (uint)*param_1 * (uint)param_1[1];
    puVar6 = *(undefined4 **)(param_2 + 8);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar3 = puVar3 + 1;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar3 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffff9ff | 4;
  FUN_005b9b40(*(undefined4 *)(param_1 + 0xc));
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[4] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f00;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[3] = param_1[2] * *param_1;
  return param_1;
}


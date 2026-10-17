
void FUN_0048aec0(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  uVar3 = 0;
  for (uVar1 = param_2; uVar1 != 0; uVar1 = uVar1 >> 0x10) {
    uVar2 = (uint)uVar3;
    uVar3 = uVar3 + 1;
    *(short *)((int)&param_2 + uVar2 * 2) = (short)uVar1;
  }
  if (param_1 != (ushort *)0x0) {
    if (uVar3 <= param_1[1]) goto LAB_0048af49;
    if (param_1[1] != 0) {
      FUN_00631d5c(param_1);
    }
  }
  uVar2 = 0x10;
  uVar1 = (uint)uVar3 * 2 + 0xc;
  if (0x10 < uVar1) {
    do {
      uVar2 = uVar2 << 1;
    } while (uVar2 < uVar1);
  }
  if (0x1fffd < uVar2 - 4) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_Requested_length_out_of_range_0066f410);
  }
  param_1 = (ushort *)FUN_00631d33(uVar2 - 4);
  param_1[1] = (ushort)(uVar2 - 10 >> 1);
LAB_0048af49:
  *param_1 = uVar3;
  param_1[2] = 1;
  if (-1 < (int)(uVar3 - 1)) {
    puVar4 = (ushort *)((int)(param_1 + 3) + (int)(&stack0x00000002 + -(int)param_1));
    puVar5 = param_1 + 3;
    for (uVar1 = (uint)(uVar3 >> 1); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    }
    for (uVar1 = (uint)((uVar3 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}


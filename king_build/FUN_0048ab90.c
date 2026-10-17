
undefined2 * FUN_0048ab90(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined2 *)0x0) {
    if ((int)param_2 <= (int)(uint)(ushort)param_1[1]) goto LAB_0048ac01;
    if (param_1[1] != 0) {
      FUN_00631d5c(param_1);
    }
  }
  uVar1 = param_2 * 2 + 0xc;
  uVar2 = 0x10;
  if (0x10 < uVar1) {
    do {
      uVar2 = uVar2 << 1;
    } while (uVar2 < uVar1);
  }
  if (0x1fffd < uVar2 - 4) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_Requested_length_out_of_range_0066f410);
  }
  param_1 = (undefined2 *)FUN_00631d33(uVar2 - 4);
  param_1[1] = (short)(uVar2 - 10 >> 1);
LAB_0048ac01:
  *param_1 = (short)param_2;
  puVar3 = (undefined4 *)(param_1 + 3);
  param_1[2] = 1;
  if (puVar3 < param_1 + (param_2 & 0xffff) + 3) {
    uVar1 = (int)(param_1 + (param_2 & 0xffff) + 3) + (1 - (int)puVar3);
    for (uVar2 = uVar1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (uVar1 = (uint)((uVar1 >> 1 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 2);
    }
  }
  return param_1;
}


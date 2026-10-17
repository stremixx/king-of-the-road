
ushort * FUN_0048ad80(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if (param_2 == (ushort *)0x0) {
    if (param_1 == (ushort *)0x0) {
      puVar3 = (ushort *)FUN_00631d33(0xc);
      puVar3[1] = 3;
      *puVar3 = 0;
      puVar3[2] = 1;
      return puVar3;
    }
    puVar3 = param_1 + 3;
    if (puVar3 < param_1 + *param_1 + 3) {
      uVar4 = (int)(param_1 + *param_1 + 3) + (1 - (int)puVar3);
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        puVar3[0] = 0;
        puVar3[1] = 0;
        puVar3 = puVar3 + 2;
      }
      for (uVar4 = (uint)((uVar4 >> 1 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
    }
    *param_1 = 0;
    param_1[2] = 1;
    return param_1;
  }
  uVar1 = *param_2;
  uVar4 = (uint)uVar1;
  if (param_1 != (ushort *)0x0) {
    if (uVar4 <= param_1[1]) goto LAB_0048ae57;
    if (param_1[1] != 0) {
      FUN_00631d5c(param_1);
    }
  }
  uVar5 = uVar4 * 2 + 0xc;
  uVar6 = 0x10;
  if (0x10 < uVar5) {
    do {
      uVar6 = uVar6 << 1;
    } while (uVar6 < uVar5);
  }
  if (0x1fffd < uVar6 - 4) {
    (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_Requested_length_out_of_range_0066f410);
  }
  param_1 = (ushort *)FUN_00631d33(uVar6 - 4);
  param_1[1] = (ushort)(uVar6 - 10 >> 1);
LAB_0048ae57:
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  puVar3 = param_1 + 3;
  if (-1 < (int)(uVar4 - 1)) {
    iVar2 = 6 - (int)puVar3;
    do {
      *puVar3 = *(ushort *)((int)param_2 + iVar2 + (int)puVar3);
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return param_1;
}


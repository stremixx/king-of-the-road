
ushort * FUN_0048ac30(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = param_2;
  if (param_1 == (ushort *)0x0) {
    uVar7 = 0x10;
    uVar6 = 0;
    uVar1 = param_2 * 2 + 0xc;
    if (0x10 < uVar1) {
      do {
        uVar7 = uVar7 << 1;
      } while (uVar7 < uVar1);
    }
    if (0x1fffd < uVar7 - 4) {
      (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_Requested_length_out_of_range_0066f410);
    }
    puVar3 = (ushort *)FUN_00631d33(uVar7 - 4);
    puVar3[1] = (ushort)(uVar7 - 10 >> 1);
    puVar3[2] = 1;
  }
  else {
    uVar6 = (uint)*param_1;
    puVar3 = param_1;
    if ((int)(uint)param_1[1] < (int)param_2) {
      uVar1 = param_2 * 2 + 0xc;
      uVar7 = 0x10;
      if (0x10 < uVar1) {
        do {
          uVar7 = uVar7 << 1;
        } while (uVar7 < uVar1);
      }
      if (0x1fffd < uVar7 - 4) {
        (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_Requested_length_out_of_range_0066f410);
      }
      puVar3 = (ushort *)FUN_00631d33(uVar7 - 4);
      puVar3[1] = (ushort)(uVar7 - 10 >> 1);
      puVar5 = puVar3 + 3;
      if (-1 < (int)(uVar6 - 1)) {
        iVar2 = 6 - (int)puVar5;
        param_2 = uVar6;
        do {
          *puVar5 = *(ushort *)((int)param_1 + iVar2 + (int)puVar5);
          puVar5 = puVar5 + 1;
          param_2 = param_2 - 1;
        } while (param_2 != 0);
      }
      puVar3[2] = param_1[2];
      if (param_1[1] != 0) {
        FUN_00631d5c(param_1);
      }
    }
  }
  *puVar3 = (ushort)uVar4;
  puVar5 = puVar3 + uVar6 + 3;
  if (puVar5 < puVar3 + (uVar4 & 0xffff) + 3) {
    uVar4 = (int)(puVar3 + (uVar4 & 0xffff) + 3) + (1 - (int)puVar5);
    for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar5[0] = 0;
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
    }
    for (uVar4 = (uint)((uVar4 >> 1 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  return puVar3;
}


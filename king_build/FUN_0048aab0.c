
ushort * FUN_0048aab0(ushort *param_1,int param_2,int param_3,ushort param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 == (ushort *)0x0) || (puVar1 = param_1, (int)(uint)param_1[1] < param_5)) {
    uVar4 = param_5 * 2 + 0xc;
    uVar5 = 0x10;
    if (0x10 < uVar4) {
      do {
        uVar5 = uVar5 << 1;
      } while (uVar5 < uVar4);
    }
    if (0x1fffd < uVar5 - 4) {
      (*(code *)PTR_FUN_0066f324)(s_Integer_0066f408,s_Requested_length_out_of_range_0066f410);
    }
    puVar1 = (ushort *)FUN_00631d33(uVar5 - 4);
    puVar1[1] = (ushort)(uVar5 - 10 >> 1);
  }
  puVar1[2] = param_4;
  *puVar1 = (ushort)param_5;
  puVar2 = puVar1 + 3;
  if (-1 < param_3 + -1) {
    param_2 = param_2 - (int)puVar2;
    iVar3 = param_3;
    do {
      *puVar2 = *(ushort *)(param_2 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  puVar2 = puVar1 + param_3 + 3;
  if (puVar2 < puVar1 + *puVar1 + 3) {
    uVar4 = (int)(puVar1 + *puVar1 + 3) + (1 - (int)puVar2);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar2 = puVar2 + 2;
    }
    for (uVar4 = (uint)((uVar4 >> 1 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  if (((param_1 != puVar1) && (param_1 != (ushort *)0x0)) && (param_1[1] != 0)) {
    FUN_00631d5c(param_1);
  }
  return puVar1;
}


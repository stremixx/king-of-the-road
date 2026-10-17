
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00535830(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_30 [12];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x28b4);
    puVar6 = (undefined4 *)(param_1 + 0x2c4);
    puVar7 = local_30;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_005ab130(&local_7c,local_30,(float *)(param_1 + 0xd18));
    fVar2 = *param_2 * _DAT_0064b440;
    fVar4 = param_2[1] * _DAT_0064b440;
    fVar3 = param_2[2] * _DAT_0064b440;
    local_3c = fVar2 * *(float *)(param_1 + 0xd18) +
               fVar4 * *(float *)(param_1 + 0xd24) + fVar3 * *(float *)(param_1 + 0xd30);
    local_38 = fVar2 * *(float *)(param_1 + 0xd1c) +
               fVar4 * *(float *)(param_1 + 0xd28) + fVar3 * *(float *)(param_1 + 0xd34);
    local_48 = local_3c + *(float *)(param_1 + 0xcf4);
    local_44 = local_38 + *(float *)(param_1 + 0xcf8);
    local_40 = fVar2 * *(float *)(param_1 + 0xd20) +
               fVar4 * *(float *)(param_1 + 0xd2c) + fVar3 * *(float *)(param_1 + 0xd38) +
               *(float *)(param_1 + 0xcfc);
    iVar5 = iVar1 * 0x970;
    local_84 = local_78 * (float)(&DAT_00696f08)[iVar1 * 0x25c] +
               local_6c * (float)(&DAT_00696f0c)[iVar1 * 0x25c] +
               local_60 * (float)(&DAT_00696f10)[iVar1 * 0x25c] + local_54;
    local_80 = local_68 * (float)(&DAT_00696f0c)[iVar1 * 0x25c] +
               local_5c * (float)(&DAT_00696f10)[iVar1 * 0x25c] +
               local_74 * (float)(&DAT_00696f08)[iVar1 * 0x25c] + local_50;
    local_88 = local_7c * (float)(&DAT_00696f08)[iVar1 * 0x25c] +
               local_70 * (float)(&DAT_00696f0c)[iVar1 * 0x25c] +
               local_64 * (float)(&DAT_00696f10)[iVar1 * 0x25c] + local_58;
    local_4c = local_80;
    FUN_004bc320(&local_88,&local_48,1);
    if (ABS(*(float *)(&DAT_00696f28 + iVar5)) < (float)_DAT_0064a770) {
      local_88 = local_7c * *(float *)(&DAT_00696f20 + iVar5) +
                 local_70 * *(float *)(&DAT_00696f24 + iVar5) +
                 local_64 * *(float *)(&DAT_00696f28 + iVar5) + local_58;
      local_84 = local_78 * *(float *)(&DAT_00696f20 + iVar5) +
                 local_6c * *(float *)(&DAT_00696f24 + iVar5) +
                 local_60 * *(float *)(&DAT_00696f28 + iVar5) + local_54;
      local_80 = local_74 * *(float *)(&DAT_00696f20 + iVar5) +
                 local_68 * *(float *)(&DAT_00696f24 + iVar5) +
                 local_5c * *(float *)(&DAT_00696f28 + iVar5) + local_50;
      FUN_004bc320(&local_88,&local_48,1);
    }
  }
  return;
}


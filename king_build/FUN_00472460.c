
void __thiscall FUN_00472460(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  param_1[1] = *(undefined4 *)*param_2;
  iVar2 = *param_2;
  *param_2 = iVar2 + 4;
  piVar1 = param_1 + 4;
  param_1[1] = *(undefined4 *)(iVar2 + 4);
  iVar2 = *param_2;
  puVar8 = (undefined4 *)(iVar2 + 4);
  *param_2 = (int)puVar8;
  uVar3 = *puVar8;
  *param_2 = iVar2 + 8;
  *param_1 = uVar3;
  uVar7 = *(uint *)*param_2;
  *param_2 = (int)((uint *)*param_2 + 1);
  iVar2 = param_1[5];
  iVar5 = *piVar1;
  iVar4 = FUN_0047c640(iVar2,iVar2,iVar5);
  iVar6 = param_1[5];
  for (; iVar4 != iVar6; iVar4 = iVar4 + 0x10) {
    FUN_004030a0(iVar4);
  }
  iVar5 = param_1[5] + (iVar2 - iVar5 >> 4) * -0x10;
  param_1[5] = iVar5;
  iVar2 = *piVar1;
  if ((uint)(param_1[6] - iVar2 >> 4) < uVar7) {
    iVar6 = FUN_0047b120(uVar7,iVar2,iVar5);
    iVar4 = param_1[6] - *piVar1 >> 4;
    if (iVar4 != 0) {
      FUN_0044b440(*piVar1,iVar4 << 4);
    }
    *piVar1 = iVar6;
    param_1[5] = (iVar5 - iVar2 >> 4) * 0x10 + iVar6;
    param_1[6] = uVar7 * 0x10 + iVar6;
  }
  for (; uVar7 != 0; uVar7 = uVar7 - 1) {
    local_10 = 0;
    local_8 = 0;
    local_4 = 0x3ff00000;
    FUN_00471bc0(param_2);
    puVar8 = (undefined4 *)param_1[5];
    if (puVar8 == (undefined4 *)param_1[6]) {
      FUN_0047bbd0(puVar8,&local_10);
    }
    else {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = local_10;
        puVar8[1] = local_c;
        puVar8[2] = local_8;
        puVar8[3] = local_4;
      }
      param_1[5] = param_1[5] + 0x10;
    }
  }
  FUN_00479d60(param_2,param_1 + 7);
  param_1[10] = *(undefined4 *)*param_2;
  *param_2 = *param_2 + 4;
  return;
}


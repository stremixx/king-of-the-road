
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00596220(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_120;
  undefined1 local_11c [4];
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined4 local_fc [14];
  float fStack_c4;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_8c;
  undefined1 local_30 [48];
  
  if (*(int *)(*(int *)(param_1 + 0x13c) + 0x40) == 0) {
    if (DAT_006f5878 != 2) goto LAB_0059625a;
  }
  else {
    puVar9 = (undefined4 *)(param_1 + 0x50);
    iVar6 = FUN_005bc980(puVar9,local_108,&local_120,0,0xffff,0);
    if (iVar6 != 0) {
      if (local_120 < 0) {
        local_120 = -1 - local_120;
      }
      pfVar3 = (float *)FUN_005bbf10(local_11c,puVar9,&local_120);
      fVar1 = *pfVar3;
      fVar2 = pfVar3[1];
      FUN_005aab70();
      iVar6 = *(int *)(param_1 + 0x148);
      puVar8 = (undefined4 *)(param_1 + 0x80);
      puVar10 = puVar8;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      if (iVar6 == 3) {
        uVar4 = FUN_005ab330(local_30,fVar1 * _DAT_0064b958,fVar2 * _DAT_0064b958,
                             _DAT_0064b958 * 0.0);
        FUN_005ab2f0(uVar4);
      }
      if (*(int *)(param_1 + 0x148) == 4) {
        uVar4 = FUN_005ab330(local_30,fVar1 * _DAT_0064b480,fVar2 * _DAT_0064b480,
                             _DAT_0064b480 * 0.0);
        FUN_005ab2f0(uVar4);
      }
      FUN_005eebf0();
      local_118 = DAT_00701594 * _DAT_0064b31c;
      puVar9 = &DAT_00701550;
      puVar10 = local_fc;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      local_114 = DAT_00701598 * _DAT_0064b31c;
      local_b4 = DAT_00701590 * _DAT_0064b31c + *(float *)(param_1 + 0xa4);
      local_8c = 0;
      local_100 = 0;
      local_b0 = local_118 + *(float *)(param_1 + 0xa8);
      local_ac = local_114 + *(float *)(param_1 + 0xac);
      local_a8 = *(float *)(param_1 + 0xa4) - DAT_00701590 * _DAT_0064b31c;
      local_a4 = *(float *)(param_1 + 0xa8) - local_118;
      local_a0 = *(float *)(param_1 + 0xac) - local_114;
      local_110 = local_118;
      local_10c = local_114;
      uVar5 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x34))(4,&local_100);
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x4c);
      }
      else if (*(int *)(param_1 + 0x148) == 3) {
        *(float *)(param_1 + 0xac) = fStack_c4 + _DAT_0064b2ec;
      }
      else {
        *(float *)(param_1 + 0xac) = fStack_c4 + _DAT_0064b3fc;
      }
      goto LAB_0059626c;
    }
LAB_0059625a:
    *(undefined4 *)(param_1 + 0x144) = 1;
  }
  puVar8 = (undefined4 *)(param_1 + 0x20);
LAB_0059626c:
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *param_2 = *puVar8;
    puVar8 = puVar8 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


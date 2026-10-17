
void FUN_004cf420(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210 [8];
  undefined4 local_1f0 [49];
  float local_12c;
  undefined4 local_128 [12];
  int local_f8;
  undefined1 auStack_f4 [48];
  undefined4 local_c4 [49];
  
  if (param_1[0x4d] != 0) {
    FUN_00546140(local_c4);
    piVar1 = param_1 + 0x1427;
    if (param_1[0x1427] == DAT_0068a8f0) {
      uVar15 = 0;
      uVar14 = 0;
      fVar11 = (float10)(**(code **)(*param_1 + 0x54))(0,0);
      puVar9 = local_c4;
      fVar13 = (float)fVar11;
      uVar12 = extraout_ECX;
      FUN_0041d3f0(piVar1);
      uVar2 = FUN_0057d570(auStack_f4);
      FUN_0057d5d0(uVar2,uVar12,puVar9,fVar13);
      uVar3 = FUN_004cf600();
      uVar4 = FUN_004cf610(uVar3);
      iVar5 = FUN_004cf630(uVar4);
      iVar6 = FUN_004cf620();
      FUN_004cd6a0(iVar6 + iVar5 * 1000,uVar4,uVar3,uVar2,uVar12,puVar9,fVar13,uVar14,uVar15);
      iVar6 = param_1[0x5a];
      uVar12 = *(undefined4 *)(param_1[0x4d] + 0x3c);
    }
    else {
      iVar5 = FUN_005e4980(param_1[0x5a]);
      if (iVar5 == 0) {
        return;
      }
      FUN_00438de0(*piVar1);
      puVar9 = *(undefined4 **)(iVar5 + 0x18);
      local_220 = *puVar9;
      local_21c = puVar9[1];
      local_218 = puVar9[2];
      local_214 = puVar9[3];
      puVar8 = puVar9 + 4;
      puVar10 = local_210;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar8 = puVar9 + 0xc;
      puVar10 = local_1f0;
      for (iVar6 = 0x31; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_12c = (float)puVar9[0x3d];
      iVar6 = *param_1;
      puVar8 = puVar9 + 0x3e;
      puVar10 = local_128;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      }
      local_f8 = puVar9[0x4a];
      puVar9 = local_c4;
      puVar8 = local_1f0;
      for (iVar7 = 0x31; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      fVar11 = (float10)(**(code **)(iVar6 + 0x54))();
      local_f8 = *piVar1;
      local_12c = (float)fVar11;
      iVar6 = param_1[0x5a];
      uVar12 = *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0xfb0);
    }
    FUN_005e48c0(iVar6,uVar12,300,&local_220);
  }
  return;
}


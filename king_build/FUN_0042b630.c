
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_0042b630(int param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double **ppdVar6;
  undefined4 auStack_b0 [7];
  undefined4 uStack_94;
  double *apdStack_90 [6];
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 **ppuStack_70;
  uint local_5c [3];
  undefined4 *local_50;
  int local_4c;
  int local_48;
  double local_44;
  double local_3c;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cfe8;
  local_14 = ExceptionList;
  if (param_1 == 0) {
    return 0;
  }
  ppuStack_70 = (undefined4 **)local_5c;
  puStack_74 = (undefined4 *)0x42b676;
  ExceptionList = &local_14;
  FUN_00477c00();
  if (local_5c[0] == DAT_0068a8f0) {
    ExceptionList = local_14;
    return 0;
  }
  local_2c = *(double *)(param_1 + 0x38) - *(double *)(local_5c[0] + 0x270);
  local_24 = *(double *)(param_1 + 0x40) - *(double *)(local_5c[0] + 0x278);
  dVar1 = *(double *)(param_1 + 0x48) - *(double *)(local_5c[0] + 0x280);
  dVar1 = SQRT(local_2c * local_2c + dVar1 * dVar1 + local_24 * local_24);
  if (dVar1 < _DAT_0064a858) {
    ExceptionList = local_14;
    return 0;
  }
  if (_DAT_0064a860 < dVar1) {
    ExceptionList = local_14;
    return 0;
  }
  ppuStack_70 = (undefined4 **)(local_5c + 1);
  puVar4 = (undefined4 *)(param_1 + 0x90);
  ppdVar6 = apdStack_90;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppdVar6 = (double *)*puVar4;
    puVar4 = puVar4 + 1;
    ppdVar6 = ppdVar6 + 1;
  }
  local_5c[1] = 0;
  local_5c[2] = 0;
  puVar4 = (undefined4 *)(local_5c[0] + 0x28);
  puVar5 = auStack_b0;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004859b0(&local_50,1);
  local_c = 0;
  if ((uint)((local_4c - (int)local_50) / 0xc) < 2) {
    local_c = 0xffffffff;
    iVar3 = (local_48 - (int)local_50) / 0xc;
    if (iVar3 != 0) {
      ppuStack_70 = (undefined4 **)(iVar3 * 0xc);
      puStack_74 = local_50;
      uStack_78 = 0x42b7cc;
      FUN_0044b440();
    }
    ExceptionList = local_14;
    return 0;
  }
  ppuStack_70 = &local_50;
  puStack_74 = (undefined4 *)0x42b7ed;
  FUN_00484790();
  puVar4 = (undefined4 *)(param_1 + 0x90);
  ppdVar6 = apdStack_90 + 1;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppdVar6 = (double *)*puVar4;
    puVar4 = puVar4 + 1;
    ppdVar6 = ppdVar6 + 1;
  }
  apdStack_90[0] = &local_44;
  uStack_94 = 0x42b805;
  FUN_00439180();
  if ((*(byte *)(local_4c + -0x10) & 1) != 0) {
    local_44 = -local_44;
    local_3c = -local_3c;
    local_34 = -local_34;
    local_24 = local_3c;
    local_1c = local_34;
  }
  if (local_44 * *(double *)(param_1 + 0x58) +
      local_3c * *(double *)(param_1 + 0x60) + local_34 * *(double *)(param_1 + 0x68) <=
      _DAT_0064a668) {
    iVar3 = (local_48 - (int)local_50) / 0xc;
    if (iVar3 != 0) {
      uVar2 = iVar3 * 0xc;
      if (0x80 < uVar2) {
        ppuStack_70 = (undefined4 **)local_50;
        puStack_74 = (undefined4 *)0x42b8a8;
        FUN_0061c888();
        ExceptionList = local_14;
        return 0;
      }
      ppuStack_70 = (undefined4 **)0x42b8d6;
      FUN_00401aa0();
      *local_50 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = local_50;
      DAT_0068c164 = 0;
    }
    ExceptionList = local_14;
    return 0;
  }
  iVar3 = (local_48 - (int)local_50) / 0xc;
  local_c = 0xffffffff;
  if (iVar3 != 0) {
    ppuStack_70 = (undefined4 **)(iVar3 * 0xc);
    puStack_74 = local_50;
    uStack_78 = 0x42b92b;
    FUN_0044b440();
  }
  ExceptionList = local_14;
  return 1;
}


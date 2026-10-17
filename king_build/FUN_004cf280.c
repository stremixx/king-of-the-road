
void FUN_004cf280(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  float10 fVar3;
  int iVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  uint local_c4;
  undefined1 local_c0 [8];
  int local_b8;
  
  *(int *)(param_2 + 0x40c0) = param_1;
  bVar1 = true;
  local_c4 = 0;
  if (param_3 != DAT_0068a8f0) {
    puVar6 = local_c0;
    puVar8 = puVar6;
    FUN_0041d3f0(&param_3);
    FUN_0043fd20(puVar6,puVar8);
    local_c4 = FUN_0043f700(param_3);
    if (local_b8 == 1) {
      uVar2 = local_c4 | 1;
      FUN_0041d3f0(&param_3);
      FUN_0043f770(local_b8,uVar2);
    }
    else {
      bVar1 = false;
      if (local_b8 == 7) {
        *(undefined4 *)(param_2 + 0x4078) = 1;
      }
      else if (local_b8 == 8) {
        *(undefined4 *)(param_2 + 0x4078) = 1;
      }
      else {
        *(undefined4 *)(param_2 + 0x4078) = 0;
      }
    }
  }
  *(undefined4 *)(param_2 + 0x277c) = 1;
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x51d0) = 0;
    *(undefined2 *)(param_2 + 0x2740) = 1;
    iVar4 = DAT_006cdbcc;
    if (*(int *)(DAT_006cdbcc + 0x524) == 0) {
      *(undefined4 *)(param_2 + 0x2760) = 1;
    }
    else {
      *(undefined4 *)(param_2 + 0x2760) = 0;
    }
    puVar5 = &local_c4;
    uVar9 = 0;
    DAT_006952a0 = param_1;
    FUN_0041d3f0(&param_3);
    FUN_004cf0a0(param_1,iVar4,puVar5,uVar9);
  }
  else {
    *(undefined2 *)(param_2 + 0x2740) = 0;
    *(undefined4 *)(param_2 + 0x2760) = 0;
    if (DAT_00695288 == 0) {
      puVar5 = &local_c4;
      puVar7 = puVar5;
      FUN_0041d3f0(&param_3);
      FUN_004cef80(param_1,puVar5,puVar7);
    }
    else {
      puVar5 = &local_c4;
      uVar9 = 0;
      puVar7 = puVar5;
      FUN_0041d3f0(&param_3);
      FUN_004cf0a0(param_1,puVar5,puVar7,uVar9);
      if (param_3 == DAT_0069522c) {
        DAT_006952a0 = param_1;
      }
    }
  }
  fVar3 = (float10)thunk_FUN_00603580();
  *(double *)(param_2 + 0x40a0) = (double)fVar3;
  return;
}


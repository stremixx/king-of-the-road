
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422ef0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double **ppdVar5;
  double *apdStack_cc [7];
  undefined4 uStack_b0;
  uint *puStack_ac;
  uint local_a0 [2];
  undefined4 local_98;
  undefined4 local_94;
  char *local_90;
  char *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58 [10];
  double local_30;
  undefined1 local_20 [32];
  
  local_a0[0] = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = s_UNDEFINED_MODULE_0066c638;
  local_8c = s_UNDEFINED_ROOM_0066c628;
  local_88 = 0;
  local_84 = 0;
  local_7c = 0xffffffff;
  local_78 = 0xffffffff;
  do {
    puStack_ac = (uint *)local_20;
    uStack_b0 = 0x422f48;
    puVar1 = (undefined4 *)FUN_00480310();
    puVar3 = puVar1;
    puVar4 = local_58;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    ppdVar5 = apdStack_cc + 1;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppdVar5 = (double *)*puVar1;
      puVar1 = puVar1 + 1;
      ppdVar5 = ppdVar5 + 1;
    }
    apdStack_cc[0] = &local_70;
    FUN_00435cd0();
    local_30 = local_68 - _DAT_0068aa18;
    if (_DAT_0064a758 <=
        SQRT((local_70 - _DAT_0068aa10) * (local_70 - _DAT_0068aa10) +
             (local_60 - _DAT_0068aa20) * (local_60 - _DAT_0068aa20) + local_30 * local_30)) {
      puStack_ac = local_a0;
      puVar1 = local_58;
      ppdVar5 = apdStack_cc;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppdVar5 = (double *)*puVar1;
        puVar1 = puVar1 + 1;
        ppdVar5 = ppdVar5 + 1;
      }
      FUN_00438e50();
    }
  } while ((local_a0[0] & 0x60) != 0);
  puVar1 = local_58;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


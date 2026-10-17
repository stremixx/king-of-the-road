
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00477010(undefined4 *param_1,undefined4 *param_2,undefined4 **param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 *local_2c;
  undefined4 local_18 [3];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fd58;
  local_c = ExceptionList;
  if (param_1 == param_2) {
    return 0xfffffffb;
  }
  if (param_1[0x28] == param_1[0x29]) {
    return 0xfffffff8;
  }
  if (param_2[0x2c] == DAT_0068a8f0) {
    return 0xfffffffc;
  }
  local_2c = param_2;
  ExceptionList = &local_c;
  local_2c = (undefined4 *)FUN_0047bf10(param_1[0x28],param_1[0x29],&param_2);
  if (local_2c != (undefined4 *)puVar4[0x29]) {
    if (local_2c + 4 != (undefined4 *)puVar4[0x29]) {
      FUN_0047a120(local_2c + 4,(undefined4 *)puVar4[0x29]);
    }
    puVar4[0x29] = puVar4[0x29] + -0x10;
    local_2c = (undefined4 *)0x0;
    FUN_0046c840();
    iVar3 = DAT_0068a8f0;
    local_2c = &param_1;
    FUN_00478a20();
    param_2[0x2c] = iVar3;
    local_4 = 0;
    local_2c = local_18;
    FUN_0044c100();
    local_4 = 0xffffffff;
    local_2c = (undefined4 *)0x477159;
    FUN_004497b0();
    param_2[0x88] = 0;
    param_2[0x89] = 0;
    if (((uint)param_3 & 1) == 0) {
      param_3 = &local_2c;
      pdVar1 = (double *)(param_2 + 0x22);
      local_2c = param_2;
      fVar5 = (float10)FUN_004736c0();
      *pdVar1 = (double)((float10)*pdVar1 - fVar5);
      local_2c = param_2;
      param_3 = &local_2c;
      fVar5 = (float10)FUN_004736c0();
      dVar2 = *(double *)(puVar4 + 0x22);
      pdVar1 = (double *)(param_2 + 0x22);
      *(double *)(puVar4 + 0x22) = (double)(fVar5 + (float10)dVar2);
      if (*pdVar1 < _DAT_0064a668) {
        *(double *)(puVar4 + 0x22) = (double)(fVar5 + (float10)dVar2 + (float10)*pdVar1);
        *(undefined4 *)pdVar1 = 0;
        param_2[0x23] = 0;
      }
    }
    param_3 = &local_2c;
    local_2c = puVar4;
    FUN_004772b0();
    local_2c = param_2;
    param_3 = &local_2c;
    FUN_004772b0();
    puVar4[0x2b] = puVar4[0x28];
    if (puVar4[0x28] == puVar4[0x29]) {
      local_2c = puVar4;
      param_3 = &local_2c;
      FUN_00476bf0();
    }
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 0xffffffff;
}


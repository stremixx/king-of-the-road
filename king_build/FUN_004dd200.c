
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004dd200(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_28 [7];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645288;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_BlowProcessBenzo_00671ca4);
  puVar2 = param_1 + 0xe;
  local_4 = 0;
  iVar3 = 3;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x23;
  iVar3 = 4;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = &DAT_00701550;
  puVar5 = param_1 + 0x21;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_1 = &PTR_FUN_0064c544;
  param_1[0x20] = param_2;
  FUN_005d2c20(param_1);
  param_1[0x1f] = 0;
  puVar2 = local_28;
  iVar3 = 3;
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar2 = param_1 + 0x21;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  param_1[0x2d] = param_5;
  param_1[0x2e] = param_6;
  if (param_4 == 0) {
    param_1[0xe] = 0xc1100000;
    param_1[0xf] = 0x3f800000;
    param_1[0x10] = 0x3f800000;
    param_1[0x17] = 0;
    param_1[0x11] = 0;
    param_1[0x18] = 1;
    param_1[0x19] = 2;
    param_1[0x12] = 0x3f800000;
    param_1[0x13] = 0x3f800000;
    param_1[0x14] = 0x41000000;
    param_1[0x15] = 0x3f800000;
    param_1[0x16] = 0x3f800000;
  }
  else {
    if (param_4 == 1) {
      param_1[0xe] = 0;
      param_1[0xf] = 0x3f800000;
      param_1[0x10] = 0x3f800000;
      param_1[0x17] = 1;
      iVar3 = _rand();
      if (_DAT_0064b248 < (float)iVar3 * _DAT_0064b244) {
        param_1[0x18] = 0;
        param_1[0x19] = 2;
        param_1[0x11] = 0xc1100000;
        param_1[0x12] = 0x3f800000;
        param_1[0x13] = 0x3f800000;
        param_1[0x14] = 0x41000000;
        param_1[0x15] = 0x3f800000;
        param_1[0x16] = 0x3f800000;
        goto LAB_004dd481;
      }
      param_1[0x18] = 2;
      param_1[0x11] = 0x41000000;
      param_1[0x12] = 0x3f800000;
      param_1[0x13] = 0x3f800000;
      param_1[0x14] = 0xc1100000;
      param_1[0x15] = 0x3f800000;
      param_1[0x16] = 0x3f800000;
    }
    else {
      param_1[0xe] = 0x41000000;
      param_1[0xf] = 0x3f800000;
      param_1[0x10] = 0x3f800000;
      param_1[0x17] = 2;
      param_1[0x18] = 1;
      param_1[0x11] = 0;
      param_1[0x12] = 0x3f800000;
      param_1[0x13] = 0x3f800000;
      param_1[0x14] = 0xc1100000;
      param_1[0x15] = 0x3f800000;
      param_1[0x16] = 0x3f800000;
    }
    param_1[0x19] = 0;
  }
LAB_004dd481:
  puVar2 = param_1 + 0x1a;
  uVar6 = 0;
  do {
    puVar2[-0xf] = 0;
    *puVar2 = 0;
    iVar3 = _rand();
    fVar1 = (float)iVar3 * _DAT_0064b244;
    iVar3 = _rand();
    uVar7 = uVar6 + 1;
    puVar2[-0x12] =
         (float)uVar6 * _DAT_0064b3f8 + ((float)iVar3 * _DAT_0064b244 - fVar1) * _DAT_0064b340;
    puVar2 = puVar2 + 1;
    uVar6 = uVar7;
  } while (uVar7 < 3);
  param_1[0x1d] = 0;
  pfVar4 = (float *)(param_1 + 8);
  iVar3 = 3;
  do {
    if (*pfVar4 <= (float)param_1[0x1d]) {
      fVar1 = (float)param_1[0x1d];
    }
    else {
      fVar1 = *pfVar4;
    }
    param_1[0x1d] = fVar1;
    pfVar4 = pfVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x1e] = fVar1 + (float)_DAT_0064a650;
  FUN_005d2a80(1);
  ExceptionList = local_c;
  return param_1;
}


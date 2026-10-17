
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_004da440(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d27c0(s_mnBlow2_00671c6c);
  puVar1 = param_1 + 0x11;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *puVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = &PTR_FUN_0064c48c;
  param_1[10] = param_2;
  param_1[9] = 0;
  local_4 = 0;
  param_1[8] = DAT_00671c48;
  param_1[0xb] = *param_3;
  param_1[0xc] = param_3[1];
  param_1[0xd] = param_3[2];
  *puVar1 = *param_3;
  param_1[0x12] = param_3[1];
  uVar2 = param_3[2];
  param_1[0x16] = 0x40800000;
  param_1[0x17] = 0x3f000000;
  param_1[0x13] = uVar2;
  param_1[0x15] = 0;
  fVar4 = DAT_00701598;
  iVar11 = 0x14;
  fVar3 = DAT_00701594 + DAT_00701594;
  param_1[0xe] = DAT_00701590 + DAT_00701590;
  param_1[0xf] = fVar3;
  param_1[0x14] = 0x3f4ccccd;
  param_1[0x10] = fVar4 + fVar4;
  do {
    iVar10 = _rand();
    fVar3 = (float)iVar10 * _DAT_0064b244;
    iVar10 = _rand();
    fVar3 = (float)iVar10 * _DAT_0064b244 - fVar3;
    fVar4 = DAT_00701580 * fVar3 * _DAT_0064b3f8;
    fVar5 = DAT_00701584 * fVar3 * _DAT_0064b3f8;
    fVar3 = fVar3 * DAT_00701588 * _DAT_0064b3f8;
    iVar10 = _rand();
    fVar6 = (float)iVar10 * _DAT_0064b244;
    iVar10 = _rand();
    fVar6 = (float)iVar10 * _DAT_0064b244 - fVar6;
    fVar7 = DAT_007015a0 * fVar6 * _DAT_0064b3f8;
    fVar8 = DAT_007015a4 * fVar6 * _DAT_0064b3f8;
    fVar6 = fVar6 * DAT_007015a8 * _DAT_0064b3f8;
    iVar10 = _rand();
    fVar9 = (float)iVar10 * _DAT_0064c488 + _DAT_0064b3fc;
    FUN_0041ce10(DAT_00701590 * fVar9 + fVar7 + fVar4,fVar5 + fVar8 + DAT_00701594 * fVar9,
                 fVar3 + fVar9 * DAT_00701598 + fVar6);
    FUN_004ba360(puVar1,local_18);
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}


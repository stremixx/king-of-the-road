
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_004dbfd0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [12];
  float local_34;
  float local_30;
  undefined4 *local_28;
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006451e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_28 = param_1;
  FUN_005d27c0(s_mnBlow3_00671c90);
  puVar1 = param_1 + 0x11;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_4 = 0;
  *puVar1 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iVar7 = 4;
  do {
    FUN_004042a0();
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  puVar6 = &DAT_00701550;
  puVar8 = param_1 + 0x14;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *param_1 = &PTR_FUN_0064c4fc;
  param_1[10] = param_2;
  param_1[9] = 0;
  param_1[8] = DAT_00671c4c;
  param_1[0xb] = *param_4;
  param_1[0xc] = param_4[1];
  param_1[0xd] = param_4[2];
  *puVar1 = *param_4;
  param_1[0x12] = param_4[1];
  uVar5 = param_4[2];
  param_1[0x22] = 0x40800000;
  param_1[0x23] = 0x3f000000;
  param_1[0x13] = uVar5;
  param_1[0x21] = 0;
  fVar3 = DAT_00701598;
  fVar2 = DAT_00701594 + DAT_00701594;
  param_1[0xe] = DAT_00701590 + DAT_00701590;
  param_1[0xf] = fVar2;
  param_1[0x20] = 0x3f4ccccd;
  param_1[0x10] = fVar3 + fVar3;
  puVar6 = param_1 + 0x14;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = *param_3;
    param_3 = param_3 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar7 = 5;
  do {
    iVar4 = _rand();
    fVar2 = (float)iVar4 * _DAT_0064b244;
    iVar4 = _rand();
    fVar2 = (float)iVar4 * _DAT_0064b244 - fVar2;
    local_34 = DAT_00701580 * fVar2;
    local_30 = DAT_00701584 * fVar2;
    FUN_0041ce10(local_34 * _DAT_0064b3f8,local_30 * _DAT_0064b3f8,
                 fVar2 * DAT_00701588 * _DAT_0064b3f8);
    iVar4 = _rand();
    fVar2 = (float)iVar4 * _DAT_0064b244;
    iVar4 = _rand();
    fVar2 = (float)iVar4 * _DAT_0064b244 - fVar2;
    FUN_0041ce10(DAT_007015a0 * fVar2 * _DAT_0064b3f8,DAT_007015a4 * fVar2 * _DAT_0064b3f8,
                 fVar2 * DAT_007015a8 * _DAT_0064b3f8);
    iVar4 = _rand();
    fVar2 = (float)iVar4 * _DAT_0064c488 + _DAT_0064b3fc;
    FUN_0041ce10(local_4c + fVar2 * DAT_00701590,fVar2 * DAT_00701594 + local_48,
                 fVar2 * DAT_00701598 + local_44);
    FUN_0041ce10(local_70 + local_64,local_6c + local_60,local_68 + local_5c);
    uVar5 = FUN_004cb300(local_24,local_40,param_1 + 0x14);
    uVar5 = FUN_0043f690(local_18,puVar1,param_1 + 0x14,uVar5);
    FUN_004ba360(uVar5);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  FUN_005d2c20(param_1);
  ExceptionList = local_c;
  return param_1;
}


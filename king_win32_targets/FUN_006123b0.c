
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006123b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  DWORD DVar4;
  int iVar5;
  
  DVar4 = timeGetTime();
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[6] = *param_2;
  param_1[7] = param_2[1];
  param_1[8] = param_2[2];
  param_1[3] = *param_3;
  param_1[4] = param_3[1];
  uVar1 = param_3[2];
  param_1[0xc] = DVar4;
  param_1[5] = uVar1;
  iVar5 = _rand();
  param_1[0xd] = (float)iVar5 * _DAT_00724ed8 * _DAT_0064b244;
  iVar5 = _rand();
  fVar3 = _DAT_00724ed8;
  fVar2 = (float)iVar5 * _DAT_0064b244;
  param_1[10] = param_1[0xb] + DVar4;
  param_1[0xe] = fVar3 * fVar2 * _DAT_0064b2f4;
  return;
}


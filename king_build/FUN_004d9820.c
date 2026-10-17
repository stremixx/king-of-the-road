
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d9820(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined1 local_3c [40];
  void *pvStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064508b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xd] = (int)((float)*(double *)(param_1[8] + 0xb90) + (float)param_1[0xd]);
  iVar5 = _rand();
  fVar1 = (float)iVar5 * _DAT_0064b47c;
  iVar5 = _rand();
  fVar2 = _DAT_0064c3e4 * (float)iVar5 * _DAT_0064b244;
  pfVar6 = (float *)FUN_005ab7d0(local_3c,fVar2 + fVar2);
  fVar2 = DAT_007015a0 * *pfVar6 + DAT_007015a4 * pfVar6[3] + DAT_007015a8 * pfVar6[6] + pfVar6[9];
  fVar3 = DAT_007015a0 * pfVar6[1] + DAT_007015a4 * pfVar6[4] + DAT_007015a8 * pfVar6[7] +
          pfVar6[10];
  fVar4 = DAT_007015a0 * pfVar6[2] + DAT_007015a4 * pfVar6[5] + DAT_007015a8 * pfVar6[8] +
          pfVar6[0xb];
  local_4c = DAT_00701598 * _DAT_0064b310 + fVar4;
  local_50 = DAT_00701594 * _DAT_0064b310 + fVar3;
  local_54 = DAT_00701590 * _DAT_0064b310 + fVar2;
  iVar5 = FUN_00631d33(0x6c);
  piVar7 = (int *)0x0;
  local_4 = 0;
  if (iVar5 != 0) {
    local_40 = fVar4 * fVar1 + (float)param_1[0xb];
    local_44 = fVar3 * fVar1 + (float)param_1[10];
    local_48 = fVar2 * fVar1 + (float)param_1[9];
    iVar5 = _rand();
    piVar7 = (int *)FUN_004d9a50(param_1[8],&local_48,&local_54,
                                 (float)iVar5 * _DAT_0064c3f0 + _DAT_0064b2f4);
  }
  local_4 = 0xffffffff;
  (**(code **)(*piVar7 + 0x18))(1);
  if (_DAT_0064b328 < (float)param_1[0xd]) {
    (**(code **)(*param_1 + 0x1c))(1);
    ExceptionList = pvStack_14;
    return;
  }
  FUN_005d29a0(1);
  ExceptionList = pvStack_10;
  return;
}


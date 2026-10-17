
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_005ce340(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,float param_6,float param_7,float param_8,double param_9,int param_10
            ,int param_11,int param_12)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  float local_bc;
  float local_b8;
  float local_b4;
  double local_b0;
  int local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined8 local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 *local_54;
  undefined1 local_50 [12];
  undefined1 local_44 [48];
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00648416;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  local_54 = param_1;
  FUN_005cdc20(0,0x3ff00000);
  local_c = 0;
  *param_1 = &PTR_FUN_00650e08;
  FUN_005ce720();
  local_b4 = param_7 * DAT_00701590 - param_6 * DAT_00701594;
  local_b8 = param_6 * DAT_00701598 - param_8 * DAT_00701590;
  local_bc = param_8 * DAT_00701594 - param_7 * DAT_00701598;
  FUN_005aaad0(&local_60,&local_bc);
  if (0 < param_2) {
    local_a8 = param_2;
    do {
      iVar2 = _rand();
      iVar5 = 4;
      local_b0 = SQRT(((double)(iVar2 % 10) * _DAT_0064a948 + _DAT_0064a660) * param_9 *
                      _DAT_0064a830);
      local_78 = local_b0 + local_b0;
      if (param_12 != 0) {
        iVar5 = 2;
      }
      iVar2 = _rand();
      pfVar3 = (float *)FUN_005ab7d0(local_44,((float)(iVar2 % 100 + -0x32) * (float)_DAT_0064c8f0)
                                              / (float)(iVar5 * 100));
      local_a4 = param_6 * *pfVar3 + param_7 * pfVar3[3] + param_8 * pfVar3[6] + pfVar3[9];
      local_a0 = param_6 * pfVar3[1] + param_7 * pfVar3[4] + param_8 * pfVar3[7] + pfVar3[10];
      local_84 = param_6 * pfVar3[2] + param_7 * pfVar3[5] + param_8 * pfVar3[8] + pfVar3[0xb];
      local_9c = local_84;
      if (local_84 < (float)_DAT_0064a5a8) {
        local_9c = 0.1;
      }
      local_bc = (float)(((float10)local_b0 * (float10)_DAT_0064a770) / (float10)local_9c);
      local_b4 = local_bc * local_9c;
      local_b8 = local_a0 * local_bc;
      local_bc = local_bc * local_a4;
      local_8c = local_a4;
      local_88 = local_a0;
      if (param_12 != 0) {
        fVar1 = (float)param_9;
        local_7c = local_58 * fVar1 * _DAT_0064b344;
        local_80 = local_5c * fVar1 * _DAT_0064b344;
        local_b0 = (double)CONCAT44(local_b0._4_4_,fVar1 * local_60 * _DAT_0064b344);
        iVar2 = _rand();
        local_98 = (float)(iVar2 % 10 + -5) * (float)_DAT_0064a5a8;
        local_90 = local_7c * local_98;
        local_94 = local_80 * local_98;
        local_98 = local_b0._0_4_ * local_98;
        local_6c = local_98;
        local_68 = local_94;
        local_64 = local_90;
        FUN_005aae00(local_50,&local_6c);
      }
      iVar2 = FUN_00631d33(0xb8);
      local_b0 = (double)CONCAT44(local_b0._4_4_,iVar2);
      local_c._0_1_ = 1;
      if (iVar2 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_005ce070(10,param_3,param_4,param_5,local_bc,local_b8,local_b4,
                                     (undefined4)local_78,local_78._4_4_);
      }
      local_c = (uint)local_c._1_3_ << 8;
      if ((param_10 != 0) && (param_11 != 0)) {
        (**(code **)(*piVar4 + 0x1c))(param_11,param_10,DAT_0067e9a0,_DAT_0067e9a4);
      }
      if (param_1[6] == 0) {
        param_1[6] = piVar4;
      }
      else {
        FUN_005d1840(param_1[6]);
      }
      local_a8 = local_a8 + -1;
    } while (local_a8 != 0);
  }
  ExceptionList = local_14;
  return param_1;
}


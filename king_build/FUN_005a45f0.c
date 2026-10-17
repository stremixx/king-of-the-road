
undefined4 * __thiscall
FUN_005a45f0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,int param_11,double param_12)

{
  int iVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00647bd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = (**(code **)(*param_2 + 0x1c))();
  FUN_005a3f70(param_2,param_3,param_4,param_5,param_6,(float)(double)CONCAT44(param_8,param_7),
               (float)(double)CONCAT44(param_8,param_7),param_9,param_11 * param_11,param_11,
               param_11,(float)param_12,(float)param_11 * (float)param_11 * (float)param_12,100,
               (-(iVar1 != 1) & 3U) + 1);
  uStack_4 = 0;
  *param_1 = &PTR_FUN_00650438;
  param_1[8] = &PTR_LAB_006503ec;
  uVar2 = FUN_005eea00(param_10);
  param_1[0x2c] = uVar2;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3ff00000;
  ExceptionList = pvStack_c;
  return param_1;
}


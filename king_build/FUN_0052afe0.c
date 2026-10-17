
undefined4 * __thiscall
FUN_0052afe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006463e6;
  local_c = ExceptionList;
  uVar5 = 0x3f000000;
  uVar4 = *(undefined4 *)(&DAT_006c5b90 + param_6 * 0x36c);
  uVar2 = *(undefined4 *)(&DAT_006c5b8c + param_6 * 0x36c);
  uVar3 = 100;
  ExceptionList = &local_c;
  uVar1 = FUN_005ab130(local_3c,&DAT_006c5b40 + param_6 * 0xdb,param_5,param_5,uVar2,100,uVar4,
                       0x3f000000,param_8,param_9);
  FUN_0058ae20(param_2,param_3,param_4,uVar1,param_5,uVar2,uVar3,uVar4,uVar5,param_8,param_9);
  local_4 = 0;
  FUN_0052a570(param_6,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_0064dc78;
  param_1[0x40] = &PTR_LAB_0064dc2c;
  param_1[0x5e] = &PTR_LAB_0064dc28;
  FUN_0052a820(param_6,param_7);
  ExceptionList = local_c;
  return param_1;
}


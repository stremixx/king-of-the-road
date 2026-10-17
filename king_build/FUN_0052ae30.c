
undefined4 * __thiscall
FUN_0052ae30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006463a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0058ae20(param_2,0,param_3,&DAT_006c5b40 + param_4 * 0xdb,&DAT_00701550,
               *(undefined4 *)(&DAT_006c5b8c + param_4 * 0x36c),100,
               *(undefined4 *)(&DAT_006c5b90 + param_4 * 0x36c),0x3f000000,param_6,param_7);
  local_4 = 0;
  FUN_0052a570(param_4,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_0064dc78;
  param_1[0x40] = &PTR_LAB_0064dc2c;
  param_1[0x5e] = &PTR_LAB_0064dc28;
  FUN_0052a820(param_4,param_5);
  ExceptionList = local_c;
  return param_1;
}



undefined4 * __thiscall
FUN_0052d260(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646508;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0057c250(param_2,0,param_3,&DAT_006c5b40 + param_4 * 0xdb,&DAT_00701550,
               *(undefined4 *)(&DAT_006c5b8c + param_4 * 0x36c),500,&DAT_006c5ac8 + param_4 * 0xdb,
               param_6);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064e058;
  param_1[0x40] = &PTR_LAB_0064e00c;
  param_1[0x5e] = &PTR_LAB_0064e008;
  FUN_0052d3c0(param_4,param_5);
  ExceptionList = local_c;
  return param_1;
}



undefined4 * __thiscall
FUN_0052d1a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006464e8;
  local_c = ExceptionList;
  uVar3 = 500;
  uVar2 = *(undefined4 *)(&DAT_006c5b8c + param_6 * 0x36c);
  ExceptionList = &local_c;
  uVar1 = FUN_005ab130(local_3c,&DAT_006c5b40 + param_6 * 0xdb,param_5,param_5,uVar2,500,param_8,
                       param_9);
  FUN_0057c740(param_2,param_3,param_4,uVar1,param_5,uVar2,uVar3,param_8,param_9);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064e058;
  param_1[0x40] = &PTR_LAB_0064e00c;
  param_1[0x5e] = &PTR_LAB_0064e008;
  FUN_0052d3c0(param_6,param_7);
  ExceptionList = local_c;
  return param_1;
}


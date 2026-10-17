
undefined4 * __thiscall
FUN_0052af00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 local_3c [48];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006463c6;
  local_c = ExceptionList;
  iVar1 = param_6 * 0x36c;
  uVar5 = *(undefined4 *)(&DAT_006c5b90 + iVar1);
  puVar7 = &DAT_006c5aeb + iVar1;
  uVar3 = *(undefined4 *)(&DAT_006c5b8c + iVar1);
  uVar6 = 0x3f000000;
  uVar4 = 100;
  ExceptionList = &local_c;
  uVar2 = FUN_005ab130(local_3c,&DAT_006c5b40 + param_6 * 0xdb,param_5,param_5,uVar3,100,uVar5,
                       0x3f000000,puVar7,param_8);
  FUN_0058acb0(param_2,param_3,param_4,uVar2,param_5,uVar3,uVar4,uVar5,uVar6,puVar7,param_8);
  local_4 = 0;
  FUN_0052a570(param_6,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  *param_1 = &PTR_FUN_0064dc78;
  param_1[0x40] = &PTR_LAB_0064dc2c;
  param_1[0x5e] = &PTR_LAB_0064dc28;
  FUN_0052a820(param_6,param_7);
  ExceptionList = local_c;
  return param_1;
}


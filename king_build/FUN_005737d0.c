
void FUN_005737d0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3 + 10 + (param_6 % 0x12) * 0x14;
  param_2 = param_2 + (param_6 / 0x12) * 0xaa;
  uVar2 = FUN_005d2500(param_4,6,0);
  FUN_005e97a0(param_1,param_2,iVar1,DAT_006cdc84,uVar2);
  FUN_005e97a0(param_1,param_2 + 0x6f,iVar1,DAT_006cdc84,param_5,6,0);
  return;
}


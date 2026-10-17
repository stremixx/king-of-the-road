
undefined4 __thiscall
FUN_005dd190(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  
  if (param_4 == -1) {
    param_4 = *(int *)(param_1 + 0x108);
  }
  if (param_5 == 0xffffffff) {
    param_5 = *(uint *)(param_1 + 0x10c);
  }
  iVar1 = FUN_005d72d0(param_2,param_3,param_4,param_5 & 0x4f00,0,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x10c) = param_5;
  *(int *)(param_1 + 0x108) = param_4;
  return 1;
}


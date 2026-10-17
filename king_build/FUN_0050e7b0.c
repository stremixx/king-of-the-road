
void FUN_0050e7b0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_0050da50(param_1,param_2);
  iVar1 = *(int *)(iVar2 + 0x2c);
  *(int *)(iVar2 + 0x2c) = param_3;
  *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + (param_3 - iVar1);
  iVar1 = *(int *)(iVar2 + 0x30);
  *(int *)(iVar2 + 0x30) = param_4;
  *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + (param_4 - iVar1);
  return;
}


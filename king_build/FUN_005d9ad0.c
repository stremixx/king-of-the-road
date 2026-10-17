
void __thiscall FUN_005d9ad0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((((param_1[0xe] != 0) && (param_1[0xf] != 0)) &&
      (iVar1 = *(int *)(param_1[0xe] + 0x120), iVar1 != 0)) && (iVar3 = FUN_005d2730(), iVar3 == 0))
  {
    iVar3 = (**(code **)(*param_1 + 0x14))();
    if (iVar3 != *(int *)(iVar1 + 0x34)) {
      (**(code **)(*param_1 + 0x14))();
    }
    iVar3 = (**(code **)(*param_1 + 0x18))();
    if (iVar3 != *(int *)(iVar1 + 0x38)) {
      (**(code **)(*param_1 + 0x18))();
    }
  }
  FUN_005d9840(param_2,param_3,param_4,0);
  iVar1 = param_1[0xe];
  if ((iVar1 != 0) && (param_1[0xf] != 0)) {
    *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x2c) + param_2;
    *(int *)(param_1[0xe] + 0x38) = *(int *)(param_1[0xe] + 0x30) + param_3;
    if (((*(byte *)(param_1[0xe] + 0x20) & 4) == 0) &&
       ((iVar1 = *(int *)(param_1[0xe] + 0x120), iVar1 != 0 && (iVar3 = FUN_005d2730(), iVar3 == 0))
       )) {
      (**(code **)(*param_1 + 0x14))();
      iVar4 = __ftol();
      (**(code **)(*param_1 + 0x18))();
      iVar5 = __ftol();
      iVar3 = *(int *)(iVar1 + 0x2c);
      *(int *)(iVar1 + 0x2c) = iVar4;
      iVar2 = *(int *)(iVar1 + 0x30);
      *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + (iVar4 - iVar3);
      *(int *)(iVar1 + 0x30) = iVar5;
      *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + (iVar5 - iVar2);
    }
  }
  return;
}


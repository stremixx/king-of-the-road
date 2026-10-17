
void __thiscall FUN_005be380(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x148) == 1) {
    *(int *)(param_1 + 0x134) =
         *(int *)(param_1 + 0x134) + (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x34)) + param_2
    ;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c) + param_2;
  }
  else {
    *(int *)(param_1 + 0x134) =
         *(int *)(param_1 + 0x134) + (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x38)) + param_2
    ;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30) + param_2;
  }
  FUN_005d2730();
  iVar3 = FUN_005d2730();
  if (*(int *)(param_1 + 0x148) == 1) {
    iVar1 = *(int *)(iVar3 + 0x30);
    param_2 = (*(int *)(iVar3 + 0x2c) - *(int *)(iVar3 + 0x34)) + param_2;
    iVar2 = *(int *)(iVar3 + 0x2c);
    *(int *)(iVar3 + 0x2c) = param_2;
    *(int *)(iVar3 + 0x34) = *(int *)(iVar3 + 0x34) + (param_2 - iVar2);
    iVar2 = *(int *)(iVar3 + 0x30);
    *(int *)(iVar3 + 0x30) = iVar1;
    *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (iVar1 - iVar2);
    return;
  }
  param_2 = (*(int *)(iVar3 + 0x30) - *(int *)(iVar3 + 0x38)) + param_2;
  *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(iVar3 + 0x2c);
  *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar3 + 0x34);
  iVar1 = *(int *)(iVar3 + 0x30);
  *(int *)(iVar3 + 0x30) = param_2;
  *(int *)(iVar3 + 0x38) = *(int *)(iVar3 + 0x38) + (param_2 - iVar1);
  return;
}


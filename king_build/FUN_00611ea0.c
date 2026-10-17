
undefined4 FUN_00611ea0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_14 = (*(undefined4 **)(param_1 + 0x10))[1];
  local_18 = **(undefined4 **)(param_1 + 0x10);
  local_c = (*(undefined4 **)(param_1 + 0x14))[1];
  local_10 = **(undefined4 **)(param_1 + 0x14);
  local_4 = (*(undefined4 **)(param_1 + 0x18))[1];
  local_8 = **(undefined4 **)(param_1 + 0x18);
  iVar1 = FUN_00611e20(&local_18);
  iVar2 = FUN_00611e20(&local_10);
  iVar3 = FUN_00611e20(&local_8);
  if (iVar1 == 0) {
    if ((iVar2 == 0) && (iVar3 == 0)) {
      return 1;
    }
  }
  else if ((iVar2 != 0) && (iVar3 != 0)) {
    return 4;
  }
  return 2;
}


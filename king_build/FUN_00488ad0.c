
undefined4 FUN_00488ad0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [24];
  
  puVar2 = local_60;
  iVar1 = 4;
  do {
    iVar3 = 3;
    do {
      FUN_0061d8bf(&local_68,8,1,param_2);
      *puVar2 = local_68;
      puVar2[1] = local_64;
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  puVar2 = local_60;
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return 0;
}



void FUN_0048e520(int param_1,undefined4 param_2,double *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_710 [6];
  undefined4 local_6f8 [6];
  undefined4 local_6e0 [144];
  int local_4a0;
  undefined1 local_49c [576];
  int local_25c;
  undefined1 local_258 [580];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640a21;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00405ea0(-*param_3,-param_3[1],-param_3[2]);
  puVar1 = local_6f8;
  puVar3 = local_710;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  local_25c = 0;
  local_c = 0;
  FUN_00461690(local_49c,local_710);
  local_25c = local_25c + 1;
  local_c = 1;
  FUN_0048f370(local_6e0,local_49c);
  local_c = CONCAT31(local_c._1_3_,3);
  FUN_004030a0();
  puVar1 = (undefined4 *)FUN_0048f0b0(local_258,local_6e0);
  puVar3 = local_6e0;
  for (iVar2 = 0x91; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_004030a0();
  FUN_0048ece0(param_1,param_1 + *(int *)(param_1 + 0xc0) * 8);
  puVar1 = local_6e0;
  if (local_6e0 != local_6e0 + local_4a0 * 6) {
    do {
      FUN_0048eca0();
      puVar1 = puVar1 + 6;
    } while (puVar1 != local_6e0 + local_4a0 * 6);
  }
  ExceptionList = local_14;
  return;
}


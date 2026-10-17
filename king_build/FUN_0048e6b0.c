
void FUN_0048e6b0(int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  double *pdVar3;
  int iVar4;
  undefined4 local_4a0;
  double local_49c [72];
  int local_25c;
  undefined1 local_258 [580];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640a3b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0048efb0(local_49c);
  local_c = 0;
  puVar2 = (undefined4 *)FUN_0048f0b0(local_258,local_49c);
  pdVar3 = local_49c;
  for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pdVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    pdVar3 = (double *)((int)pdVar3 + 4);
  }
  iVar4 = param_1 + *(int *)(param_1 + 0xc0) * 8;
  FUN_0046b190(iVar4,iVar4,param_1,local_4a0,0);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - (iVar4 - param_1 >> 3);
  pdVar3 = local_49c;
  if (local_49c != local_49c + local_25c * 3) {
    do {
      pdVar1 = (double *)(param_1 + *(int *)(param_1 + 0xc0) * 8);
      if (pdVar1 != (double *)0x0) {
        *pdVar1 = pdVar3[2] + *pdVar3 + pdVar3[1];
      }
      pdVar3 = pdVar3 + 3;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
    } while (pdVar3 != local_49c + local_25c * 3);
  }
  ExceptionList = local_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00487600(undefined4 param_1)

{
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double *in_stack_00000048;
  undefined4 auStack_58 [8];
  undefined4 auStack_38 [8];
  double *pdStack_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pdVar1 = in_stack_00000048;
  pdStack_18 = in_stack_00000048;
  puVar3 = (undefined4 *)&stack0x00000028;
  puVar4 = auStack_38;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)&stack0x00000008;
  puVar4 = auStack_58;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00486900(param_1);
  pdStack_18 = (double *)&local_8;
  puVar3 = (undefined4 *)&stack0x00000028;
  puVar4 = auStack_38;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)&stack0x00000008;
  puVar4 = auStack_58;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_00486900(1);
  if ((double)CONCAT44(uStack_4,local_8) * _DAT_0064a770 < *pdVar1) {
    *(undefined4 *)pdVar1 = local_8;
    *(undefined4 *)((int)pdVar1 + 4) = uStack_4;
  }
  return;
}


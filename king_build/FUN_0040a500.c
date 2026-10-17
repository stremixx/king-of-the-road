
int * FUN_0040a500(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_48 [8];
  int local_20 [8];
  
  if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x14)) {
    *param_1 = *(int *)(*(int *)(param_2 + 0x14) + -0xc);
    return param_1;
  }
  piVar1 = (int *)(param_2 + 0x20);
  piVar3 = piVar1;
  piVar4 = local_20;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if (local_20[1] != -1) {
    piVar3 = local_20;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *piVar1;
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
    }
    *param_1 = local_20[1];
    return param_1;
  }
  piVar3 = aiStack_48;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_00435cd0(local_20);
  FUN_004059b0(param_1,local_20);
  return param_1;
}


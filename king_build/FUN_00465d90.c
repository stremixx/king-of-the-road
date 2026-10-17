
undefined4 *
FUN_00465d90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  while( true ) {
    for (; param_5 < *(double *)(param_1 + 2); param_1 = param_1 + 8) {
    }
    do {
      pdVar1 = (double *)(param_2 + -6);
      param_2 = param_2 + -8;
    } while (*pdVar1 < param_5);
    if (param_2 <= param_1) break;
    local_28[2] = param_1[2];
    local_28[0] = *param_1;
    local_18 = param_1[4];
    local_28[3] = param_1[3];
    local_10 = param_1[6];
    local_14 = param_1[5];
    local_c = param_1[7];
    puVar3 = param_2;
    puVar4 = param_1;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar3 = local_28;
    puVar4 = param_2;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    param_1 = param_1 + 8;
  }
  return param_1;
}


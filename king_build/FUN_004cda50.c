
void FUN_004cda50(undefined4 *param_1,float param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double *pdVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  int in_stack_00000028;
  double *in_stack_0000002c;
  undefined4 auStack_34 [5];
  undefined4 uStack_20;
  float *pfStack_1c;
  undefined4 *puStack_18;
  float local_c;
  float local_8;
  float local_4;
  
  puVar4 = &param_2;
  puVar6 = auStack_34;
  for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00439400(&param_2);
  pdVar3 = in_stack_0000002c;
  if (in_stack_00000028 != 0) {
    param_2 = -param_2;
    param_3 = -param_3;
    param_4 = -param_4;
    local_c = param_2;
    local_8 = param_3;
    local_4 = param_4;
  }
  if (in_stack_0000002c != (double *)0x0) {
    puStack_18 = &param_2;
    pfStack_1c = &local_c;
    uStack_20 = 0x4cdac7;
    FUN_005aaad0();
    puStack_18 = (undefined4 *)0x4cdad2;
    fVar7 = (float10)FUN_0061e4b0();
    *pdVar3 = (double)fVar7;
  }
  puStack_18 = &param_2;
  pfStack_1c = &local_c;
  param_4 = 0.0;
  uStack_20 = 0x4cdaeb;
  puVar4 = (undefined4 *)FUN_005aaad0();
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *param_1 = *puVar4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


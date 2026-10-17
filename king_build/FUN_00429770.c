
void FUN_00429770(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float10 fVar4;
  int iVar5;
  int *local_18 [2];
  double local_10;
  
  local_18[0] = (int *)*DAT_0068a8f0;
  local_10 = 1.79769313486232e+308;
  piVar3 = DAT_0068a8f0;
  if (local_18[0] != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(local_18[0]);
      if ((*(int *)(iVar1 + 0x54) != 1) &&
         (iVar5 = *(int *)(iVar1 + 0x98), iVar5 != *(int *)(iVar1 + 0x9c))) {
        iVar1 = iVar5;
        FUN_0041d3f0(local_18);
        FUN_004042b0(iVar5);
        fVar4 = (float10)FUN_00429610(iVar1);
        if (fVar4 < (float10)local_10) {
          local_10 = (double)fVar4;
          puVar2 = (undefined4 *)FUN_004042b0(local_18[0]);
          piVar3 = (int *)*puVar2;
        }
      }
      local_18[0] = (int *)*local_18[0];
    } while (local_18[0] != DAT_0068a8f0);
  }
  *param_1 = piVar3;
  return;
}


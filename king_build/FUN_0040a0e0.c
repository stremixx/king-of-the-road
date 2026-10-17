
void FUN_0040a0e0(void)

{
  int *piVar1;
  int *piVar2;
  int *local_4;
  
  local_4 = (int *)*DAT_0068a8f0;
  piVar1 = local_4;
  if (local_4 != DAT_0068a8f0) {
    do {
      piVar2 = piVar1;
      FUN_0041d3f0(&local_4);
      FUN_004042b0(piVar1);
      FUN_00409f20(piVar2);
      local_4 = (int *)*local_4;
      piVar1 = DAT_0068a8f0;
    } while (local_4 != DAT_0068a8f0);
  }
  return;
}



void FUN_00427300(int param_1)

{
  int *piVar1;
  int iVar2;
  int *local_4;
  
  local_4 = (int *)*DAT_0068a8f0;
  if (local_4 != DAT_0068a8f0) {
    do {
      iVar2 = FUN_0040a950(local_4);
      if (iVar2 != 0) {
        iVar2 = FUN_0040a950(local_4);
        iVar2 = *(int *)(iVar2 + 0x54);
        if (iVar2 == 5) {
          FUN_0041d3f0(&local_4);
          iVar2 = FUN_0040a950(iVar2);
          piVar1 = DAT_0068a8f0;
          iVar2 = *(int *)(iVar2 + 0x3c0);
          if (iVar2 == param_1) {
            FUN_0041d3f0(&local_4);
            iVar2 = FUN_0040a950(iVar2);
            *(int **)(iVar2 + 0x3c0) = piVar1;
          }
        }
      }
      local_4 = (int *)*local_4;
    } while (local_4 != DAT_0068a8f0);
  }
  return;
}


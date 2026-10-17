
void FUN_00477580(int param_1,double param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (0 < param_3) {
    local_14 = param_3;
    do {
      puVar1 = *(undefined4 **)(param_1 + 0x94);
      local_10 = 0;
      local_c = 0;
      if (puVar1 == *(undefined4 **)(param_1 + 0x98)) {
        FUN_00479810(puVar1,&local_10);
      }
      else {
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 8;
      }
      iVar2 = *(int *)(param_1 + 0x94);
      fVar3 = (float10)FUN_00401000();
      local_14 = local_14 + -1;
      *(double *)(iVar2 + -8) = (double)(fVar3 + (float10)param_2);
    } while (local_14 != 0);
  }
  FUN_0047bf30(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),0,0,local_14);
  return;
}


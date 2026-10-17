
int __thiscall FUN_005bba20(int param_1,int param_2,double *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0x412e8480;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_2 + 0x24);
    param_4[1] = *(undefined4 *)(param_2 + 0x28);
    param_4[2] = *(undefined4 *)(param_2 + 0x2c);
  }
  iVar2 = 0;
  local_18 = 0;
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 1 && -1 < *(int *)(param_1 + 4) + -1) {
    do {
      local_1c = iVar2;
      fVar3 = (float10)FUN_005bbae0(param_2,&local_1c,&local_14);
      if (ABS(fVar3) < ABS((float10)*param_3)) {
        *param_3 = (double)fVar3;
        local_18 = local_1c;
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = local_14;
          param_4[1] = local_10;
          param_4[2] = local_c;
        }
      }
      iVar2 = iVar2 + 1;
      iVar1 = local_18;
    } while (iVar2 < *(int *)(param_1 + 4) + -1);
  }
  return iVar1;
}


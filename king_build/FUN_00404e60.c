
void FUN_00404e60(int *param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_18;
  
  iVar2 = -1;
  local_40 = 1.79769313486232e+308;
  puVar3 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      FUN_00404dd0(&local_38,*puVar3);
      local_18 = param_2[1] - local_30;
      dVar1 = SQRT((*param_2 - local_38) * (*param_2 - local_38) +
                   (param_2[2] - local_28) * (param_2[2] - local_28) + local_18 * local_18);
      if (dVar1 < local_40) {
        iVar2 = (int)puVar3 - (int)DAT_0068be20 >> 2;
        local_40 = dVar1;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != DAT_0068be24);
  }
  *param_1 = iVar2;
  return;
}



void FUN_00404fd0(int *param_1,double *param_2)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_18;
  
  iVar3 = -1;
  local_40 = 1.79769313486232e+308;
  piVar2 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      if ((*(byte *)(*piVar2 + 0x60) & 3) == 0) {
        FUN_00404dd0(&local_38,*piVar2);
        local_18 = param_2[1] - local_30;
        dVar1 = SQRT((*param_2 - local_38) * (*param_2 - local_38) +
                     (param_2[2] - local_28) * (param_2[2] - local_28) + local_18 * local_18);
        if (dVar1 < local_40) {
          iVar3 = (int)piVar2 - (int)DAT_0068be20 >> 2;
          local_40 = dVar1;
        }
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != DAT_0068be24);
  }
  *param_1 = iVar3;
  return;
}


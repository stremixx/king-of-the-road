
void FUN_00405090(int *param_1,int param_2)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_18;
  
  FUN_00404dd0(&local_50,DAT_0068be20[param_2]);
  iVar3 = -1;
  local_58 = 1.79769313486232e+308;
  puVar2 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      if (param_2 != (int)puVar2 - (int)DAT_0068be20 >> 2) {
        FUN_00404dd0(&local_38,*puVar2);
        local_18 = local_48 - local_30;
        dVar1 = SQRT((local_50 - local_38) * (local_50 - local_38) +
                     (local_40 - local_28) * (local_40 - local_28) + local_18 * local_18);
        if (dVar1 < local_58) {
          iVar3 = (int)puVar2 - (int)DAT_0068be20 >> 2;
          local_58 = dVar1;
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != DAT_0068be24);
  }
  *param_1 = iVar3;
  return;
}


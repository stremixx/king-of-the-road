
void FUN_00468660(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 local_14;
  double local_10;
  double local_8;
  
  if ((param_1 != param_2) && (puVar5 = param_1 + 1, puVar5 != param_2)) {
    puVar3 = param_1 + 2;
    do {
      local_14 = *puVar5;
      fVar6 = (float10)FUN_00418960(&local_14,param_3);
      local_10 = (double)fVar6;
      fVar6 = (float10)FUN_00418960(param_1,param_3);
      if (fVar6 <= (float10)local_10) {
        local_10 = (double)CONCAT44(local_10._4_4_,local_14);
        puVar2 = puVar5;
        puVar4 = puVar3 + -2;
        while( true ) {
          fVar6 = (float10)FUN_00418960(&local_10,param_3);
          local_8 = (double)fVar6;
          fVar6 = (float10)FUN_00418960(puVar4,param_3);
          if (fVar6 <= (float10)local_8) break;
          *puVar2 = *puVar4;
          puVar2 = puVar4;
          puVar4 = puVar4 + -1;
        }
        *puVar2 = local_10._0_4_;
      }
      else {
        iVar1 = (int)puVar5 - (int)param_1 >> 2;
        if (0 < iVar1) {
          puVar2 = puVar3;
          do {
            puVar4 = (undefined4 *)((int)puVar5 + (-4 - (int)puVar3) + (int)puVar2);
            puVar2 = puVar2 + -1;
            iVar1 = iVar1 + -1;
            *puVar2 = *puVar4;
          } while (iVar1 != 0);
        }
        *param_1 = local_14;
      }
      puVar5 = puVar5 + 1;
      puVar3 = puVar3 + 1;
    } while (puVar5 != param_2);
  }
  return;
}


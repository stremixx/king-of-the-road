
void FUN_00484700(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 != (int *)param_1[1]) {
    do {
      puVar1 = *(uint **)(DAT_0068be60 + *piVar3 * 4);
      uVar2 = *puVar1;
      FUN_0061d86c(param_2,s__s__x_0066f19c,-(uint)(uVar2 != puVar1[1]) & uVar2,
                   (int)(short)piVar3[2]);
      FUN_00484650(piVar3[1],param_2);
      piVar3 = piVar3 + 3;
    } while (piVar3 != (int *)param_1[1]);
  }
  return;
}


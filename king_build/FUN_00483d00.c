
void FUN_00483d00(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*param_1 != -1) {
    puVar1 = *(uint **)(DAT_0068c028 + *param_1 * 4);
    uVar2 = *puVar1;
    FUN_00483b60(-(uint)(uVar2 != puVar1[1]) & uVar2,param_1[1],(char)param_1[4] != '\0');
  }
  return;
}


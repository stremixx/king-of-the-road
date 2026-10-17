
void __fastcall FUN_00453b20(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)*param_1;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      FUN_0044b440(piVar2,0xc);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  *(int *)*param_1 = *param_1;
  *(int *)(*param_1 + 4) = *param_1;
  return;
}


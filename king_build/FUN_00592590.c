
void __thiscall FUN_00592590(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_2 = *param_1;
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = param_2;
  }
  piVar3 = (int *)param_1[1];
  piVar2 = param_1;
  while (piVar1 = piVar3, piVar1 != (int *)0x0) {
    piVar2 = piVar1;
    piVar3 = (int *)piVar1[1];
  }
  piVar2[1] = param_1[1];
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[1] = piVar2;
  }
  return;
}



void __thiscall FUN_00565a00(int param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0xca4);
  switch(iVar1) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 10:
  case 0xb:
    *(undefined4 *)(param_1 + 0xd88) = 0;
  }
  if ((((iVar1 != 10) && (iVar1 != 6)) || (param_2 == 10)) || (param_2 == 6)) {
    *(undefined4 *)(param_1 + 0xca8) = 0;
  }
  *(int *)(param_1 + 0xca4) = param_2;
  if ((param_2 == 6) || (param_2 == 10)) {
    fVar2 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0xcd0) = (float)fVar2;
    *(undefined4 *)(param_1 + 0xcac) = 0;
  }
  return;
}


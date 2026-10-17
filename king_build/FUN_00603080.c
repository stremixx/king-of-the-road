
undefined4 __fastcall FUN_00603080(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (((*param_1 == 1) || (*param_1 == 2)) && (piVar1 = (int *)param_1[3], piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1);
    if (-1 < iVar2) {
      *param_1 = 3;
      return 0;
    }
    param_1[1] = 3;
  }
  return 0xffffffff;
}



int * __thiscall FUN_005bd200(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x120);
  do {
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar2 + 0x2c))();
    if (iVar1 == 0) {
      if (param_2 == piVar2[7]) {
        return piVar2;
      }
    }
    else {
      piVar2 = (int *)FUN_005bd200(param_2);
      if (piVar2 != (int *)0x0) {
        return piVar2;
      }
    }
    piVar2 = (int *)FUN_005d2730();
  } while( true );
}



undefined4 FUN_005e4140(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_EDI;
  int *piStack_38;
  int local_28;
  undefined1 auStack_24 [4];
  int aiStack_20 [5];
  int aiStack_c [3];
  
  piVar1 = param_1;
  iVar2 = 400;
  do {
    piStack_38 = &local_28;
    (**(code **)(*piVar1 + 0xc))(piVar1,&param_1,4);
    if (aiStack_c[0] == 0) {
      (**(code **)(*piVar1 + 0xc))();
    }
    else {
      (**(code **)(*piVar1 + 0xc))(piVar1,aiStack_c,4,&piStack_38);
      while (param_1 != (int *)0xfffffffe) {
        if (-1 < (int)param_1) {
          piStack_38 = &local_28;
          (**(code **)(*piVar1 + 0xc))(piVar1,auStack_24,4);
          (**(code **)(*piVar1 + 0xc))(piVar1,&stack0xffffffd0,unaff_EDI,&piStack_38);
          piStack_38 = aiStack_20;
          FUN_005e4740(param_1);
          piStack_38 = param_1;
          FUN_005e4980();
          piStack_38 = piVar1;
          FUN_005e3cb0();
        }
        piStack_38 = &local_28;
        (**(code **)(*piVar1 + 0xc))(piVar1,&param_1,4);
      }
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}


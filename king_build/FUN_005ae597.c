
int FUN_005ae597(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_EDI;
  undefined4 in_stack_00000018;
  int in_stack_0000001c;
  int *in_stack_00000020;
  int *in_stack_00000024;
  undefined4 in_stack_00000028;
  
  piVar6 = in_stack_00000024;
  iVar4 = unaff_EDI + (*in_stack_00000024 + 0x66) * 0xc;
  iVar3 = FUN_005ae1c0(iVar4,in_stack_00000028);
  iVar2 = *in_stack_00000024;
  in_stack_00000024 = (int *)0x0;
  iVar5 = iVar3;
  if (0 < in_stack_0000001c) {
    do {
      param_1 = FUN_005ae1c0(iVar4,in_stack_00000028);
      if (param_1 != iVar5) {
        FUN_005ae270(in_stack_00000018,in_stack_00000020,*piVar6,param_2,in_stack_00000028);
        in_stack_00000024 = (int *)((int)in_stack_00000024 + 1);
        in_stack_00000020 = in_stack_00000020 + 1;
      }
      if (param_1 != 0) {
        *in_stack_00000020 = *piVar6;
        in_stack_00000020 = in_stack_00000020 + 1;
        in_stack_00000024 = (int *)((int)in_stack_00000024 + 1);
      }
      param_2 = *piVar6;
      piVar1 = piVar6 + 1;
      piVar6 = piVar6 + 1;
      iVar4 = unaff_EDI + (*piVar1 + 0x66) * 0xc;
      in_stack_0000001c = in_stack_0000001c + -1;
      iVar5 = param_1;
    } while (in_stack_0000001c != 0);
  }
  if (iVar3 != param_1) {
    FUN_005ae270(in_stack_00000018,in_stack_00000020,iVar2,param_2,in_stack_00000028);
    in_stack_00000024 = (int *)((int)in_stack_00000024 + 1);
  }
  return (int)in_stack_00000024;
}


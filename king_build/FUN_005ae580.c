
int __thiscall
FUN_005ae580(int param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,undefined4 param_6
            )

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iStack_10;
  int iStack_c;
  
  piVar6 = param_5;
  if (param_3 != 0) {
    iVar4 = param_1 + (*param_5 + 0x66) * 0xc;
    iVar3 = FUN_005ae1c0(iVar4,param_6);
    iVar2 = *param_5;
    param_5 = (int *)0x0;
    iVar5 = iVar3;
    if (0 < param_3) {
      do {
        iStack_10 = FUN_005ae1c0(iVar4,param_6);
        if (iStack_10 != iVar5) {
          FUN_005ae270(param_2,param_4,*piVar6,iStack_c,param_6);
          param_5 = (int *)((int)param_5 + 1);
          param_4 = param_4 + 1;
        }
        if (iStack_10 != 0) {
          *param_4 = *piVar6;
          param_4 = param_4 + 1;
          param_5 = (int *)((int)param_5 + 1);
        }
        iStack_c = *piVar6;
        piVar1 = piVar6 + 1;
        piVar6 = piVar6 + 1;
        iVar4 = param_1 + (*piVar1 + 0x66) * 0xc;
        param_3 = param_3 + -1;
        iVar5 = iStack_10;
      } while (param_3 != 0);
    }
    if (iVar3 != iStack_10) {
      FUN_005ae270(param_2,param_4,iVar2,iStack_c,param_6);
      param_5 = (int *)((int)param_5 + 1);
    }
    return (int)param_5;
  }
  return 0;
}


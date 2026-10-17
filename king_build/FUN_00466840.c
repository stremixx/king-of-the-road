
undefined4
FUN_00466840(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5,
            char *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int in_stack_00000040;
  int in_stack_00000044;
  char *in_stack_0000007c;
  char *in_stack_00000080;
  
  pcVar4 = in_stack_00000080;
  iVar3 = in_stack_00000044;
  iVar2 = in_stack_00000040;
  pcVar5 = param_5;
  pcVar6 = in_stack_0000007c;
LAB_0046685e:
  do {
    if ((param_1 == iVar2) && (param_2 == iVar3)) {
      if (pcVar6 != pcVar4) {
        return 0xffffffff;
      }
LAB_00466932:
      if ((param_1 == iVar2) && (param_2 == iVar3)) {
        return 0;
      }
      return 1;
    }
    if (pcVar6 == pcVar4) goto LAB_00466932;
    if (pcVar5 == (char *)0x0) {
      FUN_0046afd0(&param_1);
      pcVar5 = param_5;
    }
    if (*pcVar5 < *pcVar6) {
      return 0xffffffff;
    }
    if (pcVar5 == (char *)0x0) {
      FUN_0046afd0(&param_1);
      pcVar5 = param_5;
    }
    if (*pcVar6 < *pcVar5) {
      return 1;
    }
    if ((pcVar5 == (char *)0x0) || (pcVar1 = pcVar5 + 1, param_6 <= pcVar1)) {
      param_1 = param_1 + 1;
      if (pcVar5 != (char *)0x0) {
        if (1 < (uint)((int)param_6 - (int)pcVar5)) {
          param_5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
          pcVar5 = param_5;
          goto LAB_0046685e;
        }
        if ((int)param_6 - (int)pcVar5 == 1) {
          param_5 = pcVar5 + 1;
          FUN_0046c3a0(&param_1);
          pcVar6 = pcVar6 + 1;
          pcVar5 = param_5;
          goto LAB_0046685e;
        }
        pcVar5 = (char *)0x0;
        param_5 = (char *)0x0;
      }
      pcVar6 = pcVar6 + 1;
      goto LAB_0046685e;
    }
    param_1 = param_1 + 1;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar1;
    param_5 = pcVar1;
  } while( true );
}


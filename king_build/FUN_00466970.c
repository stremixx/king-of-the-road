
undefined4
FUN_00466970(int param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5,
            char *param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int in_stack_00000040;
  int in_stack_00000044;
  int in_stack_0000007c;
  int in_stack_00000080;
  char *in_stack_0000008c;
  char *in_stack_00000090;
  int in_stack_000000b8;
  int in_stack_000000bc;
  
  iVar5 = in_stack_000000bc;
  iVar4 = in_stack_000000b8;
  iVar3 = in_stack_00000040;
  pcVar6 = in_stack_0000008c;
  pcVar7 = param_5;
  while (((param_1 != iVar3 || (param_2 != in_stack_00000044)) &&
         ((in_stack_0000007c != iVar4 || (in_stack_00000080 != iVar5))))) {
    if (pcVar7 == (char *)0x0) {
      FUN_0046afd0(&param_1);
      pcVar6 = in_stack_0000008c;
      pcVar7 = param_5;
    }
    cVar2 = *pcVar7;
    if (pcVar6 == (char *)0x0) {
      FUN_0046afd0(&stack0x0000007c);
      pcVar6 = in_stack_0000008c;
      pcVar7 = param_5;
    }
    if (cVar2 < *pcVar6) {
      return 0xffffffff;
    }
    if (pcVar6 == (char *)0x0) {
      FUN_0046afd0(&stack0x0000007c);
      pcVar6 = in_stack_0000008c;
      pcVar7 = param_5;
    }
    cVar2 = *pcVar6;
    if (pcVar7 == (char *)0x0) {
      FUN_0046afd0(&param_1);
      pcVar6 = in_stack_0000008c;
      pcVar7 = param_5;
    }
    if (cVar2 < *pcVar7) {
      return 1;
    }
    if ((pcVar7 == (char *)0x0) || (pcVar1 = pcVar7 + 1, param_6 <= pcVar1)) {
      param_1 = param_1 + 1;
      if (pcVar7 != (char *)0x0) {
        if ((uint)((int)param_6 - (int)pcVar7) < 2) {
          if ((int)param_6 - (int)pcVar7 == 1) {
            param_5 = pcVar7 + 1;
            FUN_0046c3a0(&param_1);
            pcVar6 = in_stack_0000008c;
            pcVar7 = param_5;
          }
          else {
            pcVar7 = (char *)0x0;
            param_5 = pcVar7;
          }
        }
        else {
          pcVar7 = pcVar7 + 1;
          param_5 = pcVar7;
        }
      }
    }
    else {
      param_1 = param_1 + 1;
      pcVar7 = pcVar1;
      param_5 = pcVar1;
    }
    if ((pcVar6 == (char *)0x0) || (pcVar1 = pcVar6 + 1, in_stack_00000090 <= pcVar1)) {
      in_stack_0000007c = in_stack_0000007c + 1;
      if (pcVar6 != (char *)0x0) {
        if ((uint)((int)in_stack_00000090 - (int)pcVar6) < 2) {
          if ((int)in_stack_00000090 - (int)pcVar6 == 1) {
            in_stack_0000008c = pcVar6 + 1;
            FUN_0046c3a0(&stack0x0000007c);
            pcVar6 = in_stack_0000008c;
            pcVar7 = param_5;
          }
          else {
            in_stack_0000008c = (char *)0x0;
            pcVar6 = (char *)0x0;
          }
        }
        else {
          in_stack_0000008c = pcVar6 + 1;
          pcVar6 = in_stack_0000008c;
        }
      }
    }
    else {
      in_stack_0000007c = in_stack_0000007c + 1;
      pcVar6 = pcVar1;
      in_stack_0000008c = pcVar1;
    }
  }
  if ((in_stack_0000007c != iVar4) || (in_stack_00000080 != iVar5)) {
    return 0xffffffff;
  }
  if ((param_1 == iVar3) && (param_2 == in_stack_00000044)) {
    return 0;
  }
  return 1;
}


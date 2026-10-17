
uint FUN_00466740(char *param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,char *param_7,char *param_8)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int in_stack_00000048;
  int in_stack_0000004c;
  
  iVar3 = in_stack_0000004c;
  iVar2 = in_stack_00000048;
  pcVar4 = param_7;
  while( true ) {
    if ((param_1 == param_2) || ((param_3 == iVar2 && (param_4 == iVar3)))) {
      if ((param_3 == iVar2) && (param_4 == iVar3)) {
        return (uint)(param_1 != param_2);
      }
      return 0xffffffff;
    }
    if (pcVar4 == (char *)0x0) {
      FUN_0046afd0(&param_3);
      pcVar4 = param_7;
    }
    if (*param_1 < *pcVar4) break;
    if (pcVar4 == (char *)0x0) {
      FUN_0046afd0(&param_3);
      pcVar4 = param_7;
    }
    if (*pcVar4 < *param_1) {
      return 1;
    }
    param_1 = param_1 + 1;
    if ((pcVar4 == (char *)0x0) || (pcVar1 = pcVar4 + 1, param_8 <= pcVar1)) {
      param_3 = param_3 + 1;
      if (pcVar4 != (char *)0x0) {
        if ((uint)((int)param_8 - (int)pcVar4) < 2) {
          if ((int)param_8 - (int)pcVar4 == 1) {
            param_7 = pcVar4 + 1;
            FUN_0046c3a0(&param_3);
            pcVar4 = param_7;
          }
          else {
            pcVar4 = (char *)0x0;
            param_7 = pcVar4;
          }
        }
        else {
          pcVar4 = pcVar4 + 1;
          param_7 = pcVar4;
        }
      }
    }
    else {
      param_3 = param_3 + 1;
      pcVar4 = pcVar1;
      param_7 = pcVar1;
    }
  }
  return 0xffffffff;
}


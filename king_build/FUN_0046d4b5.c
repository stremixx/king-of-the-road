
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d4b5(undefined4 param_1,undefined1 *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 in_EAX;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_stack_00000034;
  void *in_stack_000000b4;
  undefined4 in_stack_000000bc;
  
  FUN_0044aa20(DAT_0068c268,in_EAX);
  if ((uint)(((int)DAT_0068c270 - (int)DAT_0068c268) / 0xc) < 8) {
    iVar4 = (int)DAT_0068c26c - (int)DAT_0068c268;
    puVar1 = (undefined1 *)FUN_0046e200(8,DAT_0068c268,DAT_0068c26c);
    param_2 = DAT_0068c268;
    iVar2 = ((int)DAT_0068c270 - (int)DAT_0068c268) / 0xc;
    if (iVar2 != 0) {
      FUN_0044b440(DAT_0068c268,iVar2 * 0xc);
    }
    DAT_0068c26c = puVar1 + (iVar4 / 0xc) * 0xc;
    DAT_0068c270 = puVar1 + 0x60;
    DAT_0068c268 = puVar1;
  }
  _DAT_0068c274 = (undefined1 *)0x0;
  DAT_0068c278 = (undefined1 *)0x0;
  iVar2 = FUN_00601b40(&stack0x00000000);
  while (iVar2 == 0) {
    uVar3 = FUN_0046d470(0);
    if (DAT_0068c26c == DAT_0068c270) {
      FUN_0046e6b0(DAT_0068c26c,uVar3);
    }
    else {
      FUN_00487db0();
      DAT_0068c26c = DAT_0068c26c + 0xc;
    }
    iVar2 = FUN_00601b60(&stack0x00000000);
  }
  param_1 = 0;
  FUN_00601bb0(&param_1);
  uVar3 = FUN_0046d470(param_1);
  if (DAT_0068c26c == DAT_0068c270) {
    FUN_0046e6b0(DAT_0068c26c,uVar3);
  }
  else {
    FUN_00487db0();
    DAT_0068c26c = DAT_0068c26c + 0xc;
  }
  DAT_0068c26c[-0xb] = 1;
  FUN_0046ea10(DAT_0068c268,DAT_0068c26c,0,0,param_2);
  for (DAT_0068c278 = DAT_0068c268; (DAT_0068c278 != DAT_0068c26c && (DAT_0068c278[1] == '\0'));
      DAT_0068c278 = DAT_0068c278 + 0xc) {
  }
  DAT_0068c280 = ((int)DAT_0068c278 - (int)DAT_0068c268) / 0xc;
  if (DAT_0066e62a != '\0') {
    *DAT_0068c278 = 1;
    _DAT_0068c274 = DAT_0068c278;
    in_stack_00000034 = *(undefined4 *)(DAT_0068c278 + 8);
    FUN_006022c0();
    in_stack_000000bc = 0;
    FUN_006027f0(0x3e2,&stack0x00000034,4);
    FUN_00601820(param_4,param_5 - param_4);
    in_stack_000000bc = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = in_stack_000000b4;
  return;
}


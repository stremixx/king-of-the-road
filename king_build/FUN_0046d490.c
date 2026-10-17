
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046d490(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 *puStack_b8;
  int iStack_b0;
  int iStack_ac;
  undefined4 auStack_8c [32];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063f86b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_0044aa20(DAT_0068c268,DAT_0068c26c);
  if ((uint)(((int)DAT_0068c270 - (int)DAT_0068c268) / 0xc) < 8) {
    iVar4 = (int)DAT_0068c26c - (int)DAT_0068c268;
    puVar1 = (undefined1 *)FUN_0046e200(8,DAT_0068c268,DAT_0068c26c);
    puStack_b8 = DAT_0068c268;
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
  uStack_c0 = 0;
  iVar2 = FUN_00601b40(&uStack_c0);
  while (iVar2 == 0) {
    uVar3 = FUN_0046d470(uStack_c0);
    if (DAT_0068c26c == DAT_0068c270) {
      FUN_0046e6b0(DAT_0068c26c,uVar3);
    }
    else {
      FUN_00487db0();
      DAT_0068c26c = DAT_0068c26c + 0xc;
    }
    iVar2 = FUN_00601b60(&uStack_c0);
  }
  uStack_bc = 0;
  FUN_00601bb0(&uStack_bc);
  uVar3 = FUN_0046d470(uStack_bc);
  if (DAT_0068c26c == DAT_0068c270) {
    FUN_0046e6b0(DAT_0068c26c,uVar3);
  }
  else {
    FUN_00487db0();
    DAT_0068c26c = DAT_0068c26c + 0xc;
  }
  DAT_0068c26c[-0xb] = 1;
  FUN_0046ea10(DAT_0068c268,DAT_0068c26c,0,0,puStack_b8);
  for (DAT_0068c278 = DAT_0068c268; (DAT_0068c278 != DAT_0068c26c && (DAT_0068c278[1] == '\0'));
      DAT_0068c278 = DAT_0068c278 + 0xc) {
  }
  DAT_0068c280 = ((int)DAT_0068c278 - (int)DAT_0068c268) / 0xc;
  if (DAT_0066e62a != '\0') {
    *DAT_0068c278 = 1;
    _DAT_0068c274 = DAT_0068c278;
    auStack_8c[0] = *(undefined4 *)(DAT_0068c278 + 8);
    FUN_006022c0();
    uStack_4 = 0;
    FUN_006027f0(0x3e2,auStack_8c,4);
    FUN_00601820(iStack_b0,iStack_ac - iStack_b0);
    uStack_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = pvStack_c;
  return;
}


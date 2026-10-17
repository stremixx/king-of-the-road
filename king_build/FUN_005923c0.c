
void FUN_005923c0(undefined4 param_1)

{
  undefined4 *extraout_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_006f5594 != (code *)0x0) {
    (*DAT_006f5594)(param_1);
    return;
  }
  FUN_0061dd12(param_1);
  FUN_0061df73(0);
  *extraout_ECX = &PTR_FUN_0064f88c;
  if (extraout_ECX == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = extraout_ECX + 1;
  }
  if (*(undefined4 **)extraout_ECX[3] == puVar1) {
    iVar2 = extraout_ECX[1];
    if (iVar2 == 0) {
      iVar2 = extraout_ECX[2];
    }
    *(int *)extraout_ECX[3] = iVar2;
  }
  FUN_00592540();
  return;
}


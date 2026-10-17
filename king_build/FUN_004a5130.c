
void __thiscall FUN_004a5130(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_1;
  iVar4 = *(int *)(*param_1 + 4);
  while (iVar4 != 0) {
    if (*param_3 == 0) {
      FUN_004a5470(0,1);
    }
    if ((param_3[2] & 0x10000U) != 0) {
      FUN_004a5470(4,1);
    }
    uVar1 = *(undefined4 *)(*param_3 + 0xc);
    iVar3 = FUN_004b8250();
    iVar3 = FUN_0061d520(*(undefined4 *)(iVar3 + 0xc),uVar1);
    if (iVar3 < 0) {
      iVar4 = *(int *)(iVar4 + 0xc);
    }
    else {
      iVar2 = iVar4;
      iVar4 = *(int *)(iVar4 + 8);
    }
  }
  if (iVar2 != *param_1) {
    if (*(int *)(iVar2 + 0x10) == 0) {
      FUN_004a5470(0,1);
    }
    if ((*(uint *)(iVar2 + 0x18) & 0x10000) != 0) {
      FUN_004a5470(4,1);
    }
    uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0xc);
    if (*param_3 == 0) {
      FUN_004a5470(0,1);
    }
    if ((param_3[2] & 0x10000U) != 0) {
      FUN_004a5470(4,1);
    }
    iVar4 = FUN_0061d520(*(undefined4 *)(*param_3 + 0xc),uVar1);
    if (-1 < iVar4) {
      *param_2 = iVar2;
      return;
    }
  }
  *param_2 = *param_1;
  return;
}


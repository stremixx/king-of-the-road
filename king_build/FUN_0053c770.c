
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0053c770(int param_1,int param_2,int param_3,int *param_4,int *param_5,undefined4 param_6,
            undefined4 param_7,int param_8,int param_9,int param_10)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = param_3;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0xfc) + 0xc);
  if (*param_4 == 0) {
    param_3 = 2 - (uint)(param_4[1] != 0);
    if (2 < param_3) goto LAB_0053c7f6;
  }
  else {
    param_3 = 0;
  }
  piVar4 = param_4 + param_3;
  param_4 = (int *)(param_2 + param_3 * 10);
  param_3 = 3 - param_3;
  do {
    FUN_005b8030(uVar1,param_4,iVar2,*(undefined4 *)(param_1 + 700 + *piVar4 * 4),0);
    piVar4 = piVar4 + 1;
    param_4 = (int *)((int)param_4 + 10);
    param_3 = param_3 + -1;
  } while (param_3 != 0);
LAB_0053c7f6:
  param_4 = (int *)0x0;
  param_3 = param_2;
  do {
    if ((int)param_4 < 3) {
      uVar5 = *(undefined4 *)(param_1 + 0x294 + *param_5 * 4);
      iVar3 = param_3;
    }
    else {
      iVar3 = param_3 + 2;
      uVar5 = *(undefined4 *)(param_1 + 0x358 + *param_5 * 4);
    }
    FUN_005b8030(uVar1,iVar3,iVar2 + 0xf,uVar5,0);
    param_4 = (int *)((int)param_4 + 1);
    param_5 = param_5 + 1;
    param_3 = param_3 + 8;
  } while ((int)param_4 < 5);
  iVar3 = __ftol(0);
  FUN_005b8030(uVar1,param_2 + 0x2d,iVar2 + -6,*(undefined4 *)(param_1 + 0x2e4 + iVar3 * 4));
  FUN_005b8030(uVar1,param_2 + 0x41,iVar2 + 5,*(undefined4 *)(param_1 + 0x32c + param_8 * 4),0);
  if (param_9 != 0) {
    FUN_005b8030(uVar1,param_2 + 0x60,iVar2 + -8,*(undefined4 *)(param_1 + 0x380),0);
  }
  if (param_10 != 0) {
    FUN_005b8030(uVar1,param_2 + 0x27,iVar2 + -5,*(undefined4 *)(param_1 + 900),0);
  }
  return;
}



void FUN_0047fda0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if ((param_2 != -1) && (param_3 != -1)) {
    iVar5 = 0;
    iVar1 = *(int *)(DAT_0068be98 + param_2 * 4);
    piVar4 = (int *)(iVar1 + 0x70);
    do {
      iVar2 = 0;
      piVar3 = (int *)(*(int *)(DAT_0068be98 + param_3 * 4) + 0x70);
      do {
        if (*piVar4 == *piVar3) {
          *param_1 = *(undefined4 *)(*(int *)(iVar1 + 0x70 + iVar5 * 4) + 0x10);
          return;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < 2);
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < 2);
  }
  *param_1 = 0xffffffff;
  return;
}


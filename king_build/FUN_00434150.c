
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434150(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = DAT_0068bc18;
  piVar5 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      iVar1 = *piVar5;
      piVar2 = *(int **)(iVar1 + 0x2c);
      piVar3 = *(int **)(iVar1 + 0x28);
      if (piVar3 != piVar2) {
        do {
          if ((double)(*(uint *)(iVar4 + 0x30 + *piVar3 * 0x68) & 4) != _DAT_0064a668) break;
          piVar3 = piVar3 + 1;
        } while (piVar3 != piVar2);
        if (piVar3 != piVar2) {
          *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 1;
          iVar4 = DAT_0068bc18;
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != DAT_0068be24);
  }
  return;
}


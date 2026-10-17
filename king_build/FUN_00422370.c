
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00422370(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  double *pdVar5;
  double local_30;
  double local_28;
  double local_20;
  double local_10;
  
  piVar3 = (int *)*DAT_0068a8f0;
  if (piVar3 != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(piVar3);
      if (iVar1 != 0) {
        iVar1 = FUN_0040a950(piVar3);
        if (*(int *)(iVar1 + 0x54) == 9) {
          puVar4 = (undefined4 *)(iVar1 + 0x268);
          if ((*(byte *)(iVar1 + 0x58) & 1) == 0) {
            puVar4 = (undefined4 *)(iVar1 + 0x130);
          }
          pdVar5 = &local_30;
          for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined4 *)pdVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            pdVar5 = (double *)((int)pdVar5 + 4);
          }
          local_10 = _DAT_0068aa18 - local_28;
          if ((SQRT((_DAT_0068aa10 - local_30) * (_DAT_0068aa10 - local_30) +
                    (_DAT_0068aa20 - local_20) * (_DAT_0068aa20 - local_20) + local_10 * local_10)
               <= _DAT_0064a750) && (*(int *)(iVar1 + 0x4c) != -1)) {
            iVar2 = FUN_004d89a0(*(int *)(iVar1 + 0x4c));
            if (iVar2 != 0) goto LAB_00422440;
          }
          FUN_00422300(iVar1);
        }
      }
LAB_00422440:
      piVar3 = (int *)*piVar3;
    } while (piVar3 != DAT_0068a8f0);
  }
  return;
}


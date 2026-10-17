
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0048a800(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  float10 fVar4;
  
  fVar4 = (float10)_DAT_0064a668;
  iVar2 = *param_1 - 1;
  if (-1 < iVar2) {
    puVar3 = param_1 + *param_1 + 2;
    do {
      uVar1 = 0x8000;
      do {
        if ((float10)_DAT_0064ae98 <= fVar4) {
          fVar4 = (float10)_DAT_00685538;
          if (param_1[2] != 0) {
            return fVar4;
          }
          goto LAB_0048a859;
        }
        fVar4 = fVar4 + fVar4;
        if ((*puVar3 & uVar1) != 0) {
          fVar4 = fVar4 + (float10)_DAT_0064a660;
        }
        uVar1 = uVar1 >> 1;
      } while (uVar1 != 0);
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -1;
    } while (-1 < iVar2);
  }
  if (param_1[2] == 0) {
LAB_0048a859:
    fVar4 = -fVar4;
  }
  return fVar4;
}


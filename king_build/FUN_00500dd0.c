
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00500dd0(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float local_4;
  
  iVar1 = *(int *)(param_1 + 0xdd4);
  local_4 = 1.0;
  if (0 < iVar1) {
    piVar3 = (int *)(param_1 + 0x3ce0);
    piVar5 = (int *)(param_1 + 0x1bd4);
    iVar4 = iVar1;
    do {
      if ((*piVar5 == 0) && (3 < iVar1)) {
        if (iVar1 == 4) {
          fVar2 = (float)_DAT_0064a660 - ((float)piVar3[-1] * (float)_DAT_0064c308) / (float)*piVar3
          ;
        }
        else {
          fVar2 = (float)_DAT_0064a660 - ((float)piVar3[-1] * (float)_DAT_0064c0e0) / (float)*piVar3
          ;
        }
      }
      else {
        fVar2 = (float)_DAT_0064a660 - ((float)piVar3[-1] * (float)_DAT_0064b948) / (float)*piVar3;
      }
      if (fVar2 < local_4) {
        local_4 = fVar2;
      }
      piVar5 = piVar5 + 1;
      piVar3 = piVar3 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  fVar2 = (float)_DAT_0064a660 -
          ((float)*(int *)(param_1 + 0x3cb4) * (float)_DAT_0064c0e0) /
          (float)*(int *)(param_1 + 0x3cb8);
  if (fVar2 < local_4) {
    local_4 = fVar2;
  }
  fVar6 = (float10)_DAT_0064a660 -
          ((float10)*(int *)(param_1 + 0x3ca0) * (float10)_DAT_0064a798) /
          (float10)*(int *)(param_1 + 0x3ca4);
  if ((float10)local_4 <= fVar6) {
    fVar6 = (float10)local_4;
  }
  return fVar6;
}


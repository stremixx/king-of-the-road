
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004bdf10(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)_DAT_0064b1d0;
  iVar1 = *(int *)(param_3 + 0x18);
  if ((iVar1 == 0) || (iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0)) {
    if ((iVar1 == 0) && (*(int *)(param_4 + 0x18) == 0)) {
      return fVar3;
    }
    if (iVar1 != 0) {
      if (iVar1 == 8) {
        fVar3 = (float10)FUN_00615f10(param_1,param_2);
      }
      else {
        fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_3);
      }
    }
    if (*(int *)(param_4 + 0x18) == 0) {
      return fVar3;
    }
    if (*(int *)(param_4 + 0x18) == 8) {
      fVar3 = (float10)FUN_00615f10(param_1,param_2);
      return fVar3;
    }
LAB_004bdf6b:
    fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_4);
  }
  else {
    if (iVar1 == 8) {
LAB_004bdfb2:
      if (iVar2 == 8) {
        fVar3 = (float10)FUN_00615f10(param_1,param_2);
        return fVar3;
      }
      if (iVar1 == 8) {
        if (iVar2 != 6) {
          fVar3 = (float10)FUN_00615f10(param_1,param_2);
          return fVar3;
        }
        fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_4);
        if (fVar3 != (float10)_DAT_0064b1d0) {
          return fVar3;
        }
        fVar3 = (float10)FUN_00615f10(param_1,param_2);
        return fVar3;
      }
    }
    else {
      if (iVar2 != 8) {
        if (iVar1 != 6) {
          fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_4);
          if (fVar3 != (float10)_DAT_0064b1d0) {
            return fVar3;
          }
          fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_3);
          return fVar3;
        }
        fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_3);
        if (fVar3 != (float10)_DAT_0064b1d0) {
          return fVar3;
        }
        goto LAB_004bdf6b;
      }
      if (iVar1 == 8) goto LAB_004bdfb2;
    }
    if (iVar1 != 6) {
      fVar3 = (float10)FUN_00615f10(param_1,param_2);
      return fVar3;
    }
    fVar3 = (float10)FUN_004be2c0(param_1,param_2,param_3);
    if (fVar3 == (float10)_DAT_0064b1d0) {
      fVar3 = (float10)FUN_00615f10(param_1,param_2);
      return fVar3;
    }
  }
  return fVar3;
}


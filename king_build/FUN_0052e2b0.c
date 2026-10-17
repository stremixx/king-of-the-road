
int FUN_0052e2b0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 1) {
    if (0x1e < param_1) goto LAB_0052e2ce;
    if (0x28 < param_1) goto LAB_0052e2e3;
    if (0x32 < param_1) goto LAB_0052e2f7;
    if (param_1 < 0x3d) {
      if (param_1 < 0x51) {
        return 0;
      }
      goto LAB_0052e320;
    }
  }
  else {
    if (param_1 < 0x1f) {
      return DAT_006cd2b0 + -1 + param_1;
    }
LAB_0052e2ce:
    if (param_1 < 0x29) {
      return DAT_006cd2b4 + -0x1f + param_1;
    }
LAB_0052e2e3:
    if (param_1 < 0x33) {
      return DAT_006cd2b8 + -0x29 + param_1;
    }
LAB_0052e2f7:
    if (param_1 < 0x3d) {
      return DAT_006cd2bc + -0x33 + param_1;
    }
  }
  if (param_1 < 0x51) {
    return DAT_006cd2c0 + -0x3d + param_1;
  }
LAB_0052e320:
  if (param_1 < 0x5b) {
    iVar1 = DAT_006cd2c4 + -0x51 + param_1;
  }
  return iVar1;
}


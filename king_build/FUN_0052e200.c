
int FUN_0052e200(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < DAT_006cd2b0) {
    if (DAT_006cd2b4 <= param_1) goto LAB_0052e226;
    if (DAT_006cd2b8 <= param_1) goto LAB_0052e243;
    if (DAT_006cd2bc <= param_1) goto LAB_0052e260;
    if (param_1 < DAT_006cd2c0) {
      if (param_1 < DAT_006cd2c4) {
        return 0;
      }
      goto LAB_0052e29a;
    }
  }
  else {
    if (param_1 < DAT_006cd2b4) {
      return (param_1 - DAT_006cd2b0) + 1;
    }
LAB_0052e226:
    if (param_1 < DAT_006cd2b8) {
      return (param_1 - DAT_006cd2b4) + 0x1f;
    }
LAB_0052e243:
    if (param_1 < DAT_006cd2bc) {
      return (param_1 - DAT_006cd2b8) + 0x29;
    }
LAB_0052e260:
    if (param_1 < DAT_006cd2c0) {
      return (param_1 - DAT_006cd2bc) + 0x33;
    }
  }
  if (param_1 < DAT_006cd2c4) {
    return (param_1 - DAT_006cd2c0) + 0x3d;
  }
LAB_0052e29a:
  if (param_1 < DAT_006cd2c8) {
    iVar1 = (param_1 - DAT_006cd2c4) + 0x51;
  }
  return iVar1;
}


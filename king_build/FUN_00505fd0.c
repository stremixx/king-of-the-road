
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00505fd0(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  
  if (3 < *(int *)(param_1 + 0xdd4)) {
    switch(param_2) {
    case 0:
      if (*(short *)(param_1 + 0x110) == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x300) == 0) {
        return 0;
      }
      if (*(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x2f4) +
          *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x2f8) +
          *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x2fc) <= (float)_DAT_0064cab0) {
        return 0;
      }
      fVar1 = ABS((*(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0x2e8)) *
                  *(float *)(param_1 + 0x2f4) +
                  (*(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0x2ec)) *
                  *(float *)(param_1 + 0x2f8) +
                  (*(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x2f0)) *
                  *(float *)(param_1 + 0x2fc));
      fVar2 = _DAT_00673968 * *(float *)(param_1 + 0x1f64);
      break;
    case 1:
      if (*(short *)(param_1 + 0x110) == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x208) == 0) {
        return 0;
      }
      if (*(float *)(param_1 + 0x104) * *(float *)(param_1 + 0x1fc) +
          *(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x200) +
          *(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x204) <= (float)_DAT_0064cab0) {
        return 0;
      }
      fVar1 = ABS((*(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0x1f0)) *
                  *(float *)(param_1 + 0x104) +
                  (*(float *)(param_1 + 0xfc) - *(float *)(param_1 + 500)) *
                  *(float *)(param_1 + 0x108) +
                  (*(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x1f8)) *
                  *(float *)(param_1 + 0x10c));
      fVar2 = _DAT_00673968 * *(float *)(param_1 + 0x1f68);
      break;
    case 2:
      if (*(short *)(param_1 + 0x208) == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x3f8) == 0) {
        return 0;
      }
      if (*(float *)(param_1 + 0x1fc) * *(float *)(param_1 + 0x3ec) +
          *(float *)(param_1 + 0x200) * *(float *)(param_1 + 0x3f0) +
          *(float *)(param_1 + 0x204) * *(float *)(param_1 + 0x3f4) <= (float)_DAT_0064cab0) {
        return 0;
      }
      fVar1 = ABS((*(float *)(param_1 + 0x1f0) - *(float *)(param_1 + 0x3e0)) *
                  *(float *)(param_1 + 0x1fc) +
                  (*(float *)(param_1 + 500) - *(float *)(param_1 + 0x3e4)) *
                  *(float *)(param_1 + 0x200) +
                  (*(float *)(param_1 + 0x1f8) - *(float *)(param_1 + 1000)) *
                  *(float *)(param_1 + 0x204));
      fVar2 = _DAT_00673968 * *(float *)(param_1 + 0x1f6c);
      break;
    case 3:
      if (*(short *)(param_1 + 0x300) == 0) {
        return 0;
      }
      if (*(short *)(param_1 + 0x3f8) == 0) {
        return 0;
      }
      if (*(float *)(param_1 + 0x3ec) * *(float *)(param_1 + 0x2f4) +
          *(float *)(param_1 + 0x2f8) * *(float *)(param_1 + 0x3f0) +
          *(float *)(param_1 + 0x2fc) * *(float *)(param_1 + 0x3f4) <= (float)_DAT_0064cab0) {
        return 0;
      }
      fVar1 = ABS((*(float *)(param_1 + 0x2e8) - *(float *)(param_1 + 0x3e0)) *
                  *(float *)(param_1 + 0x2f4) +
                  (*(float *)(param_1 + 0x2ec) - *(float *)(param_1 + 0x3e4)) *
                  *(float *)(param_1 + 0x2f8) +
                  (*(float *)(param_1 + 0x2f0) - *(float *)(param_1 + 1000)) *
                  *(float *)(param_1 + 0x2fc));
      fVar2 = _DAT_00673968 * *(float *)(param_1 + 0x1f70);
      break;
    default:
      goto switchD_00505fea_default;
    }
    if (fVar2 <= fVar1) {
switchD_00505fea_default:
      return 0;
    }
  }
  return 1;
}


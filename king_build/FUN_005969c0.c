
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005969c0(int param_1)

{
  if (*(int *)(DAT_006d0fd8 + 0x578) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1e8) + 0x58) = 0x40000000;
    *(float *)(*(int *)(param_1 + 0x1e8) + 0x54) =
         ((float)(*(ushort **)(param_1 + 0xc))[1] * *(float *)(*(int *)(param_1 + 0x1e8) + 0x58)) /
         (float)**(ushort **)(param_1 + 0xc);
    return;
  }
  if (_DAT_0067d0c0 < _DAT_0064a668) {
    FUN_00603370(s_EFFECTS_00671998,s_xpyramid_0067d0ec,0x9999999a,0x3ff99999,&DAT_0067d0c0,
                 DAT_006957c8);
  }
  *(float *)(*(int *)(param_1 + 0x1e8) + 0x58) = (float)_DAT_0067d0c0;
  *(float *)(*(int *)(param_1 + 0x1e8) + 0x54) =
       ((float)(*(ushort **)(param_1 + 0xc))[1] * *(float *)(*(int *)(param_1 + 0x1e8) + 0x58)) /
       (float)**(ushort **)(param_1 + 0xc);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c7800(undefined4 param_1,float param_2,float param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  uint uVar1;
  
  uVar1 = __ftol();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar1) {
  case 0:
    *param_4 = _DAT_00650c54 * param_2 * _DAT_0064c484;
    *param_5 = _DAT_00650c54 * param_3 * _DAT_00650c8c;
    *param_6 = _DAT_00650c54 * param_2 * _DAT_00650c88;
    *param_7 = _DAT_00650c54 * param_3 * _DAT_00650c80;
    return;
  case 1:
    *param_7 = _DAT_00650c54 * param_2 * _DAT_0064c484;
    *param_4 = _DAT_00650c54 * param_3 * _DAT_00650c8c;
    *param_5 = _DAT_00650c54 * param_2 * _DAT_00650c88;
    *param_6 = _DAT_00650c54 * param_3 * _DAT_00650c80;
    return;
  case 2:
    *param_6 = _DAT_00650c54 * param_2 * _DAT_0064c484;
    *param_7 = _DAT_00650c54 * param_3 * _DAT_00650c8c;
    *param_4 = _DAT_00650c54 * param_2 * _DAT_00650c88;
    *param_5 = _DAT_00650c54 * param_3 * _DAT_00650c80;
    return;
  case 3:
    *param_5 = _DAT_00650c54 * param_2 * _DAT_0064c484;
    *param_6 = _DAT_00650c54 * param_3 * _DAT_00650c8c;
    *param_7 = _DAT_00650c54 * param_2 * _DAT_00650c88;
    *param_4 = _DAT_00650c54 * param_3 * _DAT_00650c80;
  }
  return;
}


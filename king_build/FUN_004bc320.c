
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bc320(undefined4 *param_1,float *param_2,int param_3)

{
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((param_3 != 0) &&
     ((*(int *)(DAT_006cdbcc + 0x514) == 1 || (*(int *)(DAT_006cdbcc + 0x524) != 0)))) {
    local_1c[0] = 9;
    local_18 = *param_1;
    local_14 = param_1[1];
    local_c = *param_2;
    local_10 = param_1[2];
    local_8 = param_2[1];
    local_4 = param_2[2];
    FUN_006027f0(0x3bd,local_1c,0x1c);
  }
  if (_DAT_0064b248 < _DAT_00694fe8) {
    local_28 = *param_2 * _DAT_0064b248;
    local_24 = param_2[1] * _DAT_0064b248;
    local_20 = param_2[2] * _DAT_0064b248;
    FUN_004bc1b0(param_1,&local_28);
    local_28 = *param_2 * _DAT_0064b24c;
    local_24 = param_2[1] * _DAT_0064b24c;
    local_20 = param_2[2] * _DAT_0064b24c;
    FUN_004bc1b0(param_1,&local_28);
    local_28 = *param_2;
    local_24 = param_2[1];
    local_20 = param_2[2];
    FUN_004bc1b0(param_1,&local_28);
    local_28 = *param_2 * _DAT_0064b344;
    local_24 = param_2[1] * _DAT_0064b344;
    local_20 = param_2[2] * _DAT_0064b344;
    FUN_004bc1b0(param_1,&local_28);
    local_28 = *param_2 * _DAT_0064b340;
    local_24 = param_2[1] * _DAT_0064b340;
    local_20 = param_2[2] * _DAT_0064b340;
    FUN_004bc1b0(param_1,&local_28);
  }
  return;
}


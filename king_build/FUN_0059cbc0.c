
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059cbc0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,float param_4,
            undefined4 param_5,uint param_6)

{
  FUN_0059a200(param_2,param_3,0,param_4 * _DAT_0064b3f8,param_5,param_6,
               _DAT_0064fed0 / (float)param_6,0x3fa3d70a,100);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = &PTR_LAB_0064fec8;
  param_1[5] = &PTR_LAB_0064fe7c;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  param_1[0x28] = DAT_007015b0;
  param_1[0x29] = DAT_007015b4;
  param_1[0x2a] = DAT_007015b8;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_0059bb40(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            float param_5,undefined4 param_6,uint param_7)

{
  undefined4 uVar1;
  
  FUN_0059a200(param_2,param_3,param_5 * _DAT_0064b248,param_5 * _DAT_0064b3f8,param_6,param_7,
               _DAT_0064b320 / (float)param_7,0x3f400000,100);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = &PTR_LAB_0064fdc4;
  param_1[5] = &PTR_LAB_0064fd78;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  uVar1 = param_4[2];
  param_1[0x2b] = 0x40400000;
  param_1[0x2a] = uVar1;
  return param_1;
}


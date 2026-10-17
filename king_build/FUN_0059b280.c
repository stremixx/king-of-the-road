
undefined4 * __thiscall
FUN_0059b280(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  FUN_0059a200(param_2,param_3,param_5,param_6,param_7,param_8,0x3d4ccccd,0x3f400000,100);
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = &PTR_LAB_0064fd1c;
  param_1[5] = &PTR_LAB_0064fcd0;
  param_1[0x20] = param_1[0x20] | 1;
  param_1[0x25] = *param_3;
  param_1[0x26] = param_3[1];
  param_1[0x27] = param_3[2];
  param_1[0x28] = *param_4;
  param_1[0x29] = param_4[1];
  uVar1 = param_4[2];
  param_1[0x2b] = 0;
  param_1[0x2a] = uVar1;
  return param_1;
}


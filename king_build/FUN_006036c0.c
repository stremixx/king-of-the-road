
undefined4 * __thiscall
FUN_006036c0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,uint param_7)

{
  undefined4 uVar1;
  
  param_1[0xd] = param_2;
  *param_1 = &PTR_FUN_00651de8;
  param_1[1] = *(undefined4 *)(param_2 * 0x18 + DAT_007230c4);
  uVar1 = *(undefined4 *)(param_2 * 0x18 + 4 + DAT_007230c4);
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[2] = uVar1;
  param_1[6] = param_3;
  param_1[10] = param_7 & 0xff;
  *(undefined2 *)(param_1 + 9) = param_6;
  param_1[3] = 0;
  param_1[0xb] = 0x2b11;
  param_1[0xc] = 0x2b11;
  FUN_006037f0();
  return param_1;
}



void __thiscall FUN_00555d80(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[5] = 0;
  uVar1 = *(undefined4 *)(&DAT_006968d8 + param_2 * 0x970);
  param_1[3] = uVar1;
  param_1[4] = uVar1;
  *param_1 = (&DAT_006968e8)[param_2 * 0x25c];
  param_1[1] = (&DAT_006968ec)[param_2 * 0x25c];
  param_1[2] = (&DAT_006968f0)[param_2 * 0x25c];
  return;
}


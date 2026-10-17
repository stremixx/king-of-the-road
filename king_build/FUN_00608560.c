
void __thiscall FUN_00608560(int param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(((param_2 % 0x101) * 0x101 + param_3 % 0x101) * 0x10 + 4 + param_1);
  *param_4 = *puVar1;
  param_4[1] = puVar1[1];
  param_4[2] = puVar1[2];
  return;
}


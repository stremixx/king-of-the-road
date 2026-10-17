
void __thiscall FUN_00549a00(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x3c) = *param_2;
  *(undefined4 *)(iVar1 + 0x40) = param_2[1];
  *(undefined4 *)(iVar1 + 0x44) = param_2[2];
  return;
}


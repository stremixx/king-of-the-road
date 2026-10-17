
void __thiscall FUN_00501090(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((*(short *)(param_1 + 0x274a) != 0) && (-1 < param_2)) && (param_2 < 0x1b)) {
    iVar1 = param_1 + param_2 * 0x14;
    if ((param_3 <= *(int *)(param_1 + 0x3ca4 + param_2 * 0x14)) &&
       (*(int *)(iVar1 + 0x3ca8) <= param_3)) {
      *(int *)(param_1 + (param_2 * 5 + 0xf28) * 4) = param_3;
      *(float *)(iVar1 + 0x3cac) = (float)param_3 / (float)*(int *)(iVar1 + 0x3ca4);
    }
  }
  return;
}


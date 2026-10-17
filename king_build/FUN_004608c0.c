
void FUN_004608c0(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = (param_2 - (int)param_1) / 0x18;
  if (0 < iVar1) {
    do {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_1 = param_1 + 3;
      param_3 = param_3 + 3;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


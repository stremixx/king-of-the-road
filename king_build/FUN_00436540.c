
void FUN_00436540(float *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0068be60 + param_2 * 4);
  dVar1 = *(double *)(iVar3 + 0x40);
  dVar2 = *(double *)(iVar3 + 0x38);
  *param_1 = (float)*(double *)(iVar3 + 0x30);
  param_1[1] = (float)dVar2;
  param_1[2] = (float)dVar1;
  return;
}


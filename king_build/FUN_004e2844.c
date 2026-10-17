
void FUN_004e2844(undefined4 *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_8c [12];
  double *pdStack_5c;
  double *pdStack_58;
  double *pdStack_54;
  double *pdStack_50;
  double *pdStack_4c;
  double *pdStack_48;
  double local_34;
  double local_2c;
  double local_24;
  double local_1c;
  double local_14;
  double local_c;
  
  pdStack_48 = &local_c;
  pdStack_4c = &local_14;
  pdStack_50 = &local_1c;
  pdStack_54 = &local_24;
  pdStack_58 = &local_2c;
  pdStack_5c = &local_34;
  puVar2 = auStack_8c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005de000();
  *param_2 = (float)local_34;
  *param_3 = (float)local_2c;
  *param_4 = (float)local_24;
  *param_5 = (float)local_1c;
  *param_6 = (float)local_14;
  *param_7 = (float)local_c;
  return;
}


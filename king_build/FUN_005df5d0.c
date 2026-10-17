
void FUN_005df5d0(undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_80 [12];
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  double *pdStack_40;
  double *pdStack_3c;
  double local_30;
  double local_28;
  double local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  undefined1 local_8 [8];
  
  puStack_44 = (undefined1 *)&local_30;
  pdStack_3c = &local_20;
  pdStack_40 = &local_28;
  puStack_48 = local_18;
  puStack_4c = local_10;
  puStack_50 = local_8;
  puVar2 = auStack_80;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005de000();
  *param_2 = (float)local_30;
  *param_3 = -(float)local_28;
  *param_4 = -(float)local_20;
  return;
}


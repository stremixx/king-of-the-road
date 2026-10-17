
undefined4 FUN_005683e0(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_d0 [20];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_30 [48];
  
  if ((DAT_0067a1f4 <= param_1) || (param_1 < 0)) {
    return 0xffffffff;
  }
  *param_3 = param_1 + 300000;
  piVar1 = (int *)FUN_005e4980(param_1 + 300000);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffe;
  }
  if ((*piVar1 == 1) && (piVar1[7] != 0)) {
    iVar2 = FUN_0057d570(local_30);
    *param_2 = *(undefined4 *)(iVar2 + 0x24);
    param_2[1] = *(undefined4 *)(iVar2 + 0x28);
    param_2[2] = *(undefined4 *)(iVar2 + 0x2c);
    return 0;
  }
  puVar3 = (undefined4 *)piVar1[6];
  puVar4 = local_d0;
  for (iVar2 = 0x28; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *param_2 = local_80;
  param_2[1] = local_7c;
  param_2[2] = local_78;
  return 0;
}



void __fastcall FUN_005c2b80(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 auStack_158 [12];
  double *pdStack_128;
  double *pdStack_124;
  double *pdStack_120;
  double *pdStack_11c;
  double *pdStack_118;
  double *pdStack_114;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined4 local_b8 [12];
  undefined4 local_88 [33];
  
  pdStack_11c = *(double **)(param_1 + 0x14);
  if (pdStack_11c != (double *)0x0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if (iVar2 == 1) {
      puVar1 = local_b8 + 2;
      iVar2 = 4;
      do {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0;
        puVar1 = puVar1 + 3;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      pdStack_114 = (double *)local_b8;
      puVar1 = &DAT_00701550;
      puVar3 = local_b8;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      pdStack_118 = (double *)0x5c2bde;
      FUN_005f1c30();
      pdStack_114 = &local_d0;
      pdStack_118 = &local_c8;
      pdStack_11c = &local_c0;
      pdStack_120 = &local_d8;
      pdStack_124 = &local_e0;
      pdStack_128 = &local_e8;
      puVar1 = local_b8;
      puVar3 = auStack_158;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar3 = puVar3 + 1;
      }
      FUN_005de000();
      local_100 = (float)local_e8;
      pdStack_11c = *(double **)(param_1 + 0xc);
      local_fc = (float)local_e0;
      pdStack_118 = (double *)&local_100;
      pdStack_114 = (double *)0x0;
      local_f8 = (float)local_d8;
      local_f4 = (float)local_d0;
      local_f0 = (float)local_c8;
      local_ec = (float)local_c0;
      pdStack_120 = (double *)0x5c2c5a;
      FUN_006026b0();
      return;
    }
    if (iVar2 == 0) {
      pdStack_114 = *(double **)((int)pdStack_11c + 0x38);
      pdStack_118 = *(double **)(param_1 + 0xc);
      pdStack_11c = (double *)0x5c2c77;
      FUN_00602790();
      return;
    }
    if (iVar2 == 3) {
      pdStack_114 = *(double **)pdStack_11c;
      pdStack_118 = *(double **)(param_1 + 0xc);
      pdStack_11c = (double *)0x5c2c94;
      FUN_00602790();
      return;
    }
    if (iVar2 == 4) {
      pdStack_114 = *(double **)((int)pdStack_11c + 4);
      pdStack_118 = *(double **)pdStack_11c;
      pdStack_11c = *(double **)(param_1 + 0xc);
      pdStack_120 = (double *)0x5c2cb5;
      FUN_00602730();
      return;
    }
    if (iVar2 == 5) {
      pdStack_114 = *(double **)(param_1 + 0x18);
      pdStack_118 = (double *)local_88;
      pdStack_120 = (double *)0x5c2cd3;
      (**(code **)(param_1 + 0x1c))();
      pdStack_114 = *(double **)(param_1 + 0x18);
      pdStack_118 = (double *)local_88;
    }
    else {
      if (iVar2 != 6) {
        return;
      }
      pdStack_114 = *(double **)(param_1 + 0x18);
      pdStack_118 = pdStack_11c;
    }
    pdStack_11c = *(double **)(param_1 + 0xc);
    pdStack_120 = (double *)0x5c2cfa;
    FUN_006027f0();
  }
  return;
}


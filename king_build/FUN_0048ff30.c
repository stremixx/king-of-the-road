
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048ff30(undefined4 *param_1,double param_2,double param_3,int param_4)

{
  undefined4 *puVar1;
  double *pdVar2;
  int iVar3;
  double *pdVar4;
  undefined4 *puVar5;
  float10 fVar6;
  int local_8e4;
  int local_8dc;
  double local_8d8;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  undefined4 local_8c0;
  undefined4 local_8bc;
  double local_8b8;
  undefined4 local_8ac [48];
  int local_7ec;
  undefined1 local_7e8 [192];
  int local_728;
  undefined4 local_724 [48];
  undefined4 local_664;
  undefined1 local_660 [196];
  undefined1 local_59c [196];
  undefined1 local_4d8 [196];
  double local_414 [128];
  void *local_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00640bbc;
  local_14 = ExceptionList;
  local_8e4 = 0;
  if (-1 < param_4) {
    pdVar2 = local_414;
    do {
      fVar6 = (float10)local_8e4;
      local_8e4 = local_8e4 + 1;
      fVar6 = (float10)fcos(((fVar6 + fVar6 + (float10)_DAT_0064a660) * (float10)_DAT_0064a818) /
                            ((float10)param_4 + (float10)_DAT_0064a660 +
                            (float10)param_4 + (float10)_DAT_0064a660));
      *pdVar2 = (double)((fVar6 * ((float10)param_3 - (float10)param_2) +
                         (float10)param_2 + (float10)param_3) * (float10)_DAT_0064a6d0);
      pdVar2 = pdVar2 + 1;
    } while (local_8e4 <= param_4);
  }
  local_664 = 0;
  local_c = 0;
  uStack_b = 0;
  local_8e4 = 0;
  if (-1 < param_4) {
    pdVar2 = local_414;
    ExceptionList = &local_14;
    do {
      local_c = 0;
      local_8c4 = *(undefined4 *)((int)pdVar2 + 4);
      local_8c8 = *(undefined4 *)pdVar2;
      fVar6 = (float10)FUN_0048ea10(&local_8c8);
      local_8d0 = 0;
      local_8cc = 0x3ff00000;
      local_7ec = 0;
      local_8d8 = (double)SQRT(fVar6);
      local_c = 1;
      FUN_00460900(local_8ac,&local_8d0);
      local_7ec = local_7ec + 1;
      local_c = 2;
      local_8dc = 0;
      pdVar4 = local_414;
      do {
        if (local_8dc != local_8e4) {
          local_8c0 = 0;
          local_8bc = 0x3ff00000;
          local_728 = 0;
          local_8d8 = local_8d8 / (*pdVar2 - *pdVar4);
          local_8b8 = -*pdVar4;
          local_c = 3;
          FUN_00460900(local_7e8,&local_8c0);
          local_728 = local_728 + 1;
          FUN_0048eca0(&local_8b8);
          local_c = 2;
          puVar1 = (undefined4 *)FUN_0048eb90(local_4d8,local_7e8);
          puVar5 = local_8ac;
          for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar1;
            puVar1 = puVar1 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        local_8dc = local_8dc + 1;
        pdVar4 = pdVar4 + 1;
      } while (local_8dc <= param_4);
      puVar1 = (undefined4 *)FUN_004901d0(local_660,&local_8d8);
      puVar5 = local_8ac;
      for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_004030a0();
      puVar1 = (undefined4 *)FUN_00490260(local_59c,local_8ac);
      local_8e4 = local_8e4 + 1;
      puVar5 = local_724;
      for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar5 = puVar5 + 1;
      }
      pdVar2 = pdVar2 + 1;
      local_c = 0;
    } while (local_8e4 <= param_4);
  }
  puVar1 = local_724;
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  ExceptionList = local_14;
  return;
}


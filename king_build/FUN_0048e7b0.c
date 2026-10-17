
undefined4
FUN_0048e7b0(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
            int param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  uint uVar7;
  undefined4 uVar8;
  int local_1b8;
  int local_1b4;
  double local_19c;
  double local_194 [23];
  int local_dc;
  double local_d8;
  double local_d0 [23];
  int local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640a5b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_0048ea40(&local_19c);
  uVar8 = 0;
  local_c = 0;
  FUN_0048ea40(&local_d8);
  local_1b4 = 0;
  if (0 < param_6) {
    do {
      uVar4 = (*(int *)(param_1 + 0x18) << 3) >> 3;
      dVar2 = ((double)local_1b4 * (param_5 - param_4)) / (double)(param_6 + -1) + param_4;
      dVar1 = *param_1;
      if (1 < uVar4) {
        iVar5 = uVar4 - 1;
        pdVar6 = param_1;
        do {
          pdVar6 = pdVar6 + 1;
          iVar5 = iVar5 + -1;
          dVar1 = dVar1 * dVar2 + *pdVar6;
        } while (iVar5 != 0);
      }
      if (dVar1 < *param_2) {
        *param_2 = dVar1;
        uVar8 = 1;
        *param_3 = dVar2;
      }
      local_1b8 = 3;
      uVar4 = local_dc * 8 >> 3;
      do {
        dVar1 = local_19c;
        if (1 < uVar4) {
          iVar5 = uVar4 - 1;
          pdVar6 = local_194;
          do {
            iVar5 = iVar5 + -1;
            dVar1 = dVar1 * dVar2 + *pdVar6;
            pdVar6 = pdVar6 + 1;
          } while (iVar5 != 0);
        }
        uVar7 = (local_18 << 3) >> 3;
        dVar3 = local_d8;
        if (1 < uVar7) {
          iVar5 = uVar7 - 1;
          pdVar6 = local_d0;
          do {
            iVar5 = iVar5 + -1;
            dVar3 = dVar3 * dVar2 + *pdVar6;
            pdVar6 = pdVar6 + 1;
          } while (iVar5 != 0);
        }
        uVar7 = (*(int *)(param_1 + 0x18) << 3) >> 3;
        dVar2 = dVar2 - dVar1 / dVar3;
        dVar1 = *param_1;
        if (1 < uVar7) {
          iVar5 = uVar7 - 1;
          pdVar6 = param_1;
          do {
            pdVar6 = pdVar6 + 1;
            iVar5 = iVar5 + -1;
            dVar1 = dVar1 * dVar2 + *pdVar6;
          } while (iVar5 != 0);
        }
        if (((dVar1 < *param_2) && (dVar2 <= param_5)) && (param_4 <= dVar2)) {
          *param_2 = dVar1;
          uVar8 = 1;
          *param_3 = dVar2;
        }
        local_1b8 = local_1b8 + -1;
      } while (local_1b8 != 0);
      local_1b4 = local_1b4 + 1;
    } while (local_1b4 < param_6);
  }
  ExceptionList = local_14;
  return uVar8;
}


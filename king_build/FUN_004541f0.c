
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_004541f0(uint *param_1,uint *param_2,uint param_3,undefined4 param_4,int param_5)

{
  double dVar1;
  void **ppvVar2;
  double dVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  uint *puVar12;
  double local_34;
  double local_2c;
  undefined4 *local_24;
  undefined4 *local_20;
  undefined4 *local_1c;
  double *local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063ea20;
  local_c = ExceptionList;
  puVar5 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = (double *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_34 = 0.0;
  puVar12 = param_2;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (param_1 != param_2) {
    do {
      ExceptionList = ppvVar2;
      uVar9 = param_3;
      uVar8 = *param_1;
      dVar3 = _DAT_0064a668;
      if ((uVar8 != param_3) &&
         (cVar4 = FUN_00404bd0(uVar8,param_4), puVar5 = local_20, dVar3 = _DAT_0064a668,
         cVar4 != '\0')) {
        dVar3 = _DAT_0064a660;
        for (iVar11 = *(int *)(uVar9 + 0x1c); puVar12 = param_2, iVar11 != *(int *)(uVar9 + 0x20);
            iVar11 = iVar11 + 0x10) {
          piVar6 = (int *)(iVar11 + 8);
          iVar7 = 2;
          do {
            if ((*piVar6 != 0) && (*(uint *)(DAT_0068be20 + *(int *)(*piVar6 + 0xc) * 4) == uVar8))
            {
              dVar3 = dVar3 * _DAT_0064a648;
            }
            piVar6 = piVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      local_2c = dVar3;
      if (_DAT_0064a668 < local_2c) {
        local_34 = local_2c + local_34;
        if (puVar5 == local_1c) {
          FUN_0045ae60(puVar5,&param_1);
        }
        else {
          FUN_00460970(puVar5,&param_1);
          local_20 = local_20 + 1;
        }
        if (local_14 == local_10) {
          FUN_0044c410(local_14,&local_2c);
          puVar5 = local_20;
        }
        else {
          FUN_00460900(local_14,&local_2c);
          local_14 = local_14 + 8;
          puVar5 = local_20;
        }
      }
      param_1 = param_1 + 1;
      ppvVar2 = ExceptionList;
    } while (param_1 != puVar12);
    if (local_24 != puVar5) {
      if (((int)puVar5 - (int)local_24 & 0xfffffffcU) == 4) {
        puVar12 = (uint *)*local_24;
      }
      else {
        param_4 = 0;
        uVar8 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
        uVar9 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
        *(uint *)(param_5 + 0xdc) = uVar8;
        *(uint *)(param_5 + 0xe0) = uVar9;
        *(int *)(param_5 + uVar8 * 4) =
             *(int *)(param_5 + uVar8 * 4) - *(int *)(param_5 + uVar9 * 4);
        param_3 = *(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % 1000000;
        dVar3 = (double)param_3 * local_34 * _DAT_0064a6c8;
        dVar1 = _DAT_0064a668;
        puVar5 = local_24;
        pdVar10 = local_18;
        while( true ) {
          if (puVar5 == local_20) {
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_0047aba0();
            local_4 = 0xffffffff;
            FUN_00449a70();
            ExceptionList = local_c;
            return param_2;
          }
          if ((dVar1 <= dVar3) && (dVar3 <= dVar1 + *pdVar10)) break;
          dVar1 = dVar1 + *pdVar10;
          puVar5 = puVar5 + 1;
          pdVar10 = pdVar10 + 1;
        }
        puVar12 = (uint *)*puVar5;
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0047aba0();
  local_4 = 0xffffffff;
  FUN_00451450();
  ExceptionList = local_c;
  return puVar12;
}


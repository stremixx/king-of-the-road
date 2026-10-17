
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004569c0(int *param_1,int *param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  double dVar1;
  double dVar2;
  void **ppvVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  undefined4 *puVar9;
  int iVar10;
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
  
  puStack_8 = &LAB_0063ec60;
  local_c = ExceptionList;
  puVar9 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_18 = (double *)0x0;
  local_14 = 0;
  local_10 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  local_34 = 0.0;
  piVar4 = param_2;
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (param_1 != param_2) {
    do {
      ExceptionList = ppvVar3;
      uVar6 = *(uint *)(DAT_0068bc18 + 0x30 + *param_1 * 0x68);
      local_2c = _DAT_0064a668;
      if (((uVar6 & 1) == 0) && (param_4 == (uVar6 & param_5))) {
        local_2c = _DAT_0064a660;
        for (iVar5 = *(int *)(param_3 + 0x1c); iVar5 != *(int *)(param_3 + 0x20);
            iVar5 = iVar5 + 0x10) {
          piVar4 = (int *)(iVar5 + 8);
          iVar10 = 2;
          do {
            if (((int *)*piVar4 != (int *)0x0) && (*(int *)*piVar4 == *param_1)) {
              local_2c = local_2c * _DAT_0064a728;
            }
            piVar4 = piVar4 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          piVar4 = param_2;
        }
      }
      if (_DAT_0064a668 < local_2c) {
        local_34 = local_2c + local_34;
        if (puVar9 == local_1c) {
          FUN_0045d5c0(puVar9,&param_1);
        }
        else {
          FUN_00460970(puVar9,&param_1);
          local_20 = local_20 + 1;
        }
        if (local_14 == local_10) {
          FUN_0044c410(local_14,&local_2c);
          puVar9 = local_20;
        }
        else {
          FUN_00460900(local_14,&local_2c);
          local_14 = local_14 + 8;
          puVar9 = local_20;
        }
      }
      param_1 = param_1 + 1;
      ppvVar3 = ExceptionList;
    } while (param_1 != piVar4);
    if (local_24 != puVar9) {
      if (((int)puVar9 - (int)local_24 & 0xfffffffcU) == 4) {
        piVar4 = (int *)*local_24;
      }
      else {
        param_4 = 0;
        uVar6 = (*(int *)(param_6 + 0xdc) + 1U) % 0x37;
        uVar7 = (*(int *)(param_6 + 0xe0) + 1U) % 0x37;
        *(uint *)(param_6 + 0xdc) = uVar6;
        *(uint *)(param_6 + 0xe0) = uVar7;
        *(int *)(param_6 + uVar6 * 4) =
             *(int *)(param_6 + uVar6 * 4) - *(int *)(param_6 + uVar7 * 4);
        param_3 = *(uint *)(param_6 + *(int *)(param_6 + 0xdc) * 4) % 1000000;
        dVar1 = (double)param_3 * local_34 * _DAT_0064a6c8;
        dVar2 = _DAT_0064a668;
        puVar9 = local_24;
        pdVar8 = local_18;
        while( true ) {
          if (puVar9 == local_20) {
            FUN_004473b0();
            local_4 = 0xffffffff;
            FUN_00449a70();
            ExceptionList = local_c;
            return param_2;
          }
          if ((dVar2 <= dVar1) && (dVar1 <= dVar2 + *pdVar8)) break;
          dVar2 = dVar2 + *pdVar8;
          puVar9 = puVar9 + 1;
          pdVar8 = pdVar8 + 1;
        }
        piVar4 = (int *)*puVar9;
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0047aba0();
  local_4 = 0xffffffff;
  FUN_00451450();
  ExceptionList = local_c;
  return piVar4;
}


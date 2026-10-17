
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0048a870(undefined4 param_1,undefined4 *param_2)

{
  ushort uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  ushort *puVar8;
  float10 fVar9;
  undefined2 *local_20;
  ushort *local_1c;
  int local_18;
  double local_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00640850;
  local_c = ExceptionList;
  local_20 = &DAT_0066f3f0;
  local_1c = &DAT_0066f3f0;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_0048be30(param_1,param_2,&local_20,&local_1c);
  fVar9 = (float10)FUN_0048aaa0();
  local_14 = (double)fVar9;
  if (((((float10)_DAT_0064ac20 <= fVar9) || (local_14 <= _DAT_0064aea0)) ||
      (uVar1 = *local_1c, uVar1 == 0)) ||
     (local_18 = (-(uint)(local_1c[2] != 1) & 0xfffffffe) + 1, local_18 == 0)) {
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_1c != (ushort *)0x0) && (local_1c[1] != 0)) {
      FUN_00631d5c(local_1c);
    }
    local_4 = 0xffffffff;
    if ((local_20 != (undefined2 *)0x0) && (local_20[1] != 0)) {
      FUN_00631d5c(local_20);
    }
    ExceptionList = local_c;
    return (float10)local_14;
  }
  uVar5 = (uint)*(ushort *)*param_2;
  iVar6 = uVar5 - 1;
  bVar4 = true;
  dVar2 = _DAT_0064a668;
  dVar3 = _DAT_0064a668;
  if (-1 < iVar6) {
    puVar8 = local_1c + uVar5 + 2;
    puVar7 = (ushort *)*param_2 + uVar5 + 2;
    do {
      if (!bVar4) break;
      param_2._0_2_ = 0x8000;
      do {
        if (dVar2 + _DAT_0064a660 == dVar2) {
          bVar4 = false;
          break;
        }
        dVar2 = dVar2 + dVar2;
        if ((*puVar7 & (ushort)param_2) != 0) {
          dVar2 = dVar2 + _DAT_0064a660;
        }
        if ((iVar6 < (int)(uint)uVar1) && (dVar3 = dVar3 + dVar3, (*puVar8 & (ushort)param_2) != 0))
        {
          dVar3 = dVar3 + _DAT_0064a660;
        }
        param_2._0_2_ = (ushort)param_2 >> 1;
      } while ((ushort)param_2 != 0);
      iVar6 = iVar6 + -1;
      puVar7 = puVar7 + -1;
      puVar8 = puVar8 + -1;
    } while (-1 < iVar6);
  }
  if ((uVar1 != 0) && (local_18 < 0)) {
    dVar3 = -dVar3;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  local_14 = dVar3 / dVar2 + local_14;
  if ((local_1c != (ushort *)0x0) && (local_1c[1] != 0)) {
    FUN_00631d5c(local_1c);
  }
  local_4 = 0xffffffff;
  if ((local_20 != (undefined2 *)0x0) && (local_20[1] != 0)) {
    FUN_00631d5c(local_20);
  }
  ExceptionList = local_c;
  return (float10)local_14;
}


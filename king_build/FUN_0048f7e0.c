
void __thiscall FUN_0048f7e0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_26c [145];
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00640ac0;
  local_10 = ExceptionList;
  puVar8 = (undefined4 *)param_1[1];
  local_14 = &stack0xfffffd88;
  if (puVar8 != (undefined4 *)param_1[2]) {
    if (puVar8 != (undefined4 *)0x0) {
      puVar6 = puVar8 + -0x91;
      for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    puVar8 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar8 + 0x91);
    puVar6 = local_26c;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar6 = puVar8 + -0x91;
    iVar4 = ((int)puVar6 - (int)param_2) / 0x244;
    if (0 < iVar4) {
      do {
        puVar6 = puVar6 + -0x91;
        puVar8 = puVar8 + -0x91;
        iVar4 = iVar4 + -1;
        puVar7 = puVar6;
        puVar10 = puVar8;
        for (iVar5 = 0x91; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar10 = puVar10 + 1;
        }
      } while (iVar4 != 0);
    }
    puVar8 = local_26c;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar8;
      puVar8 = puVar8 + 1;
      param_2 = param_2 + 1;
    }
    ExceptionList = local_10;
    return;
  }
  local_1c = ((int)puVar8 - *param_1) / 0x244;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_20 = 0;
      ExceptionList = &local_10;
      goto LAB_0048f8f9;
    }
  }
  ExceptionList = &local_10;
  local_20 = FUN_0044b6e0(local_1c * 0x244);
LAB_0048f8f9:
  local_8 = 0;
  local_18 = (undefined4 *)local_20;
  local_18 = (undefined4 *)FUN_00490550(*param_1,param_2,local_20,param_2);
  if (local_18 != (undefined4 *)0x0) {
    puVar8 = local_18;
    for (iVar4 = 0x91; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *param_3;
      param_3 = param_3 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  local_18 = local_18 + 0x91;
  local_28 = FUN_00490550(param_2,param_1[1],local_18,param_2);
  iVar4 = param_1[1];
  iVar5 = *param_1;
  local_8 = 0xffffffff;
  for (; iVar5 != iVar4; iVar5 = iVar5 + 0x244) {
    FUN_004030a0();
  }
  piVar1 = (int *)*param_1;
  iVar4 = (param_1[2] - (int)piVar1) / 0x244;
  if (iVar4 != 0) {
    uVar2 = iVar4 * 0x244;
    if (uVar2 < 0x81) {
      local_24 = (int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      LVar3 = InterlockedExchange(&DAT_0068c164,1);
      uVar2 = DAT_0066b83c;
      if (LVar3 != 0) {
        local_18 = (undefined4 *)DAT_0068c168;
        uVar9 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if ((((uint)local_18 >> 1 <= uVar9) && (DAT_0068c164 == 0)) &&
               (LVar3 = InterlockedExchange(&DAT_0068c164,1), LVar3 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar9;
              goto LAB_0048fa8c;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar2);
        }
        DAT_0066b83c = 0x1e;
        iVar4 = 0;
        while( true ) {
          iVar5 = iVar4 + 6;
          if (0x1b < iVar5) {
            iVar5 = 0x1b;
          }
          LVar3 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar3 == 0) break;
          FUN_00402b10(iVar5);
          iVar4 = iVar4 + 1;
        }
      }
LAB_0048fa8c:
      *piVar1 = *local_24;
      *local_24 = (int)piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  param_1[1] = local_28;
  *param_1 = local_20;
  param_1[2] = local_20 + local_1c * 0x244;
  ExceptionList = local_10;
  return;
}


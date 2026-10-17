
void __thiscall FUN_004899b0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_40 [2];
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006407e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffb4;
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 != (undefined4 *)param_1[2]) {
    if (puVar2 != (undefined4 *)0x0) {
      puVar7 = puVar2 + -6;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    iVar5 = param_1[1];
    param_1[1] = iVar5 + 0x18;
    puVar2 = local_40;
    local_14 = &stack0xffffffb4;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    iVar5 = iVar5 + -0x18;
    iVar6 = (iVar5 - (int)param_2) / 0x18;
    if (0 < iVar6) {
      do {
        iVar5 = iVar5 + -0x18;
        FUN_00405ed0(iVar5);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    *(undefined8 *)(param_2 + 2) = local_38;
    *param_2 = local_40[0];
    param_2[1] = local_40[1];
    *(undefined8 *)(param_2 + 4) = local_30;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  iVar5 = ((int)puVar2 - *param_1) / 0x18;
  if (iVar5 == 0) {
    local_18 = 1;
  }
  else {
    iVar5 = iVar5 * 2;
    local_18 = iVar5;
    if (iVar5 == 0) {
      local_1c = 0;
      local_14 = &stack0xffffffb4;
      goto LAB_00489aaf;
    }
  }
  iVar5 = local_18;
  local_1c = FUN_0044b6e0(local_18 * 0x18);
LAB_00489aaf:
  local_8 = 0;
  local_28 = local_1c;
  puVar2 = (undefined4 *)FUN_0048a7d0(*param_1,param_2,local_1c,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = puVar2;
    for (iVar6 = 6; iVar5 = local_18, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  local_28 = FUN_0048a7d0(param_2,param_1[1],puVar2 + 6,param_2);
  for (iVar6 = *param_1; iVar6 != param_1[1]; iVar6 = iVar6 + 0x18) {
  }
  piVar1 = (int *)*param_1;
  iVar6 = (param_1[2] - (int)piVar1) / 0x18;
  if (iVar6 != 0) {
    uVar3 = iVar6 * 0x18;
    if (uVar3 < 0x81) {
      local_24 = (int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      LVar4 = InterlockedExchange(&DAT_0068c164,1);
      uVar3 = DAT_0066b83c;
      if (LVar4 != 0) {
        local_20 = DAT_0068c168;
        uVar8 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((local_20 >> 1 <= uVar8) && (DAT_0068c164 == 0)) &&
               (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
              DAT_0066b83c = 1000;
              iVar5 = local_18;
              DAT_0068c168 = uVar8;
              goto LAB_00489c2f;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar3);
        }
        DAT_0066b83c = 0x1e;
        iVar6 = 0;
        while( true ) {
          iVar9 = iVar6 + 6;
          if (0x1b < iVar9) {
            iVar9 = 0x1b;
          }
          LVar4 = InterlockedExchange(&DAT_0068c164,1);
          iVar5 = local_18;
          if (LVar4 == 0) break;
          if (iVar9 < 0x15) {
            Sleep(0);
            iVar6 = iVar6 + 1;
          }
          else {
            Sleep(1 << ((char)iVar9 - 0x14U & 0x1f));
            iVar6 = iVar6 + 1;
          }
        }
      }
LAB_00489c2f:
      *piVar1 = *local_24;
      *local_24 = (int)piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  param_1[1] = local_28;
  *param_1 = local_1c;
  param_1[2] = local_1c + iVar5 * 0x18;
  *unaff_FS_OFFSET = local_10;
  return;
}


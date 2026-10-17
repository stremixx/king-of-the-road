
void __thiscall FUN_00479100(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_50 [10];
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
  puStack_c = &LAB_0063fdb0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar2 = (undefined4 *)param_1[1];
  local_14 = &stack0xffffffa4;
  if (puVar2 != (undefined4 *)param_1[2]) {
    if (puVar2 != (undefined4 *)0x0) {
      puVar7 = puVar2 + -10;
      for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar2 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar2 = puVar2 + 1;
      }
    }
    puVar2 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar2 + 10);
    puVar7 = local_50;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar7 = puVar2 + -10;
    iVar5 = ((int)puVar7 - (int)param_2) / 0x28;
    if (0 < iVar5) {
      do {
        puVar7 = puVar7 + -10;
        puVar2 = puVar2 + -10;
        iVar5 = iVar5 + -1;
        puVar8 = puVar7;
        puVar11 = puVar2;
        for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
      } while (iVar5 != 0);
    }
    puVar2 = local_50;
    for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *param_2 = *puVar2;
      puVar2 = puVar2 + 1;
      param_2 = param_2 + 1;
    }
    *unaff_FS_OFFSET = local_10;
    return;
  }
  iVar5 = ((int)puVar2 - *param_1) / 0x28;
  if (iVar5 == 0) {
    local_18 = 1;
  }
  else {
    iVar5 = iVar5 * 2;
    local_18 = iVar5;
    if (iVar5 == 0) {
      local_1c = 0;
      goto LAB_004791f9;
    }
  }
  iVar5 = local_18;
  local_1c = FUN_0044b6e0(local_18 * 0x28);
LAB_004791f9:
  local_8 = 0;
  local_28 = local_1c;
  puVar2 = (undefined4 *)FUN_0047d560(*param_1,param_2,local_1c,param_2);
  if (puVar2 != (undefined4 *)0x0) {
    puVar7 = puVar2;
    for (iVar6 = 10; iVar5 = local_18, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = *param_3;
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  local_28 = FUN_0047d560(param_2,param_1[1],puVar2 + 10,param_2);
  for (iVar6 = *param_1; iVar6 != param_1[1]; iVar6 = iVar6 + 0x28) {
  }
  piVar1 = (int *)*param_1;
  iVar6 = (param_1[2] - (int)piVar1) / 0x28;
  if (iVar6 != 0) {
    uVar3 = iVar6 * 0x28;
    if (uVar3 < 0x81) {
      local_24 = (int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      LVar4 = InterlockedExchange(&DAT_0068c164,1);
      uVar3 = DAT_0066b83c;
      if (LVar4 != 0) {
        local_20 = DAT_0068c168;
        uVar9 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((local_20 >> 1 <= uVar9) && (DAT_0068c164 == 0)) &&
               (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
              DAT_0066b83c = 1000;
              iVar5 = local_18;
              DAT_0068c168 = uVar9;
              goto LAB_00479379;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar3);
        }
        DAT_0066b83c = 0x1e;
        iVar6 = 0;
        while( true ) {
          iVar10 = iVar6 + 6;
          if (0x1b < iVar10) {
            iVar10 = 0x1b;
          }
          LVar4 = InterlockedExchange(&DAT_0068c164,1);
          iVar5 = local_18;
          if (LVar4 == 0) break;
          if (iVar10 < 0x15) {
            Sleep(0);
            iVar6 = iVar6 + 1;
          }
          else {
            Sleep(1 << ((char)iVar10 - 0x14U & 0x1f));
            iVar6 = iVar6 + 1;
          }
        }
      }
LAB_00479379:
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
  param_1[2] = local_1c + iVar5 * 0x28;
  *unaff_FS_OFFSET = local_10;
  return;
}



void __thiscall FUN_00456e50(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ecb2;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_28 = param_1[1];
  if (local_28 != param_1[2]) {
    local_24 = (int *)local_28;
    local_8 = 0;
    if (local_28 != 0) {
      ExceptionList = &local_10;
      FUN_00458ab0(local_28 + -0x20);
    }
    puVar7 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar7 + 8);
    local_48[2] = param_3[2];
    local_48[0] = *param_3;
    local_38 = param_3[4];
    local_48[3] = param_3[3];
    local_30 = param_3[6];
    puVar6 = puVar7 + -8;
    local_2c = param_3[7];
    local_34 = param_3[5];
    iVar2 = (int)puVar6 - (int)param_2 >> 5;
    if (0 < iVar2) {
      do {
        puVar6 = puVar6 + -8;
        puVar7 = puVar7 + -8;
        iVar2 = iVar2 + -1;
        puVar8 = puVar6;
        puVar9 = puVar7;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
      } while (iVar2 != 0);
    }
    puVar6 = local_48;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar6;
      puVar6 = puVar6 + 1;
      param_2 = param_2 + 1;
    }
    ExceptionList = local_10;
    return;
  }
  local_1c = local_28 - *param_1 >> 5;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
      goto LAB_00456f4e;
    }
  }
  ExceptionList = &local_10;
  local_18 = FUN_0044b6e0(local_1c << 5);
LAB_00456f4e:
  local_8 = 1;
  local_20 = local_18;
  iVar2 = FUN_00468cc0(*param_1,param_2,local_18,param_2);
  local_8._0_1_ = 2;
  local_20 = iVar2;
  if (iVar2 != 0) {
    FUN_00458ab0(param_3);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  local_28 = FUN_00468cc0(param_2,param_1[1],iVar2 + 0x20,iVar2);
  for (iVar2 = *param_1; iVar2 != param_1[1]; iVar2 = iVar2 + 0x20) {
  }
  piVar1 = (int *)*param_1;
  iVar2 = param_1[2] - (int)piVar1 >> 5;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x20;
    if (uVar3 < 0x81) {
      local_24 = (int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      LVar4 = InterlockedExchange(&DAT_0068c164,1);
      uVar3 = DAT_0066b83c;
      if (LVar4 != 0) {
        local_20 = DAT_0068c168;
        uVar10 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((local_20 >> 1 <= uVar10) && (DAT_0068c164 == 0)) &&
               (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar10;
              goto LAB_004570bf;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar3);
        }
        DAT_0066b83c = 0x1e;
        iVar2 = 0;
        while( true ) {
          iVar5 = iVar2 + 6;
          if (0x1b < iVar5) {
            iVar5 = 0x1b;
          }
          LVar4 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar4 == 0) break;
          FUN_00402b10(iVar5);
          iVar2 = iVar2 + 1;
        }
      }
LAB_004570bf:
      *piVar1 = *local_24;
      *local_24 = (int)piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  *param_1 = local_18;
  param_1[1] = local_28;
  param_1[2] = local_1c * 0x20 + local_18;
  ExceptionList = local_10;
  return;
}



void __thiscall FUN_00601e20(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_48 [32];
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
  puStack_c = &LAB_006494aa;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffac;
  local_28 = param_1[1];
  if (local_28 != param_1[2]) {
    local_8 = 0;
    ExceptionList = &local_10;
    local_24 = (int *)local_28;
    local_14 = &stack0xffffffac;
    if (local_28 != 0) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffac;
      FUN_00600980(local_28 + -0x20);
    }
    local_8 = 0xffffffff;
    param_1[1] = param_1[1] + 0x20;
    FUN_00600980(param_3);
    local_8 = 1;
    iVar5 = param_1[1] + -0x40;
    iVar2 = iVar5 - param_2 >> 5;
    if (0 < iVar2) {
      do {
        iVar5 = iVar5 + -0x20;
        FUN_00600a20(iVar5);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00600a20(local_48);
    FUN_00600ae0();
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
      local_20 = 0;
      ExceptionList = &local_10;
      local_14 = &stack0xffffffac;
      goto LAB_00601f0f;
    }
  }
  ExceptionList = &local_10;
  local_20 = FUN_0044b6e0(local_1c << 5);
LAB_00601f0f:
  local_8 = 2;
  local_18 = local_20;
  iVar2 = FUN_006021b0(*param_1,param_2,local_20,param_2);
  local_8._0_1_ = 3;
  if (iVar2 != 0) {
    local_20 = iVar2;
    FUN_00600980(param_3);
  }
  local_20 = iVar2 + 0x20;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_28 = FUN_006021b0(param_2,param_1[1],local_20,iVar2);
  iVar2 = param_1[1];
  iVar5 = *param_1;
  local_8 = 0xffffffff;
  for (; iVar5 != iVar2; iVar5 = iVar5 + 0x20) {
    FUN_00600ae0();
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
        uVar6 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((local_20 >> 1 <= uVar6) && (DAT_0068c164 == 0)) &&
               (LVar4 = InterlockedExchange(&DAT_0068c164,1), LVar4 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar6;
              goto LAB_00602091;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar3);
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
LAB_00602091:
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



void FUN_00479b50(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fe29;
  local_c = ExceptionList;
  uVar6 = *(uint *)*param_1;
  ExceptionList = &local_c;
  *param_1 = (int)((uint *)*param_1 + 1);
  iVar8 = param_2[1];
  iVar7 = *param_2;
  iVar4 = FUN_0047c550(iVar8,iVar8,iVar7,param_1,0);
  iVar1 = piVar2[1];
  for (; iVar4 != iVar1; iVar4 = iVar4 + 0x10) {
    FUN_0046c840(0);
  }
  iVar1 = *piVar2;
  iVar8 = piVar2[1] + (iVar8 - iVar7 >> 4) * -0x10;
  piVar2[1] = iVar8;
  local_1c = DAT_0068a8f0;
  if ((uint)(piVar2[2] - iVar1 >> 4) < uVar6) {
    param_2 = (int *)FUN_00461de0(uVar6,iVar1,iVar8);
    iVar7 = piVar2[1];
    for (iVar4 = *piVar2; iVar4 != iVar7; iVar4 = iVar4 + 0x10) {
      FUN_00602380();
    }
    iVar7 = piVar2[2] - *piVar2 >> 4;
    if (iVar7 != 0) {
      FUN_0044b440(*piVar2,iVar7 << 4);
    }
    *piVar2 = (int)param_2;
    piVar2[1] = (int)(param_2 + (iVar8 - iVar1 >> 4) * 4);
    piVar2[2] = (int)(param_2 + uVar6 * 4);
    local_1c = DAT_0068a8f0;
  }
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    local_4 = 0;
    iVar8 = *(int *)*param_1;
    DAT_0068a8f0 = local_1c;
    *param_1 = (int)((int *)*param_1 + 1);
    FUN_004471c0(0,0);
    FUN_0047abc0(iVar8);
    for (; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar5 = (uint)param_2 >> 8;
      param_2 = (int *)CONCAT31((int3)uVar5,*(undefined1 *)*param_1);
      *param_1 = (int)((undefined1 *)*param_1 + 1);
      FUN_0047ac10(&param_2);
    }
    iVar8 = piVar2[1];
    if (iVar8 == piVar2[2]) {
      FUN_004795d0(iVar8,&local_1c);
    }
    else {
      uVar5 = (uint)local_4 >> 8;
      local_4 = CONCAT31((int3)uVar5,1);
      if (iVar8 != 0) {
        FUN_0047a210(&local_1c);
      }
      piVar2[1] = piVar2[1] + 0x10;
    }
    puVar3 = local_18;
    uVar5 = local_10 - (int)local_18;
    local_4 = 0xffffffff;
    if (uVar5 != 0) {
      if (uVar5 < 0x81) {
        FUN_00401aa0();
        *puVar3 = *(undefined4 *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = puVar3;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(local_18);
      }
    }
    local_1c = DAT_0068a8f0;
  }
  DAT_0068a8f0 = local_1c;
  ExceptionList = local_c;
  return;
}


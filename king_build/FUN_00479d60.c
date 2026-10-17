
void FUN_00479d60(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined1 local_9c [120];
  undefined4 *local_24;
  undefined4 *local_20;
  int local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fe62;
  local_c = ExceptionList;
  uVar8 = *(uint *)*param_1;
  ExceptionList = &local_c;
  *param_1 = (int)((uint *)*param_1 + 1);
  iVar9 = *param_2;
  iVar10 = param_2[1];
  iVar5 = FUN_00460e90(iVar10,iVar10,iVar9,iVar9,0);
  iVar1 = param_2[1];
  for (; iVar5 != iVar1; iVar5 = iVar5 + 0x90) {
    FUN_00461b20(0);
  }
  iVar9 = (int)((ulonglong)((longlong)(iVar10 - iVar9) * -0x38e38e39) >> 0x20);
  iVar10 = param_2[1] + ((iVar9 >> 5) - (iVar9 >> 0x1f)) * 0x90;
  param_2[1] = iVar10;
  iVar9 = *param_2;
  if ((uint)((param_2[2] - iVar9) / 0x90) < uVar8) {
    iVar6 = FUN_0047b370(uVar8,iVar9,iVar10);
    iVar1 = param_2[1];
    for (iVar5 = *param_2; iVar5 != iVar1; iVar5 = iVar5 + 0x90) {
      FUN_0041cf40();
    }
    piVar2 = (int *)*param_2;
    iVar1 = (param_2[2] - (int)piVar2) / 0x90;
    if (iVar1 != 0) {
      uVar7 = iVar1 * 0x90;
      if (uVar7 < 0x81) {
        FUN_00401aa0();
        *piVar2 = *(int *)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
        *(int **)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4) = piVar2;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(piVar2);
      }
    }
    *param_2 = iVar6;
    param_2[1] = ((iVar10 - iVar9) / 0x90) * 0x90 + iVar6;
    param_2[2] = uVar8 * 0x90 + iVar6;
  }
  for (; uVar8 != 0; uVar8 = uVar8 - 1) {
    FUN_00470dd0();
    local_4 = 0;
    FUN_004710f0(param_1);
    iVar9 = param_2[1];
    if (iVar9 == param_2[2]) {
      FUN_00450900(iVar9,local_9c);
    }
    else {
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar9 != 0) {
        FUN_00443830(local_9c);
      }
      param_2[1] = param_2[1] + 0x90;
    }
    puVar4 = local_20;
    local_4 = 0xffffffff;
    puVar3 = local_24;
    for (puVar11 = local_24; local_24 = puVar3, puVar11 != puVar4; puVar11 = puVar11 + 4) {
      FUN_00460d40(puVar11);
      puVar3 = local_24;
    }
    iVar9 = local_1c - (int)puVar3 >> 4;
    if (iVar9 != 0) {
      uVar7 = iVar9 * 0x10;
      if (uVar7 < 0x81) {
        FUN_00401aa0();
        *puVar3 = *(undefined4 *)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4) = puVar3;
        FUN_00434030();
      }
      else {
        FUN_0061c888(puVar3);
      }
    }
  }
  ExceptionList = local_c;
  return;
}


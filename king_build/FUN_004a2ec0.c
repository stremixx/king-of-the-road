
undefined4 * __thiscall FUN_004a2ec0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00642b35;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_0064aec0;
  iVar2 = *(int *)(param_2 + 0x10);
  param_1[3] = iVar2;
  param_1[4] = param_2 + 4;
  *(undefined4 **)(iVar2 + 0x10) = param_1;
  *(undefined4 **)(param_1[4] + 0xc) = param_1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0061d173(param_1 + 9,0xc,8,FUN_004042a0,FUN_00492340);
  piVar1 = param_1 + 0x21;
  *piVar1 = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *param_1 = &PTR_LAB_0064af3c;
  iVar2 = *piVar1;
  local_4 = CONCAT31(local_4._1_3_,4);
  if ((uint)((param_1[0x23] - iVar2) / 0xc) < 8) {
    iVar3 = param_1[0x22];
    iVar6 = FUN_004a46c0(8,iVar2,param_1[0x22]);
    iVar4 = param_1[0x22];
    for (iVar8 = *piVar1; iVar8 != iVar4; iVar8 = iVar8 + 0xc) {
      FUN_00492340();
    }
    piVar5 = (int *)*piVar1;
    iVar8 = (param_1[0x23] - (int)piVar5) / 0xc;
    if (iVar8 != 0) {
      uVar7 = iVar8 * 0xc;
      if (uVar7 < 0x81) {
        FUN_00401aa0();
        *piVar5 = *(int *)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
        *(int **)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4) = piVar5;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(piVar5);
      }
    }
    *piVar1 = iVar6;
    param_1[0x22] = iVar6 + ((iVar3 - iVar2) / 0xc) * 0xc;
    param_1[0x23] = iVar6 + 0x60;
  }
  ExceptionList = local_c;
  return param_1;
}


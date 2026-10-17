
undefined4 * __thiscall FUN_00458570(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ed9b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar6 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  iVar3 = param_2[4] - param_2[3];
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (iVar3 != 0) {
    iVar6 = FUN_0044b6e0(iVar3);
  }
  param_1[3] = iVar6;
  param_1[4] = iVar6;
  param_1[5] = iVar6 + iVar3;
  piVar4 = (int *)param_2[4];
  iVar3 = param_2[3];
  FUN_0061c980(iVar6,iVar3,(int)piVar4 - iVar3);
  param_1[4] = (undefined1 *)((iVar6 - iVar3) + (int)piVar4);
  iVar3 = param_2[7] - param_2[6] >> 2;
  local_4 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_2 = piVar4;
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    uVar1 = iVar3 * 4;
    if (uVar1 < 0x81) {
      param_2 = (int *)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4);
      FUN_00401aa0();
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar4 = (int *)*param_2;
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_0044bcf0(uVar1 + 7 & 0xfffffff8);
      }
      else {
        *param_2 = *piVar4;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar4 = (int *)FUN_0044bc90(uVar1);
    }
  }
  param_1[6] = piVar4;
  param_1[7] = piVar4;
  param_1[8] = (int)piVar4 + iVar3 * 4;
  local_4 = CONCAT31(local_4._1_3_,2);
  uVar5 = FUN_0046b5a0(puVar2[6],puVar2[7],piVar4,param_2);
  param_1[7] = uVar5;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


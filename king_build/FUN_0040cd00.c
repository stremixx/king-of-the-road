
int * __thiscall FUN_0040cd00(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_2;
  puStack_8 = &LAB_0063b9f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  if ((param_2[2] & 0x10000U) == 0) {
    param_1[1] = 0;
    iVar4 = *param_2;
    if (iVar4 == 0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = iVar4;
      param_1[2] = param_2[2];
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
  }
  else {
    param_1[2] = param_2[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  iVar4 = (param_2[4] - param_2[3]) / 0x18;
  local_4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (iVar4 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    uVar3 = iVar4 * 0x18;
    if (uVar3 < 0x81) {
      param_2 = (int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      FUN_00401aa0();
      local_4 = CONCAT31(local_4._1_3_,1);
      piVar2 = (int *)*param_2;
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_0044bcf0(uVar3);
      }
      else {
        *param_2 = *piVar2;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar2 = (int *)FUN_0044bc90(uVar3);
    }
  }
  param_1[3] = (int)piVar2;
  param_1[4] = (int)piVar2;
  param_1[5] = (int)(piVar2 + iVar4 * 6);
  local_4 = CONCAT31(local_4._1_3_,2);
  iVar4 = FUN_004661a0(piVar1[3],piVar1[4],piVar2,param_2);
  param_1[4] = iVar4;
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


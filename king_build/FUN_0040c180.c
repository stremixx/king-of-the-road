
int * __thiscall FUN_0040c180(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0063b890;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  if ((param_2[2] & 0x10000U) == 0) {
    param_1[1] = 0;
    iVar1 = *param_2;
    if (iVar1 == 0) {
      *param_1 = 0;
      param_1[2] = 0;
    }
    else {
      *param_1 = iVar1;
      param_1[2] = param_2[2];
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
  }
  else {
    param_1[2] = param_2[2];
    *param_1 = *param_2;
    param_1[1] = param_2[1];
  }
  piVar4 = (int *)0x0;
  local_c = 0;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  iVar1 = param_2[0x17];
  iVar2 = param_2[0x16];
  param_1[0x16] = 0;
  uVar3 = iVar1 - iVar2;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (uVar3 != 0) {
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      local_c = CONCAT31(local_c._1_3_,1);
      piVar4 = *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)FUN_0044bcf0(uVar3 + 7 & 0xfffffff8);
      }
      else {
        *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = *piVar4;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar4 = (int *)FUN_0044bc90(uVar3);
    }
  }
  param_1[0x16] = (int)piVar4;
  param_1[0x17] = (int)piVar4;
  param_1[0x18] = uVar3 + (int)piVar4;
  iVar1 = param_2[0x17];
  iVar2 = param_2[0x16];
  FUN_0061c980(piVar4,iVar2,iVar1 - iVar2);
  param_1[0x17] = ((int)piVar4 - iVar2) + iVar1;
  *unaff_FS_OFFSET = local_14;
  return param_1;
}


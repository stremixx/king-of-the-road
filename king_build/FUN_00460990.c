
void FUN_00460990(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_0063f2d9;
  local_14 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_14;
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    if ((param_2[2] & 0x10000U) == 0) {
      param_1[1] = 0;
      iVar2 = *param_2;
      if (iVar2 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
      }
      else {
        *param_1 = iVar2;
        param_1[2] = param_2[2];
        *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
      }
    }
    else {
      param_1[2] = param_2[2];
      *param_1 = *param_2;
      param_1[1] = param_2[1];
    }
    local_c = 1;
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
    iVar2 = param_2[0x17];
    iVar1 = param_2[0x16];
    param_1[0x16] = 0;
    iVar2 = iVar2 - iVar1;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    if (iVar2 != 0) {
      iVar3 = FUN_0044b6e0(iVar2);
    }
    param_1[0x16] = iVar3;
    param_1[0x17] = iVar3;
    param_1[0x18] = iVar3 + iVar2;
    iVar2 = param_2[0x17];
    iVar1 = param_2[0x16];
    FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
    param_1[0x17] = (iVar3 - iVar1) + iVar2;
  }
  *unaff_FS_OFFSET = local_14;
  return;
}


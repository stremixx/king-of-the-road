
void FUN_0045c860(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_5;
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f098;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  FUN_00462290(param_1,param_2);
  local_4 = 0;
  if (local_10 == 0) {
    uVar4 = param_2 - param_1;
    if ((int)(uVar4 & 0xfffffffc) < 0x3c) {
      if (param_1 != param_2) {
        while (iVar2 = iVar2 + 4, iVar2 != param_2) {
          FUN_00469c20(param_1,iVar2,0,param_5);
        }
      }
    }
    else {
      iVar2 = param_1 + (((int)uVar4 >> 2) - ((int)uVar4 >> 0x1f) >> 1) * 4;
      FUN_00464df0(param_1,iVar2,param_5);
      FUN_00464df0(iVar2,param_2,param_5);
      FUN_00467cc0(param_1,iVar2,param_2,iVar2 - param_1 >> 2,param_2 - iVar2 >> 2,param_5);
    }
  }
  else {
    iVar5 = ((param_2 - param_1 >> 2) + 1) / 2;
    iVar1 = param_1 + iVar5 * 4;
    if (local_14 < iVar5) {
      FUN_00464fb0(param_1,iVar1,local_10,local_14,param_5);
      FUN_00464fb0(iVar1,param_2,local_10,local_14,param_5);
    }
    else {
      iVar5 = iVar1 - param_1 >> 2;
      param_1 = 7;
      FUN_00469c80(iVar2,iVar1,7,param_5);
      if (7 < iVar5) {
        do {
          FUN_00469de0(iVar2,iVar1,local_10,param_1,param_5);
          FUN_00469de0(local_10,local_10 + iVar5 * 4,iVar2,param_1 * 2,param_5);
          param_1 = param_1 << 2;
        } while (param_1 < iVar5);
      }
      iVar5 = param_2 - iVar1 >> 2;
      param_5 = 7;
      FUN_00469c80(iVar1,param_2,7,uVar3);
      if (7 < iVar5) {
        do {
          FUN_00469de0(iVar1,param_2,local_10,param_5,uVar3);
          FUN_00469de0(local_10,local_10 + iVar5 * 4,iVar1,param_5 * 2,uVar3);
          param_5 = param_5 << 2;
        } while (param_5 < iVar5);
      }
    }
    FUN_00467f30(iVar2,iVar1,param_2,iVar1 - iVar2 >> 2,param_2 - iVar1 >> 2,local_10,local_14,uVar3
                );
  }
  FUN_0061c888(local_10);
  *unaff_FS_OFFSET = local_c;
  return;
}


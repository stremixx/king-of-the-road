
void __thiscall FUN_004acae0(int *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00643620;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uVar2 = param_2 + 0x1ffU >> 9;
  if ((uint)(param_1[1] - (param_1[9] - *param_1 >> 2)) < uVar2 + 1) {
    FUN_004a2bd0(uVar2,0);
  }
  local_8 = 0;
  uVar3 = 1;
  while (uVar3 <= uVar2) {
    pvVar1 = _malloc(0x200);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)FUN_00458210(0x200);
    }
    uVar3 = uVar3 + 1;
    *(void **)(param_1[9] + -4 + uVar3 * 4) = pvVar1;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


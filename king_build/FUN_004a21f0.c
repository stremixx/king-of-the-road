
void __thiscall FUN_004a21f0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006429b0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  uVar1 = *param_2;
  if ((uint)(param_1[1] - (param_1[9] - *param_1 >> 2)) < 2) {
    FUN_004a2bd0(1,0);
  }
  pvVar3 = _malloc(0x200);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)FUN_00458210(0x200);
  }
  *(void **)(param_1[9] + 4) = pvVar3;
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    *(undefined4 *)param_1[6] = uVar1;
  }
  iVar2 = param_1[9];
  param_1[9] = iVar2 + 4;
  iVar2 = *(int *)(iVar2 + 4);
  param_1[7] = iVar2;
  param_1[8] = iVar2 + 0x200;
  param_1[6] = param_1[7];
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * __thiscall FUN_00450c80(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint _Size;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e7a0;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  iVar2 = param_2[1] - *param_2 >> 4;
  piVar3 = (int *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (iVar2 != 0) {
    _Size = iVar2 * 0x10;
    if (_Size < 0x81) {
      param_2 = (int *)(&DAT_0068c120 + (_Size + 7 >> 3) * 4);
      FUN_00401aa0();
      local_4 = 0;
      piVar3 = (int *)*param_2;
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_0044bcf0(_Size);
      }
      else {
        *param_2 = *piVar3;
      }
      DAT_0068c164 = 0;
    }
    else {
      piVar3 = _malloc(_Size);
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)FUN_00458210(_Size);
      }
    }
  }
  *param_1 = piVar3;
  param_1[1] = piVar3;
  param_1[2] = piVar3 + iVar2 * 4;
  local_4 = 1;
  uVar4 = FUN_004662a0(*piVar1,piVar1[1],piVar3,param_2);
  param_1[1] = uVar4;
  param_1[3] = piVar1[3];
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


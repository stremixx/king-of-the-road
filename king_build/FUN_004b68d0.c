
void __fastcall FUN_004b68d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_006441c0;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_0064b118;
  iVar1 = param_1[6];
  iVar4 = param_1[5];
  local_4 = 1;
  for (; iVar4 != iVar1; iVar4 = iVar4 + 0xc) {
    FUN_00492340();
  }
  piVar2 = (int *)param_1[5];
  iVar1 = (param_1[7] - (int)piVar2) / 0xc;
  if (iVar1 != 0) {
    uVar3 = iVar1 * 0xc;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar2 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar2);
    }
  }
  *param_1 = &PTR_LAB_0064aec0;
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1[3] + 0x10) = param_1[4];
  }
  if (param_1[4] != 0) {
    *(undefined4 *)(param_1[4] + 0xc) = param_1[3];
  }
  *param_1 = &PTR_LAB_0064aed4;
  ExceptionList = local_c;
  return;
}


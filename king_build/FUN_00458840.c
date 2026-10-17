
void __fastcall FUN_00458840(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_0063ede0;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064a5f0;
  iVar3 = param_1[0xf];
  iVar4 = param_1[0xe];
  local_4 = 1;
  for (; iVar4 != iVar3; iVar4 = iVar4 + 0x638) {
    FUN_00458980();
  }
  piVar1 = (int *)param_1[0xe];
  iVar3 = (param_1[0x10] - (int)piVar1) / 0x638;
  if (iVar3 != 0) {
    uVar2 = iVar3 * 0x638;
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  *param_1 = &PTR_LAB_0064a61c;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 2;
  }
  piVar1 = (int *)param_1[8];
  iVar3 = param_1[10] - (int)piVar1 >> 3;
  if (iVar3 != 0) {
    uVar2 = iVar3 * 8;
    if (0x80 < uVar2) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
    FUN_00434030();
  }
  ExceptionList = local_c;
  return;
}


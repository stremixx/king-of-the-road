
void __fastcall FUN_004589b0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_0064a5b0;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 0xe;
  }
  piVar1 = (int *)puVar2[8];
  iVar4 = (puVar2[10] - (int)piVar1) / 0x18;
  if (iVar4 != 0) {
    uVar3 = iVar4 * 0x18;
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
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
  iVar4 = param_1[10] - (int)piVar1 >> 3;
  if (iVar4 != 0) {
    uVar3 = iVar4 * 8;
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    FUN_00434030();
  }
  return;
}


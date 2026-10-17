
void __fastcall FUN_004b63d0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  *param_1 = &PTR_LAB_0064b0f8;
  piVar1 = (int *)param_1[3];
  uVar2 = param_1[5] - (int)piVar1;
  if (uVar2 != 0) {
    if (uVar2 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
      *param_1 = &PTR_LAB_0064aed4;
      return;
    }
    FUN_0061c888(piVar1);
  }
  *param_1 = &PTR_LAB_0064aed4;
  return;
}


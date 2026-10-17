
void __fastcall FUN_00403820(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1[10];
  iVar2 = param_1[0xc] - (int)piVar1 >> 2;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 4;
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
  piVar1 = (int *)param_1[7];
  iVar2 = param_1[9] - (int)piVar1 >> 2;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 4;
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
  piVar1 = (int *)param_1[4];
  uVar3 = param_1[6] - (int)piVar1;
  if (uVar3 != 0) {
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
  piVar1 = (int *)*param_1;
  uVar3 = param_1[2] - (int)piVar1;
  if (uVar3 != 0) {
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      return;
    }
    FUN_00401aa0();
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}


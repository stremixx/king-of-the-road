
void __fastcall FUN_004042c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063af39;
  local_c = ExceptionList;
  piVar1 = (int *)param_1[0x19];
  local_4 = 3;
  iVar2 = param_1[0x1b] - (int)piVar1 >> 3;
  ExceptionList = &local_c;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 8;
    if (uVar3 < 0x81) {
      ExceptionList = &local_c;
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      ExceptionList = &local_c;
      FUN_0061c888(piVar1);
    }
  }
  FUN_0061ccb5(param_1 + 0x12,0xc,2,FUN_00449a70);
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
  iVar2 = param_1[9] - (int)piVar1 >> 4;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x10;
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
  piVar1 = (int *)param_1[3];
  uVar3 = param_1[5] - (int)piVar1;
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
  iVar2 = param_1[2] - *param_1;
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_0044b440(*param_1,iVar2);
  }
  ExceptionList = local_c;
  return;
}


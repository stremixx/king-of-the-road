
void __fastcall FUN_0040cac0(int *param_1)

{
  int iVar1;
  int *piVar2;
  void **ppvVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b9d0;
  iVar1 = param_1[4];
  iVar5 = param_1[3];
  local_4 = 1;
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  for (; ExceptionList = ppvVar3, iVar5 != iVar1; iVar5 = iVar5 + 0x18) {
    FUN_0040cbb0();
    ppvVar3 = ExceptionList;
  }
  piVar2 = (int *)param_1[3];
  iVar1 = (param_1[5] - (int)piVar2) / 0x18;
  if (iVar1 != 0) {
    uVar4 = iVar1 * 0x18;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar2 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar2);
    }
  }
  local_4 = 0xffffffff;
  if (((param_1[2] & 0x10000U) == 0) && (iVar1 = *param_1, iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    param_1 = (int *)*param_1;
    if ((param_1[1] == 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0xc))(1);
    }
  }
  ExceptionList = local_c;
  return;
}


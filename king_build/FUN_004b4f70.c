
void __fastcall FUN_004b4f70(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00643feb;
  pvStack_c = ExceptionList;
  piVar1 = (int *)param_1[0xd];
  uVar3 = param_1[0xf] - (int)piVar1;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  if (uVar3 != 0) {
    if (uVar3 < 0x81) {
      ExceptionList = &pvStack_c;
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      ExceptionList = &pvStack_c;
      FUN_0061c888();
    }
  }
  local_4 = local_4 & 0xffffff00;
  if (((param_1[0xc] & 0x10000U) == 0) && (iVar2 = param_1[10], iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    piVar1 = (int *)param_1[10];
    if ((piVar1[1] == 0) && (piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  local_4 = 2;
  FUN_004abfc0(param_1 + 2);
  FUN_004a2af0();
  local_4 = 0xffffffff;
  if (*param_1 != 0) {
    iVar2 = param_1[9];
    for (uVar3 = param_1[5]; uVar3 < iVar2 + 4U; uVar3 = uVar3 + 4) {
      FUN_0061c888();
    }
    piVar1 = (int *)*param_1;
    if (param_1[1] != 0) {
      uVar3 = param_1[1] * 4;
      if (0x80 < uVar3) {
        FUN_0061c888();
        ExceptionList = pvStack_c;
        return;
      }
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
  }
  ExceptionList = pvStack_c;
  return;
}


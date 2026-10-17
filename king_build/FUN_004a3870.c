
void __fastcall FUN_004a3870(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00642c18;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (((param_1[5] & 0x10000U) == 0) && (iVar1 = param_1[3], ExceptionList = &pvStack_c, iVar1 != 0)
     ) {
    ExceptionList = &pvStack_c;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[3];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
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
  ExceptionList = pvStack_c;
  return;
}


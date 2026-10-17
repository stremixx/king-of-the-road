
void __fastcall FUN_004911d0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00640cae;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_0064aefc;
  local_4 = 2;
  if (((param_1[0xd] & 0x10000) == 0) && (iVar1 = param_1[0xb], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[0xb];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  local_4._0_1_ = 1;
  if (((param_1[10] & 0x10000) == 0) && (iVar1 = param_1[8], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[8];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (((param_1[7] & 0x10000) == 0) && (iVar1 = param_1[5], iVar1 != 0)) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    piVar2 = (int *)param_1[5];
    if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
      (**(code **)(*piVar2 + 0xc))(1);
    }
  }
  FUN_004910d0();
  ExceptionList = pvStack_c;
  return;
}



void __fastcall FUN_005d9a20(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064869b;
  local_c = ExceptionList;
  piVar1 = *(int **)(DAT_007206b0 + 0xfc);
  if (piVar1 != param_1) {
    iVar3 = param_1[3];
    uVar2 = *(uint *)(iVar3 + 0xc);
    ExceptionList = &local_c;
    if (iVar3 != 0) {
      ExceptionList = &local_c;
      FUN_005b6140();
      FUN_00631d5c(iVar3);
    }
    iVar3 = FUN_00631d33(0x7c);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_005b5be0(piVar1[3],&stack0x00000004,uVar2 & 0x4000);
    }
    param_1[3] = iVar3;
    local_4 = 0xffffffff;
    (**(code **)(*param_1 + 0x3c))();
  }
  ExceptionList = local_c;
  return;
}


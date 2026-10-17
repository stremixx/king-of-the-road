
void __fastcall FUN_004e0710(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645396;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005dd740();
  iVar1 = FUN_00631d33(0x664);
  local_4 = 0;
  if (iVar1 == 0) {
    DAT_006d0fd8 = 0;
  }
  else {
    DAT_006d0fd8 = FUN_005309c0(99,param_1,&DAT_006956b0);
  }
  local_4 = 0xffffffff;
  *(uint *)(DAT_006d0fd8 + 0x57c) = *(uint *)(DAT_006d0fd8 + 0x57c) | 0x80;
  FUN_005d2c20(DAT_006d0fd8);
  *(uint *)(DAT_006d0fd8 + 0x57c) = *(uint *)(DAT_006d0fd8 + 0x57c) | 0x40;
  *(uint *)(DAT_006d0fd8 + 0x57c) = *(uint *)(DAT_006d0fd8 + 0x57c) | 1;
  FUN_00531b60();
  if ((*(int *)(DAT_006cdbcc + 0x524) == 1) || (*(int *)(DAT_006cdbcc + 0x524) == 0)) {
    iVar1 = FUN_00631d33(0x58);
    local_4 = 1;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0053da50(param_1);
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(DAT_006d0fd8 + 0x660) = uVar2;
    FUN_005d2c20(*(undefined4 *)(DAT_006d0fd8 + 0x660));
    *(undefined4 *)(*(int *)(DAT_006d0fd8 + 0x660) + 0x50) = 1;
  }
  FUN_0056dc70(param_1,s___truck_ini_00671ec8);
  ExceptionList = local_c;
  return;
}


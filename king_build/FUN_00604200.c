
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00604200(void)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00649510;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  local_8 = 0;
  if (DAT_00723100 == (code *)0x0) {
    local_18 = 4;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_18,&DAT_00667468);
  }
  ExceptionList = &local_10;
  puVar1 = &stack0xffffffd0;
  if (DAT_007230f0 == (int *)0x0) {
    ExceptionList = &local_10;
    iVar2 = (*DAT_00723100)(0,&DAT_007230f0,0);
    puVar1 = local_14;
    if (iVar2 != 0) {
      DAT_007230f0 = (int *)0x0;
      local_1c = 4;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_1c,&DAT_00667468);
    }
  }
  local_14 = puVar1;
  iVar2 = FUN_00604340(DAT_007230f0,&DAT_007230f4,&DAT_00683348,DAT_00723104);
  if (iVar2 == 0) {
    (**(code **)(*DAT_007230f0 + 8))(DAT_007230f0);
    DAT_007230f0 = (int *)0x0;
    local_20 = 4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_20,&DAT_00667468);
  }
  _DAT_0068334c = DAT_00683348 >> 1;
  if (DAT_007230cc == 1) {
    _DAT_0068334c = DAT_00683348 >> 2;
  }
  DAT_00683348 = DAT_00683348 >> 1;
  (**(code **)(*DAT_007230f4 + 0x34))(DAT_007230f4,0);
  (**(code **)(*DAT_007230f4 + 0x30))(DAT_007230f4,0,0,1);
  ExceptionList = local_10;
  return 0;
}


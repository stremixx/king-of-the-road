
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00603e90(void)

{
  undefined1 *puVar1;
  ushort uVar2;
  int iVar3;
  undefined4 local_8c;
  byte local_88;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00649500;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff68;
  local_8 = 0;
  ExceptionList = &local_10;
  puVar1 = &stack0xffffff68;
  if ((DAT_007230fc == (HMODULE)0x0) &&
     (ExceptionList = &local_10, DAT_007230fc = LoadLibraryA(s_dsound_dll_00683948),
     puVar1 = local_14, DAT_007230fc == (HMODULE)0x0)) {
    local_18 = 4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_18,&DAT_00667468);
  }
  local_14 = puVar1;
  if ((DAT_00723100 == (FARPROC)0x0) &&
     (DAT_00723100 = GetProcAddress(DAT_007230fc,s_DirectSoundCreate_00683934),
     DAT_00723100 == (FARPROC)0x0)) {
    local_1c = 4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_1c,&DAT_00667468);
  }
  if ((DAT_007230f0 == (int *)0x0) && (iVar3 = (*DAT_00723100)(0,&DAT_007230f0,0), iVar3 != 0)) {
    DAT_007230f0 = (int *)0x0;
    local_20 = 4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_20,&DAT_00667468);
  }
  local_8c = 0x60;
  iVar3 = (**(code **)(*DAT_007230f0 + 0x10))(DAT_007230f0,&local_8c);
  if (iVar3 != 0) {
    local_24 = 4;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_24,&DAT_00667468);
  }
  if ((local_88 & 8) == 0) {
    if ((local_88 & 2) == 0) {
      if ((local_88 & 1) == 0) {
        local_28 = 4;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_28,&DAT_00667468);
      }
      uVar2 = 8;
      DAT_007230cc = 3;
      DAT_0072309c._2_2_ = 8;
      _DAT_00723092 = 1;
    }
    else {
      uVar2 = 8;
      DAT_007230cc = 2;
      DAT_0072309c._2_2_ = 8;
      _DAT_00723092 = 2;
    }
  }
  else {
    uVar2 = 0x10;
    DAT_007230cc = 1;
    DAT_0072309c._2_2_ = 0x10;
    _DAT_00723092 = 2;
  }
  uVar2 = (uVar2 >> 3) * _DAT_00723092;
  DAT_0072309c = CONCAT22(DAT_0072309c._2_2_,uVar2);
  _DAT_00723090 = 1;
  _DAT_00723094 = 0x5622;
  _DAT_007230a0 = 0;
  local_8 = 0xffffffff;
  _DAT_00723098 = (uint)uVar2 * 0x5622;
  if (DAT_007230f4 != (int *)0x0) {
    (**(code **)(*DAT_007230f4 + 8))(DAT_007230f4);
  }
  if (DAT_007230f0 != (int *)0x0) {
    (**(code **)(*DAT_007230f0 + 8))(DAT_007230f0);
  }
  DAT_007230f0 = (int *)0x0;
  DAT_007230f4 = (int *)0x0;
  ExceptionList = local_10;
  return 0;
}


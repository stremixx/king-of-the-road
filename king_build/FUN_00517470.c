
void __fastcall FUN_00517470(undefined4 *param_1)

{
  LPCSTR lpFileName;
  LPCSTR lpString;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00645a78;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064cff8;
  param_1[0x10] = &PTR_LAB_0064cfb8;
  lpFileName = DAT_006957c8;
  local_4 = 0;
  FUN_00603330(s_EFFECTS_00671998,s_power_00675df4,(int)*(short *)((int)param_1 + 0x186),
               DAT_006957c8);
  FUN_00603330(s_EFFECTS_00671998,&DAT_00675dfc,(int)*(short *)(param_1 + 0x61),lpFileName);
  lpString = &DAT_00671994;
  if (*(short *)((int)param_1 + 0x18a) == 0) {
    lpString = &DAT_006719a8;
  }
  WritePrivateProfileStringA(s_EFFECTS_00671998,s_autgb_00675e14,lpString,lpFileName);
  local_4 = 0xffffffff;
  FUN_005d8090();
  ExceptionList = local_c;
  return;
}


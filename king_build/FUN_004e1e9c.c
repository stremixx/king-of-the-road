
void FUN_004e1e9c(char *param_1)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  int local_8;
  
  FUN_004e3cf8(&DAT_00695dbc);
  sVar2 = _strlen(&DAT_00695dbc);
  sVar3 = _strlen(param_1);
  iVar1 = sVar2 + 0xa1 + sVar3;
  if (iVar1 < 0x100) {
    DAT_00695c80 = &DAT_00695c84;
  }
  else {
    DAT_00695c80 = (char *)FUN_00631d33(iVar1);
  }
  for (local_8 = 0;
      (local_8 < 0x32 && (PTR_s_VAS_s_sources_last_save_14082001_00671d10[local_8] != '='));
      local_8 = local_8 + 1) {
  }
  _strncpy(&DAT_006963c0,PTR_s_VAS_s_sources_last_save_14082001_00671d10 + local_8 + 1,0xf);
  DAT_006963cf = 0;
  FUN_0061c369(DAT_00695c80,s_FATAL_dynamic_error_on__s__of__s_006725f8,&DAT_00695dbc,&DAT_006963c0,
               param_1);
  FUN_004e1de6(DAT_00695c80);
  FUN_0053e7f0();
  if (0xff < iVar1) {
    _strncpy(&DAT_00695c84,DAT_00695c80,0xff);
    DAT_00695d83 = 0;
    FUN_00631d5c(DAT_00695c80);
  }
  FUN_005d2520(s_FATAL_dynamic_error__00672620,0);
  return;
}


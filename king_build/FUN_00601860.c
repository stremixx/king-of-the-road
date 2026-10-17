
undefined4 FUN_00601860(char *param_1)

{
  char cVar1;
  char *_Source;
  HRESULT HVar2;
  undefined4 uVar3;
  size_t *psVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  size_t local_4;
  
  if (DAT_00722d50 != '\0') {
    return 0;
  }
  HVar2 = CoInitialize((LPVOID)0x0);
  _Source = param_1;
  if (HVar2 < 0) {
    uVar3 = FUN_006001c0(HVar2,&DAT_0068c120);
    FUN_00401010(6,100,s_C__Nek_Vrappl_Gi_Srmidp_D1gate_c_00683184,
                 s__Id__D1gate_cpp_2001_6_25_14_48__00682bd0,0x46e,
                 s_Cannot_initialize_COM_library_00683278,uVar3);
    return 0xffffffff;
  }
  if (param_1 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = param_1;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      uVar6 = 0xffffffff;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *param_1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      param_1 = (char *)(~uVar6 - 1);
      local_4 = 0x10;
      psVar4 = (size_t *)&param_1;
      if ((char *)0xf < param_1) {
        psVar4 = &local_4;
      }
      _strncpy((char *)&DAT_00682bf8,_Source,*psVar4);
    }
  }
  FUN_00600d60();
  DAT_00722d50 = 1;
  return 0;
}


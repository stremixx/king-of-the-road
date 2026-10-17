
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056a430(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int local_4;
  
  FUN_00568670(&local_4);
  switch(param_1) {
  case 0:
    uVar2 = FUN_005d2500(0x36);
    FUN_005690c0(uVar2);
    pcVar3 = s_police_01Sound_0067a878;
    break;
  case 1:
    uVar2 = FUN_005d2500(0x37);
    FUN_005690c0(uVar2);
    pcVar3 = s_police_02Sound_0067a868;
    break;
  case 2:
    FUN_00430b60(local_4);
    FUN_0052f780();
    FUN_005271c0(s__trp_bne_0067a85c,5);
    return;
  case 3:
    FUN_00445710(local_4);
    if ((_DAT_0064a668 < *(double *)(local_4 + 0xe0)) || (*(char *)(local_4 + 0xc9) != '\0')) {
      FUN_005271c0(s__trml_bne_0067a850,5);
    }
    FUN_0052f780();
    FUN_005271c0(s__trmm_bne_0067a844,5);
    return;
  case 4:
    uVar2 = FUN_005d2500(0x49);
    FUN_005690c0(uVar2);
    return;
  default:
    goto switchD_0056a44b_default;
  }
  iVar1 = FUN_005eea00(pcVar3);
  if (iVar1 != 0) {
    FUN_005fd160(0x3f800000,0x3f800000);
    return;
  }
switchD_0056a44b_default:
  return;
}


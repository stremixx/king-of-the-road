
char * __fastcall FUN_00600b10(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_1;
  piVar3 = &DAT_00654330;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return &DAT_006831d4;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_1;
  piVar3 = &DAT_00654320;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return s_TCP_IP_006831cc;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_1;
  piVar3 = &DAT_00654310;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return s_Serial_Port_006831c0;
  }
  iVar1 = 4;
  bVar4 = true;
  piVar2 = param_1;
  piVar3 = &DAT_00654300;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *piVar2 == *piVar3;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (bVar4);
  if (bVar4) {
    return s_Modem_006831b8;
  }
  return (char *)param_1[6];
}


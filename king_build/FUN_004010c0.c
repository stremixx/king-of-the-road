
undefined4
FUN_004010c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,char *param_6,char *param_7,char *param_8)

{
  char cVar1;
  undefined4 uVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  _SYSTEMTIME local_90;
  undefined1 local_80 [128];
  
  iVar5 = 0x400;
  if (param_6 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar6 = param_6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = ~uVar4 + 0x3ff;
  }
  if (param_7 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar6 = param_7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = iVar5 + (~uVar4 - 1);
  }
  if (param_8 != (char *)0x0) {
    uVar4 = 0xffffffff;
    pcVar6 = param_8;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = iVar5 + (~uVar4 - 1);
  }
  uVar2 = FUN_00631d33(iVar5);
  GetLocalTime(&local_90);
  FUN_0061c369(local_80,s__d__d__d__d__d__d_0066b51c,local_90.wYear,local_90.wMonth,local_90.wDay,
               local_90.wHour,local_90.wMinute,local_90.wSecond);
  DVar3 = GetLastError();
  FUN_0061c369(uVar2,s___d__d___s__s__s__d__d__X__s__s___0066b4f8,param_2,param_1,local_80,param_4,
               param_3,param_5,param_1,DVar3,param_6,param_7,param_8);
  return uVar2;
}


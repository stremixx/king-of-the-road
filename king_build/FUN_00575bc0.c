
void FUN_00575bc0(undefined1 param_1)

{
  undefined1 *puVar1;
  char cVar2;
  size_t _MaxCount;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined **ppuVar6;
  char *pcVar7;
  
  (&DAT_006f1bb4)[DAT_006f2440] = param_1;
  _MaxCount = DAT_006f2440 + 1;
  iVar5 = 0;
  puVar1 = &DAT_006f1bb5 + DAT_006f2440;
  DAT_006f2440 = _MaxCount;
  *puVar1 = 0;
  ppuVar6 = &PTR_s_SLREPAIR_0067a69c;
  while (iVar3 = _strncmp(*ppuVar6,&DAT_006f1bb4,_MaxCount), iVar3 != 0) {
    ppuVar6 = ppuVar6 + 1;
    iVar5 = iVar5 + 1;
    _MaxCount = DAT_006f2440;
    if (0x67a6c3 < (int)ppuVar6) {
      DAT_006f2440 = 0;
      return;
    }
  }
  uVar4 = 0xffffffff;
  pcVar7 = (&PTR_s_SLREPAIR_0067a69c)[iVar5];
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if (~uVar4 - 1 == DAT_006f2440) {
    switch(iVar5) {
    case 0:
      DAT_006d0ff0 = 1;
      break;
    case 1:
      DAT_006d0fe8 = 1;
      break;
    case 2:
      DAT_006d0fec = 1;
      break;
    case 3:
      DAT_006d0ff4 = 1;
      break;
    case 5:
      DAT_006cdcf4 = 1;
      break;
    case 6:
      FUN_00445af0(2);
      break;
    case 7:
      FUN_00445af0(3);
      break;
    case 8:
      DAT_006d0ff0 = 1;
      DAT_006d0fe8 = 1;
      DAT_006d0fec = 1;
      DAT_006d0ff4 = 1;
      DAT_006cdcf4 = 1;
      FUN_00445af0(1);
      FUN_00445af0(2);
      FUN_00445af0(3);
      DAT_006f2350 = 1;
    }
    DAT_006f2440 = 0;
  }
  if (9 < iVar5) {
    DAT_006f2440 = 0;
  }
  return;
}


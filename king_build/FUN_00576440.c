
void FUN_00576440(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  char *pcVar7;
  char local_1c [12];
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  switch(local_10.wMonth) {
  case 1:
    ppuVar5 = &PTR_DAT_0067b448;
    break;
  case 2:
    ppuVar5 = &PTR_LAB_0067b444;
    break;
  case 3:
    ppuVar5 = &PTR_DAT_0067b440;
    break;
  case 4:
    ppuVar5 = &PTR_DAT_0067b43c;
    break;
  case 5:
    ppuVar5 = (undefined **)&DAT_0067b438;
    break;
  case 6:
    ppuVar5 = &PTR_DAT_0067b434;
    break;
  case 7:
    ppuVar5 = &PTR_DAT_0067b430;
    break;
  case 8:
    ppuVar5 = &PTR_s__f__f____>100__00677524_0x1d_0067b42c;
    break;
  case 9:
    ppuVar5 = &PTR_DAT_0067b428;
    break;
  case 10:
    ppuVar5 = &PTR_DAT_0067b424;
    break;
  case 0xb:
    ppuVar5 = &PTR_DAT_0067b420;
    break;
  case 0xc:
    ppuVar5 = (undefined **)&DAT_0067b41c;
    break;
  default:
    goto switchD_00576466_default;
  }
  uVar2 = 0xffffffff;
  do {
    ppuVar6 = ppuVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    ppuVar6 = (undefined **)((int)ppuVar5 + 1);
    cVar1 = *(char *)ppuVar5;
    ppuVar5 = ppuVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = (char *)((int)ppuVar6 - uVar2);
  pcVar7 = local_1c;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar7 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar7 = pcVar7 + 1;
  }
switchD_00576466_default:
  FUN_0061c369(param_1,s__02d__s__02d__02d__02d__02d_0067b400,local_10.wDay,local_1c,local_10.wYear,
               local_10.wHour,local_10.wMinute,local_10.wSecond);
  return;
}


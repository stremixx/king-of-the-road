
undefined4 __thiscall FUN_005e62a0(undefined4 *param_1,uint param_2,char *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  HPSTR pcVar6;
  
  if ((char *)param_1[0x8081] != (char *)0x0) {
    pcVar5 = (char *)param_1[0x8081];
    for (uVar1 = param_4 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined4 *)param_3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      param_3 = param_3 + 4;
    }
    for (uVar1 = param_4 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      param_3 = param_3 + 1;
    }
    iVar4 = param_1[0x8082];
    param_1[0x8081] = param_1[0x8081] + param_4;
    param_1[0x8082] = iVar4 - param_4;
    if ((int)(iVar4 - param_4) < 1) {
      param_1[0x8081] = 0;
    }
    return 1;
  }
  uVar1 = param_2 & 0x800001ff;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffe00) + 1;
  }
  uVar2 = uVar1 + param_4;
  uVar3 = uVar2 & 0x800001ff;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffe00) + 1;
  }
  iVar4 = (uint)(uVar3 != 0) + ((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1ffU)) >> 9);
  mmioSeek((HMMIO)*param_1,param_2 - uVar1,0);
  while (0 < (int)param_4) {
    uVar2 = param_4;
    param_2 = iVar4;
    if (0x101 < iVar4) {
      param_2 = 0x101;
      uVar2 = 0x20200 - uVar1;
    }
    mmioRead((HMMIO)*param_1,(HPSTR)(param_1 + 1),param_2 << 9);
    pcVar6 = (HPSTR)((int)(param_1 + 1) + uVar1);
    pcVar5 = param_3;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar5 = pcVar5 + 4;
    }
    param_4 = param_4 - uVar2;
    for (uVar1 = uVar2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *pcVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    }
    uVar1 = 0;
    iVar4 = iVar4 - param_2;
    param_3 = param_3 + uVar2;
  }
  return 1;
}


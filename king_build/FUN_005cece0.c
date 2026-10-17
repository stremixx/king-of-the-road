
void FUN_005cece0(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  FUN_005fe42c(param_1 | 2,0);
  iVar3 = DAT_0071d73c * DAT_0071d71c;
  if (DAT_0071d73c <= DAT_0071d738) {
    puVar4 = (uint *)(&DAT_0070e350 + DAT_0071d73c * 0x18);
    iVar5 = DAT_0071d73c;
    do {
      iVar2 = (int)*puVar4 >> 0x14;
      if ((*puVar4 & 0xf0000) != 0) {
        iVar2 = iVar2 + 1;
      }
      if (iVar2 <= (int)puVar4[0x1e78] >> 0x14) {
        iVar1 = (((int)puVar4[0x1e78] >> 0x14) - iVar2) + 1;
        FUN_005fe574(DAT_0070e338 * iVar2 + DAT_0071d724 + iVar3,iVar1,puVar4[5],
                     (int)(puVar4[0x1e7d] - puVar4[5]) / iVar1,param_2,0,0,0);
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 6;
      iVar3 = iVar3 + DAT_0071d71c;
    } while (iVar5 <= DAT_0071d738);
  }
  return;
}


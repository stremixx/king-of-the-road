
void FUN_005ceb30(uint param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_8;
  
  FUN_005fe42c(param_1 | 2,1);
  local_14 = DAT_0071d73c * DAT_0071d71c;
  local_8 = DAT_0071d73c;
  iVar3 = DAT_0071d758 * DAT_0071d73c * 2;
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar2 = (int *)(&DAT_00715d38 + DAT_0071d73c * 0x18);
    do {
      iVar4 = piVar2[-0x1e7a];
      iVar1 = piVar2[-0x1e75];
      iVar6 = piVar2[-2] >> 0x14;
      iVar5 = iVar4 >> 0x14;
      local_18 = piVar2[-2] - iVar4 >> 0x10;
      local_1c = iVar4 >> 0x10 & 0xf;
      if (local_1c != 0) {
        local_1c = 0x10 - local_1c;
        iVar5 = iVar5 + 1;
      }
      if (iVar5 <= iVar6) {
        if (local_18 < 0x10) {
          local_18 = 0;
          local_10 = 0;
        }
        else {
          local_18 = ((*piVar2 - piVar2[-0x1e78]) * 0x40) / local_18;
          local_10 = (piVar2[3] - iVar1) / ((iVar6 - iVar5) + 1);
        }
        iVar4 = DAT_0070e338 * iVar5;
        iVar7 = ((int)(local_18 * local_1c) >> 6) + piVar2[-0x1e78];
        if ((param_1 & 4) != 0) {
          DAT_0071d710 = FUN_005b9820(iVar7);
        }
        FUN_005fe574(DAT_0071d724 + iVar4 + local_14,(iVar6 - iVar5) + 1,iVar1,local_10,param_2,
                     iVar7,local_18 >> 2,DAT_0071d748 + iVar3 + iVar5 * 2);
      }
      local_14 = local_14 + DAT_0071d71c;
      local_8 = local_8 + 1;
      piVar2 = piVar2 + 6;
      iVar3 = iVar3 + DAT_0071d758 * 2;
    } while (local_8 <= DAT_0071d738);
  }
  return;
}


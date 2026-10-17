
void FUN_005ceda0(int param_1,int param_2,byte param_3,int param_4,int param_5,int param_6,
                 uint param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
                 uint param_13,int param_14,int param_15,int param_16)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_8;
  int local_4;
  
  local_28 = param_6;
  local_24 = param_7;
  iVar3 = 1 << (param_3 & 0x1f);
  if (iVar3 + param_1 < param_2) {
    local_8 = param_8 << (param_3 - 2 & 0x1f);
    local_1c = param_9 << (param_3 - 2 & 0x1f);
    local_4 = param_16 << (param_3 & 0x1f);
  }
  local_20 = param_1;
  if (param_1 <= param_2) {
    uVar6 = param_13 & 4;
    iVar7 = param_2;
    do {
      iVar2 = param_15;
      iVar1 = param_10;
      if (local_20 + iVar3 < param_2) {
        param_11 = param_11 + local_1c;
        param_10 = param_10 + local_8;
        param_15 = param_15 + local_4;
        iVar8 = (param_11 * 0x40) / (param_10 >> 6);
        iVar7 = (iVar8 * (param_4 - param_6 >> 10) >> 2) + param_6;
        param_13 = (iVar8 * ((int)(param_5 - param_7) >> 10) >> 2) + param_7;
        iVar4 = iVar7 - local_28 >> (param_3 & 0x1f);
        iVar5 = (int)(param_13 - local_24) >> (param_3 & 0x1f);
        iVar8 = iVar3;
      }
      else {
        iVar8 = (param_2 - local_20) + 1;
        iVar4 = (param_4 - local_28) / iVar8;
        iVar5 = (int)(param_5 - local_24) / iVar8;
      }
      if (uVar6 != 0) {
        DAT_0071d710 = FUN_005b9820(iVar1);
      }
      FUN_005fe4ec(DAT_0071d724 + param_12,iVar8,local_28,local_24,iVar4,iVar5,iVar1,param_8 >> 2,
                   param_14,iVar2,param_16);
      DAT_0071efdc = DAT_0071efdc + 1;
      param_12 = param_12 + DAT_0070e338 * iVar8;
      param_14 = param_14 + iVar8 * 2;
      local_24 = param_13;
      local_20 = local_20 + iVar8;
      local_28 = iVar7;
    } while (local_20 <= param_2);
  }
  return;
}



void FUN_005d0f80(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = DAT_0071d73c * DAT_0071d71c;
  iVar3 = DAT_0071d714 * DAT_0071d73c * 2;
  FUN_005fe1f7(param_2 | 2,DAT_00701dec >> 0xe & 1,iVar2,iVar3);
  local_4 = DAT_0071d73c;
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar8 = (int *)(&DAT_00715d38 + DAT_0071d73c * 0x18);
    uVar6 = param_2;
    do {
      iVar1 = piVar8[-0x1e7a];
      iVar7 = piVar8[-2] >> 0x14;
      iVar5 = iVar1 >> 0x14;
      local_8 = piVar8[-2] - iVar1 >> 0x10;
      if (uVar6 != 0) {
        uVar6 = 0x10 - uVar6;
        iVar5 = iVar5 + 1;
      }
      if (iVar5 <= iVar7) {
        if (local_8 < 0x10) {
          iVar4 = 0;
          local_c = 0;
          local_8 = 0;
        }
        else {
          local_c = (*piVar8 << 6) / local_8;
          local_8 = ((*piVar8 - piVar8[-0x1e78]) * 0x40) / local_8;
          iVar4 = (piVar8[3] - piVar8[-0x1e75]) / ((iVar7 - iVar5) + 1);
        }
        uVar6 = iVar1 >> 0x10 & 0xf;
        DAT_00701df0 = DAT_00701df0 + 1 + (iVar7 - iVar5);
        FUN_005ceda0(iVar5,iVar7,param_3,piVar8[1],piVar8[2],piVar8[-0x1e77],piVar8[-0x1e76],local_8
                     ,local_c,piVar8[-0x1e78],0,DAT_0070e338 * iVar5 + iVar2,param_2,
                     DAT_0071d748 + iVar5 * 2 + iVar3,piVar8[-0x1e75],iVar4);
      }
      iVar2 = iVar2 + DAT_0071d71c;
      local_4 = local_4 + 1;
      piVar8 = piVar8 + 6;
      iVar3 = iVar3 + DAT_0071d714 * 2;
    } while (local_4 <= DAT_0071d738);
  }
  return;
}


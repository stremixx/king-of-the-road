
void FUN_005d0df0(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_8;
  int local_4;
  
  local_8 = DAT_0071d73c * DAT_0071d71c;
  iVar4 = DAT_0071d758 * DAT_0071d73c * 2;
  uVar7 = param_2;
  if ((0x32 < param_4) && ((DAT_00701dec & 0x40) != 0)) {
    DAT_0071d710 = FUN_005b98d0(param_4);
    uVar7 = param_2 | 4;
  }
  FUN_005fe1f7(uVar7,DAT_00701dec >> 0xe & 1);
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar5 = (int *)(&DAT_0070e358 + DAT_0071d73c * 0x18);
    iVar3 = DAT_0071d73c;
    do {
      iVar1 = piVar5[0x1e76] - piVar5[-2] >> 0x10;
      iVar6 = piVar5[0x1e76] >> 0x14;
      iVar2 = piVar5[-2] >> 0x14;
      if (iVar1 < 0x10) {
        iVar1 = 0;
        local_4 = 0;
      }
      else {
        local_4 = (piVar5[0x1e78] << 6) / iVar1;
        iVar1 = ((piVar5[0x1e78] - *piVar5) * 0x40) / iVar1;
      }
      if ((piVar5[-2] & 0xf0000U) != 0) {
        iVar2 = iVar2 + 1;
      }
      if (iVar2 <= iVar6) {
        DAT_00701df0 = (iVar6 - iVar2) + 1 + DAT_00701df0;
        FUN_005ceda0(iVar2,iVar6,param_3,piVar5[0x1e79],piVar5[0x1e7a],piVar5[1],piVar5[2],iVar1,
                     local_4,*piVar5,0,DAT_0070e338 * iVar2 + local_8,param_2,
                     DAT_0071d748 + iVar2 * 2 + iVar4,0,0);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + DAT_0071d758 * 2;
      piVar5 = piVar5 + 6;
      local_8 = local_8 + DAT_0071d71c;
    } while (iVar3 <= DAT_0071d738);
  }
  return;
}


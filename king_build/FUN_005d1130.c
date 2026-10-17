
void FUN_005d1130(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = DAT_0071d73c * DAT_0071d71c;
  local_8 = DAT_0071d758 * DAT_0071d73c * 2;
  FUN_005fe1f7(param_2,DAT_00701dec >> 0xe & 1);
  local_4 = DAT_0071d73c;
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar5 = (int *)(&DAT_0070e360 + DAT_0071d73c * 0x18);
    do {
      iVar4 = piVar5[-4];
      iVar1 = piVar5[-1];
      iVar7 = piVar5[0x1e74] >> 0x14;
      iVar6 = iVar4 >> 0x14;
      local_18 = piVar5[0x1e74] - iVar4 >> 0x10;
      iVar2 = *piVar5;
      if (local_18 == 0) {
        local_18 = 0;
        local_14 = 0;
      }
      else {
        local_14 = ((piVar5[0x1e77] - iVar1) * 0x10) / local_18;
        local_18 = ((piVar5[0x1e78] - iVar2) * 0x10) / local_18;
      }
      uVar3 = iVar4 >> 0x10 & 0xf;
      iVar4 = 0;
      if (uVar3 != 0) {
        iVar4 = 0x10 - uVar3;
        iVar6 = iVar6 + 1;
      }
      if (iVar6 <= iVar7) {
        iVar8 = DAT_0070e338 * iVar6;
        DAT_00701df0 = DAT_00701df0 + 1 + (iVar7 - iVar6);
        if ((param_2 & 4) != 0) {
          DAT_0071d710 = FUN_005b9820(piVar5[-2]);
        }
        FUN_005fe4ec(DAT_0071d724 + iVar8 + local_c,(iVar7 - iVar6) + 1,
                     iVar1 + (iVar4 * local_14 >> 4),iVar2 + (iVar4 * local_18 >> 4),local_14,
                     local_18,piVar5[-2],0,DAT_0071d748 + local_8 + iVar6 * 2);
        DAT_0071efdc = DAT_0071efdc + 1;
      }
      local_c = local_c + DAT_0071d71c;
      local_4 = local_4 + 1;
      piVar5 = piVar5 + 6;
      local_8 = local_8 + DAT_0071d758 * 2;
    } while (local_4 <= DAT_0071d738);
  }
  return;
}


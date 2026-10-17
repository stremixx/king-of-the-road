
void FUN_005d1300(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_18;
  int local_14;
  int local_8;
  
  local_8 = DAT_0071d73c * DAT_0071d71c;
  iVar7 = DAT_0071d758 * DAT_0071d73c * 2;
  FUN_005fe1f7(param_2,DAT_00701dec >> 0xe & 1);
  iVar4 = ((DAT_0071d738 + DAT_0071d73c) / 2) * 0x18;
  local_18 = *(int *)(&DAT_00715d30 + iVar4) - *(int *)(&DAT_0070e350 + iVar4) >> 0x10;
  if (local_18 == 0) {
    local_18 = 0;
    local_14 = 0;
  }
  else {
    local_14 = ((*(int *)(&DAT_00715d3c + iVar4) - *(int *)(&DAT_0070e35c + iVar4)) * 0x10) /
               local_18;
    local_18 = ((*(int *)(&DAT_00715d40 + iVar4) - *(int *)(&DAT_0070e360 + iVar4)) * 0x10) /
               local_18;
  }
  if (DAT_0071d73c <= DAT_0071d738) {
    puVar6 = (undefined4 *)(&DAT_0070e358 + DAT_0071d73c * 0x18);
    iVar4 = DAT_0071d73c;
    do {
      iVar1 = puVar6[1];
      iVar2 = puVar6[2];
      iVar9 = (int)puVar6[0x1e76] >> 0x14;
      iVar10 = (int)puVar6[-2] >> 0x14;
      uVar3 = (int)puVar6[-2] >> 0x10 & 0xf;
      iVar5 = 0;
      if (uVar3 != 0) {
        iVar5 = 0x10 - uVar3;
        iVar10 = iVar10 + 1;
      }
      if (iVar10 <= iVar9) {
        iVar8 = DAT_0070e338 * iVar10;
        DAT_00701df0 = DAT_00701df0 + 1 + (iVar9 - iVar10);
        if ((param_2 & 4) != 0) {
          DAT_0071d710 = FUN_005b9820(*puVar6);
        }
        FUN_005fe4ec(DAT_0071d724 + iVar8 + local_8,(iVar9 - iVar10) + 1,
                     iVar1 + (iVar5 * local_14 >> 4),iVar2 + (iVar5 * local_18 >> 4),local_14,
                     local_18,*puVar6,0,DAT_0071d748 + iVar7 + iVar10 * 2);
        DAT_0071efdc = DAT_0071efdc + 1;
      }
      local_8 = local_8 + DAT_0071d71c;
      iVar4 = iVar4 + 1;
      puVar6 = puVar6 + 6;
      iVar7 = iVar7 + DAT_0071d758 * 2;
    } while (iVar4 <= DAT_0071d738);
  }
  return;
}


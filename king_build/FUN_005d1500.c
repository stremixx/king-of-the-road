
void FUN_005d1500(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = DAT_0071d73c * DAT_0071d71c;
  iVar5 = DAT_0071d758 * DAT_0071d73c * 2;
  FUN_005fe1f7(param_2,DAT_00701dec >> 0xe & 1);
  iVar3 = ((DAT_0071d738 + DAT_0071d73c) / 2) * 0x18;
  local_14 = *(int *)(&DAT_00715d30 + iVar3) - *(int *)(&DAT_0070e350 + iVar3) >> 0x10;
  if (local_14 == 0) {
    local_14 = 0;
    local_10 = 0;
  }
  else {
    local_10 = ((*(int *)(&DAT_00715d3c + iVar3) - *(int *)(&DAT_0070e35c + iVar3)) * 0x10) /
               local_14;
    local_14 = ((*(int *)(&DAT_00715d40 + iVar3) - *(int *)(&DAT_0070e360 + iVar3)) * 0x10) /
               local_14;
  }
  if (DAT_0071d73c <= DAT_0071d738) {
    puVar4 = (undefined4 *)(&DAT_0070e358 + DAT_0071d73c * 0x18);
    iVar3 = DAT_0071d73c;
    do {
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      iVar7 = (int)puVar4[0x1e76] >> 0x14;
      iVar8 = (int)puVar4[-2] >> 0x14;
      if (iVar8 <= iVar7) {
        iVar6 = DAT_0070e338 * iVar8;
        DAT_00701df0 = DAT_00701df0 + 1 + (iVar7 - iVar8);
        if ((param_2 & 4) != 0) {
          DAT_0071d710 = FUN_005b9820(*puVar4);
        }
        FUN_005fe4ec(DAT_0071d724 + iVar6 + local_18,(iVar7 - iVar8) + 1,uVar1,uVar2,local_10,
                     local_14,*puVar4,0,DAT_0071d748 + iVar5 + iVar8 * 2);
        DAT_0071efdc = DAT_0071efdc + 1;
      }
      local_18 = local_18 + DAT_0071d71c;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + DAT_0071d758 * 2;
    } while (iVar3 <= DAT_0071d738);
  }
  return;
}


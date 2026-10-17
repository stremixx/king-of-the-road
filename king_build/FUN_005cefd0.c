
void FUN_005cefd0(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  int local_4;
  
  FUN_005fe1f7(param_2 | 2,DAT_00701dec >> 0xe & 1);
  local_4 = DAT_0071d73c;
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar4 = (int *)(&DAT_0070e360 + DAT_0071d73c * 0x18);
    do {
      iVar3 = piVar4[-4];
      iVar1 = *piVar4;
      iVar2 = piVar4[-1];
      iVar8 = piVar4[0x1e74] >> 0x14;
      iVar5 = iVar3 >> 0x14;
      local_10 = piVar4[0x1e74] - iVar3 >> 0x10;
      if (local_10 == 0) {
        local_10 = 0;
        local_c = 0;
      }
      else {
        local_c = ((piVar4[0x1e77] - iVar2) * 0x10) / local_10;
        local_10 = ((piVar4[0x1e78] - iVar1) * 0x10) / local_10;
      }
      uVar6 = iVar3 >> 0x10 & 0xf;
      iVar3 = 0;
      if (uVar6 != 0) {
        iVar3 = 0x10 - uVar6;
        iVar5 = iVar5 + 1;
      }
      if (iVar5 <= iVar8) {
        DAT_00701df0 = DAT_00701df0 + 1 + (iVar8 - iVar5);
        iVar7 = (iVar5 + 1) * DAT_0071d71c - DAT_0070e338;
        if ((param_2 & 4) != 0) {
          DAT_0071d710 = FUN_005b9820(piVar4[-2]);
        }
        FUN_005fe4ec(DAT_0071d724 + (iVar7 - local_4),(iVar8 - iVar5) + 1,
                     iVar2 + (iVar3 * local_c >> 4),iVar1 + (iVar3 * local_10 >> 4),local_c,local_10
                     ,piVar4[-2],0,DAT_0071d748);
        DAT_0071efdc = DAT_0071efdc + 1;
      }
      local_4 = local_4 + 1;
      piVar4 = piVar4 + 6;
    } while (local_4 <= DAT_0071d738);
  }
  return;
}


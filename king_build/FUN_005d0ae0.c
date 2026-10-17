
void FUN_005d0ae0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_8;
  int local_4;
  
  if ((DAT_0070e338 == 2) || (DAT_0070e338 == 4)) {
    param_1 = param_1 | DAT_0070e338;
  }
  iVar7 = DAT_0071d73c * DAT_0071d71c + DAT_0071d724;
  if (((param_1 & 1) != 0) && ((DAT_0070e338 == 1 || (DAT_0070e338 == 2)))) {
    uVar2 = __ftol();
    local_8 = FUN_005b8b60(uVar2);
  }
  local_4 = DAT_0071d73c;
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar3 = (int *)(&DAT_00715d30 + DAT_0071d73c * 0x18);
    do {
      iVar6 = (uint)((piVar3[-0x1e78] & 0xfffffU) != 0) + (piVar3[-0x1e78] >> 0x14);
      uVar4 = ((*piVar3 >> 0x14) - iVar6) + 1;
      if (0 < (int)uVar4) {
        switch(param_1) {
        case 0:
          uVar1 = (undefined1)param_2;
          puVar8 = (undefined4 *)(iVar6 + iVar7);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar8 = puVar8 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar8 = uVar1;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          break;
        case 1:
          FUN_005fe023(local_8,iVar6 + iVar7,param_2,uVar4);
          break;
        case 2:
          FUN_005fe13e(iVar7 + iVar6 * 2,param_2,uVar4);
          break;
        case 3:
          FUN_005fe0dc(local_8,iVar7 + iVar6 * 2,param_3,uVar4);
          break;
        case 4:
          FUN_005fe16a(iVar7 + iVar6 * 4,param_2,uVar4);
          break;
        case 5:
          uVar2 = __ftol(iVar7 + iVar6 * 4,param_3,uVar4);
          FUN_005fe182(uVar2);
        }
      }
      piVar3 = piVar3 + 6;
      local_4 = local_4 + 1;
      iVar7 = iVar7 + DAT_0071d71c;
    } while (local_4 <= DAT_0071d738);
  }
  return;
}



void FUN_005d0ca0(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack00000010;
  
  FUN_005fe42c(param_1,1);
  if ((param_1 & 1) != 0) {
    uVar1 = __ftol();
    DAT_0071d750 = FUN_005b8b60(uVar1);
  }
  param_1 = DAT_0071d73c * DAT_0071d71c;
  iVar6 = DAT_0071d758 * DAT_0071d73c * 2;
  iStack00000010 = DAT_0071d73c;
  if (DAT_0071d73c <= DAT_0071d738) {
    piVar5 = (int *)(&DAT_0070e350 + DAT_0071d73c * 0x18);
    do {
      iVar4 = *piVar5;
      iVar2 = piVar5[0x1e78] - iVar4 >> 0x10;
      iVar7 = piVar5[0x1e78] >> 0x14;
      iVar8 = iVar4 >> 0x14;
      if (iVar2 < 0x10) {
        iVar2 = 0;
      }
      else {
        iVar2 = ((piVar5[0x1e7a] - piVar5[2]) * 0x40) / iVar2;
      }
      uVar3 = iVar4 >> 0x10 & 0xf;
      iVar4 = 0;
      if (uVar3 != 0) {
        iVar4 = 0x10 - uVar3;
        iVar8 = iVar8 + 1;
      }
      if (iVar8 <= iVar7) {
        FUN_005fe574(DAT_0070e338 * iVar8 + DAT_0071d724 + param_1,(iVar7 - iVar8) + 1,0,0,param_2,
                     (iVar4 * iVar2 >> 6) + piVar5[2],iVar2 >> 2,DAT_0071d748 + iVar8 * 2 + iVar6);
      }
      iVar6 = iVar6 + DAT_0071d758 * 2;
      iStack00000010 = iStack00000010 + 1;
      piVar5 = piVar5 + 6;
      param_1 = param_1 + DAT_0071d71c;
    } while (iStack00000010 <= DAT_0071d738);
  }
  return;
}


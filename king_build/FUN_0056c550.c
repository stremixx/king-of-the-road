
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056c550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  char *local_14;
  int local_c;
  
  if ((DAT_006957a8 == DAT_00695c00) && (DAT_006957fc == 0)) {
    FUN_00574dc0();
  }
  if ((((DAT_006f2398 != 0) && ((*(byte *)(DAT_00695c00 + 4) & 2) != 0)) && (DAT_006f2388 == 0)) &&
     (DAT_00695c00[0x2f4] == 0)) {
    FUN_005691c0();
  }
  if ((DAT_006f2390 != 0) && ((*(byte *)(DAT_00695c00 + 4) & 2) != 0)) {
    FUN_0056a7b0();
  }
  if ((*(int *)(DAT_006cdbcc + 0x514) == 1) && (DAT_00695c00[0x2ec] == 3)) {
    FUN_0056c4a0(DAT_006cdbf0 + 0x180);
  }
  if (DAT_006f23f4 == 0) {
    return;
  }
  fVar10 = (float10)thunk_FUN_00603580();
  iVar1 = DAT_006957ac;
  if (fVar10 - (float10)_DAT_00695828 <= (float10)_DAT_0064a850) {
    if (DAT_006f23f0 == 0) {
      return;
    }
    DAT_006f23f0 = 0;
    DAT_006f23f4 = 0;
    return;
  }
  iVar2 = *(int *)(DAT_006f23f4 + 0x1c);
  if ((iVar2 < 0x65) || (999 < iVar2)) {
    if (iVar2 == 2) {
      iVar2 = 0x7e;
      goto LAB_0056c657;
    }
    if (iVar2 == 1) {
      return;
    }
    if (999 < iVar2) {
      iVar2 = 0xaa;
      goto LAB_0056c657;
    }
  }
  else {
    iVar2 = iVar2 + 0x1a;
LAB_0056c657:
    local_14 = (char *)FUN_005d2500(iVar2);
    if ((local_14 != (char *)0x0) && (*local_14 != '\0')) goto LAB_0056c674;
  }
  local_14 = s_Tool_Tips_Tool_Tips_Tool_Tips_To_0067a960;
LAB_0056c674:
  iVar3 = FUN_005e9710(local_14);
  uVar7 = (uint)*(ushort *)(DAT_006f1e34 + 4);
  iVar8 = iVar3 / (int)uVar7 + 1;
  iVar5 = iVar8 * uVar7 + 0x14;
  iVar2 = DAT_006957e4 + -0x1e;
  if (iVar2 < 0) {
    iVar2 = DAT_006957e4 + 10;
  }
  iVar6 = DAT_006957e0;
  if (DAT_006957b0 <= DAT_006957e0 + iVar5) {
    iVar6 = DAT_006957b0 - iVar5;
  }
  FUN_005b8030(*(undefined4 *)(iVar1 + 0xc),iVar6 - (uint)*(ushort *)(DAT_006f1e30 + 4),iVar2,
               DAT_006f1e30,0xffffffff);
  iVar5 = 0;
  iVar9 = iVar8;
  local_c = iVar6;
  if (0 < iVar8) {
    do {
      FUN_005b8030(*(undefined4 *)(iVar1 + 0xc),local_c,iVar2,DAT_006f1e34,0xffffffff);
      iVar9 = iVar9 + -1;
      iVar5 = iVar8;
      local_c = local_c + uVar7;
    } while (iVar9 != 0);
  }
  FUN_005b8030(*(undefined4 *)(iVar1 + 0xc),iVar5 * uVar7 + iVar6,iVar2,DAT_006f1e38,0xffffffff);
  iVar5 = (**(code **)(*DAT_00695c00 + 0x1c))();
  uVar4 = DAT_006957c0;
  if (iVar5 != 1) {
    uVar4 = DAT_006cdc90;
  }
  FUN_005e97a0(*(undefined4 *)(iVar1 + 0xc),iVar6 + (int)(iVar8 * uVar7 - iVar3) / 2,
               (*(ushort *)(DAT_006f1e30 + 6) - 5) + iVar2,uVar4,local_14,0,0);
  DAT_006f23f0 = 1;
  return;
}


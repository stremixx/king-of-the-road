
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005b43f0(int param_1,int param_2,int param_3,undefined4 param_4,float param_5,undefined4 param_6
            ,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x79c) == 0) {
    return;
  }
  if ((param_7 < 0) || (*(int *)(param_1 + 0x798) <= param_7)) {
    FUN_005d2520(s_Sprite_have_illegal_maskindex__0067e000,0);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x204c) + param_7 * 4);
  uVar5 = (uint)*(ushort *)(iVar1 + 4);
  uVar6 = (uint)*(ushort *)(iVar1 + 6);
  if (param_2 == 1) {
    FUN_005ab040(*(int *)(param_1 + 0x2020) * 0x30 + 0x8c0 + param_1);
    if (param_5 <= _DAT_0064b240) {
      return;
    }
    if ((float)*(double *)(param_1 + 0x2118) < param_5) {
      return;
    }
    param_7 = __ftol();
    iVar2 = __ftol();
    iVar2 = iVar2 + 0x80 + *(int *)(param_1 + 0x7a0) >> 0x14;
    iVar3 = __ftol();
    iVar3 = iVar3 + 0x80 + *(int *)(param_1 + 0x7a4) >> 0x14;
  }
  else {
    param_7 = 0;
    iVar2 = __ftol();
    iVar3 = __ftol();
  }
  if (7 < param_3 - 1U) goto LAB_005b4588;
  iVar4 = (int)uVar5 >> 1;
  switch(param_3) {
  case 1:
    iVar2 = iVar2 - iVar4;
    break;
  case 2:
    iVar2 = iVar2 - uVar5;
    break;
  case 4:
    iVar2 = iVar2 - iVar4;
    iVar3 = iVar3 - ((int)uVar6 >> 1);
    break;
  case 5:
    iVar2 = iVar2 - uVar5;
  case 3:
    iVar3 = iVar3 - ((int)uVar6 >> 1);
    break;
  case 6:
    goto switchD_005b4538_caseD_6;
  case 7:
    iVar2 = iVar2 - iVar4;
    goto switchD_005b4538_caseD_6;
  case 8:
    iVar2 = iVar2 - uVar5;
switchD_005b4538_caseD_6:
    iVar3 = iVar3 - uVar6;
  }
LAB_005b4588:
  if ((((iVar2 < *(int *)(param_1 + 0x7a0) + *(int *)(param_1 + 0x7a8) * 2 >> 0x14) &&
       (iVar3 < *(int *)(param_1 + 0x7a4) + *(int *)(param_1 + 0x7ac) * 2 >> 0x14)) &&
      (*(int *)(param_1 + 0x7a0) >> 0x14 < (int)(uVar5 + iVar2))) &&
     (*(int *)(param_1 + 0x7a4) >> 0x14 < (int)(iVar3 + uVar6))) {
    FUN_005b8030(*(undefined4 *)(param_1 + 0x79c),iVar2,iVar3,iVar1,param_7);
    DAT_0071efd8 = DAT_0071efd8 + 1;
  }
  return;
}


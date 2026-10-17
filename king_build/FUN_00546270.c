
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00546270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x50ac) == 0) {
LAB_005462d4:
    *(undefined4 *)(param_1 + 0x50ac) = 0;
    FUN_005e10c0(*(undefined4 *)(&DAT_006d1478 + *(int *)(param_1 + 0x27a4) * 0x5d0),0);
    uVar7 = 0;
    uVar6 = *(undefined4 *)(&DAT_006d147c + *(int *)(param_1 + 0x27a4) * 0x5d0);
  }
  else {
    fVar5 = (float10)FUN_005567a0();
    if (fVar5 <= (float10)_DAT_0064ba68) goto LAB_005462d4;
    FUN_005e10c0(*(undefined4 *)(&DAT_006d1478 + *(int *)(param_1 + 0x27a4) * 0x5d0),1);
    uVar7 = 1;
    uVar6 = *(undefined4 *)(&DAT_006d147c + *(int *)(param_1 + 0x27a4) * 0x5d0);
  }
  FUN_005e10c0(uVar6,uVar7);
  (**(code **)(*(int *)(param_1 + -0x100) + 0xe8))();
  iVar8 = *(int *)(param_1 + 0x50a8);
  iVar1 = *(int *)(param_1 + 0x27a4);
  if (iVar8 == 0) {
    iVar4 = *(int *)(&DAT_006d10e4 + iVar1 * 0x5d0);
    if ((iVar4 == 0) && (*(int *)(&DAT_006d10e8 + iVar1 * 0x5d0) == 0)) goto LAB_005463cd;
LAB_005463b4:
    uVar6 = *(undefined4 *)(&DAT_006d10e8 + iVar1 * 0x5d0);
    iVar8 = 0;
  }
  else {
    iVar3 = iVar1 * 0x5d0;
    iVar4 = *(int *)(&DAT_006d10e4 + iVar3);
    if ((iVar4 == 0) && (*(int *)(&DAT_006d10e8 + iVar3) == 0)) goto LAB_005463cd;
    iVar2 = *(int *)(param_1 + 0x2430);
    if ((*(int *)(iVar2 + 0x18) != 0) ||
       ((*(int *)(iVar2 + 0x2c) != 0 && (*(int *)(iVar2 + 0x40) != 0)))) goto LAB_005463b4;
    uVar6 = *(undefined4 *)(&DAT_006d10e8 + iVar3);
  }
  FUN_004ca830(param_1 + -0x110,iVar4,uVar6,iVar8);
LAB_005463cd:
  if ((*(int *)(param_1 + 0x50a8) == 0) && (*(int *)(param_1 + 0x50a4) == 0)) {
    uVar6 = *(undefined4 *)(param_1 + 0x4f04);
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x4f04);
    uVar7 = 1;
  }
  FUN_005e10c0(uVar6,uVar7);
  FUN_005f9390(param_2,param_3,param_4,param_5);
  return;
}



void __thiscall FUN_004c0c90(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBP;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    FUN_004c0d80(param_2,param_3);
    return;
  }
  FUN_005b06d0(*(undefined4 *)(param_1 + 0x48),0,0,0);
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,1);
  uVar1 = *(uint *)(param_1 + 0x44);
  if (uVar1 < 0x385) {
    iVar3 = *(int *)(param_1 + 0x4c);
    iVar2 = *DAT_0071f868;
  }
  else {
    uVar4 = 0;
    if (uVar1 != 900) {
      iVar3 = 0;
      do {
        (**(code **)(*DAT_0071f868 + 100))
                  (DAT_0071f868,4,0x142,*(int *)(param_1 + 0x4c) + iVar3,900,0);
        uVar4 = uVar4 + 900;
        iVar3 = iVar3 + 0x5460;
      } while (uVar4 < *(int *)(param_1 + 0x44) - 900U);
    }
    if (*(uint *)(param_1 + 0x44) <= uVar4) goto LAB_004c0d61;
    uVar1 = *(uint *)(param_1 + 0x44) - uVar4;
    iVar2 = *DAT_0071f868;
    iVar3 = *(int *)(param_1 + 0x4c) + uVar4 * 0x18;
  }
  (**(code **)(iVar2 + 100))(DAT_0071f868,4,0x142,iVar3,uVar1,0);
LAB_004c0d61:
  FUN_004c0d80(unaff_EBP,param_3);
  return;
}


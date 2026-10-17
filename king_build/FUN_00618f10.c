
void __fastcall FUN_00618f10(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar2 = FUN_005d8940(*(undefined4 *)(param_1 + 0x18));
      iVar3 = FUN_004c4750(*(undefined4 *)(param_1 + 0x14),uVar2);
      *(int *)(param_1 + 0x10) = iVar3;
      if (iVar3 == 0) {
        FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
                     s_C__Nek_VRAPPLVS_terrain_terrain__00684d28,0x2e9,s_Mar_19_2002_006714f8);
      }
    }
    FUN_005b06d0(*(undefined4 *)(param_1 + 0x10),0,0,0);
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88,1);
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < 0x400) {
      (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,4,0x142,*(undefined4 *)(param_1 + 4),uVar1,0);
      return;
    }
    uVar4 = 0;
    if (uVar1 != 0x3ff) {
      iVar3 = 0;
      do {
        (**(code **)(*DAT_0071f868 + 100))
                  (DAT_0071f868,4,0x142,*(int *)(param_1 + 4) + iVar3,0x3ff,0);
        uVar4 = uVar4 + 0x3ff;
        iVar3 = iVar3 + 0x5fe8;
      } while (uVar4 < *(int *)(param_1 + 8) - 0x3ffU);
    }
    if (uVar4 < *(uint *)(param_1 + 8)) {
      (**(code **)(*DAT_0071f868 + 100))
                (DAT_0071f868,4,0x142,*(int *)(param_1 + 4) + uVar4 * 0x18,
                 *(uint *)(param_1 + 8) - uVar4,0);
    }
  }
  return;
}


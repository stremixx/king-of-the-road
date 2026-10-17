
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004ead20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 local_c8 [200];
  
  if (((param_2 < 0) || (2 < param_2)) || (*(int *)(param_1 + 0x2c) < param_2)) {
    FUN_0061c369(local_c8,s_TechSystem__set_upgrade_new_upgr_006733dc,param_2,
                 *(undefined4 *)(param_1 + 0x2c));
    FUN_004e1e9c(local_c8);
  }
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_2 != iVar1) {
    iVar2 = *(int *)(param_1 + 0x30);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
      return;
    }
    if (iVar2 == 1) {
LAB_004eadc6:
      *(int *)(param_1 + 0x28) = param_2;
      *(undefined4 *)(param_1 + 0x24) = 0;
      return;
    }
    if ((iVar2 == 2) &&
       (fVar3 = *(float *)(param_1 + 0xc + param_2 * 4) - *(float *)(param_1 + param_2 * 4),
       fVar3 != _DAT_0064b254)) {
      fVar3 = (((*(float *)(param_1 + 0xc + iVar1 * 4) - *(float *)(param_1 + iVar1 * 4)) *
                *(float *)(param_1 + 0x24) + *(float *)(param_1 + iVar1 * 4)) -
              *(float *)(param_1 + param_2 * 4)) / fVar3;
      *(float *)(param_1 + 0x24) = fVar3;
      if (_DAT_0064b240 < fVar3) {
        *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
      }
      if (*(float *)(param_1 + 0x24) < _DAT_0064b254) goto LAB_004eadc6;
    }
    *(int *)(param_1 + 0x28) = param_2;
  }
  return;
}


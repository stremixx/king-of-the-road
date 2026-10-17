
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0053cc60(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  float10 fVar8;
  float10 extraout_ST0;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iVar7 = 0;
  iVar4 = *(int *)(param_1 + 0x268);
  uVar6 = 1;
  local_4c = 1;
  local_50 = 0;
  local_54 = 0;
  local_40 = 0;
  local_58 = 0.0;
  local_48 = 0;
  local_44 = 0x41a00000;
  local_3c = 1.0;
  if (iVar4 == 0) goto LAB_0053cdf2;
  iVar7 = __ftol();
  uVar6 = *(undefined4 *)(iVar4 + 0x5204);
  local_44 = *(undefined4 *)(iVar4 + 0x51f0);
  local_48 = *(undefined4 *)(iVar4 + 0x51ec);
  iVar4 = *(int *)(iVar4 + 0x5460);
  if (iVar4 != 0) {
    local_4c = *(undefined4 *)(iVar4 + 0x1c14);
    local_50 = *(undefined4 *)(iVar4 + 0x3c50);
    fVar8 = (float10)FUN_004eaf10();
    local_3c = (float)fVar8;
    local_54 = 1;
    if ((float10)_DAT_0064a5a8 <= fVar8) {
      local_54 = 0;
    }
  }
  iVar4 = *(int *)(param_1 + 0x268);
  iVar1 = *(int *)(iVar4 + 0x5460);
  if (iVar1 == 0) {
    local_58 = *(float *)(iVar4 + 0x51e4);
  }
  else {
    iVar2 = *(int *)(iVar4 + 0x5464);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x3344) == 0) {
        if (*(int *)(iVar1 + 0x3464) == 0) {
          local_58 = *(float *)(iVar1 + 0x3330);
        }
        else {
          local_58 = *(float *)(iVar1 + 0x3328);
        }
        if (DAT_006d104c == 0) goto LAB_0053cdca;
        fVar8 = (float10)FUN_004fee30(uVar6);
      }
      else {
        fVar8 = (float10)FUN_005aabc0(iVar4 + 0xcf4);
      }
    }
    else {
      local_38 = *(undefined4 *)(iVar2 + 100);
      local_34 = *(undefined4 *)(iVar2 + 0x68);
      local_30 = *(undefined4 *)(iVar2 + 0x6c);
      fVar8 = (float10)FUN_005aabc0(&local_38);
    }
    local_58 = (float)fVar8;
  }
LAB_0053cdca:
  iVar4 = (**(code **)(**(int **)(param_1 + 0x268) + 4))();
  if ((iVar4 == 1) && (*(int *)(*(int *)(param_1 + 0x268) + 0x5578) != 0)) {
    local_40 = 1;
  }
LAB_0053cdf2:
  dVar3 = _DAT_0064e410;
  if (DAT_00695bb4 != 0) {
    dVar3 = _DAT_0064a660;
  }
  uVar5 = __ftol();
  iStack_10 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((float10)_DAT_0064e408 <= extraout_ST0) {
    iStack_18 = 9;
    iStack_14 = 9;
    iStack_10 = 9;
  }
  else {
    iStack_18 = iStack_10 / 100;
    iStack_14 = (iStack_10 % 100) / 10;
    iStack_10 = iStack_10 + (iStack_14 + iStack_18 * 10) * -10;
  }
  iStack_2c = iVar7 / 100000;
  iStack_28 = (iVar7 % 100000) / 10000;
  iVar4 = iStack_28 + iStack_2c * 10;
  iStack_24 = (iVar7 + iVar4 * -10000) / 1000;
  iVar4 = iStack_24 + iVar4 * 10;
  iStack_20 = (iVar7 + iVar4 * -1000) / 100;
  iStack_1c = (iVar7 + (iStack_20 + iVar4 * 10) * -100) / 10;
  if (DAT_006cdbc8 == 0) {
    FUN_0053c770(param_2,param_3,&iStack_18,&iStack_2c,local_48,local_44,uVar6,local_4c,local_50);
    return;
  }
  FUN_0053c920(param_2,param_3,(float)dVar3 * local_58,&iStack_2c,local_48,uVar6,local_4c,local_50,
               local_3c,local_54,local_40);
  return;
}


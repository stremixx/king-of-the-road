
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005e31e0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  undefined1 local_74 [8];
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00648b2b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_005e1de0();
  iVar1 = FUN_005d72d0(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104),
                       *(undefined4 *)(param_1 + 0x108),
                       (*(uint *)(param_1 + 0x10c) & 0x1000) << 3 |
                       *(uint *)(param_1 + 0x10c) & 0x3f00,0,0,0);
  if (iVar1 == 0) {
    local_88 = *(undefined4 *)(param_1 + 0x100);
    local_84 = *(undefined4 *)(param_1 + 0x104);
    local_7c = *(uint *)(param_1 + 0x10c) & 0x7f00;
    local_80 = *(undefined4 *)(param_1 + 0x108);
    FUN_005d7840(&local_88,&local_84,&local_80,&local_7c);
    *(undefined4 *)(param_1 + 0x108) = local_80;
    *(undefined4 *)(param_1 + 0x100) = local_88;
    *(undefined4 *)(param_1 + 0x104) = local_84;
    if ((local_7c & 0x100) == 0) {
      *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffeff;
    }
    if ((local_7c & 0x400) == 0) {
      uVar2 = *(uint *)(param_1 + 0x10c) & 0xfffffbff;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x10c) | 0x400;
    }
    *(uint *)(param_1 + 0x10c) = uVar2;
    if ((local_7c & 0x200) == 0) {
      uVar2 = uVar2 & 0xfffffdff;
    }
    else {
      uVar2 = uVar2 | 0x200;
    }
    *(uint *)(param_1 + 0x10c) = uVar2;
    if ((local_7c & 0x800) == 0) {
      uVar2 = uVar2 & 0xfffff7ff;
    }
    else {
      uVar2 = uVar2 | 0x800;
    }
    *(uint *)(param_1 + 0x10c) = uVar2;
    if ((local_7c & 0x1000) == 0) {
      uVar2 = uVar2 & 0xffffefff;
    }
    else {
      uVar2 = uVar2 | 0x1000;
    }
    *(uint *)(param_1 + 0x10c) = uVar2;
    if ((local_7c & 0x2000) == 0) {
      uVar2 = uVar2 & 0xffffdfff;
    }
    else {
      uVar2 = uVar2 | 0x2000;
    }
    *(uint *)(param_1 + 0x10c) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_1 + 0x104);
  FUN_005d7b10(*(undefined4 *)(param_1 + 0x108),0xffffffff);
  if (DAT_007206b4 == 0) {
    FUN_00603230(&DAT_006720a0,s_xstretch_006821d0,1,&local_8c,*(undefined4 *)(param_1 + 0x118));
    if (local_8c < 1) {
      local_8c = 1;
    }
    FUN_00603230(&DAT_006720a0,s_ystretch_006821c4,1,&local_78,*(undefined4 *)(param_1 + 0x118));
    if (local_78 < 1) {
      local_78 = 1;
    }
    FUN_005d3640(*(undefined4 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x104),
                 *(undefined4 *)(param_1 + 0x108),*(uint *)(param_1 + 0x10c) & 0x100,local_8c,
                 local_78);
    if ((*(uint *)(DAT_007206b0 + 0x10c) & 0x200) != 0) {
      FUN_005d6c50(*(uint *)(DAT_007206b0 + 0x10c));
    }
    FUN_0062a170(0);
    FUN_0062a170(0);
    FUN_00602eb0();
    if (*(int *)(DAT_007206b0 + 0x13c) != 0) {
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_006821c0,0,0,local_74,*(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_006821b0,0,0,local_6c,*(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_006821ac,0,0,local_64,*(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_006821a8,0,0,local_5c,*(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_006821a4,0,0x3fe00000,local_54,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_006821a0,0,0x3fe00000,local_4c,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_0068219c,0,0x3fe00000,local_44,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_00682198,0,0x3fe00000,local_3c,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_00682194,0,0x3ff00000,local_34,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_00682190,0,0x3ff00000,local_2c,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_0068218c,0,0x3ff00000,local_24,
                   *(undefined4 *)(param_1 + 0x118));
      FUN_00603370(s_JOYSTICK_006821b4,&DAT_00682188,0,0x3ff00000,local_1c,
                   *(undefined4 *)(param_1 + 0x118));
    }
  }
  FUN_005e2770(*(int *)(param_1 + 0x100) / 2,*(int *)(param_1 + 0x104) / 2);
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar1 = FUN_005fc4d0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
  }
  iVar1 = *(int *)(DAT_007206b0 + 0x100);
  iVar3 = FUN_005d3620();
  iVar3 = iVar3 * iVar1;
  iVar1 = *(int *)(DAT_007206b0 + 0x104);
  iVar4 = FUN_005d3630();
  iVar4 = iVar4 * iVar1;
  if ((*(byte *)(DAT_007206b0 + 0x124) & 2) != 0) {
    iVar1 = FUN_005d7bf0(2);
    iVar5 = FUN_005d7bf0(1);
    iVar3 = iVar3 - (iVar1 + iVar5);
    iVar1 = FUN_005d7bf0();
    iVar5 = FUN_005d7bf0(3);
    iVar4 = iVar4 - (iVar1 + iVar5);
  }
  local_7c = FUN_00631d33(0x38);
  local_c = 0;
  if (local_7c == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_005d7d00(iVar3,iVar4,*(undefined4 *)(param_1 + 0x108),
                                 *(undefined4 *)(param_1 + 0x10c));
  }
  *(int **)(param_1 + 0xfc) = piVar6;
  *(int **)(param_1 + 0xf8) = piVar6;
  *(int **)(param_1 + 0xf4) = piVar6;
  *(int **)(param_1 + 0xf0) = piVar6;
  local_c = 0xffffffff;
  iVar1 = (**(code **)(*piVar6 + 0x14))(param_1 + 0x170,*(undefined4 *)(param_1 + 0x118));
  local_7c = iVar1 - 100;
  FUN_00603370(s_RENDER_00681dc4,s_scale_time_0068217c,(double)(int)local_7c * _DAT_00651718);
  iVar1 = thunk_FUN_005b5b70();
  if (iVar1 != 0) {
    FUN_005b9a80();
  }
  iVar1 = FUN_005d3160();
  FUN_005cf1d0(iVar1 == 2);
  ExceptionList = pvStack_14;
  return;
}


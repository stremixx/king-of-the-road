
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510750(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    if ((*(int *)(DAT_006cdbcc + 0x514) == 1) && (*(int *)(DAT_006cdbcc + 0x524) != 0)) {
      *(undefined4 *)(DAT_006cdbcc + 0x514) = 0;
      iVar1 = FUN_005bd200(0x92);
      *(uint *)(iVar1 + 0x11c) = *(uint *)(iVar1 + 0x11c) & 0xfffffffd;
    }
    DAT_006cdcc4 = 1;
    uVar2 = *(uint *)(DAT_006cdbd0 + 0x198) & 0xf0;
    if (uVar2 == 0x10) {
      DAT_006cdc70 = -0x168;
      DAT_006cdc6c = 0;
      DAT_006cdc74 = 0x1a0;
      DAT_006cdc78 = -0x168;
      DAT_006cdc7c = 0xfe;
      DAT_006cdc80 = -0x168;
    }
    else if (uVar2 == 0x20) {
      DAT_006cdc70 = -300;
      DAT_006cdc6c = 0;
      DAT_006cdc74 = 0x240;
      DAT_006cdc78 = -300;
      DAT_006cdc7c = 0x19e;
      DAT_006cdc80 = -300;
    }
    else if (uVar2 == 0x30) {
      DAT_006cdc70 = -0xd8;
      DAT_006cdc6c = 0;
      DAT_006cdc74 = 800;
      DAT_006cdc78 = -0xd8;
      DAT_006cdc7c = 0x27f;
      DAT_006cdc80 = -0xd8;
    }
    else if (uVar2 == 0x40) {
      DAT_006cdc70 = 0;
      DAT_006cdc78 = 0;
      DAT_006cdc6c = 0;
      DAT_006cdc74 = 0x560;
      DAT_006cdc7c = 0x4bf;
      DAT_006cdc80 = 0;
    }
    DAT_006cdc78 = DAT_006cdc78 + -0x32;
    DAT_006cdc70 = DAT_006cdc70 + -0x32;
    DAT_006cdc80 = DAT_006cdc80 + -0x32;
    (**(code **)(*DAT_00695c00 + 0x24))();
    FUN_00512150();
    FUN_005b99b0(0,0xff,0,0,0,0xff);
    FUN_005b9a80();
    FUN_00596c50(DAT_00695c00);
    FUN_0050c230();
    (**(code **)(*DAT_00695c00 + 0x88))();
    if (DAT_00695c00[0x2ca] != 0) {
      FUN_005db0b0(DAT_00695c00[0x2ca]);
    }
    (**(code **)(*DAT_00695c00 + 0x74))();
    DAT_00695c00[0x7c1] = 0;
    FUN_005fc3b0((float)(int)*(short *)(DAT_006cdbd8 + 0x17e) * (float)_DAT_0064a590);
    DAT_006cdcc4 = 0;
    return;
  }
  FUN_005271c0(s__KotrNewgame_avi_00675738,6);
  return;
}


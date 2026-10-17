
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005448f0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float10 fVar6;
  int aiStack_370 [4];
  undefined4 uStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  undefined1 auStack_344 [52];
  undefined1 auStack_310 [64];
  undefined1 auStack_2d0 [100];
  undefined1 auStack_26c [100];
  undefined1 auStack_208 [500];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_006468fa;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((DAT_006ee1ac != (code *)0x0) &&
     (ExceptionList = &pvStack_14, iVar1 = (*DAT_006ee1ac)(param_1,param_2), iVar1 != 0)) {
    ExceptionList = pvStack_14;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1 % 100000 >> 0x1f;
  if ((iVar1 / 100000 == 3) && ((iVar1 % 100000) / 1000 + iVar3 == iVar3)) {
    if ((param_2 & 1) == 0) {
      ExceptionList = pvStack_14;
      return 1;
    }
    piVar4 = *(int **)(param_1 + 0x18);
    piVar5 = aiStack_370;
    for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar3 = FUN_005ee8e0(ZEXT48(auStack_310) << 0x20);
    if (((iVar3 == 0) || (fVar6 = (float10)FUN_005aabc0(), (float10)_DAT_0064c7a8 < fVar6)) ||
       (fVar6 = (float10)FUN_005aabc0(), (float10)_DAT_0064b2e8 < fVar6)) {
      FUN_0061c369(auStack_26c,s_room_name___s__room__0X_00677584,auStack_310,iVar3);
      FUN_0061c369(auStack_2d0,s_V___f__f__f____>1000__W___f__f___00677524,(double)fStack_35c,
                   (double)fStack_358,(double)fStack_354,(double)fStack_350,(double)fStack_34c,
                   (double)fStack_348);
      FUN_0061c369(auStack_208,s__Copter_load____s_s_00678eb4,auStack_26c,auStack_2d0);
      FUN_004e1e9c();
    }
    DAT_0067e7b8 = *(undefined4 *)(param_1 + 4);
    if (aiStack_370[3] == 0) {
      iVar3 = FUN_00631d33();
      uStack_c = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00560dc0();
      }
      uStack_c = 0xffffffff;
      if (*(int *)(iVar3 + 0xddc) != 0) {
        if (iVar3 == 0) {
          ExceptionList = pvStack_14;
          return 1;
        }
        FUN_004843e0();
        FUN_00631d5c();
        ExceptionList = pvStack_14;
        return 1;
      }
      iVar3 = FUN_00631d33();
      uStack_c = 1;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00543b10();
      }
    }
    else {
      iVar2 = FUN_00631d33();
      uStack_c = 2;
      if (iVar2 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00544050(DAT_006ee15c,aiStack_370[0],iVar3,auStack_344,auStack_344,uStack_360,0,
                             DAT_006ee168);
      }
    }
    uStack_c = 0xffffffff;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x51d4) = iVar1 % 1000;
      *(undefined4 *)(iVar3 + 0x168) = *(undefined4 *)(param_1 + 4);
      (**(code **)(*(int *)(iVar3 + 0x10) + 0x18))();
      if (aiStack_370[3] == 0) {
        FUN_00560d00();
        FUN_00561480();
        FUN_00561460();
        FUN_00560aa0();
        FUN_00565a90(aiStack_370[1],aiStack_370[2]);
      }
      *(int *)(param_1 + 0x1c) = iVar3;
    }
    ExceptionList = pvStack_14;
    return 1;
  }
  ExceptionList = pvStack_14;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004e2236(int *param_1,int param_2,undefined4 param_3,char *param_4,char *param_5,int param_6
                )

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  size_t sVar6;
  size_t sVar7;
  char *_Str;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 local_434 [24];
  undefined1 local_41c [12];
  undefined1 local_410 [12];
  undefined1 local_404 [12];
  undefined1 local_3f8 [12];
  undefined1 local_3ec [12];
  undefined1 local_3e0 [12];
  undefined1 local_3d4 [12];
  undefined1 local_3c8 [12];
  undefined1 local_3bc [24];
  undefined1 local_3a4 [8];
  undefined4 local_39c;
  undefined1 local_398 [8];
  undefined4 local_390;
  undefined1 local_38c [12];
  int *local_380;
  int local_37c;
  int *local_378;
  int local_374;
  float local_370;
  char *local_36c;
  int local_368;
  char *local_364;
  char local_360 [200];
  int local_298;
  char local_294 [200];
  char local_1cc [200];
  char local_104 [224];
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
  local_20 = 0;
  local_14 = *(undefined4 *)(param_2 + 0x24);
  local_10 = *(undefined4 *)(param_2 + 0x28);
  local_c = *(undefined4 *)(param_2 + 0x2c);
  FUN_004bdd80(local_3c8,param_3,0x42200000,&local_14);
  FUN_004bddd0();
  FUN_004bdd80(local_3d4,param_3,0xc2200000,&local_14);
  FUN_004bddd0();
  local_8 = param_1;
  local_1c = (int *)FUN_004e5437();
  local_18 = (int *)FUN_004e5437();
  local_24 = 0;
  if ((local_1c != param_1) || (local_18 != param_1)) {
    FUN_004cf600((double)*(float *)(param_2 + 0x24),(double)*(float *)(param_2 + 0x28),
                 (double)*(float *)(param_2 + 0x2c));
    FUN_0061c369();
    if (local_1c == param_1) {
      FUN_004cf600();
      FUN_0061c369();
    }
    else {
      FUN_004cf600();
      FUN_0061c369();
    }
    local_374 = 0;
    local_298 = 0;
    while (iVar1 = (**(code **)(*local_8 + 0x3c))(), local_298 < iVar1) {
      local_374 = (**(code **)(*local_8 + 0x40))();
      while (local_374 != 0) {
        iVar1 = FUN_004ea9e0();
        if (iVar1 == 0xe) {
          local_37c = local_374;
          local_378 = (int *)FUN_004eaa20();
          if (((local_378 != (int *)0x0) && (iVar1 = FUN_004ea9e0(), iVar1 == 0xf)) &&
             ((local_380 = local_378, local_378 == local_1c || (local_378 == local_18)))) {
            local_24 = local_37c;
          }
        }
        local_374 = FUN_004eaa00();
      }
      local_298 = local_298 + 1;
    }
    local_294[0] = '\0';
    local_370 = 0.0;
    if (local_24 != 0) {
      FUN_004eaa40(local_3e0,1);
      iVar1 = FUN_004eaa40(local_3ec,1);
      dVar15 = (double)*(float *)(iVar1 + 4);
      pfVar2 = (float *)FUN_004eaa40(local_3f8,1);
      dVar14 = (double)*pfVar2;
      iVar1 = FUN_004eaa40(local_404,0);
      dVar13 = (double)*(float *)(iVar1 + 8);
      iVar1 = FUN_004eaa40(local_410,0);
      dVar12 = (double)*(float *)(iVar1 + 4);
      pfVar2 = (float *)FUN_004eaa40(local_41c,0);
      FUN_004eaa20((double)*pfVar2,dVar12,dVar13,dVar14,dVar15);
      uVar3 = FUN_004cf600();
      uVar3 = FUN_004cf600(uVar3);
      FUN_0061c369(local_294,s_the_Door_from__s_to_the__s__corn_006726b0,uVar3);
      FUN_004eaa40(local_398,0);
      FUN_004eaa40(local_3a4,1);
      FUN_004eaa40(local_3bc,2);
      local_390 = local_c;
      local_39c = local_c;
      FUN_004bde20();
      FUN_004bde20(local_434,local_398,local_3a4);
      FUN_004bde70();
      FUN_005aaad0(local_38c);
      FUN_004e5d20();
      FUN_004bde20();
      fVar11 = (float10)FUN_005aabc0();
      local_370 = (float)fVar11;
    }
    local_36c = s__s__s_s__s__and___s___s_00672700;
    FUN_0061c369(local_360);
    sVar4 = _strlen(local_36c);
    sVar5 = _strlen(param_4);
    sVar6 = _strlen(local_104);
    sVar7 = _strlen(local_360);
    _Str = (char *)FUN_004cf600();
    sVar8 = _strlen(_Str);
    sVar9 = _strlen(local_1cc);
    sVar10 = _strlen(local_294);
    local_368 = sVar4 + sVar5 + sVar6 + sVar7 + sVar8 + sVar9 + sVar10;
    local_364 = (char *)FUN_00631d33();
    FUN_004cf600(local_1cc);
    FUN_0061c369(local_364,local_36c,param_4,local_104,local_360);
    if (local_368 < param_6) {
      FUN_0061e950(param_5,local_364);
    }
    else {
      _strncpy(param_5,local_364,param_6 - 1);
      param_5[param_6 + -1] = '\0';
    }
    local_20 = local_368;
    FUN_00631d5c();
    if (local_370 <= (float)_DAT_0064a738) {
      local_20 = 0;
    }
  }
  return local_20;
}


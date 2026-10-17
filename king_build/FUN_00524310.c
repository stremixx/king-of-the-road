
void __thiscall FUN_00524310(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 **extraout_ECX_01;
  undefined4 **extraout_ECX_02;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 **ppuVar9;
  char *pcVar10;
  undefined1 **ppuVar11;
  float10 fVar12;
  undefined4 **ppuStack_1c4;
  undefined4 **ppuStack_1c0;
  undefined4 *puStack_1bc;
  undefined4 **ppuStack_1b8;
  int local_1a8;
  undefined1 *local_1a4 [5];
  undefined4 **local_190;
  undefined1 local_189;
  undefined4 *local_188;
  undefined1 *local_184;
  undefined4 *local_180 [16];
  undefined4 *local_140 [6];
  undefined4 *local_128 [2];
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 *local_e0 [3];
  undefined1 local_d4 [184];
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006460bb;
  local_14 = ExceptionList;
  ppuStack_1b8 = (undefined4 **)0x52433b;
  ExceptionList = &local_14;
  FUN_005d7cc0();
  local_190 = (undefined4 **)(param_1 + 0x1a8);
  *local_190 = param_2;
  ppuStack_1c0 = &param_2;
  local_188 = *(undefined4 **)(*(int *)(DAT_006d0fd8 + 0x268) + 0x509c);
  ppuStack_1b8 = (undefined4 **)local_d4;
  local_1a4[4] = (undefined1 *)&puStack_1bc;
  puStack_1bc = param_2;
  ppuStack_1c4 = (undefined4 **)0x524379;
  FUN_0041d3f0();
  ppuStack_1c0 = (undefined4 **)0x52437e;
  FUN_0043fd20();
  pcVar8 = &DAT_00676fd0;
  if (local_1c != 1) {
    pcVar8 = &DAT_00676fcc;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar8 = pcVar10 + -uVar5;
  ppuVar11 = local_1a4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *ppuVar11 = *(undefined1 **)pcVar8;
    pcVar8 = pcVar8 + 4;
    ppuVar11 = ppuVar11 + 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x170);
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)ppuVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    ppuVar11 = (undefined1 **)((int)ppuVar11 + 1);
  }
  local_1a4[2] = (undefined1 *)0x0;
  local_1a4[3] = (undefined1 *)0x4;
  switch(uVar2) {
  case 0:
    uVar5 = 0xffffffff;
    pcVar8 = s_police_0066ba48;
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_1a4[2] = (undefined1 *)0x1;
    pcVar8 = pcVar10 + -uVar5;
    ppuVar9 = local_140;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *ppuVar9 = *(undefined4 **)pcVar8;
      pcVar8 = pcVar8 + 4;
      ppuVar9 = ppuVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)ppuVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      ppuVar9 = (undefined4 **)((int)ppuVar9 + 1);
    }
    break;
  case 1:
    uVar5 = 0xffffffff;
    pcVar8 = &DAT_0066ba40;
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_1a4[2] = (undefined1 *)0x7;
    pcVar8 = pcVar10 + -uVar5;
    ppuVar9 = local_140;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *ppuVar9 = *(undefined4 **)pcVar8;
      pcVar8 = pcVar8 + 4;
      ppuVar9 = ppuVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)ppuVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      ppuVar9 = (undefined4 **)((int)ppuVar9 + 1);
    }
    break;
  case 2:
    uVar5 = 0xffffffff;
    pcVar8 = s_oponent_00676fc4;
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_1a4[2] = (undefined1 *)0xd;
    pcVar8 = pcVar10 + -uVar5;
    ppuVar9 = local_140;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *ppuVar9 = *(undefined4 **)pcVar8;
      pcVar8 = pcVar8 + 4;
      ppuVar9 = ppuVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)ppuVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      ppuVar9 = (undefined4 **)((int)ppuVar9 + 1);
    }
    goto LAB_005244b6;
  case 3:
    uVar5 = 0xffffffff;
    pcVar8 = s_driver_00676fbc;
    do {
      pcVar10 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_1a4[2] = (undefined1 *)0x12;
    pcVar8 = pcVar10 + -uVar5;
    ppuVar9 = local_140;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *ppuVar9 = *(undefined4 **)pcVar8;
      pcVar8 = pcVar8 + 4;
      ppuVar9 = ppuVar9 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)ppuVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      ppuVar9 = (undefined4 **)((int)ppuVar9 + 1);
    }
LAB_005244b6:
    local_1a4[3] = (undefined1 *)0x3;
  }
  ppuStack_1b8 = (undefined4 **)local_1a4;
  ppuStack_1c0 = local_140;
  puStack_1bc = (undefined4 *)0x1;
  ppuStack_1c4 = (undefined4 **)s__s_d__sSound_00676fac;
  FUN_0061c369(local_180);
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  ppuStack_1c0 = local_140;
  puStack_1bc = (undefined4 *)0x2;
  ppuStack_1c4 = (undefined4 **)s__s_d__sSound_00676fac;
  FUN_0061c369(local_180);
  uVar2 = FUN_005eea00(local_180);
  *(undefined4 *)(param_1 + 0x39c) = uVar2;
  ppuStack_1b8 = (undefined4 **)local_1a4;
  ppuStack_1c0 = local_140;
  puStack_1bc = (undefined4 *)0x3;
  ppuStack_1c4 = (undefined4 **)s__s_d__sSound_00676fac;
  FUN_0061c369(local_180);
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  ppuStack_1c0 = local_140;
  *(undefined4 *)(param_1 + 0x3a0) = uVar2;
  puStack_1bc = (undefined4 *)0x4;
  ppuStack_1c4 = (undefined4 **)s__s_d__sSound_00676fac;
  FUN_0061c369(local_180);
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  *(undefined4 *)(param_1 + 0x3a4) = uVar2;
  ppuStack_1c0 = local_140;
  puStack_1bc = (undefined4 *)0x5;
  ppuStack_1c4 = (undefined4 **)s__s_d__sSound_00676fac;
  FUN_0061c369(local_180);
  uVar2 = FUN_005eea00(local_180);
  *(undefined4 *)(param_1 + 0x3a8) = uVar2;
  puStack_1bc = (undefined4 *)0x0;
  if (*(int *)(param_1 + 0x398) != 0) {
    ppuStack_1b8 = (undefined4 **)0x3f800000;
    puStack_1bc = (undefined4 *)0x3f800000;
    ppuStack_1c0 = (undefined4 **)0x5245b9;
    FUN_005fd160();
    puStack_1bc = extraout_ECX;
  }
  ppuStack_1b8 = (undefined4 **)local_d4;
  ppuStack_1c0 = &local_188;
  local_1a4[4] = (undefined1 *)&puStack_1bc;
  ppuStack_1c4 = (undefined4 **)0x5245d2;
  FUN_0041d3f0();
  ppuStack_1c0 = (undefined4 **)0x5245d7;
  FUN_0043fd20();
  pcVar8 = &DAT_00676fd0;
  if (local_1c != 1) {
    pcVar8 = &DAT_00676fcc;
  }
  uVar5 = 0xffffffff;
  do {
    pcVar10 = pcVar8;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  ppuStack_1c4 = local_180;
  pcVar8 = pcVar10 + -uVar5;
  ppuVar11 = local_1a4;
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *ppuVar11 = *(undefined1 **)pcVar8;
    pcVar8 = pcVar8 + 4;
    ppuVar11 = ppuVar11 + 1;
  }
  for (uVar5 = uVar5 & 3; puVar3 = local_1a4[2], uVar5 != 0; uVar5 = uVar5 - 1) {
    *(char *)ppuVar11 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    ppuVar11 = (undefined1 **)((int)ppuVar11 + 1);
  }
  ppuStack_1b8 = (undefined4 **)local_1a4;
  puStack_1bc = (undefined4 *)local_1a4[2];
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  puStack_1bc = (undefined4 *)((int)puVar3 + 1);
  *(undefined4 *)(param_1 + 0x3ac) = uVar2;
  ppuStack_1c4 = local_180;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  *(undefined4 *)(param_1 + 0x3b0) = uVar2;
  ppuStack_1b8 = (undefined4 **)local_1a4;
  puStack_1bc = (undefined4 *)((int)puVar3 + 2);
  ppuStack_1c4 = local_180;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  *(undefined4 *)(param_1 + 0x3b4) = uVar2;
  ppuStack_1b8 = (undefined4 **)local_1a4;
  puStack_1bc = (undefined4 *)((int)puVar3 + 3);
  ppuStack_1c4 = local_180;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  puVar7 = (undefined4 *)((int)puVar3 + (int)local_1a4[3]);
  *(undefined4 *)(param_1 + 0x3b8) = uVar2;
  ppuStack_1c4 = local_180;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  puStack_1bc = puVar7;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  *(undefined4 *)(param_1 + 0x3bc) = uVar2;
  ppuStack_1b8 = (undefined4 **)local_1a4;
  puStack_1bc = (undefined4 *)((int)puVar7 + 1);
  ppuStack_1c4 = local_180;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  *(undefined4 *)(param_1 + 0x3c0) = uVar2;
  ppuStack_1c4 = local_180;
  puStack_1bc = (undefined4 *)0x17;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  ppuStack_1b8 = (undefined4 **)local_1a4;
  *(undefined4 *)(param_1 + 0x3c4) = uVar2;
  ppuStack_1c4 = local_180;
  puStack_1bc = (undefined4 *)0x18;
  ppuStack_1c0 = (undefined4 **)s__02d_sSound_00676fa0;
  FUN_0061c369();
  uVar2 = FUN_005eea00(local_180);
  *(undefined4 *)(param_1 + 0x3c8) = uVar2;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  ppuStack_1b8 = (undefined4 **)0x52477a;
  fVar12 = (float10)thunk_FUN_00603580();
  *(double *)(param_1 + 0x1a0) = (double)fVar12;
  if (*(int *)(param_1 + 0x188) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x188) + 0x28) = 1;
  }
  local_1a8 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x184) + 0x28) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x180) + 0x28) = 1;
  local_1a4[2] = (undefined1 *)(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)local_1a4[2] = 0;
  *(undefined4 *)(param_1 + 900) = 0;
  do {
    iVar4 = local_1a8 + *(int *)(param_1 + 0x170) * 4;
    puVar7 = *(undefined4 **)(&DAT_00674bc8 + iVar4 * 4);
    ppuStack_1b8 = (undefined4 **)(iVar4 + 0xbe);
    puStack_1bc = (undefined4 *)0x5247f1;
    puVar3 = (undefined1 *)FUN_005bd200();
    puStack_1bc = extraout_ECX_00;
    local_1a4[4] = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      local_1a4[3] = (undefined1 *)0x0;
      *(undefined4 *)local_1a4[2] = 0;
      if (puVar7 != (undefined4 *)0xffffffff) {
        if ((*(int *)(puVar3 + 0x1c) == 0xc4) || (*(int *)(puVar3 + 0x1c) == 0xcb)) {
          ppuStack_1b8 = (undefined4 **)&local_189;
          puStack_1bc = (undefined4 *)0x524895;
          FUN_00478a20();
          local_11c = 0;
          local_118 = 0;
          local_114 = 0;
          local_110 = 0;
          local_10c = 0;
          local_108 = 0;
          local_104 = 0;
          local_100 = 0;
          local_fc = 0;
          local_f4 = 0xffffffff;
          local_f0 = 0xffffffff;
          ppuStack_1c0 = local_128;
          puStack_1bc = (undefined4 *)0x0;
          local_184 = (undefined1 *)&ppuStack_1c0;
          local_c = 0;
          ppuStack_1c4 = local_190;
          ppuStack_1b8 = ppuStack_1c0;
          FUN_0041d3f0();
          local_184 = (undefined1 *)&ppuStack_1c4;
          ppuStack_1c4 = extraout_ECX_02;
          FUN_0041d3f0(*(int *)(DAT_006d0fd8 + 0x268) + 0x509c);
          iVar4 = FUN_00433740();
          puVar7 = local_128[0];
          if (iVar4 == 3) {
            local_1a4[3] = (undefined1 *)0x1;
          }
          uVar5 = local_120 - (int)local_128[0];
          local_c = 0xffffffff;
          if (uVar5 != 0) {
            if (uVar5 < 0x81) {
              ppuStack_1b8 = (undefined4 **)0x52497f;
              FUN_00401aa0();
              *puVar7 = *(undefined4 *)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4);
              *(undefined4 **)(&DAT_0068c120 + (uVar5 + 7 >> 3) * 4) = puVar7;
              ppuStack_1b8 = (undefined4 **)0x52498f;
              FUN_00434030();
              puVar3 = local_1a4[4];
            }
            else {
              ppuStack_1b8 = (undefined4 **)local_128[0];
              puStack_1bc = (undefined4 *)0x524961;
              FUN_0061c888();
            }
          }
        }
        else {
          ppuStack_1c0 = local_e0;
          local_1a4[4] = (undefined1 *)&ppuStack_1c0;
          ppuStack_1c4 = local_190;
          puStack_1bc = puVar7;
          ppuStack_1b8 = ppuStack_1c0;
          FUN_0041d3f0();
          local_1a4[4] = (undefined1 *)&ppuStack_1c4;
          ppuStack_1c4 = extraout_ECX_01;
          FUN_0041d3f0(&local_188);
          iVar4 = FUN_004316d0();
          if (iVar4 == 1) {
            local_1a4[3] = (undefined1 *)0x1;
          }
          else if (iVar4 == 2) {
            *(undefined4 *)local_1a4[2] = 1;
          }
        }
      }
      *(undefined1 **)(puVar3 + 0x28) = local_1a4[3];
      puStack_1bc = (undefined4 *)local_1a4[3];
    }
    local_1a8 = local_1a8 + 1;
    local_1a4[2] = (undefined1 *)((int)local_1a4[2] + 4);
  } while (local_1a8 < 4);
  if (1 < *(int *)(param_1 + 0x170)) {
    ppuStack_1b8 = (undefined4 **)0x2;
    local_184 = (undefined1 *)&puStack_1bc;
    ppuStack_1c0 = local_190;
    ppuStack_1c4 = (undefined4 **)0x5249d3;
    FUN_0041d3f0();
    ppuStack_1c0 = (undefined4 **)0x5249d8;
    iVar4 = FUN_0043f9b0();
    puStack_1bc = *(undefined4 **)(*(int *)(DAT_006cdc1c + 0x170 + iVar4 * 4) + 0x48);
    ppuStack_1c0 = *(undefined4 ***)(*(int *)(DAT_006cdc1c + 0x29c) + 0x48);
    ppuStack_1c4 = (undefined4 **)0x5249fb;
    FUN_0050b610();
  }
  ExceptionList = local_14;
  return;
}


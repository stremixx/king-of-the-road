
void __thiscall FUN_004dddd0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  char *pcVar11;
  float10 fVar12;
  undefined4 uVar13;
  char local_3f4 [100];
  undefined1 local_390 [100];
  undefined1 local_32c [100];
  undefined1 local_2c8 [200];
  undefined1 local_200 [500];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064536e;
  local_c = ExceptionList;
  if (DAT_006cdbc8 != 0) {
    iVar3 = *(int *)(param_2 + 0x28b4);
    ExceptionList = &local_c;
    param_1[0x49c] = iVar3;
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006970da + iVar3 * 0x970;
    do {
      pcVar11 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar11 = pcVar9 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar11 + -uVar7;
    pcVar11 = local_3f4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_0061c369(local_390,s__sCab_00671e38,local_3f4);
    iVar3 = FUN_005ee8e0(0,local_390);
    param_1[0x88] = iVar3;
    if (iVar3 == 0) {
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_00697a4a + DAT_006cd298 * 0x970;
      do {
        pcVar11 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar11 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar11;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar11 + -uVar7;
      pcVar11 = local_3f4;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar11 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_0061c369(local_390,s__sCab_00671e38,local_3f4);
      iVar3 = FUN_005ee8e0(0,local_390);
      param_1[0x88] = iVar3;
    }
    puVar4 = (undefined4 *)FUN_00631d33(0x58);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      iVar3 = param_1[0x88];
      FUN_005eed00(s_callCabNode_00671e2c,0x11);
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      *puVar4 = &PTR_FUN_0064b7cc;
      puVar4[0x10] = iVar3;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0xffffffff;
      puVar4[9] = *(undefined4 *)(iVar3 + 0x24);
    }
    local_4 = 0xffffffff;
    param_1[0x89] = (int)puVar4;
    FUN_0061c369(local_32c,s__sCabSpace_00671e20,local_3f4);
    iVar3 = FUN_005ee8e0(0,local_32c);
    param_1[0x8a] = iVar3;
    FUN_0061c369(local_2c8,s__sRuleSpace_00671e14,local_3f4);
    iVar3 = FUN_005ee8e0(0,local_2c8);
    param_1[0x8b] = iVar3;
    if ((iVar3 != 0) && (param_1[param_1[0x49c] + 0x44c] == 0)) {
      FUN_004e420a(iVar3,param_1 + param_1[0x49c] * 0xc + 0x8c);
      param_1[param_1[0x49c] + 0x44c] = 1;
    }
    if (((param_1[0x88] == 0) || (param_1[0x8a] == 0)) || (param_1[0x8b] == 0)) {
      FUN_0061c369(local_200,s__s___08X__s___08X__s___08X_00671df4,local_390,param_1[0x88],local_32c
                   ,param_1[0x8a],local_2c8,param_1[0x8b]);
      FUN_004e1e9c(local_200);
    }
    *(int *)(DAT_00695c0c + 0x4c) = param_1[0x89];
    iVar3 = 0;
    fVar12 = (float10)fpatan((float10)*(float *)(&DAT_00696fe8 + param_1[0x49c] * 0x970) /
                             (float10)*(float *)(&DAT_00696fec + param_1[0x49c] * 0x970),(float10)1)
    ;
    param_1[0x4f6] = (int)(float)-fVar12;
    piVar10 = param_1 + 0x501;
    do {
      iVar1 = iVar3 + param_1[0x49c] * 0x25c;
      iVar3 = iVar3 + 1;
      *piVar10 = *(int *)(&DAT_0069700c + iVar1 * 4);
      piVar10 = piVar10 + 1;
    } while (iVar3 < 7);
    param_1[0x4b6] = -1;
    FUN_004de190(*(int *)(param_2 + 0x4fac) + 1);
    uVar13 = 0;
    param_1[4] = param_1[4] | 3;
    fVar12 = (float10)FUN_004e2035(0);
    FUN_004ea4a3((float)fVar12,uVar13);
    uVar13 = 0;
    fVar12 = (float10)FUN_004e2035(0);
    FUN_004ea4a3((float)fVar12,uVar13);
    uVar13 = 0;
    fVar12 = (float10)FUN_004e2035(0);
    FUN_004ea4a3((float)fVar12,uVar13);
    DAT_00695c14 = FUN_005ee8e0(0,s_DamageFCKey_00671de8);
    uVar5 = (**(code **)(*DAT_006957ac + 0x14))();
    uVar13 = DAT_00671d7c;
    uVar6 = (**(code **)(*DAT_006957ac + 0x18))();
    (**(code **)(*param_1 + 0x2c))(0,uVar13,uVar5,uVar6);
    FUN_004ea4a3(0,0);
  }
  ExceptionList = local_c;
  return;
}


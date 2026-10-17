
void FUN_0045fd60(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 **ppuVar9;
  float10 fVar10;
  float10 fVar11;
  undefined4 *apuStack_158 [2];
  int iStack_150;
  undefined4 *puStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 local_120 [6];
  undefined4 local_108 [6];
  undefined1 local_f0 [24];
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [24];
  undefined1 local_90 [24];
  undefined1 local_78 [24];
  undefined1 local_60 [24];
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  undefined1 local_18 [24];
  
  if ((int)((int)param_2 - (int)param_1 & 0xfffffffcU) < 0x41) {
    return;
  }
  do {
    if (param_4 == 0) {
      puStack_13c = (undefined4 *)0x0;
      puStack_140 = (undefined4 *)0x0;
      puVar7 = (undefined4 *)&stack0x00000014;
      puVar4 = local_108;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar7 = (undefined4 *)&stack0x00000014;
      ppuVar9 = apuStack_158;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppuVar9 = (undefined4 *)*puVar7;
        puVar7 = puVar7 + 1;
        ppuVar9 = ppuVar9 + 1;
      }
      FUN_0046c140(param_1,param_2);
      apuStack_158[0] = param_1;
      puVar7 = local_108;
      piVar8 = &iStack_150;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      apuStack_158[1] = param_2;
      FUN_0046ac90();
      return;
    }
    param_4 = param_4 + -1;
    puVar5 = param_2 + -1;
    puVar7 = (undefined4 *)&stack0x00000014;
    puVar4 = local_120;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    puStack_13c = local_120;
    puVar7 = param_1 + (((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f)
                       >> 1);
    piVar8 = (int *)*puVar7;
    puStack_140 = (undefined4 *)(*(int *)*param_1 + 0x38);
    puStack_144 = local_90;
    uStack_148 = 0x45fdf7;
    uStack_148 = FUN_0045be30();
    puStack_14c = (undefined4 *)0x45fdfd;
    fVar10 = (float10)FUN_004577a0();
    puStack_14c = local_120;
    iStack_150 = *piVar8 + 0x38;
    apuStack_158[1] = (undefined4 *)local_c0;
    apuStack_158[0] = (undefined4 *)0x45fe19;
    apuStack_158[0] = (undefined4 *)FUN_0045be30();
    fVar11 = (float10)FUN_004577a0();
    if (fVar11 <= (float10)(double)fVar10) {
      puStack_13c = (undefined4 *)*puVar5;
      puStack_140 = (undefined4 *)*param_1;
      puStack_144 = (undefined1 *)0x45fee7;
      cVar2 = FUN_004600a0();
      puVar4 = param_1;
      if (cVar2 == '\0') {
        puStack_13c = (undefined4 *)*puVar5;
        puStack_140 = (undefined4 *)*puVar7;
        puStack_144 = (undefined1 *)0x45feff;
        cVar2 = FUN_004600a0();
        puVar4 = puVar7;
        if (cVar2 != '\0') goto LAB_0045ff03;
      }
    }
    else {
      piVar8 = (int *)*puVar5;
      puStack_13c = local_120;
      puStack_140 = (undefined4 *)(*(int *)*puVar7 + 0x38);
      puStack_144 = local_60;
      uStack_148 = 0x45fe4e;
      uStack_148 = FUN_0045be30();
      puStack_14c = (undefined4 *)0x45fe54;
      fVar10 = (float10)FUN_004577a0();
      puStack_14c = local_120;
      iStack_150 = *piVar8 + 0x38;
      apuStack_158[1] = (undefined4 *)local_f0;
      apuStack_158[0] = (undefined4 *)0x45fe6d;
      apuStack_158[0] = (undefined4 *)FUN_0045be30();
      fVar11 = (float10)FUN_004577a0();
      puVar4 = puVar7;
      if (fVar11 <= (float10)(double)fVar10) {
        piVar8 = (int *)*puVar5;
        puStack_13c = local_120;
        puStack_140 = (undefined4 *)(*(int *)*param_1 + 0x38);
        puStack_144 = local_30;
        uStack_148 = 0x45fea2;
        uStack_148 = FUN_0045be30();
        puStack_14c = (undefined4 *)0x45fea8;
        fVar10 = (float10)FUN_004577a0();
        puStack_14c = local_120;
        iStack_150 = *piVar8 + 0x38;
        apuStack_158[1] = (undefined4 *)local_d8;
        apuStack_158[0] = (undefined4 *)0x45fec1;
        apuStack_158[0] = (undefined4 *)FUN_0045be30();
        fVar11 = (float10)FUN_004577a0();
        puVar4 = param_1;
        if ((float10)(double)fVar10 < fVar11) {
LAB_0045ff03:
          puVar4 = puVar5;
        }
      }
    }
    piVar8 = (int *)*puVar4;
    puVar7 = (undefined4 *)&stack0x00000014;
    puVar4 = local_108;
    for (iVar3 = 6; puVar5 = param_1, puVar6 = param_2, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    while( true ) {
      while( true ) {
        puStack_13c = local_108;
        puStack_144 = local_a8;
        puStack_140 = (undefined4 *)(*(int *)*puVar5 + 0x38);
        uStack_148 = 0x45ff41;
        uStack_148 = FUN_0045be30();
        puStack_14c = (undefined4 *)0x45ff47;
        fVar10 = (float10)FUN_004577a0();
        puStack_14c = local_108;
        iStack_150 = *piVar8 + 0x38;
        apuStack_158[1] = (undefined4 *)local_78;
        apuStack_158[0] = (undefined4 *)0x45ff64;
        apuStack_158[0] = (undefined4 *)FUN_0045be30();
        fVar11 = (float10)FUN_004577a0();
        if (fVar11 <= (float10)(double)fVar10) break;
        puVar5 = puVar5 + 1;
      }
      do {
        piVar1 = (int *)puVar6[-1];
        puStack_13c = local_108;
        puStack_140 = (undefined4 *)(*piVar8 + 0x38);
        puVar6 = puVar6 + -1;
        puStack_144 = local_48;
        uStack_148 = 0x45ff9c;
        uStack_148 = FUN_0045be30();
        puStack_14c = (undefined4 *)0x45ffa2;
        fVar10 = (float10)FUN_004577a0();
        puStack_14c = local_108;
        iStack_150 = *piVar1 + 0x38;
        apuStack_158[1] = (undefined4 *)local_18;
        apuStack_158[0] = (undefined4 *)0x45ffbe;
        apuStack_158[0] = (undefined4 *)FUN_0045be30();
        fVar11 = (float10)FUN_004577a0();
      } while ((float10)(double)fVar10 < fVar11);
      if (puVar6 <= puVar5) break;
      puStack_144 = (undefined1 *)0x45ffdd;
      puStack_140 = puVar5;
      puStack_13c = puVar6;
      FUN_0046ce20();
      puVar5 = puVar5 + 1;
    }
    apuStack_158[0] = (undefined4 *)0x0;
    puVar7 = (undefined4 *)&stack0x00000014;
    piVar8 = &iStack_150;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      piVar8 = piVar8 + 1;
    }
    apuStack_158[1] = (undefined4 *)param_4;
    FUN_0045fd60(puVar5,param_2);
    param_2 = puVar5;
    if ((int)((int)puVar5 - (int)param_1 & 0xfffffffcU) < 0x41) {
      return;
    }
  } while( true );
}


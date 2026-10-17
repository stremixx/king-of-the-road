
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041fde0(void)

{
  int iVar1;
  int **extraout_ECX;
  undefined4 *puVar2;
  float10 fVar3;
  int **ppiVar4;
  int **ppiStack_34;
  int **ppiStack_30;
  int *local_2c;
  int *local_1c;
  undefined8 local_18;
  double local_10;
  
  local_2c = *DAT_0068a8f0;
  if ((int **)local_2c != DAT_0068a8f0) {
    do {
      ppiStack_30 = (int **)0x41fe07;
      local_1c = local_2c;
      iVar1 = FUN_0040a950();
      ppiStack_34 = *(int ***)(iVar1 + 0x2f4);
      ppiStack_30 = *(int ***)(iVar1 + 0x2f0);
      local_2c = (int *)ppiStack_34;
      FUN_0041d3f0(&local_1c);
      FUN_0040a950();
      ppiStack_34 = (int **)0x41fe3a;
      FUN_00488180();
      local_2c = local_1c;
      ppiStack_30 = (int **)0x41fe4a;
      iVar1 = FUN_0040a950();
      *(undefined4 *)(iVar1 + 0x2f0) = 0;
      *(undefined4 *)(iVar1 + 0x2f4) = 0;
      local_2c = (int *)*local_1c;
    } while ((int **)local_2c != DAT_0068a8f0);
  }
  local_1c = *DAT_0068a8f0;
  local_10 = 0.0;
  if ((int **)local_1c != DAT_0068a8f0) {
    do {
      ppiStack_34 = &local_1c;
      ppiStack_30 = DAT_0068a8f0;
      local_2c = (int *)DAT_0068a8f0;
      FUN_0041d3f0();
      ppiStack_34 = (int **)0x41fea2;
      FUN_004042b0();
      ppiStack_30 = (int **)0x41fea7;
      fVar3 = (float10)FUN_0041fd90();
      local_1c = (int *)*local_1c;
      local_10 = (double)(fVar3 + (float10)local_10);
    } while ((int **)local_1c != DAT_0068a8f0);
    if (local_10 != _DAT_0064a668) {
      local_1c = *DAT_0068a8f0;
      if ((int **)local_1c != DAT_0068a8f0) {
        do {
          ppiVar4 = DAT_0068a8f0;
          local_2c = (int *)DAT_0068a8f0;
          ppiStack_30 = &local_1c;
          local_18 = 0.0;
          ppiStack_34 = (int **)0x41ff08;
          FUN_0041d3f0();
          ppiStack_30 = (int **)0x41ff0d;
          iVar1 = FUN_0040a950();
          ppiStack_30 = *(int ***)(iVar1 + 0xa8);
          if (ppiStack_30 == ppiVar4) {
            ppiStack_34 = &local_1c;
            local_2c = (int *)ppiStack_30;
            FUN_0041d3f0();
            ppiStack_34 = (int **)0x41ff36;
            FUN_004042b0();
            ppiStack_30 = (int **)0x41ff3b;
            fVar3 = (float10)FUN_0041fd90();
            local_18 = (double)fVar3;
            local_2c = local_1c;
            ppiStack_30 = (int **)0x41ff4c;
            iVar1 = FUN_0040a950();
            puVar2 = *(undefined4 **)(iVar1 + 0x98);
            while( true ) {
              local_2c = local_1c;
              ppiStack_30 = (int **)0x41ff63;
              iVar1 = FUN_0040a950();
              if (puVar2 == *(undefined4 **)(iVar1 + 0x9c)) break;
              local_2c = (int *)*puVar2;
              ppiStack_30 = (int **)0x41ff7c;
              fVar3 = (float10)FUN_0041fd90();
              puVar2 = puVar2 + 4;
              local_18 = (double)(fVar3 + (float10)local_18);
            }
          }
          local_2c = local_1c;
          ppiStack_30 = (int **)0x41ff9a;
          iVar1 = FUN_0040a950();
          *(int ***)(iVar1 + 0x300) = (int **)local_18;
          *(undefined4 *)(iVar1 + 0x304) = local_18._4_4_;
          local_2c = local_1c;
          ppiStack_30 = (int **)0x41ffbb;
          iVar1 = FUN_0040a950();
          *(double *)(iVar1 + 0x2f8) = local_18 / local_10;
          local_2c = local_1c;
          ppiStack_30 = (int **)0x41ffd6;
          iVar1 = FUN_0040a950();
          if ((double)CONCAT44(DAT_0066b714,DAT_0066b710) <= *(double *)(iVar1 + 0x2f8)) {
            local_2c = local_1c;
            ppiStack_30 = (int **)0x41fffa;
            iVar1 = FUN_0040a950();
            if (*(char *)(iVar1 + 0x308) == '\0') {
              local_2c = local_1c;
              ppiStack_30 = (int **)0x420015;
              iVar1 = FUN_0040a950();
              *(undefined1 *)(iVar1 + 0x308) = 1;
              DAT_0066b710 = 0xcccccccd;
              local_2c = (int *)0x0;
              ppiStack_30 = (int **)0xc;
              DAT_0066b714 = 0x3ff0cccc;
              DAT_0068c100 = 1;
              ppiVar4 = extraout_ECX;
              ppiStack_34 = extraout_ECX;
              FUN_0041d3f0(&local_1c);
              FUN_004042b0(ppiVar4);
              FUN_004015a0();
            }
          }
          local_1c = (int *)*local_1c;
        } while ((int **)local_1c != DAT_0068a8f0);
      }
      local_2c = (int *)&local_18;
      ppiStack_30 = (int **)0x42007e;
      FUN_00477c00();
      if ((((int **)local_18 != DAT_0068a8f0) &&
          ((double)CONCAT44(DAT_0066b714,DAT_0066b710) <= *(double *)((int **)local_18 + 0xc0))) &&
         (*(char *)((int **)local_18 + 0xc4) == '\0')) {
        local_2c = (int *)0x0;
        ppiStack_30 = (int **)0xc;
        ppiStack_34 = (int **)local_18;
        *(undefined1 *)((int **)local_18 + 0xc4) = 1;
        DAT_0066b710 = 0xcccccccd;
        DAT_0066b714 = 0x3ff0cccc;
        DAT_0068c100 = 1;
        FUN_00477c00(&ppiStack_34);
        FUN_004015a0();
      }
    }
  }
  return;
}


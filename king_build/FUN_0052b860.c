
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0052b860(undefined4 param_1,float param_2,undefined4 param_3,float param_4,float param_5,
            float param_6,float param_7,float param_8,float param_9,float param_10,float param_11,
            float param_12,float param_13,float param_14,float param_15,float param_16,
            float param_17,float param_18,float param_19,int param_20,int param_21,float param_22,
            float param_23,float param_24,float param_25,float param_26,float param_27,
            float param_28,float param_29,float param_30,float param_31,float param_32,
            float param_33)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int extraout_ECX;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 *puVar14;
  float10 fVar15;
  undefined4 in_stack_00000094;
  int in_stack_00000130;
  undefined4 in_stack_000011d0;
  undefined4 in_stack_000011d4;
  
  FUN_0061d4f0();
  in_stack_00000094 = FUN_00590420(in_stack_000011d0,in_stack_000011d4);
  fVar1 = _DAT_00695954 - *(float *)(extraout_ECX + 0x118);
  fVar2 = _DAT_00695958 - *(float *)(extraout_ECX + 0x11c);
  fVar3 = _DAT_0069595c - *(float *)(extraout_ECX + 0x120);
  if (_DAT_0064c7a8 < fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) {
    return in_stack_00000094;
  }
  iVar13 = 0x14;
  do {
    FUN_005eebf0();
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  puVar8 = &param_24;
  iVar13 = 4;
  do {
    puVar8[-2] = 0;
    puVar8[-1] = 0;
    *puVar8 = 0;
    puVar8 = puVar8 + 3;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  param_21 = 0;
  param_7 = 2.8026e-44;
  puVar8 = (undefined4 *)&stack0x000001cc;
  do {
    puVar8[-3] = DAT_007015b0;
    puVar8[-2] = DAT_007015b4;
    puVar8[-1] = DAT_007015b8;
    *puVar8 = DAT_00701590;
    puVar8[1] = DAT_00701594;
    puVar8[2] = DAT_00701598;
    param_7 = (float)((int)param_7 + -1);
    puVar8[0xb] = 0;
    puVar8[9] = 0;
    puVar8 = puVar8 + 0x34;
  } while (param_7 != 0.0);
  param_23 = (float)DAT_007015b4;
  param_22 = (float)DAT_007015b0;
  param_24 = (float)DAT_007015b8;
  puVar8 = &param_22;
  puVar12 = &param_25;
  for (iVar13 = 9; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_005ab130(&param_8,extraout_ECX + 0x1b4,extraout_ECX + 0xf4);
  param_20 = 0;
  if (*(float *)(extraout_ECX + 0x114) <= (float)_DAT_0064a798) {
    if (*(float *)(extraout_ECX + 0x114) < (float)_DAT_0064dd88) {
      iVar13 = *(int *)(extraout_ECX + 0x2448);
      param_24 = ((float)(&DAT_006c5c98)[iVar13 * 0xdb] + (float)(&DAT_006c5ca4)[iVar13 * 0xdb]) *
                 (float)_DAT_0064a6d0;
      param_4 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
      param_5 = (float)(&DAT_006c5c94)[iVar13 * 0xdb];
      param_7 = param_14 * param_24;
      param_31 = param_4 * param_8 + param_5 * param_11 + param_17 + param_7;
      param_23 = param_15 * param_24;
      param_32 = param_9 * param_4 + param_5 * param_12 + param_18 + param_23;
      param_24 = param_24 * param_16;
      param_33 = param_10 * param_4 + param_5 * param_13 + param_19 + param_24;
      fVar1 = (float)(&DAT_006c5c90)[iVar13 * 0xdb];
      fVar2 = (float)(&DAT_006c5c94)[iVar13 * 0xdb];
      param_28 = fVar1 * param_8 + fVar2 * param_11 + param_17 + param_7;
      param_29 = param_9 * fVar1 + fVar2 * param_12 + param_18 + param_23;
      param_30 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_24;
      fVar1 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
      fVar2 = (float)(&DAT_006c5ca0)[iVar13 * 0xdb];
      param_25 = fVar1 * param_8 + fVar2 * param_11 + param_17 + param_7;
      param_26 = param_9 * fVar1 + fVar2 * param_12 + param_18 + param_23;
      param_27 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_24;
      fVar1 = (float)(&DAT_006c5c90)[iVar13 * 0xdb];
      fVar2 = (float)(&DAT_006c5ca0)[iVar13 * 0xdb];
      param_22 = fVar1 * param_8 + param_11 * fVar2 + param_17 + param_7;
      param_23 = param_9 * fVar1 + param_12 * fVar2 + param_18 + param_23;
      param_24 = param_10 * fVar1 + param_13 * fVar2 + param_19 + param_24;
      iVar13 = *(int *)(&DAT_006c5e30 + iVar13 * 0x36c);
      goto joined_r0x0052be63;
    }
    if ((float)_DAT_0064dd88 <= *(float *)(extraout_ECX + 0x104)) {
      if ((float)_DAT_0064a798 < *(float *)(extraout_ECX + 0x104)) {
        iVar13 = *(int *)(extraout_ECX + 0x2448);
        fVar5 = ((float)(&DAT_006c5ca0)[iVar13 * 0xdb] + (float)(&DAT_006c5c94)[iVar13 * 0xdb]) *
                (float)_DAT_0064a6d0;
        fVar3 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
        fVar4 = (float)(&DAT_006c5ca4)[iVar13 * 0xdb];
        FUN_0041ce10(param_11 * fVar5 + fVar3 * param_8 + param_14 * fVar4 + param_17,
                     param_15 * fVar4 + param_12 * fVar5 + param_9 * fVar3 + param_18,
                     param_16 * fVar4 + param_13 * fVar5 + param_10 * fVar3 + param_19);
        param_33 = param_2;
        fVar3 = (float)(&DAT_006c5c90)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        fVar4 = (float)(&DAT_006c5ca4)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_31 = fVar1;
        param_32 = fVar2;
        FUN_0041ce10(param_11 * fVar5 + fVar3 * param_8 + param_14 * fVar4 + param_17,
                     param_15 * fVar4 + param_12 * fVar5 + param_9 * fVar3 + param_18,
                     param_16 * fVar4 + param_13 * fVar5 + param_10 * fVar3 + param_19);
        param_30 = param_2;
        fVar3 = (float)(&DAT_006c5c9c)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        fVar4 = (float)(&DAT_006c5c98)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_28 = fVar1;
        param_29 = fVar2;
        FUN_0041ce10(param_11 * fVar5 + fVar3 * param_8 + param_14 * fVar4 + param_17,
                     param_15 * fVar4 + param_12 * fVar5 + param_9 * fVar3 + param_18,
                     param_16 * fVar4 + param_13 * fVar5 + param_10 * fVar3 + param_19);
        param_27 = param_2;
        fVar3 = (float)(&DAT_006c5c90)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        fVar4 = (float)(&DAT_006c5c98)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_25 = fVar1;
        param_26 = fVar2;
        FUN_0041ce10(param_11 * fVar5 + fVar3 * param_8 + param_14 * fVar4 + param_17,
                     param_15 * fVar4 + param_12 * fVar5 + param_9 * fVar3 + param_18,
                     param_16 * fVar4 + param_13 * fVar5 + param_10 * fVar3 + param_19);
        param_24 = param_2;
        param_22 = fVar1;
        param_23 = fVar2;
        if (*(int *)(&DAT_006c5e30 + *(int *)(extraout_ECX + 0x2448) * 0x36c) == 2) {
          param_20 = 2;
        }
        goto LAB_0052c84e;
      }
      iVar13 = *(int *)(extraout_ECX + 0x2448);
      if (*(float *)(extraout_ECX + 0x100) <= (float)_DAT_0064a798) {
        param_4 = ((float)(&DAT_006c5c90)[iVar13 * 0xdb] + (float)(&DAT_006c5c9c)[iVar13 * 0xdb]) *
                  (float)_DAT_0064a6d0;
        param_5 = (float)(&DAT_006c5c94)[iVar13 * 0xdb];
        param_6 = (float)(&DAT_006c5c98)[iVar13 * 0xdb];
        param_7 = param_4;
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        fVar1 = param_7;
        param_31 = *pfVar7;
        param_32 = pfVar7[1];
        param_33 = pfVar7[2];
        puVar8 = (undefined4 *)
                 FUN_0041ce10(param_7,(&DAT_006c5c94)[*(int *)(extraout_ECX + 0x2448) * 0xdb],
                              (&DAT_006c5ca4)[*(int *)(extraout_ECX + 0x2448) * 0xdb]);
        param_4 = (float)*puVar8;
        param_5 = (float)puVar8[1];
        param_6 = (float)puVar8[2];
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        param_28 = *pfVar7;
        param_29 = pfVar7[1];
        param_30 = pfVar7[2];
        puVar8 = (undefined4 *)
                 FUN_0041ce10(fVar1,(&DAT_006c5ca0)[*(int *)(extraout_ECX + 0x2448) * 0xdb],
                              (&DAT_006c5c98)[*(int *)(extraout_ECX + 0x2448) * 0xdb]);
        param_4 = (float)*puVar8;
        param_5 = (float)puVar8[1];
        param_6 = (float)puVar8[2];
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        param_25 = *pfVar7;
        param_26 = pfVar7[1];
        param_27 = pfVar7[2];
        pfVar7 = (float *)FUN_0041ce10(fVar1,(&DAT_006c5ca0)[*(int *)(extraout_ECX + 0x2448) * 0xdb]
                                       ,(&DAT_006c5ca4)[*(int *)(extraout_ECX + 0x2448) * 0xdb]);
        param_4 = *pfVar7;
        param_5 = pfVar7[1];
        param_6 = pfVar7[2];
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        param_22 = *pfVar7;
        param_23 = pfVar7[1];
        param_24 = pfVar7[2];
        iVar13 = *(int *)(&DAT_006c5e30 + *(int *)(extraout_ECX + 0x2448) * 0x36c);
      }
      else {
        fVar3 = ((float)(&DAT_006c5c90)[iVar13 * 0xdb] + (float)(&DAT_006c5c9c)[iVar13 * 0xdb]) *
                (float)_DAT_0064a6d0;
        param_5 = (float)(&DAT_006c5c94)[iVar13 * 0xdb];
        param_6 = (float)(&DAT_006c5c98)[iVar13 * 0xdb];
        param_4 = fVar3;
        FUN_0041ce10(param_8 * fVar3 + param_11 * param_5 + param_14 * param_6 + param_17,
                     param_12 * param_5 + param_15 * param_6 + param_9 * fVar3 + param_18,
                     param_13 * param_5 + param_16 * param_6 + param_10 * fVar3 + param_19);
        param_24 = param_2;
        param_5 = (float)(&DAT_006c5c94)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_6 = (float)(&DAT_006c5ca4)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_4 = fVar3;
        param_22 = fVar1;
        param_23 = fVar2;
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        param_25 = *pfVar7;
        param_26 = pfVar7[1];
        param_27 = pfVar7[2];
        param_5 = (float)(&DAT_006c5ca0)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_6 = (float)(&DAT_006c5c98)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_4 = fVar3;
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        param_28 = *pfVar7;
        param_29 = pfVar7[1];
        param_30 = pfVar7[2];
        param_5 = (float)(&DAT_006c5ca0)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_6 = (float)(&DAT_006c5ca4)[*(int *)(extraout_ECX + 0x2448) * 0xdb];
        param_4 = fVar3;
        pfVar7 = (float *)FUN_0043f690(&stack0x00000088,&param_4,&param_8);
        param_31 = *pfVar7;
        param_32 = pfVar7[1];
        param_33 = pfVar7[2];
        iVar13 = *(int *)(&DAT_006c5e30 + *(int *)(extraout_ECX + 0x2448) * 0x36c);
      }
      if (iVar13 != 1) goto LAB_0052c84e;
      goto LAB_0052c846;
    }
    iVar13 = *(int *)(extraout_ECX + 0x2448);
    fVar3 = ((float)(&DAT_006c5ca0)[iVar13 * 0xdb] + (float)(&DAT_006c5c94)[iVar13 * 0xdb]) *
            (float)_DAT_0064a6d0;
    fVar1 = (float)(&DAT_006c5c90)[iVar13 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca4)[iVar13 * 0xdb];
    fVar4 = param_11 * fVar3;
    param_22 = fVar1 * param_8 + param_14 * fVar2 + param_17 + fVar4;
    param_7 = param_12 * fVar3;
    param_23 = param_9 * fVar1 + param_15 * fVar2 + param_18 + param_7;
    fVar3 = fVar3 * param_13;
    param_24 = param_10 * fVar1 + param_16 * fVar2 + param_19 + fVar3;
    fVar1 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca4)[iVar13 * 0xdb];
    param_25 = fVar1 * param_8 + param_14 * fVar2 + param_17 + fVar4;
    param_26 = param_9 * fVar1 + param_15 * fVar2 + param_18 + param_7;
    param_27 = param_10 * fVar1 + param_16 * fVar2 + param_19 + fVar3;
    fVar1 = (float)(&DAT_006c5c90)[iVar13 * 0xdb];
    fVar2 = (float)(&DAT_006c5c98)[iVar13 * 0xdb];
    fVar6 = fVar1 * param_8 + param_14 * fVar2 + param_17 + fVar4;
    fVar5 = param_15 * fVar2 + param_9 * fVar1 + param_18 + param_7;
    fVar1 = param_16 * fVar2 + param_10 * fVar1 + param_19 + fVar3;
    param_4 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
    param_6 = (float)(&DAT_006c5c98)[iVar13 * 0xdb];
    param_28 = fVar6;
    param_29 = fVar5;
    param_30 = fVar1;
    FUN_0041ce10(param_4 * param_8 + param_14 * param_6 + param_17 + fVar4,
                 param_15 * param_6 + param_9 * param_4 + param_18 + param_7,
                 param_16 * param_6 + param_10 * param_4 + param_19 + fVar3);
    param_31 = fVar6;
    param_32 = fVar5;
    param_33 = fVar1;
    if (*(int *)(&DAT_006c5e30 + *(int *)(extraout_ECX + 0x2448) * 0x36c) == 2) {
      param_20 = 2;
    }
  }
  else {
    iVar13 = *(int *)(extraout_ECX + 0x2448);
    param_33 = ((float)(&DAT_006c5c98)[iVar13 * 0xdb] + (float)(&DAT_006c5ca4)[iVar13 * 0xdb]) *
               (float)_DAT_0064a6d0;
    param_4 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
    param_5 = (float)(&DAT_006c5c94)[iVar13 * 0xdb];
    param_31 = param_14 * param_33;
    param_22 = param_8 * param_4 + param_11 * param_5 + param_17 + param_31;
    param_7 = param_15 * param_33;
    param_23 = param_9 * param_4 + param_12 * param_5 + param_18 + param_7;
    param_33 = param_33 * param_16;
    param_24 = param_10 * param_4 + param_13 * param_5 + param_19 + param_33;
    fVar1 = (float)(&DAT_006c5c90)[iVar13 * 0xdb];
    fVar2 = (float)(&DAT_006c5c94)[iVar13 * 0xdb];
    param_25 = fVar1 * param_8 + fVar2 * param_11 + param_17 + param_31;
    param_26 = param_9 * fVar1 + fVar2 * param_12 + param_18 + param_7;
    param_27 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_33;
    fVar1 = (float)(&DAT_006c5c9c)[iVar13 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca0)[iVar13 * 0xdb];
    param_28 = fVar1 * param_8 + fVar2 * param_11 + param_17 + param_31;
    param_29 = param_9 * fVar1 + fVar2 * param_12 + param_18 + param_7;
    param_30 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_33;
    fVar1 = (float)(&DAT_006c5c90)[iVar13 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca0)[iVar13 * 0xdb];
    param_31 = fVar1 * param_8 + fVar2 * param_11 + param_17 + param_31;
    param_32 = param_9 * fVar1 + fVar2 * param_12 + param_18 + param_7;
    param_33 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_33;
    iVar13 = *(int *)(&DAT_006c5e30 + iVar13 * 0x36c);
joined_r0x0052be63:
    if (iVar13 == 3) {
LAB_0052c846:
      param_20 = 1;
    }
  }
LAB_0052c84e:
  FUN_004042a0();
  iVar13 = FUN_0058c7f0(&stack0x00000098);
  if (iVar13 != 0) {
    puVar8 = (undefined4 *)&stack0x0000018c;
    do {
      FUN_0043f690(&param_4,&stack0x00000098,extraout_ECX + 0xf4);
      iVar13 = iVar13 * 0xd0 + extraout_ECX;
      FUN_004bde20(&stack0x00000000,iVar13 + 0x134c,&param_4);
      if ((*(int *)(iVar13 + 0x138c) == 0) &&
         (fVar15 = (float10)FUN_004e1080(&stack0x00000000,&stack0x00000000),
         fVar15 < (float10)_DAT_0064dd80)) {
        puVar12 = (undefined4 *)(iVar13 + 0x1318);
        puVar14 = puVar8;
        for (iVar11 = 0x34; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        param_21 = param_21 + 1;
        puVar8 = puVar8 + 0x34;
      }
      iVar13 = FUN_0058c7f0(&stack0x00000098);
    } while (iVar13 != 0);
    if (param_21 != 0) goto LAB_0052ca3a;
  }
  uVar9 = FUN_004bdd80(&stack0x000000b0,&DAT_00701590,*(undefined4 *)(extraout_ECX + 0x1e0),
                       extraout_ECX + 0xf4);
  uVar9 = FUN_004bde20(&stack0x000000a4,extraout_ECX + 0x1d8,uVar9);
  FUN_0043f690(&stack0x00000000,uVar9);
  uVar9 = FUN_004bdd80(&stack0x000000a4,&DAT_00701590,0x41200000);
  FUN_004bddd0(&param_4,&stack0x00000000,uVar9);
  uVar9 = FUN_004bdd80(&stack0x000000a4,&DAT_00701590,0x41200000);
  FUN_004bde20(&stack0x00000088,&stack0x00000000,uVar9);
  FUN_005eebf0();
  uVar9 = FUN_004e5437(*(undefined4 *)(extraout_ECX + 0x220),extraout_ECX + 0x118,&param_4);
  uVar10 = FUN_004e5e08(extraout_ECX + -0x100,uVar9,&param_4,&stack0x00000088,&stack0x000000bc);
  if (((uVar10 & 1) != 0) && (in_stack_00000130 == 0)) {
    param_21 = 1;
    puVar8 = (undefined4 *)&stack0x000000bc;
    puVar12 = (undefined4 *)&stack0x0000018c;
    for (iVar13 = 0x34; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar12 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar12 = puVar12 + 1;
    }
  }
LAB_0052ca3a:
  FUN_004bb2c0(&stack0x0000018c,param_21,&param_22,
               (&DAT_006c5c8c)[*(int *)(extraout_ECX + 0x2448) * 0xdb],param_20 != 0);
  return in_stack_00000094;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0052b8f0(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float param_10,float param_11,float param_12,
            float param_13,float param_14,float param_15,float param_16,float param_17,
            float param_18,float param_19,float param_20,int param_21,int param_22,float param_23,
            float param_24,float param_25,float param_26,float param_27,float param_28,
            float param_29,float param_30,float param_31,float param_32,float param_33,
            float param_34)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined4 in_stack_00000098;
  int in_stack_00000134;
  
  iVar10 = 0x14;
  do {
    FUN_005eebf0();
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  puVar5 = &param_25;
  iVar10 = 4;
  do {
    puVar5[-2] = 0;
    puVar5[-1] = 0;
    *puVar5 = 0;
    puVar5 = puVar5 + 3;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  param_22 = 0;
  param_8 = 2.8026e-44;
  puVar5 = (undefined4 *)&stack0x000001d0;
  do {
    puVar5[-3] = DAT_007015b0;
    puVar5[-2] = DAT_007015b4;
    puVar5[-1] = DAT_007015b8;
    *puVar5 = DAT_00701590;
    puVar5[1] = DAT_00701594;
    puVar5[2] = DAT_00701598;
    param_8 = (float)((int)param_8 + -1);
    puVar5[0xb] = 0;
    puVar5[9] = 0;
    puVar5 = puVar5 + 0x34;
  } while (param_8 != 0.0);
  param_24 = (float)DAT_007015b4;
  param_23 = (float)DAT_007015b0;
  param_25 = (float)DAT_007015b8;
  puVar5 = &param_23;
  puVar9 = &param_26;
  for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar9 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_005ab130(&param_9,unaff_EBP + 0x1b4,unaff_EBP + 0xf4);
  param_21 = 0;
  if (*(float *)(unaff_EBP + 0x114) <= (float)_DAT_0064a798) {
    if (*(float *)(unaff_EBP + 0x114) < (float)_DAT_0064dd88) {
      iVar10 = *(int *)(unaff_EBP + 0x2448);
      param_25 = ((float)(&DAT_006c5c98)[iVar10 * 0xdb] + (float)(&DAT_006c5ca4)[iVar10 * 0xdb]) *
                 (float)_DAT_0064a6d0;
      param_5 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
      param_6 = (float)(&DAT_006c5c94)[iVar10 * 0xdb];
      param_8 = param_15 * param_25;
      param_32 = param_5 * param_9 + param_6 * param_12 + param_18 + param_8;
      param_4 = param_16 * param_25;
      param_33 = param_10 * param_5 + param_6 * param_13 + param_19 + param_4;
      param_25 = param_25 * param_17;
      param_34 = param_11 * param_5 + param_6 * param_14 + param_20 + param_25;
      fVar1 = (float)(&DAT_006c5c90)[iVar10 * 0xdb];
      fVar2 = (float)(&DAT_006c5c94)[iVar10 * 0xdb];
      param_29 = fVar1 * param_9 + fVar2 * param_12 + param_18 + param_8;
      param_30 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_4;
      param_31 = param_11 * fVar1 + fVar2 * param_14 + param_20 + param_25;
      fVar1 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
      fVar2 = (float)(&DAT_006c5ca0)[iVar10 * 0xdb];
      param_26 = fVar1 * param_9 + fVar2 * param_12 + param_18 + param_8;
      param_27 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_4;
      param_28 = param_11 * fVar1 + fVar2 * param_14 + param_20 + param_25;
      fVar1 = (float)(&DAT_006c5c90)[iVar10 * 0xdb];
      fVar2 = (float)(&DAT_006c5ca0)[iVar10 * 0xdb];
      param_23 = fVar1 * param_9 + param_12 * fVar2 + param_18 + param_8;
      param_24 = param_10 * fVar1 + param_13 * fVar2 + param_19 + param_4;
      param_25 = param_11 * fVar1 + param_14 * fVar2 + param_20 + param_25;
      iVar10 = *(int *)(&DAT_006c5e30 + iVar10 * 0x36c);
      param_3 = param_25;
      param_2 = param_24;
      param_1 = param_23;
      goto joined_r0x0052be63;
    }
    if ((float)_DAT_0064dd88 <= *(float *)(unaff_EBP + 0x104)) {
      if ((float)_DAT_0064a798 < *(float *)(unaff_EBP + 0x104)) {
        iVar10 = *(int *)(unaff_EBP + 0x2448);
        param_4 = ((float)(&DAT_006c5ca0)[iVar10 * 0xdb] + (float)(&DAT_006c5c94)[iVar10 * 0xdb]) *
                  (float)_DAT_0064a6d0;
        fVar1 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
        fVar2 = (float)(&DAT_006c5ca4)[iVar10 * 0xdb];
        FUN_0041ce10(param_12 * param_4 + fVar1 * param_9 + param_15 * fVar2 + param_18,
                     param_16 * fVar2 + param_13 * param_4 + param_10 * fVar1 + param_19,
                     param_17 * fVar2 + param_14 * param_4 + param_11 * fVar1 + param_20);
        param_33 = param_2;
        param_32 = param_1;
        param_34 = param_3;
        fVar1 = (float)(&DAT_006c5c90)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        fVar2 = (float)(&DAT_006c5ca4)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        FUN_0041ce10(param_12 * param_4 + fVar1 * param_9 + param_15 * fVar2 + param_18,
                     param_16 * fVar2 + param_13 * param_4 + param_10 * fVar1 + param_19,
                     param_17 * fVar2 + param_14 * param_4 + param_11 * fVar1 + param_20);
        param_29 = param_1;
        param_30 = param_2;
        param_31 = param_3;
        fVar1 = (float)(&DAT_006c5c9c)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        fVar2 = (float)(&DAT_006c5c98)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        FUN_0041ce10(param_12 * param_4 + fVar1 * param_9 + param_15 * fVar2 + param_18,
                     param_16 * fVar2 + param_13 * param_4 + param_10 * fVar1 + param_19,
                     param_17 * fVar2 + param_14 * param_4 + param_11 * fVar1 + param_20);
        param_27 = param_2;
        param_26 = param_1;
        param_28 = param_3;
        fVar1 = (float)(&DAT_006c5c90)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        fVar2 = (float)(&DAT_006c5c98)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        FUN_0041ce10(param_12 * param_4 + fVar1 * param_9 + param_15 * fVar2 + param_18,
                     param_16 * fVar2 + param_13 * param_4 + param_10 * fVar1 + param_19,
                     param_17 * fVar2 + param_14 * param_4 + param_11 * fVar1 + param_20);
        param_23 = param_1;
        param_24 = param_2;
        param_25 = param_3;
        if (*(int *)(&DAT_006c5e30 + *(int *)(unaff_EBP + 0x2448) * 0x36c) == 2) {
          param_21 = 2;
        }
        goto LAB_0052c84e;
      }
      iVar10 = *(int *)(unaff_EBP + 0x2448);
      if (*(float *)(unaff_EBP + 0x100) <= (float)_DAT_0064a798) {
        param_5 = ((float)(&DAT_006c5c90)[iVar10 * 0xdb] + (float)(&DAT_006c5c9c)[iVar10 * 0xdb]) *
                  (float)_DAT_0064a6d0;
        param_6 = (float)(&DAT_006c5c94)[iVar10 * 0xdb];
        param_7 = (float)(&DAT_006c5c98)[iVar10 * 0xdb];
        param_8 = param_5;
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        fVar1 = param_8;
        param_32 = *pfVar4;
        param_33 = pfVar4[1];
        param_34 = pfVar4[2];
        puVar5 = (undefined4 *)
                 FUN_0041ce10(param_8,(&DAT_006c5c94)[*(int *)(unaff_EBP + 0x2448) * 0xdb],
                              (&DAT_006c5ca4)[*(int *)(unaff_EBP + 0x2448) * 0xdb]);
        param_5 = (float)*puVar5;
        param_6 = (float)puVar5[1];
        param_7 = (float)puVar5[2];
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        param_29 = *pfVar4;
        param_30 = pfVar4[1];
        param_31 = pfVar4[2];
        puVar5 = (undefined4 *)
                 FUN_0041ce10(fVar1,(&DAT_006c5ca0)[*(int *)(unaff_EBP + 0x2448) * 0xdb],
                              (&DAT_006c5c98)[*(int *)(unaff_EBP + 0x2448) * 0xdb]);
        param_5 = (float)*puVar5;
        param_6 = (float)puVar5[1];
        param_7 = (float)puVar5[2];
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        param_26 = *pfVar4;
        param_27 = pfVar4[1];
        param_28 = pfVar4[2];
        pfVar4 = (float *)FUN_0041ce10(fVar1,(&DAT_006c5ca0)[*(int *)(unaff_EBP + 0x2448) * 0xdb],
                                       (&DAT_006c5ca4)[*(int *)(unaff_EBP + 0x2448) * 0xdb]);
        param_5 = *pfVar4;
        param_6 = pfVar4[1];
        param_7 = pfVar4[2];
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        param_23 = *pfVar4;
        param_24 = pfVar4[1];
        param_25 = pfVar4[2];
        iVar10 = *(int *)(&DAT_006c5e30 + *(int *)(unaff_EBP + 0x2448) * 0x36c);
      }
      else {
        param_4 = ((float)(&DAT_006c5c90)[iVar10 * 0xdb] + (float)(&DAT_006c5c9c)[iVar10 * 0xdb]) *
                  (float)_DAT_0064a6d0;
        param_6 = (float)(&DAT_006c5c94)[iVar10 * 0xdb];
        param_7 = (float)(&DAT_006c5c98)[iVar10 * 0xdb];
        param_5 = param_4;
        FUN_0041ce10(param_9 * param_4 + param_12 * param_6 + param_15 * param_7 + param_18,
                     param_13 * param_6 + param_16 * param_7 + param_10 * param_4 + param_19,
                     param_14 * param_6 + param_17 * param_7 + param_11 * param_4 + param_20);
        param_23 = param_1;
        param_1 = param_4;
        param_24 = param_2;
        param_25 = param_3;
        param_5 = param_4;
        param_2 = (float)(&DAT_006c5c94)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        param_3 = (float)(&DAT_006c5ca4)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        param_6 = param_2;
        param_7 = param_3;
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        param_26 = *pfVar4;
        param_27 = pfVar4[1];
        param_28 = pfVar4[2];
        param_1 = param_4;
        param_5 = param_4;
        param_2 = (float)(&DAT_006c5ca0)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        param_3 = (float)(&DAT_006c5c98)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        param_6 = param_2;
        param_7 = param_3;
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        param_29 = *pfVar4;
        param_30 = pfVar4[1];
        param_31 = pfVar4[2];
        param_1 = param_4;
        param_5 = param_4;
        param_2 = (float)(&DAT_006c5ca0)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        param_3 = (float)(&DAT_006c5ca4)[*(int *)(unaff_EBP + 0x2448) * 0xdb];
        param_6 = param_2;
        param_7 = param_3;
        pfVar4 = (float *)FUN_0043f690(&stack0x0000008c,&param_5,&param_9);
        param_32 = *pfVar4;
        param_33 = pfVar4[1];
        param_34 = pfVar4[2];
        iVar10 = *(int *)(&DAT_006c5e30 + *(int *)(unaff_EBP + 0x2448) * 0x36c);
      }
      if (iVar10 != 1) goto LAB_0052c84e;
      goto LAB_0052c846;
    }
    iVar10 = *(int *)(unaff_EBP + 0x2448);
    fVar3 = ((float)(&DAT_006c5ca0)[iVar10 * 0xdb] + (float)(&DAT_006c5c94)[iVar10 * 0xdb]) *
            (float)_DAT_0064a6d0;
    fVar1 = (float)(&DAT_006c5c90)[iVar10 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca4)[iVar10 * 0xdb];
    param_4 = param_12 * fVar3;
    param_23 = fVar1 * param_9 + param_15 * fVar2 + param_18 + param_4;
    param_8 = param_13 * fVar3;
    param_24 = param_10 * fVar1 + param_16 * fVar2 + param_19 + param_8;
    fVar3 = fVar3 * param_14;
    param_25 = param_11 * fVar1 + param_17 * fVar2 + param_20 + fVar3;
    fVar1 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca4)[iVar10 * 0xdb];
    param_26 = fVar1 * param_9 + param_15 * fVar2 + param_18 + param_4;
    param_27 = param_10 * fVar1 + param_16 * fVar2 + param_19 + param_8;
    param_28 = param_11 * fVar1 + param_17 * fVar2 + param_20 + fVar3;
    fVar1 = (float)(&DAT_006c5c90)[iVar10 * 0xdb];
    fVar2 = (float)(&DAT_006c5c98)[iVar10 * 0xdb];
    param_1 = fVar1 * param_9 + param_15 * fVar2 + param_18 + param_4;
    param_2 = param_16 * fVar2 + param_10 * fVar1 + param_19 + param_8;
    param_3 = param_17 * fVar2 + param_11 * fVar1 + param_20 + fVar3;
    param_5 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
    param_7 = (float)(&DAT_006c5c98)[iVar10 * 0xdb];
    param_29 = param_1;
    param_30 = param_2;
    param_31 = param_3;
    FUN_0041ce10(param_5 * param_9 + param_15 * param_7 + param_18 + param_4,
                 param_16 * param_7 + param_10 * param_5 + param_19 + param_8,
                 param_17 * param_7 + param_11 * param_5 + param_20 + fVar3);
    param_32 = param_1;
    param_33 = param_2;
    param_34 = param_3;
    if (*(int *)(&DAT_006c5e30 + *(int *)(unaff_EBP + 0x2448) * 0x36c) == 2) {
      param_21 = 2;
    }
  }
  else {
    iVar10 = *(int *)(unaff_EBP + 0x2448);
    param_34 = ((float)(&DAT_006c5c98)[iVar10 * 0xdb] + (float)(&DAT_006c5ca4)[iVar10 * 0xdb]) *
               (float)_DAT_0064a6d0;
    param_5 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
    param_6 = (float)(&DAT_006c5c94)[iVar10 * 0xdb];
    param_4 = param_15 * param_34;
    param_23 = param_9 * param_5 + param_12 * param_6 + param_18 + param_4;
    param_8 = param_16 * param_34;
    param_24 = param_10 * param_5 + param_13 * param_6 + param_19 + param_8;
    param_34 = param_34 * param_17;
    param_25 = param_11 * param_5 + param_14 * param_6 + param_20 + param_34;
    fVar1 = (float)(&DAT_006c5c90)[iVar10 * 0xdb];
    fVar2 = (float)(&DAT_006c5c94)[iVar10 * 0xdb];
    param_26 = fVar1 * param_9 + fVar2 * param_12 + param_18 + param_4;
    param_27 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_8;
    param_28 = param_11 * fVar1 + fVar2 * param_14 + param_20 + param_34;
    fVar1 = (float)(&DAT_006c5c9c)[iVar10 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca0)[iVar10 * 0xdb];
    param_29 = fVar1 * param_9 + fVar2 * param_12 + param_18 + param_4;
    param_30 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_8;
    param_31 = param_11 * fVar1 + fVar2 * param_14 + param_20 + param_34;
    fVar1 = (float)(&DAT_006c5c90)[iVar10 * 0xdb];
    fVar2 = (float)(&DAT_006c5ca0)[iVar10 * 0xdb];
    param_32 = fVar1 * param_9 + fVar2 * param_12 + param_18 + param_4;
    param_33 = param_10 * fVar1 + fVar2 * param_13 + param_19 + param_8;
    param_34 = param_11 * fVar1 + fVar2 * param_14 + param_20 + param_34;
    iVar10 = *(int *)(&DAT_006c5e30 + iVar10 * 0x36c);
    param_3 = param_34;
    param_2 = param_33;
    param_1 = param_32;
joined_r0x0052be63:
    if (iVar10 == 3) {
LAB_0052c846:
      param_21 = 1;
    }
  }
LAB_0052c84e:
  FUN_004042a0();
  iVar10 = FUN_0058c7f0(&stack0x0000009c);
  if (iVar10 != 0) {
    puVar5 = (undefined4 *)&stack0x00000190;
    do {
      FUN_0043f690(&param_5,&stack0x0000009c,unaff_EBP + 0xf4);
      iVar10 = iVar10 * 0xd0 + unaff_EBP;
      FUN_004bde20(&param_1,iVar10 + 0x134c,&param_5);
      if ((*(int *)(iVar10 + 0x138c) == 0) &&
         (fVar12 = (float10)FUN_004e1080(&param_1,&param_1), fVar12 < (float10)_DAT_0064dd80)) {
        puVar9 = (undefined4 *)(iVar10 + 0x1318);
        puVar11 = puVar5;
        for (iVar8 = 0x34; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        param_22 = param_22 + 1;
        puVar5 = puVar5 + 0x34;
      }
      iVar10 = FUN_0058c7f0(&stack0x0000009c);
    } while (iVar10 != 0);
    if (param_22 != 0) goto LAB_0052ca3a;
  }
  uVar6 = FUN_004bdd80(&stack0x000000b4,&DAT_00701590,*(undefined4 *)(unaff_EBP + 0x1e0),
                       unaff_EBP + 0xf4);
  uVar6 = FUN_004bde20(&stack0x000000a8,unaff_EBP + 0x1d8,uVar6);
  FUN_0043f690(&param_1,uVar6);
  uVar6 = FUN_004bdd80(&stack0x000000a8,&DAT_00701590,0x41200000);
  FUN_004bddd0(&param_5,&param_1,uVar6);
  uVar6 = FUN_004bdd80(&stack0x000000a8,&DAT_00701590,0x41200000);
  FUN_004bde20(&stack0x0000008c,&param_1,uVar6);
  FUN_005eebf0();
  uVar6 = FUN_004e5437(*(undefined4 *)(unaff_EBP + 0x220),unaff_EBP + 0x118,&param_5);
  uVar7 = FUN_004e5e08(unaff_EBP + -0x100,uVar6,&param_5,&stack0x0000008c,&stack0x000000c0);
  if (((uVar7 & 1) != 0) && (in_stack_00000134 == 0)) {
    param_22 = 1;
    puVar5 = (undefined4 *)&stack0x000000c0;
    puVar9 = (undefined4 *)&stack0x00000190;
    for (iVar10 = 0x34; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
  }
LAB_0052ca3a:
  FUN_004bb2c0(&stack0x00000190,param_22,&param_23,
               (&DAT_006c5c8c)[*(int *)(unaff_EBP + 0x2448) * 0xdb],param_21 != 0);
  return in_stack_00000098;
}


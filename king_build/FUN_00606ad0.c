
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606ad0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  float10 fVar21;
  undefined4 *puStack_c4;
  uint uStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  int iStack_ac;
  int iStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [40];
  undefined1 auStack_5c [40];
  undefined1 auStack_34 [40];
  void *pvStack_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_006495b5;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00606970();
  DAT_00723200 = DAT_00723200 + 1;
  iVar13 = *(int *)(param_1 + 0xc);
  *(int *)(&DAT_00723204 + DAT_00723200 * 4) = iVar13;
  do {
    DAT_00723200 = DAT_00723200 + 1;
    *(undefined4 *)(&DAT_00723204 + DAT_00723200 * 4) = *(undefined4 *)(iVar13 + 0x3c);
    iVar14 = *(int *)(iVar13 + 0x3c);
    if (iVar14 == 0) break;
    bVar20 = *(int *)(iVar14 + 0x3c) != iVar13;
    iVar13 = iVar14;
  } while (bVar20);
LAB_00606b46:
  do {
    if (DAT_00723200 == 0) {
      puVar18 = (undefined4 *)0x0;
      puVar19 = (undefined4 *)0x0;
    }
    else {
      puVar18 = *(undefined4 **)(&DAT_00723204 + DAT_00723200 * 4);
      if (DAT_00723200 + -1 == 0) {
        puVar19 = (undefined4 *)0x0;
        DAT_00723200 = 0;
      }
      else {
        puVar19 = *(undefined4 **)(&DAT_00723204 + (DAT_00723200 + -1) * 4);
        DAT_00723200 = DAT_00723200 + -2;
      }
    }
    if (puVar18 == (undefined4 *)0x0) {
      if (puVar19 == (undefined4 *)0x0) goto LAB_00607031;
LAB_00607033:
      FUN_00609050(puVar19,&iStack_ac,&iStack_a8);
      iVar13 = FUN_00631d33(0x14);
      iStack_4 = 4;
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = FUN_00607620();
      }
      iStack_4 = 0xffffffff;
      iVar14 = FUN_00631d33(0x14);
      iStack_4 = 5;
      if (iVar14 == 0) {
        iVar14 = 0;
      }
      else {
        iVar14 = FUN_00607620();
      }
      iStack_4 = 0xffffffff;
      *(int *)(iVar13 + 0xc) = iStack_ac;
      *(int *)(iVar14 + 0xc) = iStack_a8;
      *(int *)(iVar13 + 0x10) = puVar19[9] + 1;
      *(int *)(iVar14 + 0x10) = puVar19[9] + 1;
      *(int *)puVar19[10] = iVar13;
      *(int *)(puVar19[10] + 4) = iVar14;
      *(undefined4 *)(puVar19[10] + 0xc) = 0;
      *(undefined4 *)(iVar13 + 8) = puVar19[10];
      *(undefined4 *)(iVar14 + 8) = puVar19[10];
      *(int *)(iStack_a8 + 0x28) = iVar14;
      *(int *)(iStack_ac + 0x28) = iVar13;
      if (DAT_00723200 == 0) {
        FUN_00608660(puVar19[10],0);
        if (puVar19 == (undefined4 *)0x0) {
          ExceptionList = pvStack_c;
          return;
        }
        goto LAB_006075fb;
      }
      iVar13 = FUN_00607630();
      if (puVar19[0x10] == iVar13) {
        DAT_00723200 = DAT_00723200 + 1;
        *(int *)(&DAT_00723204 + DAT_00723200 * 4) = iStack_ac;
      }
      else {
        DAT_00723200 = DAT_00723200 + 1;
        *(int *)(&DAT_00723204 + DAT_00723200 * 4) = iStack_a8;
      }
      if (puVar19 != (undefined4 *)0x0) {
        (**(code **)*puVar19)(1);
      }
      goto LAB_00606b46;
    }
    if (puVar19 == (undefined4 *)0x0) {
LAB_00607031:
      puVar19 = puVar18;
      goto LAB_00607033;
    }
    uStack_98 = 0;
    puVar8 = (undefined4 *)((uint)*(ushort *)puVar18[4] * 0x10 + *(int *)(param_2 + 0xc));
    puVar9 = (undefined4 *)((uint)*(ushort *)puVar18[6] * 0x10 + *(int *)(param_2 + 0xc));
    fStack_9c = (float)(puVar9[2] + puVar8[2]);
    uVar10 = __ftol();
    uStack_8c = 0;
    iStack_90 = puVar9[3] + puVar8[3];
    uStack_b4 = __ftol();
    puStack_b0 = (undefined4 *)puVar18[0x12];
    fStack_a0 = (float)(puVar18[9] + 1);
    uStack_b8 = uVar10;
    if (puStack_b0 != (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(**(int **)((int)puStack_b0 + 8) + 0xc) + 0x48) = 0;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)puStack_b0 + 8) + 4) + 0xc) + 0x48) = 0;
      if (*(int **)((int)puStack_b0 + 0xc) != (int *)0x0) {
        *(undefined4 *)(*(int *)(**(int **)((int)puStack_b0 + 0xc) + 0xc) + 0x48) = 0;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)puStack_b0 + 0xc) + 4) + 0xc) + 0x48) = 0;
      }
      FUN_006085e0(puStack_b0);
      FUN_00609020(1);
    }
    FUN_00607b80(puVar18);
    uVar11 = FUN_006085b0(auStack_34,*puVar9);
    iStack_4 = 0;
    uVar12 = FUN_006085b0(auStack_5c,*puVar8);
    iStack_4._0_1_ = 1;
    uVar11 = FUN_0061b910(auStack_84,uVar12,uVar11);
    iStack_4._0_1_ = 2;
    uVar11 = FUN_00608200(&uStack_b8,uVar11,fStack_a0);
    iStack_4._0_1_ = 1;
    FUN_004030a0();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_004030a0();
    iStack_4 = 0xffffffff;
    FUN_004030a0();
    fStack_a4 = (float)FUN_00607bf0(puVar18[5],uVar11,puVar18[4],puVar18[9] + 1);
    iVar13 = FUN_00607bf0(puVar18[6],uVar11,puVar18[5],puVar18[9] + 1);
    puStack_b0 = (undefined4 *)puVar19[0x12];
    if (puStack_b0 != (undefined4 *)0x0) {
      *(undefined4 *)(*(int *)(**(int **)((int)puStack_b0 + 8) + 0xc) + 0x48) = 0;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)puStack_b0 + 8) + 4) + 0xc) + 0x48) = 0;
      if (*(int **)((int)puStack_b0 + 0xc) != (int *)0x0) {
        *(undefined4 *)(*(int *)(**(int **)((int)puStack_b0 + 0xc) + 0xc) + 0x48) = 0;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)puStack_b0 + 0xc) + 4) + 0xc) + 0x48) = 0;
      }
      FUN_006085e0(puStack_b0);
      FUN_00609020(1);
    }
    FUN_00607b80(puVar19);
    iStack_ac = FUN_00607bf0(puVar19[5],uVar11,puVar19[4],puVar19[9] + 1);
    iStack_a8 = FUN_00607bf0(puVar19[6],uVar11,puVar19[5],puVar19[9] + 1);
    *(int *)((int)fStack_a4 + 0x44) = iStack_a8;
    *(float *)(iStack_a8 + 0x40) = fStack_a4;
    *(int *)(iVar13 + 0x40) = iStack_ac;
    *(int *)(iStack_ac + 0x44) = iVar13;
    *(int *)((int)fStack_a4 + 0x40) = iVar13;
    *(float *)(iVar13 + 0x44) = fStack_a4;
    *(undefined4 *)((int)fStack_a4 + 0x3c) = puVar18[0x10];
    *(undefined4 *)(iVar13 + 0x3c) = puVar18[0x11];
    iVar14 = puVar18[0x10];
    if (iVar14 != 0) {
      if (*(undefined4 **)(iVar14 + 0x3c) == puVar18) {
        *(float *)(iVar14 + 0x3c) = fStack_a4;
      }
      else {
        *(float *)(iVar14 + 0x44) = fStack_a4;
      }
    }
    iVar14 = puVar18[0x11];
    if (iVar14 != 0) {
      if (*(undefined4 **)(iVar14 + 0x3c) == puVar18) {
        *(int *)(iVar14 + 0x3c) = iVar13;
      }
      else {
        *(int *)(iVar14 + 0x40) = iVar13;
      }
    }
    *(int *)(iStack_ac + 0x40) = iStack_a8;
    *(int *)(iStack_a8 + 0x44) = iStack_ac;
    *(undefined4 *)(iStack_ac + 0x3c) = puVar19[0x10];
    *(undefined4 *)(iStack_a8 + 0x3c) = puVar19[0x11];
    iVar14 = puVar19[0x10];
    if (iVar14 != 0) {
      if (*(undefined4 **)(iVar14 + 0x3c) == puVar19) {
        *(int *)(iVar14 + 0x3c) = iStack_ac;
      }
      else {
        *(int *)(iVar14 + 0x44) = iStack_ac;
      }
    }
    iVar14 = puVar19[0x11];
    if (iVar14 != 0) {
      if (*(undefined4 **)(iVar14 + 0x3c) == puVar19) {
        *(int *)(iVar14 + 0x3c) = iStack_a8;
      }
      else {
        *(int *)(iVar14 + 0x40) = iStack_a8;
      }
    }
    puStack_b0 = (undefined4 *)FUN_00631d33(0x14);
    if (puStack_b0 == (undefined4 *)0x0) {
      puStack_b0 = (undefined4 *)0x0;
    }
    else {
      puStack_b0[2] = 0;
      puStack_b0[1] = 0;
      *puStack_b0 = 0;
      puStack_b0[3] = 0;
    }
    puStack_c4 = (undefined4 *)FUN_00631d33(0x14);
    if (puStack_c4 == (undefined4 *)0x0) {
      puStack_c4 = (undefined4 *)0x0;
    }
    else {
      puStack_c4[2] = 0;
      puStack_c4[1] = 0;
      *puStack_c4 = 0;
      puStack_c4[3] = 0;
    }
    puVar8 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      puVar8[2] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      puVar8[3] = 0;
    }
    puVar9 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9[2] = 0;
      puVar9[1] = 0;
      *puVar9 = 0;
      puVar9[3] = 0;
    }
    puStack_b0[2] = puVar18[10];
    puStack_b0[3] = fStack_a4;
    puStack_b0[4] = puVar18[9] + 1;
    puStack_c4[2] = puVar18[10];
    puStack_c4[3] = iVar13;
    puStack_c4[4] = puVar18[9] + 1;
    *(undefined4 **)((int)fStack_a4 + 0x28) = puStack_b0;
    *(undefined4 **)(iVar13 + 0x28) = puStack_c4;
    *(undefined4 **)puVar18[10] = puStack_b0;
    *(undefined4 **)(puVar18[10] + 4) = puStack_c4;
    *(undefined4 *)(puVar18[10] + 0xc) = 0;
    puVar8[2] = puVar19[10];
    puVar8[3] = iStack_ac;
    puVar8[4] = puVar19[9] + 1;
    puVar9[2] = puVar19[10];
    puVar9[3] = iStack_a8;
    puVar9[4] = puVar19[9] + 1;
    *(undefined4 **)(iStack_ac + 0x28) = puVar8;
    *(undefined4 **)(iStack_a8 + 0x28) = puVar9;
    *(undefined4 **)puVar19[10] = puVar8;
    *(undefined4 **)(puVar19[10] + 4) = puVar9;
    *(undefined4 *)(puVar19[10] + 0xc) = 0;
    if (DAT_00723200 == 0) {
      piVar1 = (int *)puVar19[10];
      piVar2 = (int *)puVar18[10];
      iVar13 = FUN_00631d33(0x9c);
      iStack_4 = 3;
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        iVar13 = FUN_00607640();
      }
      iStack_4 = 0xffffffff;
      iVar14 = FUN_006076f0(piVar2,piVar1);
      if (iVar14 == 0) {
        if (iVar13 != 0) {
          FUN_00609020(1);
        }
      }
      else {
        if (piVar2 != (int *)0x0) {
          *(int *)(*(int *)(*piVar2 + 0xc) + 0x48) = iVar13;
          *(int *)(*(int *)(piVar2[1] + 0xc) + 0x48) = iVar13;
        }
        if (piVar1 != (int *)0x0) {
          *(int *)(*(int *)(*piVar1 + 0xc) + 0x48) = iVar13;
          *(int *)(*(int *)(piVar1[1] + 0xc) + 0x48) = iVar13;
        }
        iVar17 = (uint)**(ushort **)(iVar13 + 0x14) * 0x10 + *(int *)(param_2 + 0xc);
        iVar15 = (uint)**(ushort **)(iVar13 + 0x18) * 0x10 + *(int *)(param_2 + 0xc);
        iVar16 = (uint)**(ushort **)(iVar13 + 0x1c) * 0x10 + *(int *)(param_2 + 0xc);
        iVar14 = *(int *)(param_2 + 4);
        fVar5 = (float)*(uint *)(iVar17 + 8) * *(float *)(iVar14 + 0x9cd8) +
                *(float *)(iVar14 + 0x9cc8);
        fStack_a4 = (float)*(uint *)(iVar17 + 0xc) * *(float *)(iVar14 + 0x9cdc) +
                    *(float *)(iVar14 + 0x9cd4);
        fVar3 = (float)*(uint *)(iVar15 + 8) * *(float *)(iVar14 + 0x9cd8) +
                *(float *)(iVar14 + 0x9cc8);
        uStack_b8 = *(uint *)(iVar16 + 0xc);
        puStack_b0 = (undefined4 *)
                     ((float)*(uint *)(iVar15 + 0xc) * *(float *)(iVar14 + 0x9cdc) +
                     *(float *)(iVar14 + 0x9cd4));
        uStack_b4 = 0;
        fVar4 = (float)*(uint *)(iVar16 + 8) * *(float *)(iVar14 + 0x9cd8) +
                *(float *)(iVar14 + 0x9cc8);
        fStack_a0 = (float)uStack_b8 * *(float *)(iVar14 + 0x9cdc) + *(float *)(iVar14 + 0x9cd4);
        fVar6 = (fVar4 + fVar3 + fVar5) * _DAT_0064b8f4;
        fVar7 = (fStack_a0 + (float)puStack_b0 + fStack_a4) * _DAT_0064b8f4;
        fStack_a4 = fStack_a4 - fVar7;
        fVar5 = fVar5 - fVar6;
        fVar5 = fStack_a4 * fStack_a4 + fVar5 * fVar5;
        fVar3 = fVar3 - fVar6;
        fStack_9c = ((float)puStack_b0 - fVar7) * ((float)puStack_b0 - fVar7) + fVar3 * fVar3;
        if (fVar5 <= fStack_9c) {
          fVar5 = fStack_9c;
        }
        fVar4 = fVar4 - fVar6;
        fVar3 = (fStack_a0 - fVar7) * (fStack_a0 - fVar7) + fVar4 * fVar4;
        if (fVar5 <= fVar3) {
          fVar5 = fVar3;
        }
        FUN_0041ce10(fVar6,fVar7,SQRT(fVar5));
        *(int *)(iVar13 + 0x30) = iStack_90;
        *(undefined4 *)(iVar13 + 0x34) = uStack_8c;
        *(undefined4 *)(iVar13 + 0x38) = uStack_88;
        if (*(int *)(iVar13 + 0xc) == 0) {
          iVar14 = 0;
        }
        else {
          iVar17 = (uint)**(ushort **)(iVar13 + 0x40) * 0x10 + *(int *)(param_2 + 0xc);
          iVar15 = (uint)**(ushort **)(iVar13 + 0x44) * 0x10 + *(int *)(param_2 + 0xc);
          iVar16 = (uint)**(ushort **)(iVar13 + 0x48) * 0x10 + *(int *)(param_2 + 0xc);
          iVar14 = *(int *)(param_2 + 4);
          fVar3 = (float)*(uint *)(iVar17 + 8) * *(float *)(iVar14 + 0x9cd8) +
                  *(float *)(iVar14 + 0x9cc8);
          fVar4 = (float)*(uint *)(iVar17 + 0xc) * *(float *)(iVar14 + 0x9cdc) +
                  *(float *)(iVar14 + 0x9cd4);
          fStack_9c = (float)*(uint *)(iVar15 + 8) * *(float *)(iVar14 + 0x9cd8) +
                      *(float *)(iVar14 + 0x9cc8);
          uStack_b8 = *(uint *)(iVar16 + 0xc);
          fStack_a0 = (float)*(uint *)(iVar15 + 0xc) * *(float *)(iVar14 + 0x9cdc) +
                      *(float *)(iVar14 + 0x9cd4);
          uStack_b4 = 0;
          puStack_b0 = (undefined4 *)
                       ((float)*(uint *)(iVar16 + 8) * *(float *)(iVar14 + 0x9cd8) +
                       *(float *)(iVar14 + 0x9cc8));
          fStack_a4 = (float)uStack_b8 * *(float *)(iVar14 + 0x9cdc) + *(float *)(iVar14 + 0x9cd4);
          fVar5 = ((float)puStack_b0 + fStack_9c + fVar3) * _DAT_0064b8f4;
          fVar6 = (fStack_a4 + fStack_a0 + fVar4) * _DAT_0064b8f4;
          fVar4 = fVar4 - fVar6;
          fVar3 = fVar3 - fVar5;
          fVar4 = fVar4 * fVar4 + fVar3 * fVar3;
          fVar3 = (fStack_a0 - fVar6) * (fStack_a0 - fVar6) +
                  (fStack_9c - fVar5) * (fStack_9c - fVar5);
          if (fVar4 <= fVar3) {
            fVar4 = fVar3;
          }
          fVar3 = (fStack_a4 - fVar6) * (fStack_a4 - fVar6) +
                  ((float)puStack_b0 - fVar5) * ((float)puStack_b0 - fVar5);
          if (fVar4 <= fVar3) {
            fVar4 = fVar3;
          }
          FUN_0041ce10(fVar5,fVar6,SQRT(fVar4));
          *(float *)(iVar13 + 0x5c) = fStack_9c;
          *(undefined4 *)(iVar13 + 0x60) = uStack_98;
          iVar14 = iVar13 + 0x3c;
          *(undefined4 *)(iVar13 + 100) = uStack_94;
        }
        fVar21 = (float10)FUN_00607840(iVar13 + 0x10,iVar14);
        *(float *)(iVar13 + 0x68) = (float)fVar21;
        FUN_00612ce0(iVar13);
        *(short *)(param_2 + 0x40) = *(short *)(param_2 + 0x40) + 1;
      }
      if (puVar18 != (undefined4 *)0x0) {
        (**(code **)*puVar18)(1);
      }
      if (puVar19 == (undefined4 *)0x0) {
        ExceptionList = pvStack_c;
        return;
      }
LAB_006075fb:
      (**(code **)*puVar19)(1);
      ExceptionList = pvStack_c;
      return;
    }
    iVar13 = FUN_00607630();
    if (puVar19[0x10] == iVar13) {
      DAT_00723200 = DAT_00723200 + 1;
      *(int *)(&DAT_00723204 + DAT_00723200 * 4) = iStack_ac;
    }
    else {
      DAT_00723200 = DAT_00723200 + 1;
      *(int *)(&DAT_00723204 + DAT_00723200 * 4) = iStack_a8;
    }
    (**(code **)*puVar18)(1);
    (**(code **)*puVar19)(1);
  } while( true );
}


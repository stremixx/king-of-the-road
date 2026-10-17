
void FUN_00604fc0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  void *pvVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  float10 fVar17;
  undefined4 *puStack_4c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064955b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar3 = (**(code **)(**(int **)(param_2 + 4) + 0x10))();
  if (uVar3 <= *(uint *)(param_1 + 0x10)) {
    FUN_0060ebd0(*(undefined4 *)(param_1 + 0xc),0);
    ExceptionList = pvStack_c;
    return;
  }
  iVar13 = *(int *)(param_1 + 0xc);
  DAT_00723118 = DAT_00723118 + 1;
  *(int *)(&DAT_0072311c + DAT_00723118 * 4) = iVar13;
  do {
    DAT_00723118 = DAT_00723118 + 1;
    *(undefined4 *)(&DAT_0072311c + DAT_00723118 * 4) = *(undefined4 *)(iVar13 + 0x2c);
    iVar5 = *(int *)(iVar13 + 0x2c);
    if (iVar5 == 0) break;
    bVar16 = *(int *)(iVar5 + 0x2c) != iVar13;
    iVar13 = iVar5;
  } while (bVar16);
LAB_00605058:
  if (DAT_00723118 == 0) {
    puVar15 = (undefined4 *)0x0;
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar15 = *(undefined4 **)(&DAT_0072311c + DAT_00723118 * 4);
    if (DAT_00723118 + -1 == 0) {
      puVar14 = (undefined4 *)0x0;
      DAT_00723118 = 0;
    }
    else {
      puVar14 = *(undefined4 **)(&DAT_0072311c + (DAT_00723118 + -1) * 4);
      DAT_00723118 = DAT_00723118 + -2;
    }
  }
  if (puVar15 == (undefined4 *)0x0) {
    if (puVar14 == (undefined4 *)0x0) goto LAB_00605425;
LAB_00605427:
    piVar1 = (int *)puVar14[6];
    piVar2 = (int *)puVar14[4];
    uStack_20 = 0;
    iStack_24 = piVar1[1] + piVar2[1];
    pvVar12 = (void *)__ftol();
    iStack_1c = *piVar2 + *piVar1;
    uStack_18 = 0;
    uStack_14 = __ftol();
    iVar13 = puVar14[0xe];
    pvStack_10 = pvVar12;
    if (iVar13 != 0) {
      if (**(int **)(iVar13 + 8) != 0) {
        *(undefined4 *)(*(int *)(**(int **)(iVar13 + 8) + 0xc) + 0x38) = 0;
      }
      iVar5 = *(int *)(*(int *)(iVar13 + 8) + 4);
      if (iVar5 != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x38) = 0;
      }
      if (*(int **)(iVar13 + 0xc) != (int *)0x0) {
        iVar5 = **(int **)(iVar13 + 0xc);
        if (iVar5 != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x38) = 0;
        }
        iVar5 = *(int *)(*(int *)(iVar13 + 0xc) + 4);
        if (iVar5 != 0) {
          *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x38) = 0;
        }
      }
      FUN_00605b00(iVar13);
      FUN_00605df0(1);
    }
    FUN_00605980(puVar14);
    uVar4 = FUN_00605ac0(&uStack_14);
    iVar5 = FUN_006059f0(puVar14[5],uVar4,puVar14[4],puVar14[9] + 1);
    iVar6 = FUN_006059f0(puVar14[6],uVar4,puVar14[5],puVar14[9] + 1);
    *(int *)(iVar5 + 0x30) = iVar6;
    *(int *)(iVar6 + 0x34) = iVar5;
    *(undefined4 *)(iVar5 + 0x34) = puVar14[0xb];
    *(undefined4 *)(iVar6 + 0x30) = puVar14[0xb];
    *(undefined4 *)(iVar5 + 0x2c) = puVar14[0xc];
    *(undefined4 *)(iVar6 + 0x2c) = puVar14[0xd];
    iVar13 = puVar14[0xc];
    if (iVar13 != 0) {
      if (*(undefined4 **)(iVar13 + 0x2c) == puVar14) {
        *(int *)(iVar13 + 0x2c) = iVar5;
      }
      else {
        *(int *)(iVar13 + 0x34) = iVar5;
      }
    }
    iVar13 = puVar14[0xd];
    if (iVar13 != 0) {
      if (*(undefined4 **)(iVar13 + 0x2c) == puVar14) {
        *(int *)(iVar13 + 0x2c) = iVar6;
      }
      else {
        *(int *)(iVar13 + 0x30) = iVar6;
      }
    }
    puVar15 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar15 == (undefined4 *)0x0) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      puVar15[2] = 0;
      puVar15[1] = 0;
      *puVar15 = 0;
      puVar15[3] = 0;
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
    puVar15[3] = iVar5;
    puVar9[3] = iVar6;
    puVar15[4] = puVar14[9] + 1;
    puVar9[4] = puVar14[9] + 1;
    *(undefined4 **)puVar14[8] = puVar15;
    *(undefined4 **)(puVar14[8] + 4) = puVar9;
    *(undefined4 *)(puVar14[8] + 0xc) = 0;
    puVar15[2] = puVar14[8];
    puVar9[2] = puVar14[8];
    *(undefined4 **)(iVar6 + 0x20) = puVar9;
    *(undefined4 **)(iVar5 + 0x20) = puVar15;
    if (DAT_00723118 != 0) goto code_r0x006055ed;
    FUN_00605b80(puVar14[8],0);
    if (puVar14 != (undefined4 *)0x0) {
      (**(code **)*puVar14)(1);
    }
  }
  else {
    if (puVar14 == (undefined4 *)0x0) {
LAB_00605425:
      puVar14 = puVar15;
      goto LAB_00605427;
    }
    uVar4 = __ftol();
    uStack_28 = __ftol();
    iVar13 = puVar15[0xe];
    uStack_2c = uVar4;
    if (iVar13 != 0) {
      *(undefined4 *)(*(int *)(**(int **)(iVar13 + 8) + 0xc) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar13 + 8) + 4) + 0xc) + 0x38) = 0;
      if (*(int **)(iVar13 + 0xc) != (int *)0x0) {
        *(undefined4 *)(*(int *)(**(int **)(iVar13 + 0xc) + 0xc) + 0x38) = 0;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar13 + 0xc) + 4) + 0xc) + 0x38) = 0;
      }
      FUN_00605b00(iVar13);
      FUN_00605df0(1);
    }
    FUN_00605980(puVar15);
    uVar4 = FUN_00605ac0(&uStack_2c);
    iVar5 = FUN_006059f0(puVar15[5],uVar4,puVar15[4],puVar15[9] + 1);
    iVar6 = FUN_006059f0(puVar15[6],uVar4,puVar15[5],puVar15[9] + 1);
    iVar13 = puVar14[0xe];
    if (iVar13 != 0) {
      *(undefined4 *)(*(int *)(**(int **)(iVar13 + 8) + 0xc) + 0x38) = 0;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar13 + 8) + 4) + 0xc) + 0x38) = 0;
      if (*(int **)(iVar13 + 0xc) != (int *)0x0) {
        *(undefined4 *)(*(int *)(**(int **)(iVar13 + 0xc) + 0xc) + 0x38) = 0;
        *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar13 + 0xc) + 4) + 0xc) + 0x38) = 0;
      }
      FUN_00605b00(iVar13);
      FUN_00605df0(1);
    }
    FUN_00605980(puVar14);
    iVar7 = FUN_006059f0(puVar14[5],uVar4,puVar14[4],puVar14[9] + 1);
    iVar8 = FUN_006059f0(puVar14[6],uVar4,puVar14[5],puVar14[9] + 1);
    *(int *)(iVar5 + 0x34) = iVar8;
    *(int *)(iVar8 + 0x30) = iVar5;
    *(int *)(iVar6 + 0x30) = iVar7;
    *(int *)(iVar7 + 0x34) = iVar6;
    *(int *)(iVar5 + 0x30) = iVar6;
    *(int *)(iVar6 + 0x34) = iVar5;
    *(undefined4 *)(iVar5 + 0x2c) = puVar15[0xc];
    *(undefined4 *)(iVar6 + 0x2c) = puVar15[0xd];
    iVar13 = puVar15[0xc];
    if (iVar13 != 0) {
      if (*(undefined4 **)(iVar13 + 0x2c) == puVar15) {
        *(int *)(iVar13 + 0x2c) = iVar5;
      }
      else {
        *(int *)(iVar13 + 0x34) = iVar5;
      }
    }
    iVar13 = puVar15[0xd];
    if (iVar13 != 0) {
      if (*(undefined4 **)(iVar13 + 0x2c) == puVar15) {
        *(int *)(iVar13 + 0x2c) = iVar6;
      }
      else {
        *(int *)(iVar13 + 0x30) = iVar6;
      }
    }
    *(int *)(iVar7 + 0x30) = iVar8;
    *(int *)(iVar8 + 0x34) = iVar7;
    *(undefined4 *)(iVar7 + 0x2c) = puVar14[0xc];
    *(undefined4 *)(iVar8 + 0x2c) = puVar14[0xd];
    iVar13 = puVar14[0xc];
    if (iVar13 != 0) {
      if (*(undefined4 **)(iVar13 + 0x2c) == puVar14) {
        *(int *)(iVar13 + 0x2c) = iVar7;
      }
      else {
        *(int *)(iVar13 + 0x34) = iVar7;
      }
    }
    iVar13 = puVar14[0xd];
    if (iVar13 != 0) {
      if (*(undefined4 **)(iVar13 + 0x2c) == puVar14) {
        *(int *)(iVar13 + 0x2c) = iVar8;
      }
      else {
        *(int *)(iVar13 + 0x30) = iVar8;
      }
    }
    puStack_4c = (undefined4 *)FUN_00631d33(0x14);
    if (puStack_4c == (undefined4 *)0x0) {
      puStack_4c = (undefined4 *)0x0;
    }
    else {
      puStack_4c[2] = 0;
      puStack_4c[1] = 0;
      *puStack_4c = 0;
      puStack_4c[3] = 0;
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
    puVar10 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar10 == (undefined4 *)0x0) {
      puVar10 = (undefined4 *)0x0;
    }
    else {
      puVar10[2] = 0;
      puVar10[1] = 0;
      *puVar10 = 0;
      puVar10[3] = 0;
    }
    puVar11 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)0x0;
    }
    else {
      puVar11[2] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[3] = 0;
    }
    puStack_4c[2] = puVar15[8];
    puStack_4c[3] = iVar5;
    puStack_4c[4] = puVar15[9] + 1;
    puVar9[2] = puVar15[8];
    puVar9[3] = iVar6;
    puVar9[4] = puVar15[9] + 1;
    *(undefined4 **)(iVar5 + 0x20) = puStack_4c;
    *(undefined4 **)(iVar6 + 0x20) = puVar9;
    *(undefined4 **)puVar15[8] = puStack_4c;
    *(undefined4 **)(puVar15[8] + 4) = puVar9;
    *(undefined4 *)(puVar15[8] + 0xc) = 0;
    puVar10[2] = puVar14[8];
    puVar10[3] = iVar7;
    puVar10[4] = puVar14[9] + 1;
    puVar11[2] = puVar14[8];
    puVar11[3] = iVar8;
    puVar11[4] = puVar14[9] + 1;
    *(undefined4 **)(iVar7 + 0x20) = puVar10;
    *(undefined4 **)(iVar8 + 0x20) = puVar11;
    *(undefined4 **)puVar14[8] = puVar10;
    *(undefined4 **)(puVar14[8] + 4) = puVar11;
    *(undefined4 *)(puVar14[8] + 0xc) = 0;
    if (DAT_00723118 != 0) {
      iVar13 = DAT_00723118 * 4;
      DAT_00723118 = DAT_00723118 + 1;
      if (puVar14[0xc] == *(int *)(&DAT_0072311c + iVar13)) {
        *(int *)(&DAT_0072311c + DAT_00723118 * 4) = iVar7;
        (**(code **)*puVar15)(1);
      }
      else {
        *(int *)(&DAT_0072311c + DAT_00723118 * 4) = iVar8;
        (**(code **)*puVar15)(1);
      }
      goto LAB_00605050;
    }
    piVar1 = (int *)puVar14[8];
    piVar2 = (int *)puVar15[8];
    iVar13 = FUN_00631d33(0x6c);
    iVar5 = 0;
    uStack_4 = 0;
    if (iVar13 != 0) {
      iVar5 = FUN_006057c0();
    }
    uStack_4 = 0xffffffff;
    iVar13 = FUN_00605830(piVar2,piVar1);
    if (iVar13 == 0) {
      if (iVar5 != 0) {
        FUN_00605df0(1);
      }
    }
    else {
      if (piVar2 != (int *)0x0) {
        *(int *)(*(int *)(*piVar2 + 0xc) + 0x38) = iVar5;
        *(int *)(*(int *)(piVar2[1] + 0xc) + 0x38) = iVar5;
      }
      if (piVar1 != (int *)0x0) {
        *(int *)(*(int *)(*piVar1 + 0xc) + 0x38) = iVar5;
        *(int *)(*(int *)(piVar1[1] + 0xc) + 0x38) = iVar5;
      }
      if (*(int *)(iVar5 + 0xc) == 0) {
        fVar17 = (float10)(**(code **)(**(int **)(param_2 + 4) + 0x20))
                                    (*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18),
                                     *(undefined4 *)(iVar5 + 0x1c),iVar5 + 0x10,0,0,0,0);
        *(float *)(iVar5 + 0x48) = (float)fVar17;
      }
      else {
        fVar17 = (float10)(**(code **)(**(int **)(param_2 + 4) + 0x20))
                                    (*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18),
                                     *(undefined4 *)(iVar5 + 0x1c),iVar5 + 0x10,
                                     *(undefined4 *)(iVar5 + 0x30),*(undefined4 *)(iVar5 + 0x34),
                                     *(undefined4 *)(iVar5 + 0x38),iVar5 + 0x2c);
        *(float *)(iVar5 + 0x48) = (float)fVar17;
      }
      FUN_0060efe0(iVar5);
      *(short *)(param_2 + 0x34) = *(short *)(param_2 + 0x34) + 1;
    }
    if (puVar15 != (undefined4 *)0x0) {
      (**(code **)*puVar15)(1);
    }
    if (puVar14 != (undefined4 *)0x0) {
      (**(code **)*puVar14)(1);
      ExceptionList = pvStack_10;
      return;
    }
  }
  ExceptionList = pvStack_c;
  return;
code_r0x006055ed:
  iVar13 = DAT_00723118 * 4;
  DAT_00723118 = DAT_00723118 + 1;
  if (puVar14[0xc] == *(int *)(&DAT_0072311c + iVar13)) {
    *(int *)(&DAT_0072311c + DAT_00723118 * 4) = iVar5;
  }
  else {
    *(int *)(&DAT_0072311c + DAT_00723118 * 4) = iVar6;
  }
  if (puVar14 != (undefined4 *)0x0) {
LAB_00605050:
    (**(code **)*puVar14)(1);
  }
  goto LAB_00605058;
}


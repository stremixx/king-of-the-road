
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0060f5c0(int param_1,int *param_2,float param_3,float param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  void *pvVar10;
  int iVar11;
  uint unaff_EBX;
  uint unaff_EBP;
  uint uVar12;
  int unaff_EDI;
  uint uVar13;
  float10 fVar14;
  undefined8 uVar15;
  undefined4 *local_38;
  undefined4 *local_34;
  uint local_30;
  int local_24;
  int local_20;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_006497b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0061f447((double)(param_3 * _DAT_00652108));
  iVar5 = __ftol();
  FUN_0061f447((double)(param_4 * _DAT_00652108));
  iVar6 = __ftol();
  uVar13 = iVar6 * iVar5;
  piVar7 = (int *)FUN_00631d33(0xcc);
  local_4 = (undefined4 *)0x0;
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    FUN_00606750();
    local_4 = (undefined4 *)CONCAT31(local_4._1_3_,1);
    *piVar7 = (int)&PTR_FUN_006520c8;
    piVar7[0x1e] = 0;
    piVar7[0x22] = 0;
    piVar7[0x20] = 0;
    piVar7[0x1f] = 0;
    piVar7[0x23] = 0;
    piVar7[0x21] = 0;
    piVar7[0xd] = 0;
    piVar7[0x1c] = 0;
    timeGetTime();
    FUN_00612f20();
    piVar7[0x32] = 0;
  }
  piVar7[0x28] = (int)param_3;
  fVar4 = param_3 * _DAT_0064b248;
  piVar7[0x29] = (int)param_4;
  piVar7[0x2a] = *param_2;
  piVar7[0x2b] = param_2[1];
  piVar7[0x2c] = (int)((float)piVar7[0x2a] - fVar4);
  pvVar10 = (void *)(iVar6 << 7);
  uVar15 = CONCAT44(pvVar10,iVar5 << 7);
  local_4 = (undefined4 *)0xffffffff;
  piVar7[0x2d] = (int)(fVar4 + (float)piVar7[0x2a]);
  fVar4 = param_4 * _DAT_0064b248;
  piVar7[0x2e] = (int)(fVar4 + (float)piVar7[0x2b]);
  piVar7[0x2f] = (int)((float)piVar7[0x2b] - fVar4);
  piVar7[0x30] = (int)(param_3 / (float)(uint)(iVar5 << 7));
  piVar7[0x31] = (int)(param_4 / (float)pvVar10);
  (**(code **)(*piVar7 + 0x14))();
  *(int **)(param_1 + 4) = piVar7;
  uVar12 = uVar13;
  uVar8 = (**(code **)(*piVar7 + 0xc))(uVar13);
  FUN_0060c9e0(uVar8,uVar12);
  FUN_0060ca80();
  uVar12 = 0;
  if (uVar13 != 0) {
    do {
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
      *(undefined4 **)(*(int *)(param_1 + 8) + uVar12 * 4) = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        ExceptionList = pvVar10;
        return 0;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar13);
  }
  local_38 = _malloc(local_20 * 4);
  local_34 = _malloc(local_24 * 4);
  if ((local_38 == (undefined4 *)0x0) || (local_34 == (undefined4 *)0x0)) {
    FUN_0060a190(0x88762714,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_marine_mygreed_c_00684b88,0x32,s_Mar_19_2002_006714f8);
  }
  uVar13 = 0;
  param_2 = local_38;
  do {
    uVar12 = 0;
    local_4 = param_2;
    do {
      piVar7 = (int *)FUN_00631d33(0xc);
      *(int **)(*(int *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x24) * 4) = piVar7;
      *piVar7 = uVar13 << 7;
      piVar7[1] = uVar12 << 7;
      *(undefined2 *)(piVar7 + 2) = 0xffff;
      *(undefined2 *)(piVar7 + 2) = *(undefined2 *)(param_1 + 0x24);
      *(short *)(param_1 + 0x24) = *(short *)(param_1 + 0x24) + 1;
      *local_4 = piVar7;
      uVar12 = uVar12 + 1;
      local_4 = local_4 + unaff_EBP + 1;
    } while (uVar12 <= unaff_EBX);
    uVar13 = uVar13 + 1;
    param_2 = param_2 + 1;
  } while (uVar13 <= unaff_EBP);
  local_4 = (undefined4 *)0x0;
  uVar13 = 1;
  if (unaff_EBP != 0) {
    iVar5 = unaff_EBP * 4 + 8;
    do {
      local_30 = 1;
      if (unaff_EBX != 0) {
        param_2 = local_34 + (int)local_4;
        local_4 = (undefined4 *)((int)local_4 + unaff_EBX * 2);
        iVar6 = iVar5;
        do {
          if (((local_30 ^ uVar13) & 1) == 0) {
            uVar8 = *(undefined4 *)(iVar6 + unaff_EBP * -4 + -8 + (int)local_38);
            uVar2 = *(undefined4 *)(iVar6 + unaff_EBP * -4 + -4 + (int)local_38);
            uVar3 = *(undefined4 *)((int)local_38 + iVar6);
            puVar9 = (undefined4 *)FUN_00631d33(0x3c);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar1 = puVar9 + 1;
              puVar9[2] = puVar1;
              *puVar1 = puVar1;
              puVar9[3] = &PTR_LAB_00651e38;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              puVar9[8] = 0;
              *puVar9 = &PTR_FUN_00651e3c;
              puVar9[0xd] = 0;
              puVar9[0xc] = 0;
              puVar9[0xb] = 0;
              puVar9[0xe] = 0;
              puVar9[10] = 0;
            }
            puVar9[6] = uVar8;
            puVar9[4] = uVar3;
            puVar9[5] = uVar2;
            puVar9[9] = 0;
            *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
            fVar14 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x24))
                                        (uVar3,uVar2,uVar8,puVar9 + 3);
            puVar9[7] = (float)fVar14;
            FUN_0060ec00(puVar9);
            *local_c = puVar9;
            local_34 = *(undefined4 **)(unaff_EDI + iVar6);
            local_38 = *(undefined4 **)(unaff_EDI + -4 + iVar6);
            unaff_EBX = *(uint *)(iVar6 + (int)uVar15 * -4 + -8 + unaff_EDI);
            puVar9 = (undefined4 *)FUN_00631d33(0x3c);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar1 = puVar9 + 1;
              puVar9[2] = puVar1;
              *puVar1 = puVar1;
              puVar9[3] = &PTR_LAB_00651e38;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              puVar9[8] = 0;
              *puVar9 = &PTR_FUN_00651e3c;
              puVar9[0xd] = 0;
              puVar9[0xc] = 0;
              puVar9[0xb] = 0;
              puVar9[0xe] = 0;
              puVar9[10] = 0;
            }
            puVar9[6] = local_34;
            puVar9[4] = unaff_EBX;
            puVar9[5] = local_38;
            puVar9[9] = 0;
            *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
            iVar11 = **(int **)(param_1 + 4);
          }
          else {
            uVar8 = *(undefined4 *)((int)local_38 + iVar6 + -4);
            uVar2 = *(undefined4 *)(iVar6 + unaff_EBP * -4 + -8 + (int)local_38);
            uVar3 = *(undefined4 *)(iVar6 + unaff_EBP * -4 + -4 + (int)local_38);
            puVar9 = (undefined4 *)FUN_00631d33(0x3c);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar1 = puVar9 + 1;
              puVar9[2] = puVar1;
              *puVar1 = puVar1;
              puVar9[3] = &PTR_LAB_00651e38;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              puVar9[8] = 0;
              *puVar9 = &PTR_FUN_00651e3c;
              puVar9[0xd] = 0;
              puVar9[0xc] = 0;
              puVar9[0xb] = 0;
              puVar9[0xe] = 0;
              puVar9[10] = 0;
            }
            puVar9[5] = uVar2;
            puVar9[4] = uVar3;
            puVar9[6] = uVar8;
            puVar9[9] = 0;
            *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
            fVar14 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x24))
                                        (uVar3,uVar2,uVar8,puVar9 + 3);
            puVar9[7] = (float)fVar14;
            FUN_0060ec00(puVar9);
            *local_c = puVar9;
            local_34 = *(undefined4 **)(iVar6 + (int)uVar15 * -4 + -4 + unaff_EDI);
            local_38 = *(undefined4 **)(unaff_EDI + iVar6);
            unaff_EBX = *(uint *)(unaff_EDI + -4 + iVar6);
            puVar9 = (undefined4 *)FUN_00631d33(0x3c);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar1 = puVar9 + 1;
              puVar9[2] = puVar1;
              *puVar1 = puVar1;
              puVar9[3] = &PTR_LAB_00651e38;
              puVar9[4] = 0;
              puVar9[5] = 0;
              puVar9[6] = 0;
              puVar9[7] = 0;
              puVar9[8] = 0;
              *puVar9 = &PTR_FUN_00651e3c;
              puVar9[0xd] = 0;
              puVar9[0xc] = 0;
              puVar9[0xb] = 0;
              puVar9[0xe] = 0;
              puVar9[10] = 0;
            }
            puVar9[6] = local_34;
            puVar9[4] = unaff_EBX;
            puVar9[5] = local_38;
            puVar9[9] = 0;
            *(short *)(param_1 + 0x26) = *(short *)(param_1 + 0x26) + 1;
            iVar11 = **(int **)(param_1 + 4);
          }
          fVar14 = (float10)(**(code **)(iVar11 + 0x24))(unaff_EBX,local_38,local_34,puVar9 + 3);
          puVar9[7] = (float)fVar14;
          FUN_0060ec00(puVar9);
          iVar6 = iVar6 + (unaff_EBP + 1) * 4;
          param_2[1] = (int)puVar9;
          local_30 = local_30 + 1;
          param_2 = param_2 + 2;
        } while (local_30 <= unaff_EBX);
      }
      uVar13 = uVar13 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar13 <= unaff_EBP);
  }
  iVar5 = 0;
  uVar13 = 1;
  local_4 = (undefined4 *)0x0;
  if (unaff_EBP != 0) {
    do {
      uVar12 = 1;
      if (unaff_EBX != 0) {
        piVar7 = local_34 + iVar5 + 1;
        param_2 = local_34 + unaff_EBX * 2 + iVar5;
        do {
          if (((uVar12 ^ uVar13) & 1) == 0) {
            if (uVar13 == unaff_EBP) {
              uVar8 = 0;
            }
            else {
              uVar8 = *param_2;
            }
            *(undefined4 *)(piVar7[-1] + 0x30) = uVar8;
            *(int *)(piVar7[-1] + 0x2c) = *piVar7;
            if (uVar12 == 1) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar7[-2];
            }
            *(int *)(piVar7[-1] + 0x34) = iVar5;
            if (uVar13 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)
                       ((int)piVar7 + (-4 - (int)local_34) + unaff_EBX * -8 + 4 + (int)local_34);
            }
            *(undefined4 *)(*piVar7 + 0x30) = uVar8;
            *(int *)(*piVar7 + 0x2c) = piVar7[-1];
            if (uVar12 == unaff_EBX) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar7[1];
            }
          }
          else {
            if (uVar12 == 1) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar7[-2];
            }
            *(int *)(piVar7[-1] + 0x30) = iVar5;
            *(int *)(piVar7[-1] + 0x2c) = *piVar7;
            if (uVar13 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = *(undefined4 *)
                       ((-4 - (int)local_34) + unaff_EBX * -8 + (int)piVar7 + (int)local_34);
            }
            *(undefined4 *)(piVar7[-1] + 0x34) = uVar8;
            if (uVar12 == unaff_EBX) {
              iVar5 = 0;
            }
            else {
              iVar5 = piVar7[1];
            }
            *(int *)(*piVar7 + 0x30) = iVar5;
            *(int *)(*piVar7 + 0x2c) = piVar7[-1];
            if (uVar13 == unaff_EBP) {
              iVar5 = 0;
            }
            else {
              iVar5 = local_34[unaff_EBX * 2 + (int)local_4 + 1];
            }
          }
          iVar6 = *piVar7;
          piVar7 = piVar7 + 2;
          *(int *)(iVar6 + 0x34) = iVar5;
          param_2 = param_2 + 2;
          iVar5 = (int)local_4 + 2;
          uVar12 = uVar12 + 1;
          local_4 = (undefined4 *)iVar5;
        } while (uVar12 <= unaff_EBX);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 <= unaff_EBP);
  }
  if (iVar5 != 0) {
    uVar13 = iVar5 + 1U >> 1;
    puVar9 = local_34;
    do {
      FUN_00604f00(*puVar9,puVar9[1]);
      puVar9 = puVar9 + 2;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  iVar5 = **(int **)(param_1 + 0x20);
  if (iVar5 != 0) goto LAB_0060fdf5;
  iVar5 = (*(int **)(param_1 + 0x20))[1];
  while (iVar5 != 0) {
LAB_0060fdf5:
    if ((*(int *)(iVar5 + 0x30) != 0) && (*(int *)(*(int *)(iVar5 + 0x30) + 0x34) != iVar5)) {
      FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_marine_mygreed_c_00684b88,0x88,s_Mar_19_2002_006714f8);
    }
    if ((*(int *)(iVar5 + 0x34) != 0) && (*(int *)(*(int *)(iVar5 + 0x34) + 0x30) != iVar5)) {
      FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_marine_mygreed_c_00684b88,0x8c,s_Mar_19_2002_006714f8);
    }
    if ((*(int *)(iVar5 + 0x2c) == 0) || (*(int *)(*(int *)(iVar5 + 0x2c) + 0x2c) != iVar5)) {
      FUN_0060a190(0x88762711,s_File____s__Line_____ld__Date_____006714b0,
                   s_C__Nek_VRAPPLVS_marine_mygreed_c_00684b88,0x90,s_Mar_19_2002_006714f8);
    }
    piVar7 = *(int **)(param_1 + 0x20);
    if ((*piVar7 == 0) || (iVar5 + 4 != *(int *)(*piVar7 + 8))) {
      if (((piVar7[1] != 0) && (iVar5 + 4 == *(int *)(piVar7[1] + 8))) || (*(int *)(iVar5 + 4) == 0)
         ) break;
      iVar5 = *(int *)(iVar5 + 4) + -4;
    }
    else {
      iVar5 = piVar7[1];
    }
  }
  if (param_3 == 0.0) {
    param_3 = 0.0;
  }
  FUN_00612030(param_3);
  (**(code **)(**(int **)(param_1 + 4) + 4))(param_1 + 0x38,param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  FUN_0060cb20();
  FUN_0061c888(local_38);
  FUN_0061c888(local_34);
  ExceptionList = pvVar10;
  return 1;
}


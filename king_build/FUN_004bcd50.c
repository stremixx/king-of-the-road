
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004bcd50(int *param_1,undefined4 *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int *piVar11;
  float10 fVar12;
  int iStack_1cc;
  undefined4 *puStack_1c8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  int aiStack_19c [8];
  int iStack_17c;
  undefined4 auStack_178 [12];
  int iStack_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 *local_13c;
  float afStack_138 [6];
  int iStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 auStack_114 [12];
  int iStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [12];
  undefined1 auStack_d0 [196];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644917;
  local_c = ExceptionList;
  if ((param_4 <= param_1[5]) && (-1 < param_4)) {
    iVar1 = *(int *)(param_1[4] + 0xbb0);
    ExceptionList = &local_c;
    if (*(int *)(param_1[1] + param_4 * 4) + 1 < iVar1) {
      ExceptionList = &local_c;
      *(undefined4 *)(*param_1 + param_4 * 4) = 0;
      uVar2 = param_1[0x15];
      if (param_1[uVar2 % 10 + 10] == 0) {
        puVar3 = (undefined4 *)FUN_00631d33(0x60);
        local_4 = 0;
        local_13c = puVar3;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          piVar9 = (int *)param_1[9];
          FUN_005eed00(s_TraceNode_0067170c,0x18);
          puVar3[0x12] = 0;
          puVar3[0xe] = 0;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          *puVar3 = &PTR_FUN_0064b394;
          local_4._0_1_ = 1;
          (**(code **)(*piVar9 + 0x14))(0,puVar3);
          *(byte *)(puVar3 + 10) = *(byte *)(puVar3 + 10) & 0xfe;
          puVar3[5] = 0;
          puVar3[8] = 0;
          puVar3[6] = 0;
          puStack_1c8 = puVar3 + 0x16;
          iStack_1cc = 2;
          puVar3[7] = 0;
          do {
            iVar4 = FUN_00631d33(0x9620);
            local_4._0_1_ = 2;
            iStack_140 = iVar4;
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              FUN_004011e0(iVar4,0x20,0x4b1,FUN_00405e90);
            }
            local_4._0_1_ = 1;
            puStack_1c8[-3] = iVar4;
            *puStack_1c8 = 0;
            puStack_1c8 = puStack_1c8 + 1;
            iStack_1cc = iStack_1cc + -1;
          } while (iStack_1cc != 0);
        }
        param_1[uVar2 % 10 + 10] = (int)puVar3;
      }
    }
    local_4 = 0xffffffff;
    iVar4 = *(int *)(*param_1 + param_4 * 4);
    if (iVar4 == 0) {
      *(undefined4 *)(*param_1 + param_4 * 4) = 1;
      iVar4 = param_4 * 0xf0;
      puVar3 = (undefined4 *)(iVar4 + 0x18 + param_1[2]);
      *puVar3 = param_2[0xd];
      puVar3[1] = param_2[0xe];
      puVar3[2] = param_2[0xf];
      aiStack_19c[0] = 0;
      aiStack_19c[1] = 0;
      aiStack_19c[2] = 0;
      aiStack_19c[3] = 0;
      aiStack_19c[4] = 0;
      aiStack_19c[5] = 0;
      FUN_004011e0(auStack_178,0xc,4,FUN_004042a0);
      puVar3 = &DAT_00701550;
      puVar6 = auStack_178;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      if (param_2 == (undefined4 *)0x0) {
        FUN_004bd5b0();
      }
      else {
        aiStack_19c[0] = param_2[0xd];
        aiStack_19c[1] = param_2[0xe];
        aiStack_19c[2] = param_2[0xf];
        aiStack_19c[3] = param_2[0x10];
        aiStack_19c[4] = param_2[0x11];
        aiStack_19c[5] = param_2[0x12];
        piVar9 = (int *)param_2[0x1b];
        if ((piVar9 == (int *)0x0) ||
           (((aiStack_19c[6] = *piVar9, aiStack_19c[6] != 5 && (aiStack_19c[6] != 8)) &&
            (aiStack_19c[6] != 6)))) {
          iStack_148 = param_2[0x1a];
          aiStack_19c[6] = 0;
          if (iStack_148 != 0) {
            uStack_144 = *(undefined4 *)(iStack_148 + 0x24);
          }
        }
        else {
          iVar5 = param_2[0x1a];
          iStack_17c = piVar9[2];
          aiStack_19c[7] = param_2[0x1c];
          puVar3 = auStack_178;
          for (iVar7 = 0xc; param_2 = param_2 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
            *puVar3 = *param_2;
            puVar3 = puVar3 + 1;
          }
          iStack_148 = iVar5;
          if (iVar5 != 0) {
            uStack_144 = *(undefined4 *)(iVar5 + 0x24);
          }
        }
      }
      piVar9 = aiStack_19c;
      piVar11 = (int *)(iVar4 + 0x38 + param_1[2]);
      for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar11 = *piVar9;
        piVar9 = piVar9 + 1;
        piVar11 = piVar11 + 1;
      }
      *(undefined4 *)(iVar4 + 0x30 + param_1[2]) = param_3;
    }
    else if (iVar4 == 1) {
      pfVar8 = (float *)(param_2 + 0xd);
      iVar5 = param_4 * 0xf0;
      fStack_1b4 = *(float *)(iVar5 + 0x18 + param_1[2]) - *pfVar8;
      iVar4 = iVar5 + 0x18 + param_1[2];
      fStack_1b0 = *(float *)(iVar4 + 4) - (float)param_2[0xe];
      fStack_1ac = *(float *)(iVar4 + 8) - (float)param_2[0xf];
      fVar12 = (float10)FUN_005aabc0(&fStack_1b4);
      if ((float10)_DAT_0064b1d8 <= fVar12) {
        pfVar10 = (float *)(iVar5 + 0x24 + param_1[2]);
        *pfVar10 = *pfVar8;
        pfVar10[1] = (float)param_2[0xe];
        pfVar10[2] = (float)param_2[0xf];
        iVar4 = param_1[2];
        fStack_1a8 = *(float *)(iVar5 + 0x24 + iVar4) - *(float *)(iVar5 + 0x18 + iVar4);
        iVar4 = iVar5 + iVar4;
        fStack_1a4 = *(float *)(iVar4 + 0x28) - *(float *)(iVar4 + 0x1c);
        fStack_1a0 = *(float *)(iVar4 + 0x2c) - *(float *)(iVar4 + 0x20);
        puVar3 = (undefined4 *)FUN_005aaad0(auStack_d0,&fStack_1a8);
        puVar6 = (undefined4 *)(iVar5 + param_1[2]);
        *puVar6 = *puVar3;
        puVar6[1] = puVar3[1];
        puVar6[2] = puVar3[2];
        iVar4 = iVar5 + param_1[2];
        *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + param_1[2]);
        *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 4);
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar4 + 8);
        afStack_138[0] = 0.0;
        afStack_138[1] = 0.0;
        afStack_138[2] = 0.0;
        afStack_138[3] = 0.0;
        afStack_138[4] = 0.0;
        afStack_138[5] = 0.0;
        FUN_004bd520();
        if (param_2 == (undefined4 *)0x0) {
          FUN_004bd5b0();
        }
        else {
          afStack_138[0] = *pfVar8;
          afStack_138[1] = (float)param_2[0xe];
          afStack_138[2] = (float)param_2[0xf];
          afStack_138[3] = (float)param_2[0x10];
          afStack_138[4] = (float)param_2[0x11];
          piVar9 = (int *)param_2[0x1b];
          afStack_138[5] = (float)param_2[0x12];
          if ((piVar9 == (int *)0x0) ||
             (((iStack_120 = *piVar9, iStack_120 != 5 && (iStack_120 != 8)) && (iStack_120 != 6))))
          {
            iStack_e4 = param_2[0x1a];
            iStack_120 = 0;
            if (iStack_e4 != 0) {
              uStack_e0 = *(undefined4 *)(iStack_e4 + 0x24);
            }
          }
          else {
            iStack_118 = piVar9[2];
            iVar4 = param_2[0x1a];
            uStack_11c = param_2[0x1c];
            puVar3 = auStack_114;
            for (iVar7 = 0xc; param_2 = param_2 + 1, iVar7 != 0; iVar7 = iVar7 + -1) {
              *puVar3 = *param_2;
              puVar3 = puVar3 + 1;
            }
            iStack_e4 = iVar4;
            if (iVar4 != 0) {
              uStack_e0 = *(undefined4 *)(iVar4 + 0x24);
            }
          }
        }
        pfVar8 = afStack_138;
        pfVar10 = (float *)(iVar5 + 0x94 + param_1[2]);
        for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar10 = *pfVar8;
          pfVar8 = pfVar8 + 1;
          pfVar10 = pfVar10 + 1;
        }
        *(undefined4 *)(iVar5 + 0x34 + param_1[2]) = param_3;
        pfVar8 = (float *)(iVar5 + param_1[2]);
        if (*pfVar8 * pfVar8[3] + pfVar8[4] * pfVar8[1] + pfVar8[5] * pfVar8[2] < _DAT_00694bb4) {
          *(undefined4 *)(*param_1 + param_4 * 4) = 0;
        }
        else {
          FUN_004bd870(param_4,param_5);
          *(undefined4 *)(*param_1 + param_4 * 4) = 2;
        }
      }
    }
    else if (iVar4 == 2) {
      iVar4 = param_4 * 0xf0;
      puVar3 = (undefined4 *)(iVar4 + 0x18 + param_1[2]);
      *puVar3 = param_2[0xd];
      puVar3[1] = param_2[0xe];
      puVar3[2] = param_2[0xf];
      fVar12 = (float10)FUN_005aabc0(iVar4 + 0x18 + param_1[2]);
      if ((float10)_DAT_0064b1d8 <= fVar12) {
        iVar5 = param_1[2] + iVar4;
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x24);
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x28);
        *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar5 + 0x2c);
        puVar3 = (undefined4 *)(iVar4 + param_1[2]);
        *puVar3 = puVar3[3];
        puVar3[1] = puVar3[4];
        puVar3[2] = puVar3[5];
        puVar3 = (undefined4 *)(iVar4 + param_1[2] + 0x94);
        puVar6 = (undefined4 *)(iVar4 + param_1[2] + 0x38);
        for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)(param_1[2] + iVar4 + 0x30) = *(undefined4 *)(param_1[2] + iVar4 + 0x34);
        puVar3 = (undefined4 *)(iVar4 + 0x24 + param_1[2]);
        *puVar3 = param_2[0xd];
        puVar3[1] = param_2[0xe];
        puVar3[2] = param_2[0xf];
        iVar5 = param_1[2];
        fStack_1c0 = *(float *)(iVar4 + 0x24 + iVar5) - *(float *)(iVar4 + 0x18 + iVar5);
        iVar5 = iVar4 + iVar5;
        fStack_1bc = *(float *)(iVar5 + 0x28) - *(float *)(iVar5 + 0x1c);
        fStack_1b8 = *(float *)(iVar5 + 0x2c) - *(float *)(iVar5 + 0x20);
        puVar6 = (undefined4 *)FUN_005aaad0(auStack_dc,&fStack_1c0);
        puVar3 = (undefined4 *)(iVar4 + 0xc + param_1[2]);
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        puVar3[2] = puVar6[2];
        puVar3 = (undefined4 *)FUN_004bd640(param_2);
        puVar6 = (undefined4 *)(iVar4 + 0x94 + param_1[2]);
        for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar6 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar6 = puVar6 + 1;
        }
        *(undefined4 *)(iVar4 + 0x34 + param_1[2]) = param_3;
        pfVar8 = (float *)(iVar4 + param_1[2]);
        if (pfVar8[3] * *pfVar8 + pfVar8[4] * pfVar8[1] + pfVar8[5] * pfVar8[2] < _DAT_00694bb4) {
          *(undefined4 *)(*param_1 + param_4 * 4) = 0;
        }
        else {
          FUN_004bd870(param_4,param_5);
        }
      }
    }
    *(int *)(param_1[1] + param_4 * 4) = iVar1;
  }
  ExceptionList = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dd570(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  int local_94;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined1 auStack_44 [44];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_006452ae;
  pvStack_14 = ExceptionList;
  local_94 = 3;
  piVar8 = param_1 + 0x17;
  pfVar9 = (float *)(param_1 + 0xf);
  ExceptionList = &pvStack_14;
  param_1[0x1f] = (int)((float)*(double *)(param_1[0x20] + 0xb90) + (float)param_1[0x1f]);
  do {
    if ((float)piVar8[-0xf] < (float)param_1[0x1f]) {
      if (piVar8[-0xc] == 0) {
        piVar8[-0xc] = 1;
        if ((code *)param_1[0x2d] != (code *)0x0) {
          iVar4 = (*(code *)param_1[0x2d])(*piVar8,2,param_1[0x2e]);
          if (iVar4 == 0) {
            iVar4 = FUN_00631d33(0x9c);
            uStack_c = 0;
            if (iVar4 == 0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = (int *)FUN_004dbfd0(param_1[0x20],param_1 + 0x21,pfVar9 + -1);
            }
            piVar5[0x24] = param_1[0x2d];
            piVar5[0x25] = param_1[0x2e];
            piVar5[0x26] = *piVar8;
            uStack_c = 0xffffffff;
            (**(code **)(*piVar5 + 0x18))(1);
            uVar6 = FUN_005db380(auStack_44);
            FUN_005aba00(&fStack_74,uVar6);
            fVar1 = (float)param_1[0x21] * pfVar9[-1] +
                    (float)param_1[0x27] * pfVar9[1] + (float)param_1[0x24] * *pfVar9 +
                    (float)param_1[0x2a];
            fVar2 = (float)param_1[0x22] * pfVar9[-1] +
                    (float)param_1[0x28] * pfVar9[1] + (float)param_1[0x25] * *pfVar9 +
                    (float)param_1[0x2b];
            fVar3 = (float)param_1[0x23] * pfVar9[-1] +
                    (float)param_1[0x29] * pfVar9[1] + (float)param_1[0x26] * *pfVar9 +
                    (float)param_1[0x2c];
            iVar4 = _rand();
            iVar7 = 2;
            if ((float)iVar4 * _DAT_0064b244 <= _DAT_0064b248) {
              iVar7 = 3;
            }
            if ((&DAT_00695664)[iVar7] != 0) {
              FUN_004dd880(fStack_74 * fVar1 + fStack_68 * fVar2 + fStack_5c * fVar3 + fStack_50,
                           fStack_70 * fVar1 + fStack_64 * fVar2 + fStack_58 * fVar3 + fStack_4c,
                           fStack_6c * fVar1 + fStack_60 * fVar2 + fStack_54 * fVar3 + fStack_48,0,
                           0x40490000,0,0x3ff00000);
            }
          }
        }
      }
      else {
        if ((piVar8[3] == 3) && ((code *)param_1[0x2d] != (code *)0x0)) {
          (*(code *)param_1[0x2d])(*piVar8,0,param_1[0x2e]);
        }
        piVar8[3] = piVar8[3] + 1;
      }
    }
    piVar8 = piVar8 + 1;
    pfVar9 = pfVar9 + 3;
    local_94 = local_94 + -1;
  } while (local_94 != 0);
  if ((float)param_1[0x1e] < (float)param_1[0x1f]) {
    (**(code **)(*param_1 + 0x1c))(1);
    ExceptionList = pvStack_18;
    return;
  }
  FUN_005d29a0(1);
  ExceptionList = pvStack_14;
  return;
}


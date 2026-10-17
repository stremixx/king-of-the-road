
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_00594570(uint param_1,undefined4 param_2,int *param_3,float param_4,float param_5,
                  float param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float fVar11;
  float local_100;
  undefined4 local_fc [12];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int *local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 auStack_30 [48];
  
  FUN_005eebf0();
  if (param_3 == (int *)0x0) {
    return (int *)0x0;
  }
  puVar9 = &DAT_00701550;
  puVar10 = local_fc;
  for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_b4 = param_4;
  local_b0 = param_5;
  local_ac = param_6;
  iVar6 = 0;
  local_8c = 0;
  local_100 = 0.3;
  local_88 = param_2;
  local_a8 = *param_7;
  local_a4 = param_7[1];
  local_a0 = param_7[2];
  do {
    local_98 = param_3;
    uVar3 = (**(code **)(*param_3 + 0x34))(param_1 | 2,&local_100);
    piVar5 = local_98;
    fVar7 = local_a0;
    fVar8 = local_a4;
    fVar11 = local_a8;
    if (((uVar3 & 1) == 0) ||
       (piVar5 = param_3, fVar7 = local_ac, fVar8 = local_b0, fVar11 = local_b4, iVar6 == 9)) break;
    fVar7 = fStack_c0 * local_100;
    fVar1 = fStack_bc * local_100;
    fVar2 = fStack_b8 * local_100;
    pfVar4 = (float *)FUN_005aba00(auStack_30,local_fc);
    fVar11 = fStack_cc +
             (fVar7 * *pfVar4 + fVar1 * pfVar4[3] + fVar2 * pfVar4[6] + pfVar4[9]) * _DAT_0064f9e4;
    fVar8 = (fVar7 * pfVar4[1] + fVar1 * pfVar4[4] + fVar2 * pfVar4[7] + pfVar4[10]) * _DAT_0064f9e4
            + fStack_c8;
    fVar7 = (fVar7 * pfVar4[2] + fVar1 * pfVar4[5] + fVar2 * pfVar4[8] + pfVar4[0xb]) *
            _DAT_0064f9e4 + fStack_c4;
    iVar6 = iVar6 + 1;
    local_a8 = fVar11;
    local_a4 = fVar8;
    local_a0 = fVar7;
  } while (iVar6 < 10);
  *param_7 = fVar11;
  param_7[1] = fVar8;
  param_7[2] = fVar7;
  return piVar5;
}


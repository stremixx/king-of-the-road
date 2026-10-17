
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0058ff10(int *param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined1 *puVar12;
  undefined8 uVar11;
  undefined8 uVar13;
  float local_12c;
  float local_128;
  float local_124;
  int *local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [12];
  undefined1 local_f8 [12];
  int local_ec [9];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 local_bc [12];
  float local_b0;
  undefined1 local_a4 [12];
  undefined1 local_98 [48];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  if (param_1[0x503] != 0) {
    local_12c = *param_2;
    local_128 = param_2[1];
    local_124 = param_2[2];
    if ((param_1[0x37c] == 2) && ((float)_DAT_0064a798 < (float)param_1[0x85])) {
      local_12c = *param_3 * _DAT_0064b2f0 + *param_2;
      local_128 = param_3[1] * _DAT_0064b2f0 + param_2[1];
      local_124 = param_3[2] * _DAT_0064b2f0 + param_2[2];
    }
    fVar1 = ((float)param_1[0x87] - local_128) * param_3[1] +
            ((float)param_1[0x88] - local_124) * param_3[2] +
            ((float)param_1[0x86] - local_12c) * *param_3;
    local_120 = param_1;
    FUN_004e280c(param_1 + 0x7d,local_bc);
    fVar2 = (float)param_1[0x86] - fVar1 * *param_3;
    fVar3 = (float)param_1[0x87] - fVar1 * param_3[1];
    fVar1 = (float)param_1[0x88] - fVar1 * param_3[2];
    piVar5 = param_1 + 0x7d;
    piVar7 = local_ec;
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    if (param_4 != 0) {
      FUN_0041ce10();
      FUN_0041ce10();
      local_110 = local_11c;
      local_10c = local_118;
      puVar12 = local_a4;
      uVar13 = CONCAT44(param_3,&local_110);
      local_108 = local_114;
      uVar4 = FUN_004bde70();
      puVar10 = local_104;
      uVar11 = CONCAT44(puVar12,uVar4);
      FUN_005aaad0();
      FUN_004bde70(local_f8,local_104,param_3,puVar10,uVar11,uVar13);
      fVar8 = (float10)FUN_0061e4b0();
      fVar9 = (float10)FUN_0061e4b0();
      piVar5 = (int *)FUN_005da010(local_38,(double)fVar2,(double)fVar3,(double)fVar1,
                                   (double)local_b0,(double)(float)-fVar8,(double)-fVar9);
      piVar7 = local_ec;
      for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 1;
      }
    }
    local_c8 = fVar2;
    local_c4 = fVar3;
    local_c0 = fVar1;
    FUN_005aba00(local_68,local_ec);
    piVar5 = local_120;
    uVar13 = CONCAT44(&local_12c,param_3);
    puVar10 = local_98;
    uVar11 = CONCAT44(local_68,local_ec);
    (**(code **)(*local_120 + 0x48))();
    iVar6 = FUN_004e5485();
    if (iVar6 == 0) {
      (**(code **)(*piVar5 + 0x1c))(1,puVar10,uVar11,uVar13);
    }
    (**(code **)(*piVar5 + 0x8c))();
  }
  return;
}


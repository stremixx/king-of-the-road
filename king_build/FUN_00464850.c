
int * FUN_00464850(int *param_1,int *param_2,int param_3,double param_4,double param_5,
                  double param_6)

{
  double *pdVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_100 [2];
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20 [28];
  
  while( true ) {
    while( true ) {
      puVar3 = (undefined4 *)(*param_1 + 0x28);
      puVar4 = auStack_100;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_68);
      local_e8 = param_6 - pdVar1[2];
      local_f0 = param_5 - pdVar1[1];
      local_f8 = param_4 - *pdVar1;
      auStack_100[1] = 0x4648b8;
      FUN_00405ea0();
      puVar3 = (undefined4 *)(param_3 + 0x28);
      puVar4 = auStack_100;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_38);
      local_e8 = param_6 - pdVar1[2];
      local_f0 = param_5 - pdVar1[1];
      local_f8 = param_4 - *pdVar1;
      auStack_100[1] = 0x464929;
      FUN_00405ea0();
      if (SQRT(local_88 * local_88 + local_90 * local_90 + local_98 * local_98) <=
          SQRT(local_b0 * local_b0 + local_a0 * local_a0 + local_a8 * local_a8)) break;
      param_1 = param_1 + 1;
    }
    do {
      param_2 = param_2 + -1;
      puVar3 = (undefined4 *)(param_3 + 0x28);
      puVar4 = auStack_100;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_50);
      local_e8 = param_6 - pdVar1[2];
      local_f0 = param_5 - pdVar1[1];
      local_f8 = param_4 - *pdVar1;
      auStack_100[1] = 0x4649b4;
      FUN_00405ea0();
      puVar3 = (undefined4 *)(*param_2 + 0x28);
      puVar4 = auStack_100;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_20);
      local_e8 = param_6 - pdVar1[2];
      local_f0 = param_5 - pdVar1[1];
      local_f8 = param_4 - *pdVar1;
      auStack_100[1] = 0x464a29;
      FUN_00405ea0();
      local_e8 = (double)CONCAT44(local_80,0x464a33);
      fVar5 = (float10)FUN_004577a0();
    } while ((float10)SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_c8 * local_c8) < fVar5)
    ;
    if (param_2 <= param_1) break;
    iVar2 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar2;
    param_1 = param_1 + 1;
  }
  return param_1;
}


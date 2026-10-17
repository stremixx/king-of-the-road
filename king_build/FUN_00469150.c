
void FUN_00469150(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,double param_4,
                 double param_5,double param_6)

{
  double *pdVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined4 auStack_110 [2];
  double local_108;
  double local_100;
  undefined8 local_f8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
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
      local_f8 = (double)CONCAT44(param_3,0x469170);
      FUN_004042b0();
      local_f8 = (double)CONCAT44(*param_1,0x469183);
      FUN_004042b0();
      puVar4 = (undefined4 *)(local_dc + 0x28);
      puVar5 = auStack_110;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_38);
      local_f8 = param_6 - pdVar1[2];
      local_100 = param_5 - pdVar1[1];
      local_108 = param_4 - *pdVar1;
      auStack_110[1] = 0x4691d1;
      FUN_00405ea0();
      puVar4 = (undefined4 *)(local_d4 + 0x28);
      puVar5 = auStack_110;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      uVar2 = FUN_00435cd0(local_80);
      uVar2 = FUN_0045be30(local_68,&param_4,uVar2);
      fVar6 = (float10)FUN_004577a0(uVar2);
      if (fVar6 <= (float10)SQRT(local_a0 * local_a0 + local_a8 * local_a8 + local_b0 * local_b0))
      break;
      param_1 = param_1 + 1;
    }
    do {
      param_2 = param_2 + -1;
      local_f8 = (double)CONCAT44(*param_2,0x469262);
      FUN_004042b0();
      local_f8 = (double)CONCAT44(param_3,0x469270);
      FUN_004042b0();
      puVar4 = (undefined4 *)(local_e0 + 0x28);
      puVar5 = auStack_110;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_50);
      local_f8 = param_6 - pdVar1[2];
      local_100 = param_5 - pdVar1[1];
      local_108 = param_4 - *pdVar1;
      auStack_110[1] = 0x4692be;
      FUN_00405ea0();
      puVar4 = (undefined4 *)(local_d8 + 0x28);
      puVar5 = auStack_110;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      pdVar1 = (double *)FUN_00435cd0(local_20);
      local_f8 = param_6 - pdVar1[2];
      local_100 = param_5 - pdVar1[1];
      local_108 = param_4 - *pdVar1;
      auStack_110[1] = 0x469331;
      FUN_00405ea0();
    } while (SQRT(local_b8 * local_b8 + local_c0 * local_c0 + local_c8 * local_c8) <
             SQRT(local_88 * local_88 + local_90 * local_90 + local_98 * local_98));
    if (param_2 <= param_1) break;
    uVar2 = *param_1;
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    *param_2 = uVar2;
  }
  return;
}


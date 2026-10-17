
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004c03d0(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 *puVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  pfVar5 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(*(int *)(param_1 + 0x88) + 0xb70));
  FUN_0041ce10(DAT_00701580 * *pfVar5 + DAT_00701584 * pfVar5[3] + DAT_00701588 * pfVar5[6] +
               pfVar5[9],
               DAT_00701580 * pfVar5[1] + DAT_00701584 * pfVar5[4] + DAT_00701588 * pfVar5[7] +
               pfVar5[10],
               DAT_00701580 * pfVar5[2] + DAT_00701584 * pfVar5[5] + DAT_00701588 * pfVar5[8] +
               pfVar5[0xb]);
  iVar8 = *(int *)(param_1 + 0x88);
  local_bc = (float)*(double *)(iVar8 + 0xb58);
  local_b8 = (float)*(double *)(iVar8 + 0xb60);
  local_b4 = (float)*(double *)(iVar8 + 0xb68);
  FUN_0041ce10(local_9c * DAT_00701594 - local_a0 * DAT_00701598,
               local_a4 * DAT_00701598 - local_9c * DAT_00701590,
               local_a0 * DAT_00701590 - local_a4 * DAT_00701594);
  local_b0 = local_c8;
  local_ac = local_c4;
  local_a8 = local_c0;
  FUN_004bdd80(&local_c8,&DAT_00701580,*(undefined4 *)(DAT_00701518 + 0x214));
  FUN_0041ce10(local_c8 * _DAT_0064b484,local_c4 * _DAT_0064b484,local_c0 * _DAT_0064b484);
  local_c8 = local_d4;
  local_c4 = local_d0;
  local_c0 = local_cc;
  local_98 = -(local_a4 * local_bc + local_b4 * local_9c + local_b8 * local_a0);
  FUN_0041ce10(0,0,-*(float *)(param_1 + 8));
  FUN_0041ce10(local_d4 + local_c8,local_c4 + local_d0,local_c0 + local_cc);
  local_84 = local_bc;
  local_80 = local_b8;
  local_7c = local_b4;
  FUN_0041ce10(0,0,-*(float *)(param_1 + 8));
  FUN_0041ce10(local_d4 + local_c8,local_d0 + local_c4,local_cc + local_c0);
  fVar2 = *(float *)(param_1 + 8);
  puVar3 = *(undefined4 **)(param_1 + 0x80);
  local_90 = local_bc;
  local_8c = local_b8;
  local_88 = local_b4;
  FUN_0041ce10(fVar2 * local_b0,local_ac * fVar2,local_a8 * fVar2);
  local_b0 = local_d4;
  local_ac = local_d0;
  local_94 = 0;
  local_a8 = local_cc;
  FUN_0041ce10(0,0,*(undefined4 *)(param_1 + 8));
  FUN_004c0b20();
  for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)*puVar3) {
    puVar1 = puVar3 + 1;
    fVar2 = local_a4 * (float)puVar3[1] + (float)puVar3[3] * local_9c + local_a0 * (float)puVar3[2]
            + local_98;
    if (*(float *)(param_1 + 0x40) < fVar2) {
      fVar4 = fVar2 * _DAT_0064b484 + _DAT_0064b324;
      fVar2 = fVar2 * _DAT_0064b248 + _DAT_0064b480;
      FUN_0041ce10(local_d4 * fVar2,local_d0 * fVar2,local_cc * fVar2);
      iVar8 = param_1 + 0x60;
      uVar10 = 0;
      uVar9 = 0x3f000000;
      iVar7 = iVar8;
      uVar6 = FUN_004bfef0(local_54,puVar1,&local_bc,iVar8,0x3f000000,0);
      FUN_004c0b30(uVar6,iVar7,uVar9,uVar10);
      FUN_0041ce10(local_b0 * fVar4,local_ac * fVar4,local_a8 * fVar4);
      uVar10 = 0x3f800000;
      uVar9 = 0x3f800000;
      iVar7 = iVar8;
      uVar6 = FUN_004bfef0(local_3c,puVar1,&local_84,&local_c8,iVar8,0x3f800000,0x3f800000);
      uVar6 = FUN_004bfef0(local_78,uVar6);
      FUN_004c0b30(uVar6,iVar7,uVar9,uVar10);
      uVar10 = 0x3f800000;
      uVar9 = 0;
      uVar6 = FUN_004c03a0(local_6c,&local_b0,fVar4,iVar8,0,0x3f800000);
      uVar6 = FUN_004bfef0(local_60,puVar1,&local_90,uVar6);
      uVar6 = FUN_004be230(local_48,uVar6);
      FUN_004c0b30(uVar6,iVar8,uVar9,uVar10);
    }
  }
  FUN_0062a170();
  return 0;
}


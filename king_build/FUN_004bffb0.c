
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004bffb0(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  undefined1 local_9c [12];
  undefined1 local_90 [12];
  undefined1 local_84 [12];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [48];
  
  iVar6 = *(int *)(param_1 + 0x88);
  local_ac = (float)*(double *)(iVar6 + 0xb58);
  local_a8 = (float)*(double *)(iVar6 + 0xb60);
  local_a4 = (float)*(double *)(iVar6 + 0xb68);
  pfVar3 = (float *)FUN_005ab7d0(local_30,(float)*(double *)(iVar6 + 0xb70));
  FUN_0041ce10(DAT_00701580 * *pfVar3 + DAT_00701584 * pfVar3[3] + DAT_00701588 * pfVar3[6] +
               pfVar3[9],
               DAT_00701580 * pfVar3[1] + DAT_00701584 * pfVar3[4] + DAT_00701588 * pfVar3[7] +
               pfVar3[10],
               DAT_00701580 * pfVar3[2] + DAT_00701584 * pfVar3[5] + DAT_00701588 * pfVar3[8] +
               pfVar3[0xb]);
  FUN_0041ce10(local_bc * DAT_00701594 - local_c0 * DAT_00701598,
               local_c4 * DAT_00701598 - local_bc * DAT_00701590,
               local_c0 * DAT_00701590 - local_c4 * DAT_00701594);
  local_b8 = local_d0;
  local_b4 = local_cc;
  local_b0 = local_c8;
  local_a0 = -(local_c4 * local_ac + local_a4 * local_bc + local_a8 * local_c0);
  FUN_0041ce10(0,0,-*(float *)(param_1 + 8));
  FUN_0041ce10(0,0,-*(float *)(param_1 + 8));
  fVar1 = *(float *)(param_1 + 8);
  FUN_0041ce10(local_b8 * fVar1,local_b4 * fVar1,local_b0 * fVar1);
  local_b8 = local_d0;
  local_b4 = local_cc;
  local_b0 = local_c8;
  FUN_0041ce10(0,0,*(undefined4 *)(param_1 + 8));
  puVar2 = *(undefined4 **)(param_1 + 0x80);
  FUN_004c0b20();
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    pfVar3 = (float *)(puVar2 + 1);
    fVar1 = local_c4 * (float)puVar2[1] + (float)puVar2[3] * local_bc + local_c0 * (float)puVar2[2]
            + local_a0;
    if (*(float *)(param_1 + 0x40) < fVar1) {
      fVar1 = fVar1 * _DAT_0064b2f4 + _DAT_0064b250;
      FUN_0041ce10(local_d0 * fVar1,local_cc * fVar1,local_c8 * fVar1);
      FUN_0041ce10(local_ac + *pfVar3,local_a8 + (float)puVar2[2],local_a4 + (float)puVar2[3]);
      iVar6 = param_1 + 0x60;
      FUN_004c0b30(local_84,iVar6,0x3f000000,0);
      FUN_0041ce10(local_b8 * fVar1,local_b4 * fVar1,local_b0 * fVar1);
      uVar8 = 0x3f800000;
      uVar7 = 0x3f800000;
      iVar5 = iVar6;
      uVar4 = FUN_004bfef0(local_54,pfVar3,local_90,local_78,iVar6,0x3f800000,0x3f800000);
      uVar4 = FUN_004bfef0(local_6c,uVar4);
      FUN_004c0b30(uVar4,iVar5,uVar7,uVar8);
      uVar8 = 0x3f800000;
      uVar7 = 0;
      uVar4 = FUN_004c03a0(local_3c,&local_b8,fVar1,iVar6,0,0x3f800000);
      uVar4 = FUN_004bfef0(local_60,pfVar3,local_9c,uVar4);
      uVar4 = FUN_004be230(local_48,uVar4);
      FUN_004c0b30(uVar4,iVar6,uVar7,uVar8);
    }
  }
  FUN_0062a170();
  return 0;
}


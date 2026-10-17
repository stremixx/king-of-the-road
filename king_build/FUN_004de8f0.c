
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de8f0(undefined4 *param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_1b0 [12];
  undefined4 local_180 [12];
  undefined1 local_150 [48];
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined1 local_c0 [48];
  undefined1 local_90 [48];
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  puVar2 = &DAT_00701550;
  puVar6 = local_1b0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((DAT_006d0fd8 == 0) || (*(int *)(DAT_006d0fd8 + 0x268) == 0)) goto LAB_004debe5;
  fVar7 = (float10)FUN_00555d60();
  if (DAT_006cdbc8 == 0) {
    fVar8 = (float10)_DAT_0064c670;
    puVar2 = (undefined4 *)
             FUN_005ab330(local_f0,(float)((float10)DAT_00701590 * fVar7),
                          (float)((float10)DAT_00701594 * fVar7),
                          (float)((float10)DAT_00701598 * fVar7));
    puVar6 = local_1b0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    switch(*(undefined4 *)(DAT_006d0fd8 + 0x574)) {
    default:
      goto switchD_004deac6_caseD_0;
    case 1:
      uVar3 = FUN_005ab7d0(local_180,0x3f060a92,local_1b0);
      puVar5 = local_60;
      break;
    case 2:
      uVar3 = FUN_005ab7d0(local_90,0x3fc90fdb,local_1b0);
      puVar5 = local_150;
      break;
    case 0xfffffffe:
      uVar3 = FUN_005ab7d0(local_c0,0xbfc90fdb,local_1b0);
      puVar5 = local_120;
      break;
    case 0xffffffff:
      uVar3 = FUN_005ab7d0(local_f0,0xbf3ba866,local_1b0);
      puVar5 = local_30;
    }
    puVar2 = (undefined4 *)FUN_005ab130(puVar5,uVar3);
    puVar6 = local_1b0;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
switchD_004deac6_caseD_0:
    uVar3 = FUN_005ab5d0(local_150,(float)(fVar7 * fVar8),local_1b0);
    uVar3 = FUN_005ab130(local_90,DAT_006d0fd8 + 0x1d8,uVar3);
    puVar5 = local_60;
  }
  else {
    fVar1 = -_DAT_00695c70;
    puVar2 = &DAT_00701550;
    puVar6 = local_180;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar6 = puVar6 + 1;
    }
    if (param_2 == 0) {
      fVar7 = (float10)FUN_00531a50();
      if (ABS(fVar1) <= (float)_DAT_0064c678) {
        fVar8 = (float10)fcos((float10)fVar1);
      }
      else {
        fVar8 = (float10)_DAT_0064a668;
      }
      puVar2 = (undefined4 *)FUN_005ab5d0(local_120,(float)(fVar7 * fVar8));
      puVar6 = local_180;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    fVar7 = (float10)FUN_00555d60();
    uVar3 = FUN_005ab330(local_120,(float)(fVar7 * (float10)DAT_00701590),
                         (float)(fVar7 * (float10)DAT_00701594),
                         (float)(fVar7 * (float10)DAT_00701598));
    uVar3 = FUN_005ab7d0(local_c0,fVar1,uVar3);
    uVar3 = FUN_005ab130(local_30,local_180,uVar3);
    puVar5 = local_f0;
  }
  puVar2 = (undefined4 *)FUN_005ab130(puVar5,uVar3);
  puVar6 = local_1b0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar2 = (undefined4 *)FUN_005ab130(local_150,DAT_006d0fd8 + 0x5f0,local_1b0);
  puVar6 = local_1b0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_004debe5:
  puVar2 = local_1b0;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


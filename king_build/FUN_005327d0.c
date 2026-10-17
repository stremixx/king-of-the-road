
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005327d0(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 *puVar5;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  int local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [36];
  float local_8c;
  float local_88;
  float local_84;
  undefined1 local_80 [12];
  float local_74;
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  puVar5 = local_80;
  uVar1 = FUN_0057d570(local_38);
  FUN_004e280c(uVar1,puVar5);
  FUN_0057d570(local_b0);
  local_11c = local_88;
  local_120 = local_8c;
  local_118 = local_84;
  local_f8 = 0.0;
  local_f4 = 0.0;
  local_f0 = 0.0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  uVar1 = FUN_0057d5d0();
  local_108 = 0;
  do {
    iVar3 = local_108;
    fVar4 = (float10)FUN_0061d200();
    fVar4 = fVar4 + (float10)_DAT_0064a660;
    local_c8 = (float)((float10)DAT_00701590 * fVar4);
    local_c4 = (float)((float10)DAT_00701594 * fVar4);
    local_ec = local_120 - local_c8;
    local_e8 = local_11c - local_c4;
    local_e4 = (float)((float10)local_118 - fVar4 * (float10)DAT_00701598);
    local_e0 = (float)((float10)DAT_00701590 * fVar4);
    local_dc = (float)((float10)DAT_00701594 * fVar4);
    local_114 = local_e0 + local_120;
    local_110 = local_dc + local_11c;
    local_10c = (float)(fVar4 * (float10)DAT_00701598 + (float10)local_118);
    local_104 = local_114;
    local_100 = local_110;
    local_fc = local_10c;
    local_d4 = local_ec;
    local_d0 = local_e8;
    local_cc = local_e4;
    uVar2 = FUN_004e5fd9();
    if ((uVar2 & 1) != 0) {
      local_100 = DAT_00701594 * _DAT_0064b340;
      local_fc = DAT_00701598 * _DAT_0064b340;
      local_120 = DAT_00701590 * _DAT_0064b340 + local_f8;
      local_11c = local_100 + local_f4;
      local_118 = local_fc + local_f0;
      local_114 = local_120;
      local_110 = local_11c;
      local_10c = local_118;
      break;
    }
    iVar3 = iVar3 + 1;
    local_108 = iVar3;
  } while (iVar3 < 4);
  if (iVar3 != 4) {
    FUN_005da010(local_68,(double)local_120,(double)local_11c,(double)local_118,(double)local_74,0,0
                 ,0,0);
    uVar1 = FUN_004e5437(uVar1,&local_8c,&local_120);
    (**(code **)(*param_1 + 0x4c))(uVar1,local_68,0);
    FUN_005dec10();
    return 1;
  }
  return 0;
}


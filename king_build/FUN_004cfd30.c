
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004cfd30(float param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_ECX;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 local_f0 [48];
  undefined1 local_c0 [8];
  int local_b8;
  
  iVar1 = FUN_005410a0();
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00541090();
    iVar3 = FUN_0057d570(local_f0);
    local_108 = param_1 - *(float *)(iVar3 + 0x24);
    local_104 = param_2 - *(float *)(iVar3 + 0x28);
    local_100 = param_3 - *(float *)(iVar3 + 0x2c);
    local_fc = local_108;
    local_f8 = local_104;
    local_f4 = local_100;
    fVar4 = (float10)FUN_005aabc0(&local_fc);
    if (fVar4 <= (float10)_DAT_0064baa0) {
      if (*(int *)(iVar2 + 0x5464) != 0) {
        return 1;
      }
      local_10c = *(int *)(iVar2 + 0x509c);
      if (local_10c != DAT_0068a8f0) {
        puVar6 = local_c0;
        uVar5 = extraout_ECX;
        FUN_0041d3f0(&local_10c);
        FUN_0043fd20(uVar5,puVar6);
        if (local_b8 == 5) {
          return 1;
        }
      }
    }
    if (*(int *)(iVar1 + 8) == 0) break;
    iVar1 = *(int *)(iVar1 + 8) + -4;
  }
  return 0;
}


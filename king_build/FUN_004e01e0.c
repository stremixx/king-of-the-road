
void __fastcall FUN_004e01e0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_005eea00(s_explosSound_00672334);
  param_1[0xb] = uVar1;
  uVar1 = FUN_005eea00(s_startSound_00672328);
  param_1[8] = uVar1;
  uVar1 = FUN_005eea00(s_start0Sound_0067231c);
  param_1[9] = uVar1;
  uVar1 = FUN_005eea00(s_stop_engSound_0067230c);
  param_1[10] = uVar1;
  uVar1 = FUN_005eea00(s_shakeSound_00672300);
  param_1[7] = uVar1;
  uVar1 = FUN_005eea00(s_breakSound_006722f4);
  *param_1 = uVar1;
  uVar1 = FUN_005eea00(s_hitSound_006722e8);
  param_1[1] = uVar1;
  uVar1 = FUN_005eea00(s_crash2Sound_006722dc);
  param_1[2] = uVar1;
  uVar1 = FUN_005eea00(s_crash4aSound_006722cc);
  param_1[3] = uVar1;
  uVar1 = FUN_005eea00(s_crash9Sound_006722c0);
  param_1[4] = uVar1;
  uVar1 = FUN_005eea00(s_hitmeSound_006722b4);
  param_1[5] = uVar1;
  uVar1 = FUN_005eea00(s_hitgrndSound_006722a4);
  param_1[6] = uVar1;
  uVar1 = FUN_005eea00(s_hornSound_00672298);
  param_1[0x11] = uVar1;
  uVar1 = FUN_005eea00(s_bighornSound_00672288);
  param_1[0x12] = uVar1;
  uVar1 = FUN_005eea00(s_extcarSound_0067227c);
  param_1[0x13] = uVar1;
  iVar2 = FUN_005eea00(s_helicopterSound_0067226c);
  param_1[0x16] = iVar2;
  if (iVar2 == 0) {
    param_1[0x16] = param_1[0x13];
  }
  uVar1 = FUN_005eea00(s_stonesSound_00672260);
  param_1[0x14] = uVar1;
  uVar1 = FUN_005eea00(s_waterSound_00672254);
  param_1[0x15] = uVar1;
  uVar1 = FUN_005eea00(s_idleSound_00672248);
  param_1[0xc] = uVar1;
  uVar1 = FUN_005eea00(s_fullSound_0067223c);
  param_1[0xd] = uVar1;
  uVar1 = FUN_005eea00(s_jidleSound_00672230);
  param_1[0xe] = uVar1;
  uVar1 = FUN_005eea00(s_jfullSound_00672224);
  param_1[0xf] = uVar1;
  uVar1 = FUN_005eea00(s_gearSound_00672218);
  param_1[0x10] = uVar1;
  uVar1 = FUN_005eea00(s_repairSound_0067220c);
  param_1[0x17] = uVar1;
  uVar1 = FUN_005eea00(s_applauseSound_006721fc);
  param_1[0x18] = uVar1;
  uVar1 = FUN_005eea00(s_carhornSound_006721ec);
  param_1[0x19] = uVar1;
  uVar1 = FUN_005eea00(s_ovationSound_006721dc);
  param_1[0x1a] = uVar1;
  uVar1 = FUN_005eea00(s_pss2Sound_006721d0);
  param_1[0x1c] = uVar1;
  uVar1 = FUN_005eea00(s_pssSound_006721c4);
  param_1[0x1b] = uVar1;
  iVar2 = FUN_005eea00(s_antiradarSound_006721b4);
  param_1[0x1d] = iVar2;
  if (iVar2 == 0) {
    param_1[0x1d] = param_1[0x11];
  }
  iVar2 = FUN_005eea00(s_startglochSound_006721a4);
  param_1[0x1e] = iVar2;
  if (iVar2 == 0) {
    param_1[0x1e] = param_1[0x18];
  }
  iVar2 = FUN_005eea00(s_pssSound_006721c4);
  param_1[0x1f] = iVar2;
  if (iVar2 != 0) {
    param_1[0x1f] = param_1[0x1c];
  }
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)((int)param_1 + 0xe1) = 0;
  param_1[0x39] = 0;
  iVar2 = FUN_005eea00(s_kriakSound_00672198);
  param_1[0x20] = iVar2;
  if (iVar2 == 0) {
    param_1[0x20] = param_1[0x17];
  }
  uVar1 = FUN_005eea00(s_squeakSound_0067218c);
  param_1[0x2c] = uVar1;
  uVar1 = FUN_005eea00(s_hit_gluh_fSound_0067217c);
  param_1[0x21] = uVar1;
  uVar1 = FUN_005eea00(s_hit_gluh_mSound_0067216c);
  param_1[0x22] = uVar1;
  uVar1 = FUN_005eea00(s_hit_gluh_rSound_0067215c);
  param_1[0x23] = uVar1;
  uVar1 = FUN_005eea00(s_hit_gluh_squeakSound_00672144);
  param_1[0x24] = uVar1;
  uVar1 = FUN_005eea00(s_hit_def1Sound_00672134);
  param_1[0x25] = uVar1;
  uVar1 = FUN_005eea00(s_hit_def2Sound_00672124);
  param_1[0x26] = uVar1;
  uVar1 = FUN_005eea00(s_hit_def_faraSound_00672110);
  param_1[0x27] = uVar1;
  uVar1 = FUN_005eea00(s_hit_suspensionSound_006720fc);
  param_1[0x28] = uVar1;
  uVar1 = FUN_005eea00(s_hit_signSound_006720ec);
  param_1[0x29] = uVar1;
  uVar1 = FUN_005eea00(s_hit_ironpillarSound_006720d8);
  param_1[0x2a] = uVar1;
  uVar1 = FUN_005eea00(s_hit_bulletSound_006720c8);
  param_1[0x2b] = uVar1;
  return;
}


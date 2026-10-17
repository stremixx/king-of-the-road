
void FUN_00568220(undefined4 param_1)

{
  int iVar1;
  undefined1 local_c8 [200];
  
  DAT_0067a1f4 = 0;
  if (DAT_00695bbc != 0) {
    DAT_0067a1f4 = 1;
    FUN_00567f40(param_1,&DAT_0068c120,&DAT_0067a5d8,0x4525a000,0xc5160000,0x44098000,0x44160000,0,0
                 ,0);
    iVar1 = DAT_0067a1f4;
    DAT_0067a1f4 = DAT_0067a1f4 + 1;
    FUN_00567f40(param_1,s_room_al_082_0067a5c8,&DAT_0067a5d4,0xc509d000,0xc4f7e000,0x42820000,
                 0x44160000,iVar1,0,0);
    iVar1 = DAT_0067a1f4;
    DAT_0067a1f4 = DAT_0067a1f4 + 1;
    FUN_00567f40(param_1,s_room_aq_008_0067a5b8,&DAT_0067a5c4,0xc5548000,0xc56d8000,0x41a00000,
                 0x44160000,iVar1,0,0);
    iVar1 = DAT_0067a1f4;
    DAT_0067a1f4 = DAT_0067a1f4 + 1;
    FUN_00567f40(param_1,s_room_at_004_0067a5ac,&DAT_0066b4f4,0xc5805800,0xc3c48000,0x42200000,
                 0x44160000,iVar1,0,0);
    iVar1 = DAT_0067a1f4;
    DAT_0067a1f4 = DAT_0067a1f4 + 1;
    FUN_00567f40(param_1,&DAT_0068c120,&DAT_0067a5a8,0xc4160000,0xc5322000,0x42c80000,0x44160000,
                 iVar1,0,0);
    iVar1 = DAT_0067a1f4;
    DAT_0067a1f4 = DAT_0067a1f4 + 1;
    FUN_00567f40(param_1,&DAT_0068c120,&DAT_0067a5a4,0xc56d8000,0x457a0000,0x41a00000,0x44160000,
                 iVar1,0,0);
    DAT_006f1ba4 = FUN_005eea00(s_shootSound_0067a598);
    DAT_006f1ba8 = FUN_005eea00(s_hitgrndSound_006722a4);
    if ((DAT_006f1ba4 == 0) || (DAT_006f1ba8 == 0)) {
      FUN_0061c369(local_c8,s_initHelicopters___did_not_find_s_0067a54c,DAT_006f1ba4,DAT_006f1ba8);
    }
  }
  return;
}


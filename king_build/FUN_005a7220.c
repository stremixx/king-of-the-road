
void FUN_005a7220(LPCSTR param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  int local_88;
  uint *local_84;
  byte *local_80;
  double local_78;
  CHAR local_6c [20];
  byte local_58 [84];
  
  iVar2 = 0;
  local_84 = (uint *)&DAT_006fb998;
  iVar5 = 0;
  local_88 = 0;
  do {
    iVar2 = iVar2 + 1;
    FUN_0061c369(local_6c,s_WEATHER_d_0067de50,iVar2);
    GetPrivateProfileStringA
              (local_6c,s_fog_badnight_0067de38,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa354 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_badsrise_0067de28,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa360 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_badday_0067de1c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa36c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_badsset_0067de10,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa378 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_goodnight_0067de00,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa384 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_goodsrise_0067ddf0,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa390 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_goodday_0067dde4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa39c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_fog_goodsset_0067ddd4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006fa3a8 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_badnight_0067ddc4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f00 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_badsrise_0067ddb4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f0c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_badday_0067dda4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f18 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_badsset_0067dd94,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f24 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_goodnight_0067dd80,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f30 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_goodsrise_0067dd6c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f3c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_goodday_0067dd5c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f48 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunenv_goodsset_0067dd4c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700f54 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_badnight_0067dd3c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c20 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_badsrise_0067dd2c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c2c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_badday_0067dd1c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c38 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_badsset_0067dd0c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c44 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_goodnight_0067dcf8,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c50 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_goodsrise_0067dce4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c5c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_goodday_0067dcd4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c68 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_sunsky_goodsset_0067dcc4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f8c74 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_badnight_0067dcb4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c00 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_badsrise_0067dca4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c0c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_badday_0067dc94,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c18 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_badsset_0067dc84,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c24 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_goodnight_0067dc70,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c30 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_goodsrise_0067dc5c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c3c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_goodday_0067dc4c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c48 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_suncld_goodsset_0067dc3c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00700c54 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_badnight_0067dc2c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00701200 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_badsrise_0067dc1c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_0070120c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_badday_0067dc0c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00701218 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_badsset_0067dbfc,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00701224 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_goodnight_0067dbe8,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00701230 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_goodsrise_0067dbd4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_0070123c + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_goodday_0067dbc4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00701248 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_skyamb_goodsset_0067dbb4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_00701254 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_badnight_0067dba4,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93b0 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_badsrise_0067db94,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93bc + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_badday_0067db84,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93c8 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_badsset_0067db74,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93d4 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_goodnight_0067db60,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93e0 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_goodsrise_0067db4c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93ec + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_goodday_0067db3c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f93f8 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_envamb_goodsset_0067db2c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f9404 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_badnight_0067db1c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90b0 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_badsrise_0067db0c,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90bc + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_badday_0067db00,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90c8 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_badsset_0067daf0,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90d4 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_goodnight_0067dae0,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90e0 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_goodsrise_0067dad0,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90ec + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_goodday_0067dac0,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f90f8 + iVar5,local_58);
    GetPrivateProfileStringA
              (local_6c,s_moon_goodsset_0067dab0,s_0_0_0_0067de48,(LPSTR)local_58,0x46,param_1);
    FUN_005a7fc0(&DAT_006f9104 + iVar5,local_58);
    FUN_00603370(local_6c,s_frpl_badnight_0067daa0,0,0x3ff00000,&local_78,param_1);
    *(float *)(&DAT_006fc6bc + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_frpl_badday_0067da94,0,0x3ff00000,&local_78,param_1);
    *(float *)(&DAT_006fc6c0 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_frpl_goodnight_0067da84,0,0x3ff00000,&local_78,param_1);
    *(float *)(&DAT_006fc6c4 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_frpl_goodday_0067da74,0,0x3ff00000,&local_78,param_1);
    *(float *)(&DAT_006fc6c8 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogn_badnight_0067da64,0,0x40340000,&local_78,param_1);
    *(float *)(&DAT_006fb9b8 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogn_badday_0067da58,0,0x40490000,&local_78,param_1);
    *(float *)(&DAT_006fb9bc + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogn_goodnight_0067da48,0,0x407f4000,&local_78,param_1);
    *(float *)(&DAT_006fb9c0 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogn_goodday_0067da38,0,0x40890000,&local_78,param_1);
    *(float *)(&DAT_006fb9c4 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogf_badnight_0067da28,0,0x40590000,&local_78,param_1);
    *(float *)(&DAT_006fb918 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogf_badday_0067da1c,0,0x406f4000,&local_78,param_1);
    *(float *)(&DAT_006fb91c + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogf_goodnight_0067da0c,0,0x40890000,&local_78,param_1);
    *(float *)(&DAT_006fb920 + local_88) = (float)local_78;
    FUN_00603370(local_6c,s_fogf_goodday_0067d9fc,0,0x40945000,&local_78,param_1);
    *(float *)(&DAT_006fb924 + local_88) = (float)local_78;
    *local_84 = 0;
    GetPrivateProfileStringA(local_6c,&DAT_00671648,&DAT_00671994,(LPSTR)local_58,0x46,param_1);
    local_80 = &DAT_00671994;
    pbVar3 = local_58;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *local_80;
      if (bVar1 != *local_80) {
LAB_005a7ea4:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005a7ea9;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < local_80[1];
      if (bVar1 != local_80[1]) goto LAB_005a7ea4;
      pbVar3 = pbVar3 + 2;
      local_80 = local_80 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005a7ea9:
    if (iVar4 == 0) {
      *local_84 = *local_84 | 1;
    }
    GetPrivateProfileStringA
              (local_6c,(LPCSTR)&PTR_DAT_0067d9f8,&DAT_00671994,(LPSTR)local_58,0x46,param_1);
    local_80 = &DAT_00671994;
    pbVar3 = local_58;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *local_80;
      if (bVar1 != *local_80) {
LAB_005a7f09:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005a7f0e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < local_80[1];
      if (bVar1 != local_80[1]) goto LAB_005a7f09;
      pbVar3 = pbVar3 + 2;
      local_80 = local_80 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005a7f0e:
    if (iVar4 == 0) {
      *local_84 = *local_84 | 2;
    }
    GetPrivateProfileStringA(local_6c,s_thund_0067d9f0,&DAT_00671994,(LPSTR)local_58,0x46,param_1);
    local_80 = &DAT_00671994;
    pbVar3 = local_58;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *local_80;
      if (bVar1 != *local_80) {
LAB_005a7f7a:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005a7f7f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < local_80[1];
      if (bVar1 != local_80[1]) goto LAB_005a7f7a;
      pbVar3 = pbVar3 + 2;
      local_80 = local_80 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_005a7f7f:
    if (iVar4 == 0) {
      *local_84 = *local_84 | 4;
    }
    local_84 = local_84 + 1;
    iVar5 = iVar5 + 0x60;
    local_88 = local_88 + 0x10;
    if (0x6fb9b7 < (int)local_84) {
      return;
    }
  } while( true );
}


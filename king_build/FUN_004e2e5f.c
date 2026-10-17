
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e2e5f(void)

{
  size_t sVar1;
  int iVar2;
  size_t sVar3;
  undefined4 uVar4;
  int local_3ec;
  int local_3e8;
  int aiStack_3e4 [7];
  size_t local_3c8;
  _SYSTEMTIME local_3c0;
  _WIN32_FIND_DATAA local_3b0;
  HANDLE local_270;
  int local_26c;
  undefined4 local_268;
  size_t asStack_264 [6];
  _WIN32_FIND_DATAA local_24c;
  _SYSTEMTIME local_10c;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  char local_e8 [200];
  int aiStack_20 [4];
  char *local_10;
  size_t local_c;
  int local_8;
  
  for (asStack_264[3] = 0; (int)asStack_264[3] < 3; asStack_264[3] = asStack_264[3] + 1) {
    if ((&DAT_00696438)[asStack_264[3]] != 0) {
      return;
    }
  }
  local_f0 = 0;
  local_268 = 0;
  local_ec = 0;
  aiStack_20[3] = 0;
  asStack_264[5] = 0;
  local_f8 = 1;
  local_270 = FindFirstFileA(s_htruck_exe_0067275c,&local_3b0);
  if (local_270 == (HANDLE)0xffffffff) {
    local_f8 = 0;
    local_270 = FindFirstFileA(s_htruck2_exe_00672768,&local_3b0);
  }
  if (local_270 != (HANDLE)0xffffffff) {
    FindClose(local_270);
    local_fc = 0;
    if (local_f8 == 0) {
      local_270 = FindFirstFileA(s_htruck2_map_00672780,&local_24c);
    }
    else {
      local_270 = FindFirstFileA(s_htruck_map_00672774,&local_24c);
    }
    if (local_270 != (HANDLE)0xffffffff) {
      FindClose(local_270);
      FileTimeToSystemTime(&local_24c.ftLastWriteTime,&local_10c);
      FileTimeToSystemTime(&local_3b0.ftLastWriteTime,&local_3c0);
      local_fc = FUN_0061c356(s_htruck_map_00672790,&DAT_0067278c);
    }
    if (((((local_fc != 0) && (local_10c.wYear == local_3c0.wYear)) &&
         (local_10c.wMonth == local_3c0.wMonth)) && (local_10c.wDay == local_3c0.wDay)) &&
       ((((local_10c.wHour == local_3c0.wHour ||
          (iVar2 = FUN_0061eaf5((uint)local_10c.wHour - (uint)local_3c0.wHour), iVar2 < 2)) ||
         (iVar2 = FUN_0061eaf5((uint)local_10c.wMinute - (uint)local_3c0.wMinute), iVar2 < 3)) &&
        (iVar2 = FUN_0061eaf5((uint)local_10c.wMinute - (uint)local_3c0.wMinute), iVar2 < 3)))) {
      local_10 = s_0001_00000000_0067279c;
      for (asStack_264[4] = 0; (int)asStack_264[4] < 3; asStack_264[4] = asStack_264[4] + 1) {
        sVar3 = _strlen((&PTR_s__OnWndMsg_00672550)[asStack_264[4]]);
        asStack_264[asStack_264[4]] = sVar3;
        aiStack_20[asStack_264[4]] = 0;
      }
      local_c = _strlen(local_10);
      local_f4 = 0;
      local_26c = 0;
      local_8 = -1;
LAB_004e318a:
      do {
        do {
          iVar2 = FUN_0061e41f(local_e8,200,local_fc);
          if ((iVar2 == 0) || ((1 < local_26c && (local_f4 != 0)))) {
            for (asStack_264[3] = 0; (int)asStack_264[3] < 3; asStack_264[3] = asStack_264[3] + 1) {
              (&DAT_00696438)[asStack_264[3]] = PTR_FUN_0067254c + (&DAT_00696438)[asStack_264[3]];
              *(undefined **)(&DAT_00696444 + asStack_264[3] * 4) =
                   PTR_FUN_0067254c + *(int *)(&DAT_00696444 + asStack_264[3] * 4);
            }
            FUN_0061c25a(local_fc);
            return;
          }
          local_3c8 = 0;
          if ((local_f4 == 0) && (iVar2 = _strncmp(local_10,local_e8,local_c), iVar2 == 0)) {
            local_f4 = 1;
            sVar3 = local_c;
            do {
              sVar1 = sVar3;
              aiStack_3e4[6] = sVar1 + 1;
              if (local_e8[sVar1 + 1] == '\0') break;
              sVar3 = aiStack_3e4[6];
            } while (local_e8[sVar1 + 1] != ' ');
            PTR_FUN_0067254c = (undefined *)FUN_0061e282(local_e8 + sVar1 + 1,0,0x10);
          }
        } while (1 < local_26c);
        for (aiStack_3e4[4] = 0; aiStack_3e4[4] < 3; aiStack_3e4[4] = aiStack_3e4[4] + 1) {
          aiStack_3e4[aiStack_3e4[4]] = 1;
        }
        aiStack_3e4[5] = 0;
        while( true ) {
          if ((local_e8[aiStack_3e4[5]] == '\0') || (0x1d < aiStack_3e4[5])) goto LAB_004e318a;
          aiStack_3e4[3] = -1;
          for (local_3e8 = 0; local_3e8 < 3; local_3e8 = local_3e8 + 1) {
            if (((local_e8[aiStack_3e4[5] + 0x15] ==
                  (&PTR_s__OnWndMsg_00672550)[local_3e8][local_3c8]) &&
                (aiStack_3e4[local_3e8] != 0)) && (aiStack_20[local_3e8] == 0)) {
              aiStack_3e4[3] = local_3e8;
            }
            else {
              aiStack_3e4[local_3e8] = 0;
            }
          }
          if ((aiStack_3e4[3] == -1) && (local_8 == -1)) goto LAB_004e318a;
          if (((aiStack_3e4[3] != -1) &&
              (local_3c8 = local_3c8 + 1, local_3c8 == asStack_264[aiStack_3e4[3]])) ||
             ((local_8 != -1 && (aiStack_20[local_8] == 1)))) break;
          aiStack_3e4[5] = aiStack_3e4[5] + 1;
        }
        for (local_3ec = 1; (local_e8[local_3ec] != '\0' && (local_e8[local_3ec + -1] != ':'));
            local_3ec = local_3ec + 1) {
        }
        if (((local_8 == -1) && (aiStack_3e4[3] != -1)) && (aiStack_20[aiStack_3e4[3]] == 0)) {
          uVar4 = FUN_0061e282(local_e8 + local_3ec,0,0x10);
          (&DAT_00696438)[aiStack_3e4[3]] = uVar4;
          local_8 = aiStack_3e4[3];
          aiStack_20[aiStack_3e4[3]] = aiStack_20[aiStack_3e4[3]] + 1;
        }
        else {
          uVar4 = FUN_0061e282(local_e8 + local_3ec,0,0x10);
          *(undefined4 *)(&DAT_00696444 + local_8 * 4) = uVar4;
          aiStack_20[local_8] = aiStack_20[local_8] + 1;
          local_8 = -1;
        }
        local_26c = 2;
        for (local_3ec = 0; local_3ec < 3; local_3ec = local_3ec + 1) {
          if (aiStack_20[local_3ec] < local_26c) {
            local_26c = aiStack_20[local_3ec];
          }
        }
      } while( true );
    }
    if (DAT_00696424 != 0) {
      DAT_00696438 = 0;
      _DAT_0069643c = 0;
    }
  }
  return;
}


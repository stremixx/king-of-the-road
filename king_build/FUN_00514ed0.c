
void FUN_00514ed0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_00603330(s_EFFECTS_00671998,&DAT_00675c74,0x3ff,DAT_006957c8);
  iVar5 = 0;
  iVar4 = 0;
  iVar3 = 0;
  local_10 = 0;
  local_c = 0;
  if (DAT_006cdbd0 != 0) {
    iVar4 = FUN_005bd200(0x8a);
    local_10 = FUN_005bd200(0x89);
    local_c = FUN_005bd200(0x88);
    iVar3 = FUN_005bd200(0x87);
  }
  FUN_00512f70();
  iVar1 = __ftol();
  FUN_00603330(s_EFFECTS_00671998,&PTR_DAT_00675c70,iVar1,DAT_006957c8);
  if (DAT_006cdbd0 != 0) {
    *(short *)(DAT_006cdbd0 + 0x1a6) = (short)iVar1;
  }
  FUN_00603230(&DAT_00675c68,&DAT_00675c2c,0,&local_8,DAT_006957c8);
  if (local_8 != 0) {
    local_4 = (int)(local_8 + (local_8 >> 0x1f & 0xfffffU)) >> 0x14;
    log2((float10)local_4);
    iVar5 = __ftol();
    if (iVar5 < 0x65) {
      if (iVar5 < 0) {
        iVar5 = 0;
      }
    }
    else {
      iVar5 = 100;
    }
  }
  FUN_00603330(s_EFFECTS_00671998,&DAT_00675c64,iVar5,DAT_006957c8);
  if (DAT_006cdbd0 != 0) {
    *(short *)(DAT_006cdbd0 + 0x1a4) = (short)iVar5;
  }
  iVar1 = (iVar5 * iVar1) / 100;
  if (DAT_006cdbfc != 0) {
    *(short *)(DAT_006cdbfc + 400) = (short)iVar1;
  }
  if (DAT_006cdbf8 != 0) {
    *(short *)(DAT_006cdbf8 + 0x184) = (short)iVar1;
  }
  FUN_00603330(s_EFFECTS_00671998,s_trafs_00675c5c,iVar1,DAT_006957c8);
  FUN_00603330(s_EFFECTS_00671998,s_trafm_00675c54,iVar1,DAT_006957c8);
  if (((iVar5 < 0x33) || (param_2 == 0)) || (param_3 == 0)) {
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x11c) = *(uint *)(iVar3 + 0x11c) & 0xfffffffd;
    }
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x11c) = *(uint *)(iVar4 + 0x11c) & 0xfffffffd;
    }
    if (local_10 != 0) {
      *(uint *)(local_10 + 0x11c) = *(uint *)(local_10 + 0x11c) & 0xfffffffd;
    }
    if (local_c != 0) {
      *(uint *)(local_c + 0x11c) = *(uint *)(local_c + 0x11c) & 0xfffffffd;
    }
    if (param_1 == 0) {
      if (param_2 == 0) {
        uVar2 = 0x132;
        if (local_10 != 0) {
          *(uint *)(local_10 + 0x11c) = *(uint *)(local_10 + 0x11c) | 2;
        }
      }
      else {
        uVar2 = 0x122;
        if (local_c != 0) {
          *(uint *)(local_c + 0x11c) = *(uint *)(local_c + 0x11c) | 2;
        }
      }
    }
    else {
      uVar2 = 0x112;
      if (iVar3 != 0) {
        *(uint *)(iVar3 + 0x11c) = *(uint *)(iVar3 + 0x11c) | 2;
      }
    }
  }
  else {
    uVar2 = 0x122;
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x11c) = *(uint *)(iVar3 + 0x11c) & 0xfffffffd;
    }
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x11c) = *(uint *)(iVar4 + 0x11c) & 0xfffffffd;
    }
    if (local_10 != 0) {
      *(uint *)(local_10 + 0x11c) = *(uint *)(local_10 + 0x11c) & 0xfffffffd;
    }
    if (local_c != 0) {
      *(uint *)(local_c + 0x11c) = *(uint *)(local_c + 0x11c) | 2;
    }
  }
  if (DAT_006cdbd0 != 0) {
    *(undefined4 *)(DAT_006cdbd0 + 0x198) = uVar2;
  }
  FUN_00603330(s_EFFECTS_00671998,s_video_00675c4c,uVar2,DAT_006957c8);
  return;
}


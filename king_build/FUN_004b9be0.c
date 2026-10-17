
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b9be0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  puVar1 = (undefined4 *)FUN_00631d33(0x28);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_005d2890(0x14,s_DelayEff_00671698);
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_0064b2c8;
    puVar2 = (undefined4 *)FUN_00631d33(0x3fc);
    puVar1[8] = puVar2;
    for (iVar5 = 0xff; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar1[9] = 0;
    FUN_005d2c20(puVar1);
    FUN_005d2a80(1);
  }
  local_4 = 0xffffffff;
  DAT_00695154 = puVar1;
  FUN_004b87e0();
  FUN_004b91e0();
  DAT_00695184 = param_1;
  FUN_004cb5a0();
  FUN_004cb520();
  if (DAT_006f2314 != 0) {
    FUN_00613bb0((float)(int)*(short *)(DAT_006cdbd0 + 0x1a4) * _DAT_0064b258,
                 (float)(int)*(short *)(DAT_006cdbd0 + 0x1a6) * _DAT_0064b258);
    FUN_00613c30(param_1);
  }
  DAT_00695160 = FUN_005d8940(s_common_00671688);
  iVar5 = FUN_00631d33(0x78);
  local_4 = 2;
  if (iVar5 == 0) {
    DAT_006f5608 = 0;
  }
  else {
    DAT_006f5608 = FUN_00592b30(DAT_00695184);
  }
  local_4 = 0xffffffff;
  FUN_005a2ee0(param_1);
  iVar5 = FUN_00631d33(0x2c);
  local_4 = 3;
  if (iVar5 == 0) {
    _DAT_00695198 = 0;
  }
  else {
    _DAT_00695198 = FUN_004c99c0(DAT_00695184,0);
  }
  local_4 = 0xffffffff;
  puVar1 = (undefined4 *)FUN_00631d33(0x20);
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_005d27c0(s_evTask_00671690);
    local_4 = CONCAT31(local_4._1_3_,5);
    *puVar1 = &PTR_FUN_0064b2a8;
    FUN_005d2c20(puVar1);
    FUN_005d2a80(1);
  }
  local_4 = 0xffffffff;
  if (DAT_00695190 != 0) {
    if ((*(double *)(DAT_00695184 + 0xb68) <= (double)_DAT_0064b12c) ||
       ((double)_DAT_0064b130 <= *(double *)(DAT_00695184 + 0xb68))) {
      DAT_006706fc = 0;
    }
    else {
      DAT_006706fc = 1;
    }
    if ((*(double *)(DAT_00695184 + 0xb68) <= (double)_DAT_0064b134) ||
       ((double)_DAT_0064b138 <= *(double *)(DAT_00695184 + 0xb68))) {
      DAT_006706f8 = 0;
    }
    else {
      DAT_006706f8 = 1;
    }
    if (_DAT_0064b248 < _DAT_00694fc0) {
      iVar5 = FUN_00631d33(0x34);
      local_4 = 6;
      if (iVar5 != 0) {
        uVar3 = FUN_004c4750(&DAT_00671648,DAT_00695160);
        FUN_004bee30(DAT_00695184,uVar3);
      }
    }
    local_4 = 0xffffffff;
    if (_DAT_0064b248 < _DAT_00694fe0) {
      iVar5 = FUN_00631d33(0x30);
      local_4 = 7;
      if (iVar5 != 0) {
        uVar3 = FUN_004c4750(&DAT_00671640,DAT_00695160);
        FUN_004be8d0(DAT_00695184,uVar3);
      }
    }
    local_4 = 0xffffffff;
    if (_DAT_0064b248 < _DAT_00694fa4) {
      iVar5 = FUN_00631d33(0x48);
      local_4 = 8;
      if (iVar5 == 0) {
        DAT_00695194 = 0;
      }
      else {
        uVar3 = FUN_004c4750(&DAT_00671648,DAT_00695160);
        uVar4 = FUN_004c4750(&DAT_00671638,DAT_00695160,uVar3);
        DAT_00695194 = FUN_004c0e30(DAT_00695184,uVar4,uVar3);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_004b8780();
  FUN_0059d1e0(DAT_00695184);
  iVar5 = DAT_00695158;
  if (DAT_00695158 != 0) {
    FUN_004bcc30();
    FUN_00631d5c(iVar5);
    iVar5 = FUN_00631d33(0x58);
    local_4 = 9;
    if (iVar5 == 0) {
      DAT_00695158 = 0;
    }
    else {
      pcVar6 = s_trace_00671658;
      if (DAT_006cdbc8 == 0) {
        pcVar6 = s_shadow_00671650;
      }
      DAT_00695158 = FUN_004bc6e0(pcVar6,DAT_00695184,0x14);
    }
    local_4 = 0xffffffff;
    FUN_004bc9a0(DAT_00695190);
  }
  FUN_004c47f0();
  ExceptionList = pvStack_c;
  return;
}


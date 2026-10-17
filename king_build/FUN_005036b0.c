
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005036b0(int param_1,int param_2,float *param_3,int *param_4,int param_5)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float10 fVar9;
  float *pfVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float *local_278;
  float local_274;
  float local_270;
  float local_26c;
  float *local_268;
  float local_264;
  int local_260;
  float local_25c;
  float local_258;
  float local_254;
  float *local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  double local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c [13];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  undefined4 *local_1b8;
  uint local_1b4;
  undefined4 local_1a8;
  undefined4 local_1a4;
  float local_14c [3];
  undefined1 local_140 [12];
  undefined1 local_134 [304];
  
  fVar1 = *param_3;
  local_268 = (float *)param_3[1];
  local_264 = param_3[2];
  local_26c = fVar1;
  FUN_005eebf0();
  pfVar6 = (float *)(param_1 + (param_5 + 1) * 0xf8);
  local_250 = pfVar6;
  fVar9 = (float10)thunk_FUN_00603580();
  local_230 = (double)fVar9;
  local_25c = DAT_00701590 * *(float *)(param_1 + 0x10) +
              DAT_00701594 * *(float *)(param_1 + 0x1c) + DAT_00701598 * *(float *)(param_1 + 0x28);
  local_258 = DAT_00701590 * *(float *)(param_1 + 0x14) +
              DAT_00701594 * *(float *)(param_1 + 0x20) + DAT_00701598 * *(float *)(param_1 + 0x2c);
  local_254 = DAT_00701590 * *(float *)(param_1 + 0x18) +
              DAT_00701594 * *(float *)(param_1 + 0x24) + DAT_00701598 * *(float *)(param_1 + 0x30);
  local_288 = local_26c + DAT_00701590;
  local_284 = (float)local_268 + DAT_00701594;
  local_280 = local_264 + DAT_00701598;
  local_228 = local_288;
  local_224 = local_284;
  local_220 = local_280;
  if ((param_4 == (int *)0x0) && (iVar3 = FUN_00503220(&local_228,&param_4), iVar3 == 0)) {
    pfVar6[0x3c] = 0.0;
    *(undefined2 *)(pfVar6 + 6) = 0;
    *pfVar6 = fVar1;
    pfVar6[0x21] = 0.0;
    *(undefined2 *)((int)pfVar6 + 0x1a) = 0;
    pfVar6[1] = (float)local_268;
    pfVar6[2] = local_264;
    pfVar6[3] = fVar1;
    pfVar6[4] = (float)local_268;
    pfVar6[5] = local_264;
    fVar9 = (float10)thunk_FUN_00603580();
    DAT_006965c0 = DAT_006965c0 + 1;
    _DAT_006965b8 = (double)((fVar9 - (float10)local_230) + (float10)_DAT_006965b8);
    return 2;
  }
  if (*(int *)(param_1 + 0x3c54) != 0) {
    fVar9 = (float10)thunk_FUN_00603580();
    DAT_006965c0 = DAT_006965c0 + 1;
    _DAT_006965b8 = (double)((fVar9 - (float10)local_230) + (float10)_DAT_006965b8);
    return 0;
  }
  local_260 = 1;
  while( true ) {
    pfVar6 = local_21c;
    pfVar7 = (float *)&DAT_00701550;
    for (iVar3 = 0xc; pfVar6 = pfVar6 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar6 = *pfVar7;
      pfVar7 = pfVar7 + 1;
    }
    fVar9 = (float10)FUN_004e1fd9();
    local_1a8 = 0;
    local_21c[0] = 0.0;
    fVar1 = (float)((float10)(local_260 * local_260) *
                    (fVar9 * SQRT((float10)*(float *)(param_1 + 0xdc0)) +
                    (float10)*(float *)(param_1 + 0x1b74 + param_5 * 4)) + (float10)_DAT_0064a660);
    local_248 = local_258 * fVar1;
    local_270 = local_254 * fVar1;
    local_288 = local_25c * fVar1 + local_26c;
    local_284 = local_248 + (float)local_268;
    local_280 = local_270 + local_264;
    local_27c = local_26c - local_25c * fVar1;
    local_278 = (float *)((float)local_268 - local_248);
    local_274 = local_264 - local_270;
    local_1a4 = *(undefined4 *)(param_1 + 0x29d4);
    local_1b4 = -(uint)(*(int *)(param_1 + 0x275c) != 0) & (uint)param_4;
    local_244 = local_270;
    local_240 = local_248;
    local_238 = local_248;
    local_234 = local_270;
    local_1d0 = local_288;
    local_1cc = local_284;
    local_1c8 = local_280;
    local_1c4 = local_27c;
    local_1c0 = (float)local_278;
    local_1bc = local_274;
    if (*(int *)(param_1 + 0x1bf4 + param_5 * 4) == 0) {
      bVar2 = FUN_00503340();
    }
    else if (*(short *)(param_1 + 0x2708) == 0) {
      bVar2 = (**(code **)(*param_4 + 0x34))(4,local_21c);
    }
    else {
      bVar2 = FUN_004e58e9();
      bVar8 = bVar2 & 1;
      if (bVar8 == 0) {
        bVar2 = FUN_004e5ace();
        bVar8 = bVar2 & 1;
        if (bVar8 != 0) {
          if (1 < DAT_00695b48) {
            FUN_0061c369();
            FUN_004e1de6(local_134);
          }
          if (local_1b8 == (undefined4 *)0x0) {
            local_1b8 = &DAT_006965d8;
          }
        }
      }
      else if (1 < DAT_00695b48) {
        FUN_0061c369();
        FUN_004e1de6(local_134);
      }
      if ((bVar8 != 0) && (1 < DAT_00695b48)) {
        if (local_1b8 != (undefined4 *)0x0) {
          FUN_0061c369(local_134,s__d__d_00673978,*local_1b8,local_1b8[1]);
          FUN_004e1de6();
        }
        FUN_0061c369(local_134,s_7___f__f__f_0067396a + 2,(double)local_1e8,(double)local_1e4);
        FUN_004e1de6(local_134);
      }
    }
    pfVar6 = local_250;
    iVar3 = param_5;
    if ((bVar2 & 1) == 1) break;
    local_260 = local_260 + 1;
    if (3 < local_260) {
      if ((*(short *)(local_250 + 6) == 0) || (*(short *)((int)local_250 + 0x1a) != 0)) {
        local_27c = 0.0;
        local_278 = (float *)0x0;
        local_274 = 0.0;
        local_250[0x3c] = 0.0;
        *local_250 = 0.0;
        local_250[1] = 0.0;
        local_250[2] = 0.0;
        local_250[3] = DAT_007015b0;
        local_250[4] = DAT_007015b4;
        local_250[5] = DAT_007015b8;
      }
      else {
        local_23c = local_25c + local_26c;
        pfVar7 = local_250 + 3;
        local_238 = (float)local_268 + local_258;
        local_234 = local_264 + local_254;
        local_27c = local_26c - local_25c;
        local_278 = (float *)((float)local_268 - local_258);
        local_274 = local_264 - local_254;
        uVar12 = CONCAT44(&local_24c,&local_23c);
        pfVar10 = local_14c;
        uVar11 = CONCAT44(pfVar7,local_250);
        local_24c = local_27c;
        local_248 = (float)local_278;
        local_244 = local_274;
        pfVar4 = (float *)FUN_004e5c4e();
        local_288 = *pfVar4;
        local_284 = pfVar4[1];
        local_27c = local_26c - local_288;
        local_280 = pfVar4[2];
        local_278 = (float *)((float)local_268 - local_284);
        local_274 = local_264 - local_280;
        local_270 = local_274;
        local_26c = local_27c;
        local_268 = local_278;
        local_264 = local_274;
        local_250 = local_278;
        local_240 = local_27c;
        fVar9 = (float10)FUN_005aabc0(&local_26c,pfVar10,uVar11,uVar12);
        if ((((float)_DAT_0064a668 <
              *pfVar7 * local_240 + (float)local_250 * pfVar6[4] + pfVar6[5] * local_270) &&
            ((float)_DAT_0064a668 <
             *pfVar7 * local_25c + pfVar6[4] * local_258 + pfVar6[5] * local_254)) &&
           (fVar9 < (float10)*(float *)(param_1 + 0x1f9c + param_5 * 4) +
                    (float10)*(float *)(param_1 + 0x1b74 + param_5 * 4))) {
          pfVar6[0x3c] = (float)param_4;
          *pfVar6 = local_288;
          *(undefined2 *)(pfVar6 + 6) = 1;
          *(undefined2 *)((int)pfVar6 + 0x1a) = 1;
          pfVar6[1] = local_284;
          pfVar6[2] = local_280;
          fVar9 = (float10)thunk_FUN_00603580();
          DAT_006965c0 = DAT_006965c0 + -1 + local_260;
          _DAT_006965b8 = (double)((fVar9 - (float10)local_230) + (float10)_DAT_006965b8);
          return 1;
        }
        pfVar6[0x3c] = 0.0;
      }
      *(undefined2 *)(pfVar6 + 6) = 0;
      *(undefined2 *)((int)pfVar6 + 0x1a) = 0;
      pfVar6[0x21] = 0.0;
      fVar9 = (float10)thunk_FUN_00603580();
      DAT_006965c0 = DAT_006965c0 + -1 + local_260;
      _DAT_006965b8 = (double)((fVar9 - (float10)local_230) + (float10)_DAT_006965b8);
      return 0;
    }
  }
  if ((*(short *)(local_250 + 6) == 0) && (*(short *)((int)local_250 + 0x1a) == 0)) {
    *(undefined2 *)((int)local_250 + 0x1a) = 1;
    fVar9 = (float10)thunk_FUN_00603580();
    _DAT_006965b8 = (double)((fVar9 - (float10)local_230) + (float10)_DAT_006965b8);
    return 0;
  }
  local_250[0x3c] = (float)param_4;
  pfVar6 = local_21c;
  pfVar7 = local_250 + 8;
  for (iVar5 = 0x34; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  *local_250 = local_1e8;
  *(undefined2 *)(local_250 + 6) = 1;
  *(undefined2 *)((int)local_250 + 0x1a) = 0;
  local_250[1] = local_1e4;
  local_250[2] = local_1e0;
  local_250[3] = local_1dc;
  local_250[4] = local_1d8;
  local_250[5] = local_1d4;
  if (param_2 != 0) goto LAB_005040a5;
  switch(param_5) {
  case 0:
    fVar1 = *(float *)(&DAT_00696880 + *(int *)(param_1 + 0x8cc) * 0x970) * _DAT_0064b248;
    local_288 = fVar1 * DAT_007015a0;
    local_284 = fVar1 * DAT_007015a4;
    fVar1 = fVar1 * DAT_007015a8;
    local_24c = local_288 * *(float *)(param_1 + 0x10) +
                local_284 * *(float *)(param_1 + 0x1c) + fVar1 * *(float *)(param_1 + 0x28);
    local_248 = local_284 * *(float *)(param_1 + 0x20) +
                fVar1 * *(float *)(param_1 + 0x2c) + local_288 * *(float *)(param_1 + 0x14);
    local_244 = local_284 * *(float *)(param_1 + 0x24) +
                fVar1 * *(float *)(param_1 + 0x30) + local_288 * *(float *)(param_1 + 0x18);
    FUN_005aae00(&local_288,&local_24c);
    break;
  case 1:
    pfVar7 = &local_23c;
    pfVar6 = &local_26c;
    fVar1 = *(float *)(&DAT_00696880 + *(int *)(param_1 + 0x8cc) * 0x970) * _DAT_0064b248;
    local_288 = fVar1 * DAT_007015a0;
    local_284 = fVar1 * DAT_007015a4;
    fVar1 = fVar1 * DAT_007015a8;
    local_23c = local_288 * *(float *)(param_1 + 0x10) +
                local_284 * *(float *)(param_1 + 0x1c) + fVar1 * *(float *)(param_1 + 0x28);
    local_238 = local_284 * *(float *)(param_1 + 0x20) +
                fVar1 * *(float *)(param_1 + 0x2c) + local_288 * *(float *)(param_1 + 0x14);
    local_234 = local_284 * *(float *)(param_1 + 0x24) +
                fVar1 * *(float *)(param_1 + 0x30) + local_288 * *(float *)(param_1 + 0x18);
    goto LAB_0050407a;
  case 2:
  case 4:
    fVar1 = *(float *)(&DAT_00696884 + *(int *)(param_1 + 0x8cc) * 0x970) * _DAT_0064b248;
    local_288 = fVar1 * DAT_007015a0;
    local_284 = fVar1 * DAT_007015a4;
    fVar1 = fVar1 * DAT_007015a8;
    local_27c = local_288 * *(float *)(param_1 + 0x10) +
                local_284 * *(float *)(param_1 + 0x1c) + fVar1 * *(float *)(param_1 + 0x28);
    local_278 = (float *)(local_284 * *(float *)(param_1 + 0x20) +
                         fVar1 * *(float *)(param_1 + 0x2c) + local_288 * *(float *)(param_1 + 0x14)
                         );
    local_274 = local_284 * *(float *)(param_1 + 0x24) +
                fVar1 * *(float *)(param_1 + 0x30) + local_288 * *(float *)(param_1 + 0x18);
    FUN_005aae00(local_140,&local_27c);
    break;
  case 3:
  case 5:
    pfVar7 = &local_25c;
    pfVar6 = local_14c;
    fVar1 = *(float *)(&DAT_00696884 + *(int *)(param_1 + 0x8cc) * 0x970) * _DAT_0064b248;
    local_288 = fVar1 * DAT_007015a0;
    local_284 = fVar1 * DAT_007015a4;
    fVar1 = fVar1 * DAT_007015a8;
    local_25c = local_288 * *(float *)(param_1 + 0x10) +
                local_284 * *(float *)(param_1 + 0x1c) + fVar1 * *(float *)(param_1 + 0x28);
    local_258 = local_288 * *(float *)(param_1 + 0x14) +
                local_284 * *(float *)(param_1 + 0x20) + fVar1 * *(float *)(param_1 + 0x2c);
    local_254 = local_288 * *(float *)(param_1 + 0x18) +
                local_284 * *(float *)(param_1 + 0x24) + fVar1 * *(float *)(param_1 + 0x30);
LAB_0050407a:
    FUN_005aae40(pfVar6,pfVar7);
  }
  FUN_00502000(local_21c,iVar3);
  FUN_00502d80();
LAB_005040a5:
  pfVar6 = local_21c;
  pfVar7 = (float *)(iVar3 * 0xd0 + 0x3510 + param_1);
  for (iVar5 = 0x34; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar7 = pfVar7 + 1;
  }
  fVar9 = (float10)thunk_FUN_00603580();
  DAT_006965c0 = DAT_006965c0 + local_260;
  _DAT_006965b8 = (double)((fVar9 - (float10)local_230) + (float10)_DAT_006965b8);
  return 1;
}


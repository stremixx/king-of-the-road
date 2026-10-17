
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00577e70(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  int iStack_248;
  int iStack_244;
  undefined1 auStack_240 [12];
  undefined1 auStack_234 [8];
  undefined1 local_22c [200];
  undefined1 local_164 [80];
  CHAR aCStack_114 [268];
  float fStack_8;
  undefined4 uStack_4;
  
  FUN_00576440(local_164);
  FUN_0061c369(local_22c,s__s_____________________0067be04,local_164);
  FUN_0061c369(local_22c,s_JOYSTICK_set_cur_joystick___d__s_0067bddc,param_1,local_164);
  FUN_00576420(local_22c);
  DAT_006f3b18 = param_3;
  DAT_006f3b14 = param_2;
  DAT_006f3b1c = param_4;
  if (DAT_006f3ae8 != (int *)0x0) {
    (**(code **)(*DAT_006f3ae8 + 0x20))(DAT_006f3ae8);
  }
  if ((param_1 < 0) || (DAT_006f3af0 <= param_1)) {
    return -0x7ff8ffa9;
  }
  DAT_006f3af4 = param_1;
  DAT_006f3aec = &DAT_006f2488 + param_1 * 0x8e;
  DAT_006f3ae8 = (int *)(&DAT_006f3ab8)[param_1];
  DAT_006f3ae0 = (&DAT_006f2448)[param_1];
  FUN_0061c369(local_22c,s_set_cur_joystick___d_of__d_____p_0067bd9c,param_1 + 1,DAT_006f3af0,
               &DAT_006f24b8 + param_1 * 0x238,&DAT_006f25bc + param_1 * 0x8e);
  FUN_00576420(local_22c);
  FUN_00576420(s_SetDataFormat____0067bd88);
  iVar1 = (**(code **)(*DAT_006f3ae8 + 0x2c))(DAT_006f3ae8,&DAT_00654268);
  if (-1 < iVar1) {
    FUN_00576420(&DAT_006761c8);
    FUN_00576420(s_SetCooperativeLevel___0067bd70);
    iVar1 = (**(code **)(*DAT_006f3ae8 + 0x34))(DAT_006f3ae8,param_2,9);
    if (-1 < iVar1) {
      FUN_00576420(&DAT_006761c8);
      uStack_258 = 0;
      uStack_254 = 0;
      uStack_250 = 0;
      FUN_00576420(s_GetProperty_DIPROP_AUTOCENTER____0067bd4c);
      iVar1 = (**(code **)(*DAT_006f3ae8 + 0x14))(DAT_006f3ae8,9,&stack0xfffffda0);
      if (iVar1 < 0) {
        wsprintfA(aCStack_114,s_JOYSTICK_GetProperty__DIPROP_AUT_0067bd10,iVar1);
        FUN_00576420(aCStack_114);
      }
      FUN_00576420(&DAT_006761c8);
      DAT_0067b3fc = 0x10;
      iStack_248 = -DAT_0067b3f4;
      iStack_244 = DAT_0067b3f4;
      uStack_258 = 0x18;
      uStack_254 = 0x10;
      uStack_24c = 1;
      uVar5 = 0;
      iVar1 = DAT_006f3af4;
      do {
        switch(uVar5) {
        case 0:
          uStack_250 = 0;
          (&DAT_006f2490)[iVar1 * 0x8e] = 1;
          break;
        case 1:
          uStack_250 = 4;
          (&DAT_006f2494)[iVar1 * 0x8e] = 1;
          break;
        case 2:
          uStack_250 = 8;
          (&DAT_006f2498)[iVar1 * 0x8e] = 1;
          break;
        case 3:
          uStack_250 = 0xc;
          (&DAT_006f249c)[iVar1 * 0x8e] = 1;
          break;
        case 4:
          uStack_250 = 0x10;
          (&DAT_006f24a0)[iVar1 * 0x8e] = 1;
          break;
        case 5:
          uStack_250 = 0x14;
          (&DAT_006f24a4)[iVar1 * 0x8e] = 1;
          break;
        case 6:
          uStack_250 = 0x18;
          (&DAT_006f24a8)[iVar1 * 0x8e] = 1;
          break;
        case 7:
          uStack_250 = 0x1c;
          (&DAT_006f24ac)[iVar1 * 0x8e] = 1;
        }
        iVar1 = (**(code **)(*DAT_006f3ae8 + 0x18))(DAT_006f3ae8,4,&uStack_258);
        FUN_00576420(s_SetProperty_DIPROP_RANGE__0067bcf4);
        if (iVar1 < 0) {
          FUN_0061c369(auStack_240,s_error__0X_0067b49c,iVar1);
        }
        else {
          FUN_0061c369(auStack_240,&DAT_006761c8);
        }
        FUN_00576420(auStack_240);
        if (iVar1 < 0) {
          iVar1 = DAT_006f3af4;
          switch(uVar5) {
          case 0:
switchD_00578236_caseD_0:
            iVar1 = DAT_006f3af4;
            (&DAT_006f2490)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 1:
switchD_00578236_caseD_1:
            iVar1 = DAT_006f3af4;
            (&DAT_006f2494)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 2:
switchD_00578236_caseD_2:
            iVar1 = DAT_006f3af4;
            (&DAT_006f2498)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 3:
switchD_00578236_caseD_3:
            iVar1 = DAT_006f3af4;
            (&DAT_006f249c)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 4:
switchD_00578236_caseD_4:
            iVar1 = DAT_006f3af4;
            (&DAT_006f24a0)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 5:
switchD_00578236_caseD_5:
            iVar1 = DAT_006f3af4;
            (&DAT_006f24a4)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 6:
switchD_00578236_caseD_6:
            iVar1 = DAT_006f3af4;
            (&DAT_006f24a8)[DAT_006f3af4 * 0x8e] = 0;
            break;
          case 7:
switchD_00578236_caseD_7:
            iVar1 = DAT_006f3af4;
            (&DAT_006f24ac)[DAT_006f3af4 * 0x8e] = 0;
          }
        }
        else {
          uVar3 = __ftol();
          if (fStack_8 < _DAT_0064b254) {
            if (DAT_006f3ae0 == 1) {
              uVar3 = -(uint)(uVar5 != 0) & 100;
            }
            else {
              uVar3 = -(uint)(uVar5 != 0) & 200;
            }
          }
          else if (uVar5 == 0) {
            uVar3 = __ftol();
          }
          iVar4 = FUN_00577d50(uVar5,uVar3,uStack_4);
          iVar1 = DAT_006f3af4;
          if (iVar4 < 0) {
            switch(uVar5) {
            case 0:
              goto switchD_00578236_caseD_0;
            case 1:
              goto switchD_00578236_caseD_1;
            case 2:
              goto switchD_00578236_caseD_2;
            case 3:
              goto switchD_00578236_caseD_3;
            case 4:
              goto switchD_00578236_caseD_4;
            case 5:
              goto switchD_00578236_caseD_5;
            case 6:
              goto switchD_00578236_caseD_6;
            case 7:
              goto switchD_00578236_caseD_7;
            }
          }
        }
        uVar5 = uVar5 + 1;
        if (7 < uVar5) {
          if (DAT_006f3ae8 != (int *)0x0) {
            (**(code **)(*DAT_006f3ae8 + 0x1c))(DAT_006f3ae8);
          }
          return 0;
        }
      } while( true );
    }
  }
  uVar2 = FUN_0061f231(iVar1);
  FUN_0061c369(auStack_234,s_error__0X__s_0067b528,iVar1,uVar2);
  FUN_00576420(auStack_234);
  if (param_4 != 0) {
    FUN_0061c25a(param_4);
  }
  return iVar1;
}


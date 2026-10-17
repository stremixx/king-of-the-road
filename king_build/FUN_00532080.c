
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00532080(int param_1,short *param_2)

{
  undefined *puVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CHAR local_fc [100];
  undefined1 local_98 [152];
  
  sVar2 = *param_2;
  if (sVar2 < 0x202) {
    if (sVar2 != 0x201) {
      if (0x102 < sVar2) {
        if (sVar2 != 0x200) {
          return;
        }
        fVar3 = ((float)(int)param_2[1] / (float)DAT_006957b0 - (float)_DAT_0064a6d0) *
                _DAT_006d0afc;
        fVar3 = fVar3 + fVar3;
        if (DAT_006d0b00 != 0) {
          fVar3 = -fVar3;
        }
        _DAT_006d0af8 = _DAT_0064b240;
        if ((fVar3 <= _DAT_0064b240) && (_DAT_006d0af8 = fVar3, fVar3 < _DAT_0064b928)) {
          _DAT_006d0af8 = _DAT_0064b928;
        }
        _DAT_006d0b04 =
             ((float)(int)param_2[2] / (float)DAT_006957b4 - (float)_DAT_0064a6d0) * _DAT_006d0b08;
        _DAT_006d0b04 = _DAT_006d0b04 + _DAT_006d0b04;
        if (DAT_006d0b0c != 0) {
          _DAT_006d0b04 = -_DAT_006d0b04;
        }
        if (_DAT_006d0b04 <= _DAT_0064b240) {
          if (_DAT_006d0b04 < _DAT_0064b928) {
            _DAT_006d0b04 = _DAT_0064b928;
          }
          return;
        }
        _DAT_006d0b04 = _DAT_0064b240;
        return;
      }
      if (sVar2 == 0x102) {
        return;
      }
      if (sVar2 != 0x100) {
        if (sVar2 != 0x101) {
          return;
        }
        if ((&DAT_006d08a9)[param_2[3] * 2] == '\0') {
          return;
        }
        (&DAT_006d08a8)[param_2[3] * 2] = 0;
        return;
      }
      iVar7 = (int)param_2[3];
      if (iVar7 == 0x51) {
        FUN_004843e0();
      }
      puVar1 = &DAT_006d08a8 + iVar7 * 2;
      *puVar1 = 1;
      if (((*(int *)(param_1 + 0x268) != 0) && (*(int *)(*(int *)(param_1 + 0x268) + 0x5460) != 0))
         && ((puVar1 == DAT_006d0e38 || (puVar1 == DAT_006d0ef4)))) {
        _DAT_006d1044 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xbb0);
        _DAT_006d1048 = (float)*(double *)(*(int *)(param_1 + 0x20) + 0xb98);
        FUN_004e3cf8(local_fc);
        iVar6 = *(int *)(param_1 + 0x20);
        FUN_0061c369(local_98,s_GEARDOWN_frame__d_game_time__f_d_00677a3c,
                     *(undefined4 *)(iVar6 + 0xbb0),*(undefined4 *)(iVar6 + 0xb98),
                     *(undefined4 *)(iVar6 + 0xb9c),local_fc);
      }
      iVar6 = 0;
      do {
        if (*(int *)((int)&DAT_006776e4 + iVar6) == 0) {
          if (((*(int *)((int)&DAT_006d0fe4 + iVar6) == 0) &&
              (iVar4 = *(int *)((int)&DAT_006d101c + iVar6), iVar4 != 0)) &&
             (iVar5 = *(int *)((int)&DAT_006d1000 + iVar6),
             *(char *)(iVar4 + -1 + (*(int *)((int)&PTR_DAT_006776c8 + iVar6) - iVar5)) == iVar7))
          goto LAB_00532213;
LAB_00532293:
          *(undefined4 *)((int)&DAT_006d1000 + iVar6) = 0;
        }
        else {
          if (((*(int *)((int)&DAT_006d0fe4 + iVar6) != 0) ||
              (iVar4 = *(int *)((int)&DAT_006d101c + iVar6), iVar4 == 0)) ||
             (iVar5 = *(int *)((int)&DAT_006d1000 + iVar6),
             *(char *)(*(int *)((int)&PTR_DAT_006776c8 + iVar6) + iVar5) != iVar7))
          goto LAB_00532293;
LAB_00532213:
          *(int *)((int)&DAT_006d1000 + iVar6) = iVar5 + 1;
          if (iVar5 + 1 == iVar4) {
            if ((undefined4 *)((int)&DAT_006d0fe4 + iVar6) == &DAT_006d0ff8) {
              GetPrivateProfileStringA
                        (s_INSTALL_006751a4,s_source_00677a34,s_________0067205c,local_fc,100,
                         s___truck_ini_00671ec8);
              iVar4 = FUN_0061f130(local_fc,s___Sl_nt_develop_gme_00677a20,0x13);
              if (((iVar4 != 0) && (iVar4 = FUN_0061f130(local_fc,s_r__king_00677a18,7), iVar4 != 0)
                  ) && (iVar4 = FUN_0061f130(local_fc,s_r__rig_roll_00677a0c,0xb), iVar4 != 0))
              goto LAB_0053229d;
            }
            *(undefined4 *)((int)&DAT_006d0fe4 + iVar6) = 1;
          }
        }
LAB_0053229d:
        iVar6 = iVar6 + 4;
        if (0x1b < iVar6) {
          return;
        }
      } while( true );
    }
    DAT_006d0aa8 = 1;
    iVar7 = *(int *)(DAT_006cdbcc + 0x514);
  }
  else {
    if (sVar2 == 0x202) {
      DAT_006d0aa8 = 0;
      return;
    }
    if (sVar2 != 0x204) {
      if (sVar2 != 0x205) {
        return;
      }
      DAT_006d0aac = 0;
      return;
    }
    DAT_006d0aac = 1;
    iVar7 = *(int *)(DAT_006cdbcc + 0x514);
  }
  if (1 < iVar7) {
    return;
  }
  FUN_005ac200(DAT_006957b0 / 2,DAT_006957b4 / 2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0062a340(undefined4 param_1)

{
  undefined1 *puVar1;
  int3 iVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uStack_4;
  
  if ((DAT_00779f3c == 0) || (ram0x00779f34 == 0)) {
    if (DAT_007355e4 < DAT_007355e0) {
      bVar4 = (&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      bVar4 = FUN_0062afd0(0);
    }
    iVar2 = (uint3)bVar4 << 0x10;
    if (DAT_007355e0 <= DAT_007355e4) {
      uVar13 = 0;
      goto LAB_0062a3ed;
    }
LAB_0062a399:
    puVar1 = &DAT_0072d594 + DAT_007355e4;
    DAT_007355e4 = DAT_007355e4 + 1;
    uStack_4 = CONCAT13(*puVar1,iVar2);
  }
  else {
    if (DAT_007355e4 < DAT_007355e0) {
      bVar4 = (&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      bVar4 = FUN_0062afd0(1);
    }
    iVar2 = (uint3)bVar4 << 0x10;
    if (DAT_007355e4 < DAT_007355e0) goto LAB_0062a399;
    uVar13 = 1;
LAB_0062a3ed:
    uVar3 = FUN_0062afd0(uVar13);
    uStack_4 = CONCAT13(uVar3,iVar2);
  }
  DAT_007355dc = DAT_007355dc + 1;
  DAT_00688734 = 0xffffffff;
  _DAT_00779f78 = 0;
  _DAT_00769df0 = 0;
  if ((uStack_4._2_2_ == DAT_00688bec) || (uStack_4._2_2_ == DAT_00688be8)) {
    if (DAT_007355e4 < DAT_007355e0) {
      DAT_00688734 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      DAT_00688734 = FUN_0062afd0(0);
    }
    if (DAT_00688734 != 8) {
      FUN_0061d86c(&DAT_006852e0,s__s___s__unknown_method__d____get_00688b9c,DAT_00769efc,
                   &DAT_00769df4,DAT_00688734);
      DAT_00779f58 = 1;
      return 0xffffffff;
    }
    PTR_FUN_006888c0 = &LAB_0062c580;
    if (DAT_007355e4 < DAT_007355e0) {
      bVar4 = (&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      bVar4 = FUN_0062afd0(0);
    }
    if ((bVar4 & 0x20) != 0) {
      pcVar12 = s__s___s_is_encrypted____get_newer_00688b68;
      goto LAB_0062a626;
    }
    if ((bVar4 & 2) != 0) {
      FUN_0061d86c(&DAT_006852e0,s__s___s_is_a_a_multi_part_gzip_fi_00688b24,DAT_00769efc,
                   &DAT_00769df4);
      DAT_00779f58 = 1;
      if (DAT_00779f3c < 2) {
        return 0xffffffff;
      }
    }
    if ((bVar4 & 0xc0) != 0) {
      FUN_0061d86c(&DAT_006852e0,s__s___s_has_flags_0x_x____get_new_00688af0,DAT_00769efc,
                   &DAT_00769df4,bVar4);
      DAT_00779f58 = 1;
      if (DAT_00779f3c < 2) {
        return 0xffffffff;
      }
    }
    if (DAT_007355e4 < DAT_007355e0) {
      uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar11 = FUN_0062afd0(0);
    }
    if (DAT_007355e4 < DAT_007355e0) {
      uVar9 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar9 = FUN_0062afd0(0);
    }
    if (DAT_007355e4 < DAT_007355e0) {
      uVar7 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar7 = FUN_0062afd0(0);
    }
    if (DAT_007355e4 < DAT_007355e0) {
      uVar8 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      uVar8 = FUN_0062afd0(0);
    }
    uVar11 = uVar11 | uVar9 << 8 | uVar7 << 0x10 | uVar8 << 0x18;
    if ((uVar11 != 0) && (DAT_0068872c == 0)) {
      DAT_0072d480 = uVar11;
    }
    if (DAT_007355e4 < DAT_007355e0) {
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      FUN_0062afd0(0);
    }
    if (DAT_007355e4 < DAT_007355e0) {
      DAT_007355e4 = DAT_007355e4 + 1;
    }
    else {
      FUN_0062afd0(0);
    }
    if ((bVar4 & 2) != 0) {
      if (DAT_007355e4 < DAT_007355e0) {
        uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        uVar11 = FUN_0062afd0(0);
      }
      if (DAT_007355e4 < DAT_007355e0) {
        uVar9 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        uVar9 = FUN_0062afd0(0);
      }
      if (DAT_00779f48 != 0) {
        FUN_0061d86c(&DAT_006852e0,s__s___s__part_number__u_00688ad8,DAT_00769efc,&DAT_00769df4,
                     uVar9 << 8 | uVar11);
      }
    }
    if ((bVar4 & 4) != 0) {
      if (DAT_007355e4 < DAT_007355e0) {
        uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        uVar11 = FUN_0062afd0(0);
      }
      if (DAT_007355e4 < DAT_007355e0) {
        uVar9 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
        DAT_007355e4 = DAT_007355e4 + 1;
      }
      else {
        uVar9 = FUN_0062afd0(0);
      }
      uVar11 = uVar11 | uVar9 << 8;
      if (DAT_00779f48 != 0) {
        FUN_0061d86c(&DAT_006852e0,s__s___s__extra_field_of__u_bytes_i_00688aac,DAT_00769efc,
                     &DAT_00769df4,uVar11);
      }
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        if (DAT_007355e4 < DAT_007355e0) {
          DAT_007355e4 = DAT_007355e4 + 1;
        }
        else {
          FUN_0062afd0(0);
        }
      }
    }
    if ((bVar4 & 8) != 0) {
      if ((DAT_00688728 == 0) &&
         (((ram0x00779f34 == 0 || (DAT_00779f44 != 0)) && (DAT_007355dc < 2)))) {
        pcVar10 = (char *)FUN_0062b180(&DAT_0072d488);
        pcVar12 = pcVar10;
        while( true ) {
          if (DAT_007355e4 < DAT_007355e0) {
            cVar5 = (&DAT_0072d594)[DAT_007355e4];
            DAT_007355e4 = DAT_007355e4 + 1;
          }
          else {
            cVar5 = FUN_0062afd0(0);
          }
          *pcVar12 = cVar5;
          pcVar12 = pcVar12 + 1;
          if (cVar5 == '\0') break;
          if ((char *)0x72d58b < pcVar12) {
            FUN_0062b1c0(s_corrupted_input____file_name_too_00688a84);
          }
        }
        if ((DAT_00779f44 == 0) && (pcVar10 != (char *)0x0)) {
          DAT_00779f44 = 0;
        }
      }
      else {
        do {
          if (DAT_007355e4 < DAT_007355e0) {
            cVar5 = (&DAT_0072d594)[DAT_007355e4];
            DAT_007355e4 = DAT_007355e4 + 1;
          }
          else {
            cVar5 = FUN_0062afd0(0);
          }
        } while (cVar5 != '\0');
      }
    }
    if ((bVar4 & 0x10) != 0) {
      do {
        if (DAT_007355e4 < DAT_007355e0) {
          uVar11 = (uint)(byte)(&DAT_0072d594)[DAT_007355e4];
          DAT_007355e4 = DAT_007355e4 + 1;
        }
        else {
          uVar11 = FUN_0062afd0(0);
        }
      } while (uVar11 != 0);
    }
    if (DAT_007355dc == 1) {
      _DAT_00779f78 = DAT_007355e4 + 8;
    }
LAB_0062aa39:
    if (-1 < (int)DAT_00688734) {
      return DAT_00688734;
    }
  }
  else {
    if (((uStack_4._2_2_ == (short)DAT_00688be0) && (DAT_007355e4 == 2)) &&
       (_DAT_0072d594 == DAT_00688be0)) {
      DAT_007355e4 = 0;
      PTR_FUN_006888c0 = &LAB_0062c580;
      iVar6 = FUN_0062c460(param_1);
      if (iVar6 != 0) {
        return 0xffffffff;
      }
      _DAT_00769df0 = 1;
      goto LAB_0062aa39;
    }
    if (uStack_4._2_2_ == DAT_00688bdc) {
      PTR_FUN_006888c0 = FUN_0062c010;
      DAT_00688734 = 2;
      return 2;
    }
    if (uStack_4._2_2_ == DAT_00688bd8) {
      _DAT_00769df0 = 1;
      PTR_FUN_006888c0 = &LAB_0062baa0;
      DAT_00688734 = 1;
      return 1;
    }
    if (uStack_4._2_2_ == DAT_00688bd4) {
      _DAT_00769df0 = 1;
      PTR_FUN_006888c0 = &LAB_0062b270;
      DAT_00688734 = 3;
      return 3;
    }
    if (((DAT_00779f3c != 0) && (ram0x00779f34 != 0)) && (DAT_00779f44 == 0)) {
      _DAT_00769df0 = 1;
      DAT_007355e4 = 0;
      DAT_00688734 = 0;
      PTR_FUN_006888c0 = &LAB_0062aeb0;
      return 0;
    }
  }
  if (DAT_007355dc != 1) {
    if (DAT_00779f4c == 0) {
      FUN_0061d86c(&DAT_006852e0,s__s___s__decompression_OK__traili_00688a2c,DAT_00769efc,
                   &DAT_00769df4);
    }
    if (DAT_00779f58 == 0) {
      DAT_00779f58 = 2;
    }
    return 0xfffffffe;
  }
  pcVar12 = s__s___s__not_in_gzip_format_00688a64;
LAB_0062a626:
  FUN_0061d86c(&DAT_006852e0,pcVar12,DAT_00769efc,&DAT_00769df4);
  DAT_00779f58 = 1;
  return 0xffffffff;
}



undefined4 FUN_0042dcd0(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  void **ppvVar1;
  uint3 uVar2;
  char cVar3;
  undefined4 *puVar4;
  char *pcStack_50;
  int **ppiStack_4c;
  undefined1 **ppuStack_48;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  int *local_18 [2];
  uint uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063d197;
  local_c = ExceptionList;
  local_34 = 0;
  local_30 = 0;
  local_2c = (char *)0x0;
  local_28 = (char *)0x0;
  local_4._1_3_ = 0;
  uVar2 = local_4._1_3_;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if ((param_4 & 0xff) != 9) {
    ExceptionList = &local_c;
    ppvVar1 = &local_c;
    if ((param_4 & 0xff) == 2) {
      do {
        ExceptionList = ppvVar1;
        local_38 = (undefined1 *)&pcStack_50;
        FUN_00407e60(&pcStack_50,&param_2);
        FUN_0042dcd0(&local_24);
        ppuStack_48 = (undefined1 **)local_20;
        ppiStack_4c = (int **)local_24;
        pcStack_50 = local_2c;
        local_4._0_1_ = 4;
        FUN_00452340();
        local_4._0_1_ = 2;
        ppuStack_48 = (undefined1 **)0x42dfaa;
        FUN_00449050();
        ppuStack_48 = (undefined1 **)&param_2;
        ppiStack_4c = local_18;
        pcStack_50 = (char *)0x42dfb9;
        puVar4 = (undefined4 *)FUN_00409000();
        local_4._0_1_ = 3;
        if (((param_2 != (int *)0x0) && ((param_4 & 0x10000) == 0)) &&
           (param_2[1] = param_2[1] + -1, param_2[1] == 0)) {
          ppiStack_4c = &param_2;
          pcStack_50 = (char *)0x42dfec;
          ppuStack_48 = (undefined1 **)puVar4;
          cVar3 = FUN_00408fd0();
          if ((cVar3 == '\0') && (param_2 != (int *)0x0)) {
            ppuStack_48 = (undefined1 **)0x1;
            ppiStack_4c = (int **)0x42e002;
            (**(code **)(*param_2 + 0xc))();
          }
        }
        param_4 = puVar4[2];
        if ((param_4 & 0x10000) == 0) {
          param_3 = 0;
          param_2 = (int *)*puVar4;
          if (param_2 == (int *)0x0) {
            param_2 = (int *)0x0;
            param_4 = 0;
          }
          else {
            param_4 = puVar4[2];
            param_2[1] = param_2[1] + 1;
          }
        }
        else {
          param_2 = (int *)*puVar4;
          param_3 = puVar4[1];
        }
        local_4._0_1_ = 2;
        if ((((uStack_10 & 0x10000) == 0) && (local_18[0] != (int *)0x0)) &&
           ((local_18[0][1] = local_18[0][1] + -1, local_18[0][1] == 0 &&
            (local_18[0] != (int *)0x0)))) {
          ppuStack_48 = (undefined1 **)0x1;
          ppiStack_4c = (int **)0x42e072;
          (**(code **)(*local_18[0] + 0xc))();
        }
        ppvVar1 = ExceptionList;
        uVar2 = local_4._1_3_;
      } while ((char)param_4 == '\x02');
    }
    goto LAB_0042e07d;
  }
  ppiStack_4c = &param_2;
  ppuStack_48 = (undefined1 **)&DAT_0066cde0;
  pcStack_50 = (char *)0x42dd2b;
  ExceptionList = &local_c;
  cVar3 = FUN_004b6670();
  if (cVar3 == '\0') {
    ppiStack_4c = &param_2;
    ppuStack_48 = (undefined1 **)s_ghost_0066ba38;
    pcStack_50 = (char *)0x42dd87;
    cVar3 = FUN_004b6670();
    if (cVar3 == '\0') {
      ppiStack_4c = &param_2;
      ppuStack_48 = (undefined1 **)s_dealer_0066ba30;
      pcStack_50 = (char *)0x42ddcb;
      cVar3 = FUN_004b6670();
      if (cVar3 == '\0') {
        ppiStack_4c = &param_2;
        ppuStack_48 = (undefined1 **)s_trucker_0066bd98;
        pcStack_50 = (char *)0x42de12;
        cVar3 = FUN_004b6670();
        if (cVar3 == '\0') {
          ppiStack_4c = &param_2;
          ppuStack_48 = (undefined1 **)s_police_0066ba48;
          pcStack_50 = (char *)0x42de59;
          cVar3 = FUN_004b6670();
          if (cVar3 == '\0') {
            ppiStack_4c = &param_2;
            ppuStack_48 = (undefined1 **)&DAT_0066ba40;
            pcStack_50 = (char *)0x42dea0;
            cVar3 = FUN_004b6670();
            if (cVar3 == '\0') {
              ppiStack_4c = &param_2;
              ppuStack_48 = (undefined1 **)&DAT_0066cdd8;
              pcStack_50 = (char *)0x42dee7;
              cVar3 = FUN_004b6670();
              if (cVar3 == '\0') {
                ppuStack_48 = (undefined1 **)&DAT_0068c120;
                ppiStack_4c = (int **)param_2[3];
                pcStack_50 = s_Unsupported_type_0066cdc4;
                FUN_00401010(4,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                             s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2f33);
                uVar2 = local_4._1_3_;
                goto LAB_0042e07d;
              }
              local_38 = (undefined1 *)0x0;
              if (local_2c == local_28) {
                ppuStack_48 = &local_38;
                ppiStack_4c = (int **)local_2c;
                pcStack_50 = (char *)0x42df16;
                FUN_00451fc0();
                uVar2 = local_4._1_3_;
                goto LAB_0042e07d;
              }
            }
            else {
              local_38 = (undefined1 *)0x6;
              if (local_2c == local_28) {
                ppuStack_48 = &local_38;
                ppiStack_4c = (int **)local_2c;
                pcStack_50 = (char *)0x42ded3;
                FUN_00451fc0();
                uVar2 = local_4._1_3_;
                goto LAB_0042e07d;
              }
            }
          }
          else {
            local_38 = (undefined1 *)0x5;
            if (local_2c == local_28) {
              ppuStack_48 = &local_38;
              ppiStack_4c = (int **)local_2c;
              pcStack_50 = (char *)0x42de8c;
              FUN_00451fc0();
              uVar2 = local_4._1_3_;
              goto LAB_0042e07d;
            }
          }
        }
        else {
          local_38 = (undefined1 *)0x2;
          if (local_2c == local_28) {
            ppuStack_48 = &local_38;
            ppiStack_4c = (int **)local_2c;
            pcStack_50 = (char *)0x42de45;
            FUN_00451fc0();
            uVar2 = local_4._1_3_;
            goto LAB_0042e07d;
          }
        }
      }
      else {
        local_38 = (undefined1 *)0x9;
        if (local_2c == local_28) {
          ppuStack_48 = &local_38;
          ppiStack_4c = (int **)local_2c;
          pcStack_50 = (char *)0x42ddfe;
          FUN_00451fc0();
          uVar2 = local_4._1_3_;
          goto LAB_0042e07d;
        }
      }
    }
    else {
      local_38 = (undefined1 *)0x8;
      if (local_2c == local_28) {
        ppuStack_48 = &local_38;
        ppiStack_4c = (int **)local_2c;
        pcStack_50 = (char *)0x42ddb7;
        FUN_00451fc0();
        uVar2 = local_4._1_3_;
        goto LAB_0042e07d;
      }
    }
  }
  else {
    local_38 = (undefined1 *)0x7;
    if (local_2c == local_28) {
      ppuStack_48 = &local_38;
      ppiStack_4c = (int **)local_2c;
      pcStack_50 = (char *)0x42dd73;
      FUN_00451fc0();
      uVar2 = local_4._1_3_;
      goto LAB_0042e07d;
    }
  }
  ppuStack_48 = &local_38;
  pcStack_50 = (char *)0x42dd51;
  ppiStack_4c = (int **)local_2c;
  FUN_00460970();
  local_2c = local_2c + 4;
  uVar2 = local_4._1_3_;
LAB_0042e07d:
  local_4._1_3_ = uVar2;
  ppuStack_48 = (undefined1 **)&local_30;
  ppiStack_4c = (int **)0x42e08d;
  FUN_004489a0();
  local_34 = 1;
  local_4._0_1_ = 1;
  ppuStack_48 = (undefined1 **)0x42e0a3;
  FUN_00449050();
  local_4 = (uint)local_4._1_3_ << 8;
  ppuStack_48 = (undefined1 **)0x42e0b0;
  FUN_00492340();
  ExceptionList = local_c;
  return param_1;
}


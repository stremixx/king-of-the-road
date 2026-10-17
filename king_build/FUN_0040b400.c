
uint FUN_0040b400(int *param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  void **ppvVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint local_74;
  int *local_6c [2];
  uint local_64;
  int *apiStack_60 [2];
  uint uStack_58;
  int *apiStack_54 [2];
  uint uStack_4c;
  int *apiStack_48 [2];
  uint uStack_40;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063b747;
  pvStack_c = ExceptionList;
  bVar4 = false;
  local_4 = 0;
  local_74 = 0;
  if ((param_3 & 0xff) != 6) {
    ExceptionList = &pvStack_c;
    ppvVar2 = &pvStack_c;
    if ((param_3 & 0xff) == 2) {
      do {
        uVar6 = FUN_00407e60(local_6c,&param_1);
        local_4._0_1_ = 2;
        cVar3 = FUN_004b6670(uVar6,s_formafia_0066bd5c);
        local_4._0_1_ = 0;
        if ((((local_64 & 0x10000) == 0) && (local_6c[0] != (int *)0x0)) &&
           ((local_6c[0][1] = local_6c[0][1] + -1, local_6c[0][1] == 0 &&
            (local_6c[0] != (int *)0x0)))) {
          (**(code **)(*local_6c[0] + 0xc))(1);
        }
        if (cVar3 == '\0') {
          uVar6 = FUN_00407e60(apiStack_60,&param_1);
          local_4._0_1_ = 3;
          cVar3 = FUN_004b6670(uVar6,&DAT_0066bac0);
          local_4._0_1_ = 0;
          if ((((uStack_58 & 0x10000) == 0) && (apiStack_60[0] != (int *)0x0)) &&
             ((apiStack_60[0][1] = apiStack_60[0][1] + -1, apiStack_60[0][1] == 0 &&
              (apiStack_60[0] != (int *)0x0)))) {
            (**(code **)(*apiStack_60[0] + 0xc))(1);
          }
          if (cVar3 == '\0') {
            uVar6 = FUN_00407e60(apiStack_54,&param_1);
            local_4._0_1_ = 4;
            cVar3 = FUN_004b6670(uVar6,s_illegal_0066bd54);
            local_4._0_1_ = 0;
            if (((((uStack_4c & 0x10000) == 0) && (apiStack_54[0] != (int *)0x0)) &&
                (apiStack_54[0][1] = apiStack_54[0][1] + -1, apiStack_54[0][1] == 0)) &&
               (apiStack_54[0] != (int *)0x0)) {
              (**(code **)(*apiStack_54[0] + 0xc))(1);
            }
            if (cVar3 == '\0') {
              uVar6 = FUN_00407e60(auStack_3c,&param_1);
              local_4._0_1_ = 5;
              cVar3 = FUN_004b6670(uVar6,&DAT_0066bd4c);
              local_4._0_1_ = 0;
              FUN_00492340();
              if (cVar3 == '\0') {
                uVar6 = FUN_00407e60(auStack_30,&param_1);
                local_4._0_1_ = 6;
                cVar3 = FUN_004b6670(uVar6,&DAT_0066bd44);
                local_4._0_1_ = 0;
                FUN_00492340();
                if (cVar3 == '\0') {
                  iVar7 = FUN_00407e60(auStack_18,&param_1);
                  local_4._0_1_ = 7;
                  uVar1 = (undefined1)local_4;
                  local_4._0_1_ = 7;
                  if (*(char *)(iVar7 + 8) == '\t') {
                    piVar8 = (int *)FUN_00407e60(auStack_24,&param_1);
                    bVar4 = true;
                    local_4._0_1_ = 8;
                    puVar9 = *(undefined1 **)(*piVar8 + 0xc);
                  }
                  else {
                    puVar9 = &DAT_0068c120;
                    local_4._0_1_ = uVar1;
                  }
                  FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xa58,
                               s_Undefined_merchandise_flag__see_m_0066bd10,puVar9,&DAT_0068c120);
                  local_4 = 7;
                  if (bVar4) {
                    bVar4 = false;
                    FUN_00492340();
                  }
                  local_4._0_1_ = 0;
                  FUN_00492340();
                }
                else {
                  local_74 = local_74 | 0x10;
                }
              }
              else {
                local_74 = local_74 | 8;
              }
            }
            else {
              local_74 = local_74 | 1;
            }
          }
          else {
            local_74 = local_74 | 4;
          }
        }
        else {
          local_74 = local_74 | 2;
        }
        puVar10 = (undefined4 *)FUN_00409000(apiStack_48,&param_1);
        local_4._0_1_ = 1;
        if (((param_1 != (int *)0x0) && ((param_3 & 0x10000) == 0)) &&
           ((param_1[1] = param_1[1] + -1, param_1[1] == 0 &&
            ((cVar3 = FUN_00408fd0(&param_1,puVar10), cVar3 == '\0' && (param_1 != (int *)0x0))))))
        {
          (**(code **)(*param_1 + 0xc))(1);
        }
        param_3 = puVar10[2];
        if ((param_3 & 0x10000) == 0) {
          param_2 = 0;
          param_1 = (int *)*puVar10;
          if (param_1 == (int *)0x0) {
            param_1 = (int *)0x0;
            param_3 = 0;
          }
          else {
            param_3 = puVar10[2];
            param_1[1] = param_1[1] + 1;
          }
        }
        else {
          param_1 = (int *)*puVar10;
          param_2 = puVar10[1];
        }
        local_4 = (uint)local_4._1_3_ << 8;
        if (((((uStack_40 & 0x10000) == 0) && (apiStack_48[0] != (int *)0x0)) &&
            (apiStack_48[0][1] = apiStack_48[0][1] + -1, apiStack_48[0][1] == 0)) &&
           (apiStack_48[0] != (int *)0x0)) {
          (**(code **)(*apiStack_48[0] + 0xc))(1);
        }
        ppvVar2 = ExceptionList;
      } while ((char)param_3 == '\x02');
    }
    ExceptionList = ppvVar2;
    local_4 = 0xffffffff;
    FUN_00492340();
    ExceptionList = pvStack_c;
    return local_74;
  }
  ExceptionList = &pvStack_c;
  uVar5 = FUN_004b0f30();
  local_4 = 0xffffffff;
  if (((((param_3 & 0x10000) == 0) && (param_1 != (int *)0x0)) &&
      (param_1[1] = param_1[1] + -1, param_1[1] == 0)) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  ExceptionList = pvStack_c;
  return uVar5;
}


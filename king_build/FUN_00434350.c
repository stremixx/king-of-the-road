
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434350(void)

{
  int iVar1;
  double dVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double *pdVar6;
  int *piVar7;
  int iVar8;
  float10 fVar9;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  int local_ac;
  undefined4 *local_a8;
  undefined4 *local_a4;
  int local_9c;
  undefined1 local_95;
  undefined4 *local_94;
  int *local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  int local_80;
  int local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  double local_68;
  double *local_5c;
  double local_50;
  undefined4 local_44;
  undefined4 local_40;
  double local_38;
  double local_30;
  undefined8 local_24;
  uint local_1c;
  undefined4 uStack_18;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d669;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004577d0(&local_80,DAT_0068bf38,DAT_0068bf3c);
  local_c = 0;
  if (local_80 == local_7c) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x35f1,
                 s_No_cars_available_for_order_0066d1d4,&DAT_0068c120,&DAT_0068c120);
  }
  local_90 = DAT_0068bbf8;
  iVar3 = local_7c;
  if (DAT_0068bbf8 != DAT_0068bbfc) {
    do {
      iVar1 = *local_90;
      local_70 = *(undefined4 *)(iVar1 + 0x30);
      uStack_6c = *(undefined4 *)(iVar1 + 0x34);
      iVar8 = *(int *)(iVar1 + 0x1c);
      local_ac = iVar8;
      if (iVar8 != *(int *)(iVar1 + 0x20)) {
        piVar7 = (int *)(iVar8 + 0x1c);
        do {
          local_ad = local_af;
          local_ac = iVar8;
          FUN_0048a730(iVar3 - local_80 >> 2,&local_ad);
          local_c._0_1_ = 1;
          local_a4 = (undefined4 *)FUN_0046b5a0(local_80,local_7c,local_a8,local_ac);
          local_c._0_1_ = 2;
          local_9c = 0;
          if (_DAT_0064a668 < (double)CONCAT44(uStack_6c,local_70)) {
            do {
              puVar4 = local_a4;
              puVar5 = local_a8;
              iVar8 = local_ac;
              if (local_a8 == local_a4) break;
              local_38 = (double)CONCAT44(uStack_6c,local_70) * _DAT_0064a8f0;
              local_24 = local_38;
              FUN_00478a20(&local_95);
              local_c._0_1_ = 3;
              FUN_00478a20(&local_ae);
              local_c = CONCAT31(local_c._1_3_,4);
              local_68 = 0.0;
              local_94 = puVar5;
              puVar5 = local_8c;
              for (; local_8c = puVar5, local_94 != puVar4; local_94 = local_94 + 1) {
                fVar9 = (float10)FUN_004347e0(local_94);
                local_50 = (double)fVar9;
                if ((float10)_DAT_0064a668 < fVar9) {
                  local_68 = local_50 + local_68;
                  FUN_0045a0a0(&local_94);
                  FUN_00447500(&local_50);
                }
                puVar5 = local_8c;
              }
              if (puVar5 == local_88) {
LAB_00434600:
                local_c._0_1_ = 3;
                FUN_004473b0();
                local_c._0_1_ = 2;
                FUN_00449a70();
              }
              else {
                if (((int)local_88 - (int)puVar5 & 0xfffffffcU) != 4) {
                  local_1c = FUN_004155e0(1000000);
                  uStack_18 = 0;
                  local_30 = (double)local_1c * local_68 * _DAT_0064a6c8;
                  dVar2 = _DAT_0064a668;
                  pdVar6 = local_5c;
                  for (puVar5 = local_8c; puVar5 != local_88; puVar5 = puVar5 + 1) {
                    if ((dVar2 <= local_30) && (local_30 <= dVar2 + *pdVar6)) goto LAB_004346d8;
                    dVar2 = dVar2 + *pdVar6;
                    pdVar6 = pdVar6 + 1;
                  }
                  goto LAB_00434600;
                }
LAB_004346d8:
                puVar4 = (undefined4 *)*puVar5;
                local_c._0_1_ = 3;
                FUN_004473b0();
                local_c._0_1_ = 2;
                FUN_00449a70();
              }
              iVar8 = local_ac;
              if (puVar4 == local_a4) break;
              local_af = local_ae;
              iVar3 = *(int *)*puVar4;
              FUN_0044a420(*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 0x14),&local_af);
              local_40 = FUN_00407250(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),
                                      local_44);
              local_c._0_1_ = 5;
              while( true ) {
                puVar4 = (undefined4 *)FUN_00460700(local_a8,local_a4,local_44,local_ac);
                if (puVar4 == local_a4) break;
                iVar3 = *piVar7;
                local_74 = **(undefined4 **)*puVar4;
                if (iVar3 == piVar7[1]) {
                  FUN_00450f10(iVar3,&local_74);
                }
                else {
                  FUN_00460970(iVar3,&local_74);
                  *piVar7 = *piVar7 + 4;
                }
                if (puVar4 + 1 != local_a4) {
                  FUN_00457bc0(puVar4 + 1,local_a4,puVar4);
                }
                local_a4 = local_a4 + -1;
              }
              local_c._0_1_ = 2;
              FUN_0044a450();
              local_9c = local_9c + 1;
              iVar8 = local_ac;
            } while ((double)local_9c < (double)CONCAT44(uStack_6c,local_70));
          }
          local_c = (uint)local_c._1_3_ << 8;
          FUN_00451450();
          iVar8 = iVar8 + 0x24;
          piVar7 = piVar7 + 9;
          iVar3 = local_7c;
          local_ac = iVar8;
        } while (iVar8 != *(int *)(*local_90 + 0x20));
      }
      local_90 = local_90 + 1;
    } while (local_90 != DAT_0068bbfc);
  }
  local_c = 0xffffffff;
  FUN_00449a70();
  ExceptionList = local_14;
  return;
}



int FUN_004151a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 local_4e;
  undefined1 local_4d;
  int local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  char *local_38;
  undefined *local_34;
  int local_30;
  int local_2c;
  undefined4 local_24 [2];
  undefined4 local_1c;
  undefined4 local_18;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063c704;
  local_14 = ExceptionList;
  local_38 = s_createNewRandomTractorForRaces_i_0066c0ac;
  local_34 = &DAT_0071d768;
  ExceptionList = &local_14;
  FUN_00401870(s_START__0066b830,8);
  FUN_004018b0(local_38);
  local_c = 0;
  if (DAT_0068c0e8 == 0) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xf25,s_Internal_error_0845_0066c098,
                 &DAT_0068c120,&DAT_0068c120);
  }
  uVar4 = FUN_004030b0(*(undefined4 *)(DAT_0068bea8 + param_1 * 4));
  iVar5 = FUN_00473470(uVar4);
  uVar4 = DAT_0068bf4c;
  *(undefined4 *)(iVar5 + 0x80) = DAT_0068bf48;
  *(undefined4 *)(iVar5 + 0x84) = uVar4;
  puVar7 = DAT_0068bf3c;
  puVar8 = DAT_0068bf38;
  local_44 = (undefined4 *)CONCAT31(local_44._1_3_,local_4e);
  local_4c = iVar5;
  FUN_00478a20(&local_4e);
  local_c = CONCAT31(local_c._1_3_,1);
  for (local_48 = puVar8; local_48 != puVar7; local_48 = local_48 + 1) {
    cVar3 = FUN_00415640(*local_48);
    if (cVar3 != '\0') {
      FUN_00459c50(&local_48);
    }
  }
  if (local_30 != local_2c) {
    iVar6 = FUN_004155e0(local_2c - local_30 >> 2);
    puVar7 = *(undefined4 **)(local_30 + iVar6 * 4);
  }
  local_c = local_c & 0xffffff00;
  FUN_00449a70();
  if (puVar7 == DAT_0068bf3c) {
    FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0xf2d,s_Internal_error_54234_0066c080,
                 &DAT_0068c120,&DAT_0068c120);
  }
  iVar6 = (int)puVar7 - (int)DAT_0068bf38 >> 2;
  *(undefined1 *)(*(int *)DAT_0068bf38[iVar6] + DAT_006897c0) = 0;
  puVar7 = (undefined4 *)FUN_00631d33(0x30);
  local_c._0_1_ = 2;
  local_40 = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7[2] = 0;
    *puVar7 = 0xffffffff;
    puVar7[1] = iVar6;
    puVar7[3] = 0x3ff00000;
    local_24[0] = 0;
    local_1c = 0;
    local_18 = 0x3ff00000;
    FUN_00448480(0x13,local_24,&local_4e);
    local_c._0_1_ = 3;
    FUN_00478a20(&local_4d);
    puVar7[10] = 0;
  }
  *(undefined4 **)(iVar5 + 0x1fc) = puVar7;
  local_c._0_1_ = 0;
  iVar9 = DAT_0068bf38[iVar6];
  if (*(int *)(iVar9 + 0x60) != *(int *)(iVar9 + 100)) {
    local_40 = *(undefined4 **)(iVar9 + 0x60);
    DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
    DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
    iVar5 = *(int *)(iVar9 + 100) - (int)local_40;
    (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
    uVar11 = (&DAT_0068a928)[DAT_0068aa04];
    puVar7 = (undefined4 *)FUN_00631d33(0x30);
    local_c._0_1_ = 4;
    local_40 = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar8 = (undefined4 *)
               FUN_00414790(&local_3c,
                            *(undefined4 *)
                             (*(int *)(DAT_0068bf38[iVar6] + 0x60) +
                             (uVar11 % (uint)(iVar5 >> 2)) * 4));
      puVar7[1] = *puVar8;
      puVar7[2] = 0;
      *puVar7 = 0xffffffff;
      puVar7[3] = 0x3ff00000;
      local_24[0] = 0;
      local_1c = 0;
      local_18 = 0x3ff00000;
      local_44 = puVar7 + 4;
      FUN_004670f0(0x13,&local_4d);
      local_c._0_1_ = 5;
      uVar4 = FUN_004663a0(puVar7[4],0x13,local_24,local_3c);
      puVar7[5] = uVar4;
      local_c._0_1_ = 6;
      FUN_00478a20(&local_4e);
      puVar7[10] = 0;
    }
    *(undefined4 **)(local_4c + 0x200) = puVar7;
    iVar5 = local_4c;
  }
  local_c._0_1_ = 0;
  *(int *)(iVar5 + 0x54) = param_1;
  uVar4 = FUN_004147a0(iVar5);
  FUN_004741b0(uVar4);
  iVar6 = local_4c;
  piVar1 = (int *)(local_4c + 0x108);
  piVar2 = (int *)(DAT_006898b8 + 4 + *(int *)(iVar5 + 0x3d8) * 0x38);
  if (piVar2 != piVar1) {
    local_48 = (undefined4 *)piVar2[1];
    iVar5 = *piVar2;
    iVar9 = *piVar1;
    uVar11 = (int)local_48 - iVar5;
    if ((uint)(*(int *)(local_4c + 0x110) - iVar9) < uVar11) {
      iVar5 = FUN_00458d60(uVar11,iVar5,local_48);
      iVar9 = *(int *)(iVar6 + 0x110) - *piVar1;
      if (iVar9 != 0) {
        FUN_0044b440(*piVar1,iVar9);
      }
      *piVar1 = iVar5;
      *(uint *)(iVar6 + 0x110) = iVar5 + uVar11;
    }
    else {
      uVar10 = *(int *)(local_4c + 0x10c) - iVar9;
      if (uVar10 < uVar11) {
        FUN_00407250(iVar5,uVar10 + iVar5,iVar9);
        FUN_00407250((*piVar2 - *piVar1) + *(int *)(iVar6 + 0x10c),piVar2[1],*(int *)(iVar6 + 0x10c)
                    );
      }
      else {
        FUN_00407250(iVar5,local_48,iVar9);
      }
    }
    *(uint *)(iVar6 + 0x10c) = *piVar1 + uVar11;
  }
  FUN_004018f0();
  ExceptionList = local_14;
  return local_4c;
}


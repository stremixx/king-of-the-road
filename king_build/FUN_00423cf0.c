
void FUN_00423cf0(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int iVar2;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  uint uVar4;
  undefined4 extraout_ECX_02;
  uint *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int *local_104;
  undefined4 local_100 [4];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e0 [5];
  int local_cc;
  undefined4 local_c0 [4];
  int local_b0;
  undefined4 local_a0 [8];
  uint local_80 [8];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined1 local_20 [32];
  
  FUN_00423b80();
  DAT_0066e62b = 0;
  DAT_0066b68c = 0;
  FUN_00423ba0();
  FUN_00423bc0();
  DAT_0066e62b = 1;
  local_104 = (int *)*DAT_0068a8f0;
  if (local_104 != DAT_0068a8f0) {
    do {
      iVar1 = FUN_0040a950(local_104);
      if (iVar1 != 0) {
        uVar3 = extraout_ECX;
        FUN_0041d3f0(&local_104);
        iVar1 = FUN_0040a950(uVar3);
        puVar6 = (undefined4 *)(iVar1 + 0x20);
        puVar8 = local_a0;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        iVar1 = FUN_0040a460();
        uVar3 = extraout_ECX_00;
        if (iVar1 == 0) {
          FUN_0041d3f0(&local_104);
          FUN_0040a950(uVar3);
          FUN_0041d3f0(&local_104);
          iVar1 = FUN_0040a950();
          puVar6 = (undefined4 *)(iVar1 + 0x20);
          puVar8 = local_100;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,local_100[0],local_100[2],
                       local_100[3],local_f0,local_ec,local_e8);
          FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x20c2,s_Invalid_id_0066bbf4,
                       s_PositionId_0066bc00,&DAT_0077d640);
          uVar3 = extraout_ECX_01;
        }
        FUN_0041d3f0(&local_104);
        iVar1 = FUN_0040a950(uVar3);
        puVar5 = (uint *)(iVar1 + 0x20);
        puVar7 = local_80;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if ((-1 < (int)local_80[0]) &&
           (uVar4 = DAT_0068be9c - DAT_0068be98 >> 2, local_80[0] < uVar4)) {
          FUN_0041d3f0(&local_104);
          iVar1 = FUN_0040a950(uVar4);
          puVar9 = local_60;
          puVar6 = (undefined4 *)(iVar1 + 0x20);
          puVar8 = local_e0;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_0041d3f0(&local_104);
          FUN_0040a950(iVar2,puVar9);
          FUN_00424010(puVar9);
          FUN_00424000();
          iVar1 = FUN_00447d20();
          if (local_cc < iVar1) {
            uVar3 = extraout_ECX_02;
            FUN_0041d3f0(&local_104);
            iVar1 = FUN_0040a950(uVar3);
            puVar6 = (undefined4 *)(iVar1 + 0x20);
            puVar8 = local_c0;
            for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar9 = local_40;
            puVar10 = puVar9;
            FUN_0041d3f0(&local_104);
            FUN_0040a950(puVar9,puVar10);
            iVar1 = FUN_00424010(puVar10);
            uVar3 = *(undefined4 *)(iVar1 + 0x14);
            puVar9 = local_20;
            puVar10 = puVar9;
            FUN_0041d3f0(&local_104);
            FUN_0040a950(puVar9,puVar10,uVar3);
            FUN_00424010(puVar10);
            FUN_00424000();
            iVar1 = FUN_00447d00(uVar3);
            if (local_b0 < iVar1) goto LAB_00423f7c;
          }
          FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x20c2,
                       s_Invalid_Position_Id_0066bbe0,&DAT_0068c120,&DAT_0068c120);
        }
LAB_00423f7c:
        iVar1 = FUN_0040a950(local_104);
        if (*(int *)(iVar1 + 0x10) == *(int *)(iVar1 + 0x14)) {
          iVar1 = FUN_0040a950(local_104);
          if (*(int *)(iVar1 + 0x40) != *(int *)(iVar1 + 0x44)) {
            FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                         s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x20c8,
                         s_Internal_error_325700_0066c92c,&DAT_0068c120,&DAT_0068c120);
          }
        }
      }
      local_104 = (int *)*local_104;
    } while (local_104 != DAT_0068a8f0);
  }
  return;
}


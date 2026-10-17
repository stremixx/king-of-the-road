
void FUN_00482df0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint extraout_ECX;
  undefined4 extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int *local_14;
  uint local_10;
  uint local_c;
  
  puVar1 = &DAT_0068be34;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
  } while ((int)puVar1 < 0x68be64);
  DAT_0068c0ac = 0;
  DAT_0068c0ec = 0;
  local_14 = (int *)*DAT_0068a8f0;
  if (local_14 != DAT_0068a8f0) {
    do {
      iVar2 = FUN_0040a950(local_14);
      uVar5 = (uint)*(byte *)(iVar2 + 0x1e8);
      if (*(byte *)(iVar2 + 0x1e8) != 0) {
        uVar8 = uVar5;
        FUN_0041d3f0(&local_14);
        FUN_004042b0(uVar5);
        FUN_004174c0(uVar8);
      }
      iVar2 = FUN_0040a950(local_14);
      if (*(int *)(iVar2 + 0x5c) == 0x100) {
        iVar2 = FUN_0040a950(local_14);
        iVar2 = *(int *)(DAT_0068bbf8 + *(int *)(iVar2 + 0x70) * 4);
        *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
        iVar2 = FUN_0040a950(local_14);
        local_10 = *(uint *)(iVar2 + 0x70);
        if (local_10 == 0xffffffff) {
          FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x28d,
                       s_Internal_error_9534_0066eee8,&DAT_0068c120,&DAT_0068c120);
        }
        if (((int)local_10 < 0) || (uVar5 = DAT_0068bbfc - DAT_0068bbf8 >> 2, uVar5 <= local_10)) {
          FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,local_10);
          FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x28e,s_Invalid_id_0066bbf4,
                       s_ParkingId_0066eedc,&DAT_0077d3c0);
          uVar5 = extraout_ECX;
        }
        iVar2 = *(int *)(DAT_0068bbf8 + local_10 * 4);
        iVar4 = *(int *)(iVar2 + 0x20);
        iVar2 = *(int *)(iVar2 + 0x1c);
        FUN_0041d3f0(&local_14);
        iVar3 = FUN_0040a950(uVar5);
        if ((uint)((iVar4 - iVar2) / 0x24) <= *(uint *)(iVar3 + 0x74)) {
          FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x290,
                       s_Internal_error_9535_0066eec8,&DAT_0068c120,&DAT_0068c120);
        }
        puVar1 = (undefined4 *)FUN_004042b0(local_14);
        uVar9 = extraout_ECX_00;
        FUN_0041d3f0(&local_14);
        iVar2 = FUN_0040a950(uVar9);
        uVar9 = *(undefined4 *)(iVar2 + 0x74);
        FUN_00419560(uVar9);
        iVar2 = FUN_004485e0(uVar9);
        *(undefined4 *)(iVar2 + 8) = *puVar1;
        iVar4 = FUN_0040a950(local_14);
        iVar2 = *(int *)(*(int *)(DAT_0068bbf8 + local_10 * 4) + 0x1c);
        *(uint *)(iVar2 + 4 + *(int *)(iVar4 + 0x74) * 0x24) =
             *(uint *)(iVar2 + 4 + *(int *)(iVar4 + 0x74) * 0x24) | 1;
        iVar4 = FUN_0040a950(local_14);
        iVar2 = *(int *)(*(int *)(DAT_0068bbf8 + local_10 * 4) + 0x1c);
        if ((*(byte *)(iVar2 + 4 + *(int *)(iVar4 + 0x74) * 0x24) & 8) == 0) {
          iVar4 = FUN_0040a950(local_14);
          iVar2 = *(int *)(*(int *)(DAT_0068bbf8 + local_10 * 4) + 0x1c);
          if ((*(byte *)(iVar2 + 4 + *(int *)(iVar4 + 0x74) * 0x24) & 0x20) == 0) {
            iVar2 = FUN_0040a950(local_14);
            *(undefined4 **)(iVar2 + 0x3c4) = &DAT_0068be30;
          }
          else {
            FUN_0041d3f0(&local_14);
            iVar2 = FUN_0040a950(iVar2);
            *(undefined4 **)(iVar2 + 0x3c4) = &DAT_0068be40;
          }
        }
        else {
          FUN_0041d3f0(&local_14);
          iVar2 = FUN_0040a950(iVar2);
          *(undefined **)(iVar2 + 0x3c4) = &DAT_0068be50;
        }
        iVar2 = FUN_0040a950(local_14);
        piVar6 = (int *)(*(int *)(iVar2 + 0x3c4) + 4);
        *piVar6 = *piVar6 + 1;
      }
      iVar2 = FUN_0040a950(local_14);
      if (*(int *)(iVar2 + 0x5c) == 0x101) {
        DAT_0068c0ac = DAT_0068c0ac + 1;
        iVar2 = FUN_0040a950(local_14);
        iVar2 = *(int *)(DAT_0068bbf8 + *(int *)(iVar2 + 0x70) * 4);
        *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
        iVar2 = FUN_0040a950(local_14);
        local_c = *(uint *)(iVar2 + 0x70);
        if (local_c == 0xffffffff) {
          FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x2a4,
                       s_Internal_error_9534_0066eee8,&DAT_0068c120,&DAT_0068c120);
        }
        if (((int)local_c < 0) || (uVar5 = DAT_0068bbfc - DAT_0068bbf8 >> 2, uVar5 <= local_c)) {
          FUN_0061c369(&DAT_0077d3c0,&DAT_0066d4d0,local_c);
          FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x2a5,s_Invalid_id_0066bbf4,
                       s_ParkingId_0066eedc,&DAT_0077d3c0);
          uVar5 = extraout_ECX_01;
        }
        iVar2 = *(int *)(DAT_0068bbf8 + local_c * 4);
        iVar4 = *(int *)(iVar2 + 0x20);
        iVar2 = *(int *)(iVar2 + 0x1c);
        FUN_0041d3f0(&local_14);
        iVar3 = FUN_0040a950(uVar5);
        if ((uint)((iVar4 - iVar2) / 0x24) <= *(uint *)(iVar3 + 0x74)) {
          FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x2a7,
                       s_Internal_error_9535_0066eec8,&DAT_0068c120,&DAT_0068c120);
        }
        puVar1 = (undefined4 *)FUN_004042b0(local_14);
        uVar9 = extraout_ECX_02;
        FUN_0041d3f0(&local_14);
        iVar2 = FUN_0040a950(uVar9);
        uVar9 = *(undefined4 *)(iVar2 + 0x74);
        FUN_00419560(uVar9);
        iVar2 = FUN_004485e0(uVar9);
        *(undefined4 *)(iVar2 + 8) = *puVar1;
        iVar4 = FUN_0040a950(local_14);
        iVar2 = *(int *)(*(int *)(DAT_0068bbf8 + local_c * 4) + 0x1c);
        *(uint *)(iVar2 + 4 + *(int *)(iVar4 + 0x74) * 0x24) =
             *(uint *)(iVar2 + 4 + *(int *)(iVar4 + 0x74) * 0x24) | 2;
      }
      iVar2 = FUN_0040a950(local_14);
      iVar2 = *(int *)(iVar2 + 0x5c);
      if (iVar2 == 5) {
        iVar4 = iVar2;
        FUN_0041d3f0(&local_14);
        FUN_004042b0(iVar2);
        FUN_00417670(iVar4);
      }
      iVar2 = FUN_0040a950(local_14);
      if (*(int *)(iVar2 + 0x98) != *(int *)(iVar2 + 0x9c)) {
        DAT_0068c0ec = DAT_0068c0ec + 1;
      }
      local_14 = (int *)*local_14;
    } while (local_14 != DAT_0068a8f0);
  }
  DAT_006898c8 = 0;
  DAT_0068bf7c = 0;
  DAT_0068bf44 = 0;
  DAT_0068c044 = 0;
  DAT_0068be94 = 0;
  piVar6 = (int *)*DAT_0068becc;
  piVar7 = DAT_0068becc;
  if (piVar6 != DAT_0068becc) {
    do {
      if (*(int *)(piVar6[2] + 0x18) != -1) {
        iVar2 = *(int *)(DAT_0068be60 + *(int *)(piVar6[2] + 0x18) * 4);
        *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) | 0x10;
        piVar7 = DAT_0068becc;
      }
      uVar5 = *(uint *)(piVar6[2] + 8) & 0xf0;
      if (uVar5 == 0x10) {
        DAT_006898c8 = DAT_006898c8 + 1;
      }
      else if (uVar5 == 0x20) {
        DAT_0068bf7c = DAT_0068bf7c + 1;
      }
      else if (uVar5 == 0x40) {
        DAT_0068bf44 = DAT_0068bf44 + 1;
      }
      else if (uVar5 == 0x60) {
        DAT_0068c044 = DAT_0068c044 + 1;
      }
      else if (uVar5 == 0x80) {
        DAT_0068be94 = DAT_0068be94 + 1;
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar7);
  }
  return;
}


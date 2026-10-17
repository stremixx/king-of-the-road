
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041d0e0(int param_1)

{
  double dVar1;
  double dVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  float10 fVar9;
  undefined4 uVar10;
  char *pcVar11;
  undefined1 *puStack_8c;
  int **ppiStack_88;
  undefined1 local_76;
  undefined1 local_75;
  int *local_74;
  undefined1 local_70;
  undefined1 local_6c [4];
  double local_68;
  double local_60;
  uint local_54;
  undefined4 uStack_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  double *local_40;
  undefined1 local_34 [32];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cac0;
  local_14 = ExceptionList;
  if ((*(byte *)(*(int *)(DAT_0068be60 + param_1 * 4) + 0xc) & 0x10) == 0) {
    ppiStack_88 = (int **)0x70;
    puStack_8c = (undefined1 *)0x41d132;
    ExceptionList = &local_14;
    puVar4 = (undefined4 *)FUN_00631d33();
    puVar6 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0x12345678;
      *puVar4 = 0xffffffff;
      puVar4[2] = 0;
      puVar4[3] = 0xffffffff;
      puVar4[4] = 0xffffffff;
      puVar4[5] = 0;
      puVar4[6] = 0xffffffff;
      puVar4[0xe] = 0xffffffff;
      puVar4[0xf] = 0xffffffff;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0xffffffff;
      puVar4[0x18] = 0xffffffff;
      puVar4[0x16] = 0;
      puVar4[0x19] = 0x7fefffff;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      puVar4[0x1b] = 0xffffffff;
      puVar6 = puVar4;
    }
    puVar6[6] = param_1;
    ppiStack_88 = (int **)(puVar6 + 8);
    puVar6[2] = puVar6[2] | 0x480;
    iVar5 = *(int *)(DAT_0068be60 + param_1 * 4);
    uVar10 = *(undefined4 *)(iVar5 + 0x34);
    *ppiStack_88 = (int *)*(undefined4 *)(iVar5 + 0x30);
    puVar6[9] = uVar10;
    uVar10 = *(undefined4 *)(iVar5 + 0x3c);
    puVar6[10] = *(undefined4 *)(iVar5 + 0x38);
    puVar6[0xb] = uVar10;
    uVar10 = *(undefined4 *)(iVar5 + 0x44);
    puVar6[0xc] = *(undefined4 *)(iVar5 + 0x40);
    puStack_8c = local_34;
    puVar6[0xd] = uVar10;
    puVar4 = (undefined4 *)FUN_004369e0();
    puVar7 = puVar6 + 0xe;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar7 = puVar7 + 1;
    }
    iVar5 = *(int *)(DAT_0068be60 + param_1 * 4);
    *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) | 0x10;
    piVar8 = DAT_0068c01c;
    piVar3 = DAT_0068c018;
    DAT_0068be94 = DAT_0068be94 + 1;
    ppiStack_88 = (int **)&local_76;
    local_70 = local_76;
    puStack_8c = (undefined1 *)0x41d21e;
    FUN_00478a20();
    ppiStack_88 = (int **)&local_75;
    local_c = 0;
    puStack_8c = (undefined1 *)0x41d234;
    FUN_00478a20();
    local_c = CONCAT31(local_c._1_3_,1);
    local_68 = 0.0;
    for (local_74 = piVar3; local_74 != piVar8; local_74 = local_74 + 1) {
      ppiStack_88 = (int **)*local_74;
      puStack_8c = (undefined1 *)0x41d25f;
      fVar9 = (float10)FUN_0041d400();
      local_60 = (double)fVar9;
      if ((float10)_DAT_0064a668 < fVar9) {
        local_68 = local_60 + local_68;
        ppiStack_88 = &local_74;
        puStack_8c = (undefined1 *)0x41d28a;
        FUN_0045a070();
        ppiStack_88 = (int **)&local_60;
        puStack_8c = (undefined1 *)0x41d298;
        FUN_00447500();
      }
    }
    if (local_4c != local_48) {
      if (((int)local_48 - (int)local_4c & 0xfffffffcU) == 4) {
        piVar8 = (int *)*local_4c;
      }
      else {
        ppiStack_88 = (int **)0xf4240;
        puStack_8c = (undefined1 *)0x41d2cf;
        local_54 = FUN_004155e0();
        uStack_50 = 0;
        dVar1 = (double)local_54 * local_68 * _DAT_0064a6c8;
        dVar2 = _DAT_0064a668;
        for (; local_4c != local_48; local_4c = local_4c + 1) {
          if ((dVar2 <= dVar1) && (dVar1 <= dVar2 + *local_40)) {
            piVar8 = (int *)*local_4c;
            break;
          }
          dVar2 = dVar2 + *local_40;
          local_40 = local_40 + 1;
        }
      }
    }
    local_c = local_c & 0xffffff00;
    ppiStack_88 = (int **)0x41d337;
    FUN_004473b0();
    local_c = 0xffffffff;
    ppiStack_88 = (int **)0x41d348;
    FUN_00449a70();
    if (piVar8 != DAT_0068c01c) {
      puVar6[0x1b] = (int)piVar8 - (int)DAT_0068c018 >> 2;
      *(int *)(*piVar8 + 0x28) = *(int *)(*piVar8 + 0x28) + 1;
      ppiStack_88 = (int **)0x41d3ae;
      fVar9 = (float10)FUN_00401000();
      *(double *)(puVar6 + 0x18) = (double)fVar9;
      puStack_8c = local_6c;
      ppiStack_88 = (int **)puVar6;
      FUN_0041be00();
      ppiStack_88 = (int **)0x1;
      local_68 = (double)CONCAT44(local_68._4_4_,&puStack_8c);
      FUN_0041d3f0(local_6c);
      (*DAT_0068c07c)();
      ExceptionList = local_14;
      return;
    }
    pcVar11 = s_Internal_error_08322_0066c6a4;
    uVar10 = 0x1981;
  }
  else {
    pcVar11 = s_Internal_error_08321_0066c6bc;
    uVar10 = 0x1970;
    ExceptionList = &local_14;
  }
  ppiStack_88 = (int **)&DAT_0068c120;
  puStack_8c = &DAT_0068c120;
  FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
               s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,uVar10,pcVar11);
  ExceptionList = local_14;
  return;
}


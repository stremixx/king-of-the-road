
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff90 : 0x00433a55 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_00433740(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LONG LVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int ***pppiVar12;
  float10 fVar13;
  int **ppiStack_7c;
  char *pcStack_78;
  undefined4 *puStack_74;
  int *local_70;
  int *in_stack_ffffff94;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  int local_3c [6];
  int local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d5f8;
  local_c = ExceptionList;
  iVar7 = *(int *)(param_2 + 0x5c);
  if (iVar7 == 6) {
    if ((_DAT_0064a668 < *(double *)(param_1 + 0xe0)) || (*(char *)(param_1 + 0xc9) != '\0')) {
      return 3;
    }
  }
  else if ((iVar7 != 7) && (iVar7 != 9)) {
    return 3;
  }
  iVar7 = 0;
  if (param_3 != 0) {
    local_70 = (int *)0x4337dc;
    ExceptionList = &local_c;
    FUN_00414660();
    iVar1 = (int)param_4;
    iVar5 = *(int *)(DAT_0068bf38 + param_3 * 4);
    *(undefined4 *)((int)param_4 + 0x18) = *(undefined4 *)(iVar5 + 0x30);
    *(undefined4 *)((int)param_4 + 0x1c) = *(undefined4 *)(iVar5 + 0x34);
    puStack_74 = (undefined4 *)((int)param_4 + 0x10);
    local_50 = 0;
    *(undefined4 *)((int)param_4 + 0xc) =
         *(undefined4 *)(*(int *)(DAT_0068bf38 + param_3 * 4) + 0x48);
    local_70 = &local_50;
    pcStack_78 = (char *)param_3;
    local_4c = 0;
    ppiStack_7c = (int **)0x43381f;
    FUN_0041b970();
    param_4 = (int *)&stack0xffffff98;
    iVar5 = *(int *)(DAT_0068bf38 + param_3 * 4);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar5 + 0x38);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(iVar5 + 0x3c);
    local_70 = (int *)0x433854;
    FUN_0040b030();
    local_70 = local_3c;
    puStack_74 = (undefined4 *)DAT_0068bbfc;
    ppiStack_7c = &local_48;
    pcStack_78 = DAT_0068bbf8;
    FUN_00457580();
    piVar3 = local_48;
    local_4 = 0;
    piVar9 = local_3c;
    piVar11 = local_24;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar11 = *piVar9;
      piVar9 = piVar9 + 1;
      piVar11 = piVar11 + 1;
    }
    param_4 = local_48;
    if (local_48 != local_44) {
      for (iVar5 = (int)local_44 - (int)local_48 >> 2; iVar5 != 1; iVar5 = iVar5 >> 1) {
        iVar7 = iVar7 + 1;
      }
      piVar9 = local_3c;
      pppiVar12 = &ppiStack_7c;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pppiVar12 = (int **)*piVar9;
        piVar9 = piVar9 + 1;
        pppiVar12 = pppiVar12 + 1;
      }
      FUN_0045fd60(piVar3,local_44,0,iVar7 * 2);
      piVar3 = local_24;
      pppiVar12 = &ppiStack_7c;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pppiVar12 = (int **)*piVar3;
        piVar3 = piVar3 + 1;
        pppiVar12 = pppiVar12 + 1;
      }
      FUN_00460150(param_4,local_44);
    }
    iVar7 = *(int *)*local_48;
    puVar6 = *(undefined4 **)(iVar7 + 0x1c);
    while ((puVar6 != *(undefined4 **)(iVar7 + 0x20) && (((uint)puVar6[1] >> 2 & 1) == 0))) {
      puVar6 = puVar6 + 9;
    }
    *(int *)(iVar1 + 0x38) = *local_48 - (int)DAT_0068bbf8 >> 2;
    iVar7 = *(int *)(*(int *)*local_48 + 0x1c);
    *(undefined4 **)(iVar1 + 0x3c) = puVar6;
    *(int *)(iVar1 + 0x40) = ((int)puVar6 - iVar7) / 0x24;
    *(undefined4 *)(iVar1 + 0x34) = *puVar6;
    *(undefined4 *)(iVar1 + 0x30) = puVar6[3];
    iVar7 = 6;
    *(byte *)(iVar1 + 0x44) = (byte)((uint)puVar6[1] >> 5) & 1;
    if (*(int *)(param_2 + 0x5c) == 6) {
      piVar3 = local_3c;
      pppiVar12 = &ppiStack_7c;
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pppiVar12 = (int **)*piVar3;
        piVar3 = piVar3 + 1;
        pppiVar12 = pppiVar12 + 1;
      }
      fVar13 = (float10)FUN_00433320();
      *(double *)(iVar1 + 0x28) = (double)(fVar13 * (float10)_DAT_0064a8e8 + (float10)_DAT_0064a8e0)
      ;
    }
    else {
      local_70 = (int *)0x6;
      puStack_74 = &param_2;
      pcStack_78 = (char *)0x4339d6;
      FUN_0041d3f0();
      puStack_74 = (undefined4 *)0x4339db;
      iVar7 = FUN_00433430();
      if (iVar7 != 0) {
        local_4 = 0xffffffff;
        if (local_40 - (int)local_48 >> 2 != 0) {
          local_70 = (int *)0x433a05;
          FUN_0044b440();
        }
        ExceptionList = local_c;
        return iVar7;
      }
      if (&stack0x00000000 == (undefined1 *)0x70) {
        local_70 = (int *)s_Internal_error_0880_0066d154;
        puStack_74 = (undefined4 *)0x34ac;
        pcStack_78 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        ppiStack_7c = (int **)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
        FUN_00401010(0,100);
      }
      if (local_70 == in_stack_ffffff94) {
        local_70 = (int *)s_Internal_error_0875_0066d0dc;
        puStack_74 = (undefined4 *)0x34af;
        pcStack_78 = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
        ppiStack_7c = (int **)(s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2);
        FUN_00401010(0,100);
      }
      piVar3 = local_70;
      if (local_70 == in_stack_ffffff94) {
LAB_00433aaf:
        iVar7 = local_40 - (int)local_48 >> 2;
        if (iVar7 != 0) {
          uVar2 = iVar7 * 4;
          if (0x80 < uVar2) {
            FUN_0061c888();
            ExceptionList = local_c;
            return 1;
          }
          FUN_00401aa0();
          *local_48 = *(int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = local_48;
          DAT_0068c164 = 0;
        }
        ExceptionList = local_c;
        return 1;
      }
      do {
        if (*piVar3 == param_3) break;
        piVar3 = piVar3 + 1;
      } while (piVar3 != in_stack_ffffff94);
      if (piVar3 == in_stack_ffffff94) goto LAB_00433aaf;
    }
    iVar7 = local_40 - (int)local_48 >> 2;
    if (iVar7 != 0) {
      uVar2 = iVar7 * 4;
      if (uVar2 < 0x81) {
        param_4 = (int *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
        local_70 = (int *)0x433b4c;
        LVar4 = InterlockedExchange(&DAT_0068c164,1);
        uVar2 = DAT_0066b83c;
        if (LVar4 != 0) {
          uVar10 = 0;
          if (DAT_0066b83c != 0) {
            uVar8 = DAT_0068c168 >> 1;
            do {
              if ((uVar8 <= uVar10) && (DAT_0068c164 == 0)) {
                local_70 = (int *)0x433b87;
                LVar4 = InterlockedExchange(&DAT_0068c164,1);
                if (LVar4 == 0) {
                  DAT_0066b83c = 1000;
                  DAT_0068c168 = uVar10;
                  goto LAB_00433c12;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar2);
          }
          DAT_0066b83c = 0x1e;
          while( true ) {
            local_70 = (int *)0x433bf2;
            LVar4 = InterlockedExchange(&DAT_0068c164,1);
            if (LVar4 == 0) break;
            FUN_00402b10();
          }
        }
LAB_00433c12:
        *local_48 = *param_4;
        *param_4 = (int)local_48;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888();
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


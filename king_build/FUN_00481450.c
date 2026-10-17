
void FUN_00481450(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_4a;
  undefined1 local_49;
  int *local_48;
  int local_44;
  undefined4 *local_40;
  int local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00640178;
  local_14 = ExceptionList;
  local_34 = param_1;
  ExceptionList = &local_14;
  FUN_00490cf0(param_1,&local_28,&local_30,&local_2c);
  local_c = 0;
  if (local_28 == DAT_0066edf4) {
    FUN_00478a20(&local_49);
    local_c = CONCAT31(local_c._1_3_,1);
    iVar4 = *(int *)*param_1;
    *param_1 = (int)((int *)*param_1 + 1);
    FUN_00447200();
    FUN_0047abc0(iVar4);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      local_4a = *(undefined1 *)*param_1;
      *param_1 = (int)((undefined1 *)*param_1 + 1);
      FUN_0047ac10(&local_4a);
    }
    local_48 = (int *)FUN_00483930(DAT_0068be20,DAT_0068be24,local_40,local_44);
    if (local_48 == DAT_0068be24) {
      FUN_00401010(0,0x100,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                   s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0xf4,s_Can_not_find_town_0066ee14,
                   local_40,&DAT_0068c120);
    }
    iVar4 = (local_30 - *local_34) + local_2c;
    while (iVar4 != 0) {
      piVar5 = (int *)0x0;
      local_24 = param_1;
      FUN_00490cf0(param_1,&local_18,&local_20,&local_1c);
      local_c._0_1_ = 2;
      if (local_18 == DAT_0066edec) {
        local_44 = *(int *)*param_1;
        *param_1 = (int)((int *)*param_1 + 1);
        piVar1 = (int *)FUN_00631d33(0x20);
        if (piVar1 != (int *)0x0) {
          *piVar1 = -1;
          piVar1[1] = -1;
          piVar1[2] = -1;
          piVar1[3] = -1;
          piVar1[4] = 0;
          piVar1[6] = 0;
          piVar1[5] = 0;
          piVar1[7] = 0;
          piVar5 = piVar1;
        }
        *piVar5 = *(int *)*param_1;
        iVar4 = *param_1;
        *param_1 = iVar4 + 4;
        piVar5[1] = *(int *)(iVar4 + 4);
        iVar4 = *param_1;
        *param_1 = iVar4 + 4;
        piVar5[3] = *(int *)(iVar4 + 4);
        iVar4 = *param_1;
        piVar1 = (int *)(iVar4 + 4);
        *param_1 = (int)piVar1;
        piVar5[4] = *piVar1;
        piVar5[5] = *(int *)(iVar4 + 8);
        iVar4 = *param_1;
        piVar1 = (int *)(iVar4 + 8);
        *param_1 = (int)piVar1;
        piVar5[6] = *piVar1;
        piVar5[7] = *(int *)(iVar4 + 0xc);
        iVar4 = *param_1;
        *param_1 = iVar4 + 0x10;
        piVar5[2] = *(int *)(iVar4 + 0x10);
        *param_1 = *param_1 + 4;
        if (*piVar5 == -1) {
          FUN_00401010(0,200,s_C__Nek_Vrappl_Gi_Htai_ai_svld_cp_0066ed70,
                       s__Id__ai_svld_cpp_2001_9_10_17_11_0066ecb4,0x100,
                       s_Internal_error_05381_0066edfc,&DAT_0068c120,&DAT_0068c120);
          FUN_005d2250(s_additional__0066c5ac,piVar5[2]);
          FUN_005d2250(s_additional__0066c5ac,piVar5[1]);
        }
        FUN_00480770(piVar5 + 4);
        iVar3 = local_44 * 0x10;
        iVar4 = *(int *)(*local_48 + 0x1c);
        if (*(int *)(iVar3 + 8 + iVar4) == 0) {
          *(int **)(iVar3 + 8 + iVar4) = piVar5;
        }
        else {
          *(int **)(iVar3 + 0xc + iVar4) = piVar5;
        }
      }
      local_c = CONCAT31(local_c._1_3_,1);
      FUN_00490d20(local_24,local_20,local_1c);
      iVar4 = (local_30 - *local_34) + local_2c;
    }
    uVar2 = local_38 - (int)local_40;
    local_c = local_c & 0xffffff00;
    if (uVar2 != 0) {
      if (uVar2 < 0x81) {
        FUN_00401aa0();
        *local_40 = *(undefined4 *)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4);
        *(undefined4 **)(&DAT_0068c120 + (uVar2 + 7 >> 3) * 4) = local_40;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(local_40);
      }
    }
  }
  local_c = 0xffffffff;
  FUN_00490d20(local_34,local_30,local_2c);
  ExceptionList = local_14;
  return;
}


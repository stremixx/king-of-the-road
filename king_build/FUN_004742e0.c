
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004742e0(int param_1,uint *param_2)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  char **ppcVar10;
  char *apcStack_58 [4];
  uint uStack_48;
  char *pcStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  uint local_28 [2];
  double local_20;
  int local_18;
  int local_14;
  
  puVar8 = param_2;
  puVar9 = local_28;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puStack_3c = (undefined1 *)0x474309;
  iVar6 = FUN_00423b20();
  if (iVar6 == 0) {
    puStack_3c = (undefined1 *)0x474316;
    iVar6 = FUN_00423b50();
    if (iVar6 != 0) goto LAB_0047431a;
LAB_0047434c:
    puStack_3c = (undefined1 *)param_2[6];
    puStack_40 = (undefined1 *)param_2[5];
    pcStack_44 = (char *)param_2[4];
    uStack_48 = param_2[3];
    apcStack_58[3] = (char *)param_2[2];
    apcStack_58[2] = (char *)*param_2;
    apcStack_58[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_58[0] = &DAT_0077d640;
    FUN_0061c369();
    FUN_00401010(0x21,100,s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8,
                 s__Id__ai_play_cpp_2001_8_14_15_09_0066e920,0x279,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  else {
LAB_0047431a:
    if ((((local_20 < _DAT_0064a678) || (_DAT_0064a670 < local_20)) || (local_18 < 0)) ||
       (local_14 < 0)) goto LAB_0047434c;
  }
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < (uint)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    iVar6 = *(int *)(DAT_0068be98 + uVar1 * 4);
    iVar7 = *(int *)(iVar6 + 0x78);
    if ((int)param_2[5] < *(int *)(iVar6 + 0x7c) - iVar7 >> 2) {
      puStack_3c = (undefined1 *)0x4743d6;
      iVar6 = (**(code **)(**(int **)(iVar7 + param_2[5] * 4) + 0x18))();
      if ((int)param_2[4] < iVar6) goto LAB_00474405;
    }
    puStack_3c = &DAT_0068c120;
    puStack_40 = &DAT_0068c120;
    pcStack_44 = s_Invalid_Position_Id_0066bbe0;
    uStack_48 = 0x279;
    apcStack_58[3] = s__Id__ai_play_cpp_2001_8_14_15_09_0066e920;
    apcStack_58[2] = s_C__Nek_Vrappl_Gi_Htai_Ai_play_cp_0066e9d8;
    apcStack_58[1] = (char *)0x64;
    apcStack_58[0] = (char *)0x21;
    FUN_00401010();
  }
LAB_00474405:
  puVar8 = param_2;
  ppcVar10 = apcStack_58;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *ppcVar10 = (char *)*puVar8;
    puVar8 = puVar8 + 1;
    ppcVar10 = ppcVar10 + 1;
  }
  puVar5 = (undefined8 *)FUN_00435cd0(local_28);
  *(undefined8 *)(param_1 + 0x130) = *puVar5;
  *(undefined8 *)(param_1 + 0x138) = puVar5[1];
  *(undefined8 *)(param_1 + 0x140) = puVar5[2];
  iVar6 = *(int *)(param_1 + 0x24);
  if (iVar6 != -1) {
    iVar7 = *(int *)(DAT_0068be60 + iVar6 * 4);
    dVar3 = *(double *)(iVar7 + 0x30) - *(double *)(param_1 + 0x130);
    dVar2 = *(double *)(iVar7 + 0x38) - *(double *)(param_1 + 0x138);
    dVar4 = *(double *)(iVar7 + 0x40) - *(double *)(param_1 + 0x140);
    if (SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3) < _DAT_0064a648) {
      puVar8 = (uint *)(param_1 + 0x20);
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = *param_2;
        param_2 = param_2 + 1;
        puVar8 = puVar8 + 1;
      }
      *(int *)(param_1 + 0x24) = iVar6;
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
      return;
    }
  }
  puVar8 = (uint *)(param_1 + 0x20);
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  return;
}


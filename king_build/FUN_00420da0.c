
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420da0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  char **ppcVar8;
  float10 fVar9;
  char *apcStack_94 [4];
  undefined4 uStack_84;
  char *pcStack_80;
  undefined1 *puStack_7c;
  undefined1 *puStack_78;
  int local_68;
  char local_64 [4];
  char *local_60 [4];
  char *local_50;
  int local_4c;
  undefined4 local_48;
  uint local_40 [5];
  int local_2c;
  uint local_20 [4];
  int iStack_10;
  
  local_68 = DAT_0068a8f0;
  puStack_78 = (undefined1 *)0xffffffff;
  puStack_7c = (undefined1 *)0x0;
  pcStack_80 = (char *)0x8;
  uStack_84 = 0x420dbc;
  uVar1 = FUN_00415840();
  apcStack_94[3] = local_64;
  apcStack_94[2] = (char *)0x420dc9;
  uStack_84 = uVar1;
  piVar2 = (int *)FUN_00422480();
  local_68 = *piVar2;
  puStack_78 = &stack0x00000004;
  puStack_7c = (undefined1 *)0x420dde;
  FUN_004742e0();
  ppcVar8 = apcStack_94;
  puVar4 = (undefined4 *)register0x00000010;
  for (iVar3 = 8; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar8 = (char *)*puVar4;
    ppcVar8 = ppcVar8 + 1;
  }
  FUN_0041d3f0(&local_68);
  FUN_00417a70(iVar3);
  puVar4 = (undefined4 *)(local_68 + 0x28);
  ppcVar8 = local_60;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar8 = (char *)*puVar4;
    puVar4 = puVar4 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  puStack_78 = (undefined1 *)0x420e21;
  iVar3 = FUN_0040a460();
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)(local_68 + 0x28);
    ppcVar8 = local_60;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar8 = (char *)*puVar4;
      puVar4 = puVar4 + 1;
      ppcVar8 = ppcVar8 + 1;
    }
    puStack_78 = (undefined1 *)local_48;
    puStack_7c = (undefined1 *)local_4c;
    pcStack_80 = local_50;
    uStack_84 = local_60[3];
    apcStack_94[3] = local_60[2];
    apcStack_94[2] = local_60[0];
    apcStack_94[1] = s___d__g__d__d__x__0066bc0c;
    apcStack_94[0] = &DAT_0077d640;
    FUN_0061c369();
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x1d46,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  puVar6 = (uint *)(local_68 + 0x28);
  puVar5 = puVar6;
  ppcVar8 = local_60;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar8 = (char *)*puVar5;
    puVar5 = puVar5 + 1;
    ppcVar8 = ppcVar8 + 1;
  }
  if ((-1 < (int)local_60[0]) && (local_60[0] < (char *)(DAT_0068be9c - DAT_0068be98 >> 2))) {
    puVar5 = puVar6;
    puVar7 = local_40;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar5 = puVar6;
    ppcVar8 = local_60;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppcVar8 = (char *)*puVar5;
      puVar5 = puVar5 + 1;
      ppcVar8 = ppcVar8 + 1;
    }
    iVar3 = *(int *)(DAT_0068be98 + (int)local_60[0] * 4);
    if (local_2c < *(int *)(iVar3 + 0x7c) - *(int *)(iVar3 + 0x78) >> 2) {
      puVar5 = puVar6;
      puVar7 = local_20;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar5 = puVar6;
      ppcVar8 = local_60;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar8 = (char *)*puVar5;
        puVar5 = puVar5 + 1;
        ppcVar8 = ppcVar8 + 1;
      }
      puVar5 = local_40;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      }
      puStack_78 = (undefined1 *)0x420f3a;
      iVar3 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_0068be98 + local_40[0] * 4) + 0x78) +
                                     local_4c * 4) + 0x18))();
      if (iStack_10 < iVar3) goto LAB_00420f6a;
    }
    puStack_78 = &DAT_0068c120;
    puStack_7c = &DAT_0068c120;
    pcStack_80 = s_Invalid_Position_Id_0066bbe0;
    uStack_84 = 0x1d46;
    apcStack_94[3] = s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558;
    apcStack_94[2] = s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2;
    apcStack_94[1] = (char *)0x64;
    apcStack_94[0] = (char *)0x21;
    FUN_00401010();
  }
LAB_00420f6a:
  if (DAT_0068c27c != '\0') {
    puStack_7c = (undefined1 *)0x420f79;
    puStack_78 = (undefined1 *)uVar1;
    FUN_0046db70();
  }
  puStack_78 = (undefined1 *)local_68;
  puStack_7c = (undefined1 *)0x420f8a;
  FUN_004200f0();
  puStack_7c = (undefined1 *)(local_68 + 0x18);
  pcStack_80 = (char *)0x420f97;
  fVar9 = (float10)FUN_004843f0();
  if (fVar9 < (float10)_DAT_0064a698) {
    puStack_78 = (undefined1 *)local_68;
    puStack_7c = (undefined1 *)0x420fb5;
    FUN_00446c50();
  }
  return;
}



undefined4 FUN_004a6c70(undefined4 param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puStack_b4;
  char *pcStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *piStack_a4;
  int local_90;
  undefined4 uStack_8c;
  uint local_88;
  int aiStack_84 [2];
  uint uStack_7c;
  undefined1 *puStack_78;
  undefined1 auStack_74 [12];
  undefined4 local_68;
  undefined4 auStack_64 [3];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_50 [3];
  undefined1 auStack_44 [56];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00642fcd;
  pvStack_c = ExceptionList;
  local_68 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  *(undefined4 *)(param_2 + 0x78) = 0;
  piStack_a4 = (int *)0x4a6cb3;
  piStack_a4 = (int *)FUN_004a71e0();
  piStack_a8 = *(int **)(param_2 + 0x70);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (piStack_a8 == (int *)*(int *)(param_2 + 0x74)) {
    piStack_ac = (int *)0x4a6ce4;
    FUN_004aa590();
  }
  else {
    piStack_ac = (int *)0x4a6ccf;
    FUN_004ab690();
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + 0x2c;
  }
  local_4._0_1_ = 1;
  piStack_a4 = (int *)0x4a6cf5;
  FUN_004a73b0();
  piStack_a4 = (int *)(param_2 + 0x3c);
  piStack_a8 = (int *)0x4a6d04;
  FUN_0040c060();
  piStack_a4 = (int *)param_2;
  piStack_ac = &local_90;
  piStack_a8 = (int *)0x0;
  pcStack_b0 = (char *)0x4a6d10;
  FUN_004a2a10();
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_90 == 0) {
    piStack_a4 = (int *)0x1;
    piStack_a8 = (int *)0x0;
    piStack_ac = (int *)0x4a6d2b;
    FUN_004a5470();
  }
  if ((local_88 & 0x10000) != 0) {
    piStack_a4 = (int *)0x1;
    piStack_a8 = (int *)0x4;
    piStack_ac = (int *)0x4a6d41;
    FUN_004a5470();
  }
  iVar3 = local_90;
  iVar2 = *(int *)(local_90 + 0x14);
  piVar6 = (int *)(local_90 + 0x14);
  if (((iVar2 != 0) && ((*(uint *)(local_90 + 0x1c) & 0x10000) == 0)) &&
     (*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, *(int *)(*piVar6 + 4) == 0)) {
    piStack_a4 = &param_3;
    piStack_ac = (int *)0x4a6d78;
    piStack_a8 = piVar6;
    cVar5 = FUN_00408fd0();
    if ((cVar5 == '\0') && ((int *)*piVar6 != (int *)0x0)) {
      piStack_a4 = (int *)0x1;
      piStack_a8 = (int *)0x4a6d8d;
      (**(code **)(*(int *)*piVar6 + 0xc))();
    }
  }
  if ((param_5 & 0x10000) == 0) {
    *(undefined4 *)(iVar3 + 0x18) = 0;
    if (param_3 == 0) {
      *piVar6 = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    else {
      *piVar6 = param_3;
      *(uint *)(iVar3 + 0x1c) = param_5;
      *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
    }
  }
  else {
    *(uint *)(iVar3 + 0x1c) = param_5;
    *piVar6 = param_3;
    *(undefined4 *)(iVar3 + 0x18) = param_4;
  }
  piStack_a4 = (int *)param_2;
  piStack_ac = aiStack_84;
  piStack_a8 = (int *)0x0;
  pcStack_b0 = (char *)0x4a6de8;
  FUN_004a2a10();
  pcStack_b0 = "quote";
  puStack_b4 = (undefined1 *)0x0;
  local_4._0_1_ = 4;
  piVar6 = (int *)FUN_004aa950(auStack_74);
  local_4 = CONCAT31(local_4._1_3_,5);
  if (aiStack_84[0] == 0) {
    piStack_a4 = (int *)0x1;
    piStack_a8 = (int *)0x0;
    piStack_ac = (int *)0x4a6e1e;
    FUN_004a5470();
  }
  if ((uStack_7c & 0x10000) != 0) {
    piStack_a4 = (int *)0x1;
    piStack_a8 = (int *)0x4;
    piStack_ac = (int *)0x4a6e34;
    FUN_004a5470();
  }
  iVar3 = aiStack_84[0];
  iVar2 = *(int *)(aiStack_84[0] + 0x14);
  piVar1 = (int *)(aiStack_84[0] + 0x14);
  if (((iVar2 != 0) && ((*(uint *)(aiStack_84[0] + 0x1c) & 0x10000) == 0)) &&
     (*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, *(int *)(*piVar1 + 4) == 0)) {
    piStack_ac = (int *)0x4a6e66;
    piStack_a8 = piVar1;
    piStack_a4 = piVar6;
    cVar5 = FUN_00408fd0();
    if ((cVar5 == '\0') && ((int *)*piVar1 != (int *)0x0)) {
      piStack_a4 = (int *)0x1;
      piStack_a8 = (int *)0x4a6e7b;
      (**(code **)(*(int *)*piVar1 + 0xc))();
    }
  }
  if ((piVar6[2] & 0x10000U) == 0) {
    *(undefined4 *)(iVar3 + 0x18) = 0;
    iVar2 = *piVar6;
    if (iVar2 == 0) {
      *piVar1 = 0;
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    else {
      *piVar1 = iVar2;
      *(int *)(iVar3 + 0x1c) = piVar6[2];
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
  }
  else {
    *(int *)(iVar3 + 0x1c) = piVar6[2];
    *piVar1 = *piVar6;
    *(int *)(iVar3 + 0x18) = piVar6[1];
  }
  local_4 = CONCAT31(local_4._1_3_,4);
  piStack_a4 = (int *)0x4a6ec7;
  FUN_00492340();
  if (aiStack_84[0] == 0) {
    piStack_a4 = (int *)0x1;
    piStack_a8 = (int *)0x0;
    piStack_ac = (int *)0x4a6ed9;
    FUN_004a5470();
  }
  if ((uStack_7c & 0x10000) != 0) {
    piStack_a4 = (int *)0x1;
    piStack_a8 = (int *)0x4;
    piStack_ac = (int *)0x4a6eef;
    FUN_004a5470();
  }
  piVar6 = (int *)(aiStack_84[0] + 0x20);
  iVar2 = *(int *)(aiStack_84[0] + 0x20);
  if (((iVar2 != 0) && ((*(uint *)(aiStack_84[0] + 0x28) & 0x10000) == 0)) &&
     (*(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1, *(int *)(*piVar6 + 4) == 0)) {
    piStack_a4 = &local_90;
    piStack_ac = (int *)0x4a6f23;
    piStack_a8 = piVar6;
    cVar5 = FUN_00408fd0();
    if ((cVar5 == '\0') && ((int *)*piVar6 != (int *)0x0)) {
      piStack_a4 = (int *)0x1;
      piStack_a8 = (int *)0x4a6f38;
      (**(code **)(*(int *)*piVar6 + 0xc))();
    }
  }
  if ((local_88 & 0x10000) == 0) {
    *(undefined4 *)(aiStack_84[0] + 0x24) = 0;
    if (local_90 == 0) {
      *piVar6 = 0;
      *(undefined4 *)(aiStack_84[0] + 0x28) = 0;
    }
    else {
      *piVar6 = local_90;
      *(uint *)(aiStack_84[0] + 0x28) = local_88;
      *(int *)(*piVar6 + 4) = *(int *)(*piVar6 + 4) + 1;
    }
  }
  else {
    *(uint *)(aiStack_84[0] + 0x28) = local_88;
    *piVar6 = local_90;
    *(undefined4 *)(aiStack_84[0] + 0x24) = uStack_8c;
  }
  piStack_a4 = (int *)param_2;
  piStack_ac = auStack_50;
  piStack_a8 = (int *)0x0;
  pcStack_b0 = (char *)0x4a6f85;
  FUN_004a2a10();
  piStack_a4 = aiStack_84;
  local_4._0_1_ = 6;
  piStack_a8 = (int *)0x4a6f9e;
  FUN_004b8250();
  piStack_a8 = (int *)0x4a6fa8;
  FUN_0040c060();
  piStack_a4 = (int *)param_2;
  piStack_ac = auStack_64;
  piStack_a8 = (int *)0x0;
  pcStack_b0 = (char *)0x4a6fb4;
  FUN_004a2a10();
  piStack_a4 = &uStack_54;
  piStack_a8 = &uStack_58;
  puStack_78 = (undefined1 *)&puStack_b4;
  local_4._0_1_ = 7;
  uStack_58 = 0;
  uStack_54 = 0xffffffff;
  FUN_004aaa30(&puStack_b4,0,s_internal_macro_expand_0066f9d4);
  puVar7 = auStack_74;
  local_4._0_1_ = 7;
  FUN_004b8250(puVar7);
  piStack_a4 = (int *)FUN_004a3910(puVar7);
  local_4._0_1_ = 9;
  piStack_a8 = (int *)0x4a7022;
  FUN_004b8250();
  piStack_a8 = (int *)0x4a702c;
  FUN_0040c060();
  local_4._0_1_ = 7;
  piStack_a4 = (int *)0x4a703c;
  FUN_00492340();
  piStack_a4 = auStack_50;
  piStack_a8 = (int *)0x4a704a;
  FUN_004b8250();
  piStack_a8 = (int *)0x4a7054;
  FUN_0040c060();
  puStack_78 = (undefined1 *)&piStack_ac;
  pcStack_b0 = (char *)auStack_64;
  puStack_b4 = (undefined1 *)0x4a7067;
  FUN_00455dc0();
  puStack_b4 = auStack_44;
  pcStack_b0 = (char *)param_2;
  FUN_004a6a00();
  local_4._0_1_ = 10;
  uVar4 = (undefined1)local_4;
  local_4._0_1_ = 10;
  if (*(int *)(param_2 + 0x78) == 0) {
    piStack_a4 = *(int **)(param_2 + 0x70);
    piStack_a8 = *(int **)(param_2 + 0x6c);
    piStack_ac = (int *)0x4a7096;
    FUN_004aa330();
    piStack_a4 = (int *)0x4a709f;
    piStack_a4 = (int *)FUN_004a71e0();
    local_4._0_1_ = 0xb;
    piStack_a8 = (int *)0x4a70af;
    FUN_004aa2f0();
    local_4._0_1_ = 10;
    piStack_a4 = (int *)0x4a70c0;
    FUN_004a73b0();
    piStack_a8 = (int *)0x4a70cc;
    piStack_a4 = (int *)(param_2 + 0x3c);
    FUN_0040c060();
    puStack_78 = (undefined1 *)&piStack_ac;
    pcStack_b0 = auStack_44;
    puStack_b4 = (undefined1 *)0x4a70df;
    FUN_00455dc0();
    puStack_b4 = auStack_74;
    pcStack_b0 = (char *)param_2;
    FUN_004a6a00();
    piStack_a4 = *(int **)(param_2 + 0x70);
    piStack_a8 = *(int **)(param_2 + 0x6c);
    local_4._0_1_ = 0xc;
    piStack_ac = (int *)0x4a7103;
    FUN_004aa330();
    piStack_a4 = (int *)auStack_74;
    piStack_a8 = (int *)0x4a7116;
    FUN_00455dc0();
    local_4._0_1_ = 10;
  }
  else {
    piStack_a8 = (int *)auStack_74;
    piStack_a4 = (int *)0x0;
    piStack_ac = (int *)0x4a7138;
    local_4._0_1_ = uVar4;
    piStack_a4 = (int *)FUN_004aa850();
    piStack_a8 = (int *)0x4a714a;
    FUN_00455dc0();
  }
  local_68 = 1;
  piStack_a4 = (int *)0x4a715b;
  FUN_00492340();
  local_4._0_1_ = 7;
  piStack_a4 = (int *)0x4a716b;
  FUN_00492340();
  local_4._0_1_ = 6;
  piStack_a4 = (int *)0x4a717c;
  FUN_00492340();
  local_4._0_1_ = 4;
  piStack_a4 = (int *)0x4a718d;
  FUN_00492340();
  local_4._0_1_ = 3;
  piStack_a4 = (int *)0x4a719e;
  FUN_00492340();
  local_4._0_1_ = 1;
  piStack_a4 = (int *)0x4a71af;
  FUN_00492340();
  local_4 = (uint)local_4._1_3_ << 8;
  piStack_a4 = (int *)0x4a71c3;
  FUN_00492340();
  ExceptionList = pvStack_c;
  return param_1;
}


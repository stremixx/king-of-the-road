
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004cdb20(void)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  double in_stack_00000024;
  int in_stack_00000030;
  undefined4 auStack_88 [8];
  undefined8 *puStack_68;
  undefined4 uStack_64;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28 [9];
  
  iVar4 = in_stack_00000030;
  dVar2 = in_stack_00000024;
  if (in_stack_00000030 != 0) {
    in_stack_00000024 = -in_stack_00000024;
  }
  puStack_68 = &stack0x00000024;
  uStack_64 = 0;
  puVar6 = auStack_88;
  puVar5 = (undefined4 *)register0x00000010;
  for (iVar3 = 8; puVar5 = puVar5 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  FUN_0041d3f0(&stack0x0000002c);
  FUN_0043bff0(local_28,iVar3);
  dVar1 = in_stack_00000024;
  if (iVar4 != 0) {
    dVar1 = -in_stack_00000024;
  }
  uStack_64 = 0;
  puStack_68 = (undefined8 *)iVar4;
  puVar6 = auStack_88;
  puVar5 = (undefined4 *)register0x00000010;
  for (iVar3 = 8; puVar5 = puVar5 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  FUN_004cda50(&local_40);
  uStack_64 = 0;
  puStack_68 = (undefined8 *)iVar4;
  puVar5 = local_28;
  puVar6 = auStack_88;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_004cda50(&local_34);
  uStack_64 = 0x4cdc32;
  fVar7 = (float10)FUN_0061d420();
  if ((local_2c * local_3c - local_38 * local_30) * DAT_00701590 +
      DAT_00701594 * (local_38 * local_34 - local_2c * local_40) +
      (local_30 * local_40 - local_3c * local_34) * DAT_00701598 < (float)_DAT_0064a668) {
    fVar7 = -fVar7;
  }
  fVar8 = (float10)(dVar2 - dVar1);
  if (fVar8 < (float10)_DAT_0064a5a8) {
    fVar8 = (float10)_DAT_0064a5a8;
  }
  return fVar7 / fVar8;
}


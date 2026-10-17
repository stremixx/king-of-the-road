
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_004cd7a0(void)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float **ppfVar5;
  float10 fVar6;
  double in_stack_00000024;
  float in_stack_0000002c;
  float in_stack_00000048;
  float in_stack_0000004c;
  int in_stack_00000058;
  double *in_stack_0000005c;
  double *in_stack_00000060;
  undefined4 *in_stack_00000064;
  float *apfStack_80 [5];
  undefined4 uStack_6c;
  float *pfStack_68;
  undefined8 *puStack_64;
  float *pfStack_60;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  char *local_20;
  char *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_c;
  undefined4 local_8;
  
  apfStack_80[0] = &local_48;
  ppfVar5 = apfStack_80 + 1;
  puVar4 = (undefined4 *)register0x00000010;
  for (iVar3 = 8; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppfVar5 = (float *)*puVar4;
    ppfVar5 = ppfVar5 + 1;
  }
  FUN_00439660();
  local_48 = in_stack_00000048 - local_48;
  local_34 = 0.0;
  fVar1 = in_stack_0000004c - local_44;
  ppfVar5 = apfStack_80 + 1;
  puVar4 = (undefined4 *)register0x00000010;
  local_3c = local_48;
  for (iVar3 = 8; puVar4 = puVar4 + 1, iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppfVar5 = (float *)*puVar4;
    ppfVar5 = ppfVar5 + 1;
  }
  apfStack_80[0] = &local_54;
  local_40 = 0.0;
  local_44 = fVar1;
  local_38 = fVar1;
  FUN_00439400();
  if (in_stack_00000058 != 0) {
    local_54 = -local_54;
    local_50 = -local_50;
    in_stack_00000024 = (double)CONCAT44(local_50,local_54);
    in_stack_0000002c = -local_4c;
  }
  pfStack_60 = &local_54;
  puStack_64 = &stack0x00000024;
  local_4c = 0.0;
  pfStack_68 = (float *)0x4cd88d;
  pfVar2 = (float *)FUN_005aaad0();
  local_54 = *pfVar2;
  local_50 = pfVar2[1];
  local_4c = pfVar2[2];
  fVar1 = local_4c * local_40 + local_54 * local_48 + local_50 * local_44;
  local_3c = local_48 - local_54 * fVar1;
  local_38 = local_44 - local_50 * fVar1;
  pfStack_68 = &local_3c;
  in_stack_00000024 = (double)CONCAT44(local_38,local_3c);
  in_stack_0000002c = local_40 - fVar1 * local_4c;
  uStack_6c = 0x4cd92d;
  local_34 = in_stack_0000002c;
  fVar6 = (float10)FUN_005aabc0();
  in_stack_00000024 = (double)fVar6;
  if (DAT_00701590 * (local_50 * local_40 - local_44 * local_4c) +
      DAT_00701594 * (local_48 * local_4c - local_54 * local_40) +
      (local_44 * local_54 - local_50 * local_48) * DAT_00701598 < (float)_DAT_0064a668) {
    in_stack_00000024 = -(double)fVar6;
  }
  pfStack_60 = (float *)local_30;
  local_30[0] = 0;
  ppfVar5 = apfStack_80;
  for (iVar3 = 8; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar3 != 0;
      iVar3 = iVar3 + -1) {
    *ppfVar5 = (float *)*(undefined4 *)register0x00000010;
    ppfVar5 = ppfVar5 + 1;
  }
  local_28 = 0;
  uStack_24 = 0;
  local_20 = s_UNDEFINED_MODULE_0066c638;
  local_1c = s_UNDEFINED_ROOM_0066c628;
  local_18 = 0;
  uStack_14 = 0;
  local_c = 0xffffffff;
  local_8 = 0xffffffff;
  FUN_00438e50();
  *in_stack_0000005c = (double)CONCAT44(uStack_24,local_28) * _DAT_0064a6d0;
  *in_stack_00000060 = (double)CONCAT44(uStack_14,local_18) * _DAT_0064a770;
  *in_stack_00000064 = local_30[0];
  return (float10)in_stack_00000024;
}


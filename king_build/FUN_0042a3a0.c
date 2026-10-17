
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0042a3a0(void)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  int *local_18;
  int local_14;
  double local_10;
  
  FUN_00477c00(&local_14);
  local_18 = DAT_0068becc;
  if (local_14 != DAT_0068a8f0) {
    while (local_18 = (int *)*local_18, local_18 != DAT_0068becc) {
      iVar1 = local_18[2];
      if (((((*(uint *)(iVar1 + 8) & 0x400) == 0) && (((byte)*(uint *)(iVar1 + 8) & 0xf0) == 0x80))
          && (fVar5 = (float10)FUN_00401000(),
             (float10)_DAT_0064a848 < fVar5 - (float10)*(double *)(iVar1 + 0x60))) &&
         (dVar2 = *(double *)(local_14 + 0x270) - *(double *)(iVar1 + 0x20),
         dVar3 = *(double *)(local_14 + 0x278) - *(double *)(iVar1 + 0x28),
         local_10 = *(double *)(local_14 + 0x280) - *(double *)(iVar1 + 0x30),
         _DAT_0064a748 < SQRT(dVar2 * dVar2 + local_10 * local_10 + dVar3 * dVar3))) {
        uVar4 = extraout_ECX;
        if (*(int *)(iVar1 + 0x6c) == -1) {
          FUN_00401010(0,1,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                       s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x298e,
                       s_Internal_error_09768_0066cbe8,&DAT_0068c120,&DAT_0068c120);
          uVar4 = extraout_ECX_00;
        }
        iVar1 = *(int *)(DAT_0068c018 + *(int *)(iVar1 + 0x6c) * 4);
        *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x28) + -1;
        uVar6 = uVar4;
        FUN_0041d3f0(&local_18);
        FUN_004042b0(uVar4);
        FUN_0041f000(uVar6);
        local_18 = DAT_0068becc;
      }
    }
  }
  return;
}


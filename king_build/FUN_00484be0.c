
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00484be0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  double local_8;
  
  param_2 = param_2 * 4;
  local_8 = 0.0;
  bVar1 = *(byte *)(*(int *)(*(int *)(param_2 + DAT_0068be60) + 0xc4 + param_1 * 4) + param_3);
  while( true ) {
    if (bVar1 == 0x7f) {
      return (float10)_DAT_0064ac20;
    }
    if (bVar1 == 0xff) {
      FUN_00401010(0,1,s_C__Nek_Vrappl_Gi_Htai_ai_trce_cp_0066f1e0,
                   s__Id__ai_trce_cpp_2001_5_23_19_48_0066f0c8,0x198,s_Internal_error_7893_0066f244,
                   &DAT_0068c120,&DAT_0068c120);
    }
    uVar3 = (uint)(bVar1 >> 7);
    iVar2 = *(int *)(*(int *)(*(int *)(param_2 + DAT_0068be60) + 0x14 + uVar3 * 0xc) +
                    (bVar1 & 0x7f) * 4);
    fVar4 = (float10)FUN_004098e0(param_1,iVar2,uVar3);
    local_8 = (double)(fVar4 + (float10)local_8);
    param_2 = *(int *)(*(int *)(iVar2 + 0x70 + (uVar3 ^ 1) * 4) + 0x10);
    if (param_2 == param_3) break;
    param_2 = param_2 * 4;
    bVar1 = *(byte *)(*(int *)(*(int *)(param_2 + DAT_0068be60) + 0xc4 + param_1 * 4) + param_3);
  }
  return (float10)local_8;
}


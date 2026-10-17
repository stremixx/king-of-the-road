
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0042ca90(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_20 [2];
  double local_18;
  int local_10;
  int local_c;
  
  if (param_1 == 0xffffffff) {
    if (param_2 == -1) {
      return 0;
    }
    *(undefined4 *)(param_9 + 0x24) =
         *(undefined4 *)(*(int *)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xb8) + 0xc);
    *(undefined4 *)(param_9 + 0x28) =
         *(undefined4 *)(*(int *)(*(int *)(DAT_0068be60 + param_2 * 4) + 0xbc) + 0xc);
    return 0;
  }
  puVar3 = local_20;
  for (iVar1 = 8; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4), iVar1 != 0;
      iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)register0x00000010;
    puVar3 = puVar3 + 1;
  }
  if (((((int)param_1 < 0) || ((uint)(DAT_0068be9c - DAT_0068be98 >> 2) <= param_1)) &&
      (iVar1 = FUN_00423b50(), iVar1 == 0)) ||
     (((local_18 < _DAT_0064a678 || (_DAT_0064a670 < local_18)) || ((local_10 < 0 || (local_c < 0)))
      ))) {
    FUN_0061c369(&DAT_0077d640,s___d__g__d__d__x__0066bc0c,param_1,param_3,param_4,param_5,param_6,
                 param_7);
    FUN_00401010(0x21,100,s___C__Nek_Vrappl_Gi_Htai_Ai_main__0066b7ae + 2,
                 s__Id__Ai_main_cpp_2001_10_16_14_2_0066b558,0x2d0e,s_Invalid_id_0066bbf4,
                 s_PositionId_0066bc00,&DAT_0077d640);
  }
  iVar1 = *(int *)(DAT_0068be98 + param_1 * 4);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x78) + param_6 * 4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + 8;
  }
  *(undefined4 *)(param_9 + 0x24) = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x78) + param_6 * 4);
  if (iVar1 == 0) {
    *(undefined4 *)(param_9 + 0x28) = *(undefined4 *)(_DAT_0000000c + 0xc);
    return 0;
  }
  *(undefined4 *)(param_9 + 0x28) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0xc);
  return 0;
}


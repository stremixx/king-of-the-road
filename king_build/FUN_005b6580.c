
void __fastcall FUN_005b6580(undefined2 *param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*(uint *)(param_1 + 6) & 0x4000) != 0) {
    if (*(int *)(param_1 + 0x3a) == 1) {
      FUN_005b5dc0(&local_20);
      local_10 = local_20;
      local_8 = local_18;
      local_4 = local_14;
      local_c = local_1c;
      iVar1 = (**(code **)(*DAT_0071f868 + 0x28))(DAT_0071f868,1,&local_10,2,0,0x3f800000,0);
      if (iVar1 != 0) {
        FUN_005d2250(s_error_in_clear_z_0067e030,iVar1);
        return;
      }
    }
    else if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = 0, param_1[1] != 0)) {
      do {
        FUN_005b58a0(*(int *)(param_1 + 0x18) + (uint)(ushort)param_1[4] * iVar1 * 2,0,*param_1);
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)(ushort)param_1[1]);
    }
  }
  return;
}


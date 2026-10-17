
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e69f8(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_d8 [52];
  uint local_8;
  
  puVar2 = param_6;
  puVar3 = local_d8;
  for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_8 = 0;
  if ((float)_DAT_0064a668 < param_3) {
    local_8 = FUN_004e6089(param_2,param_1,param_3,param_4,param_5,param_6);
    if ((local_8 & 1) == 0) {
      puVar2 = local_d8;
      puVar3 = param_6;
      for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      local_8 = FUN_004e65d1(param_2,param_1,param_3,param_4,param_5,param_6);
    }
  }
  else {
    local_8 = FUN_004e5eb1(param_2,param_1,param_4,param_5,param_6);
    if ((local_8 & 1) == 0) {
      puVar2 = local_d8;
      puVar3 = param_6;
      for (iVar1 = 0x34; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      local_8 = FUN_004e63dd(param_2,param_1,param_4,param_5,param_6);
    }
  }
  return local_8;
}


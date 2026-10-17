
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004e5817(int *param_1,float param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint local_d8;
  float local_d4;
  undefined4 local_d0 [18];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  
  FUN_005eebf0();
  puVar2 = &DAT_00701550;
  puVar3 = local_d0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_88 = *param_3;
  local_84 = param_3[1];
  local_80 = param_3[2];
  local_7c = *param_4;
  local_78 = param_4[1];
  local_74 = param_4[2];
  local_60 = 0;
  local_6c = 0;
  local_d4 = param_2;
  local_70 = 0;
  if (param_2 == (float)_DAT_0064a668) {
    local_d8 = (**(code **)(*param_1 + 0x34))(0,&local_d4);
  }
  else {
    local_d8 = (**(code **)(*param_1 + 0x34))(2,&local_d4);
  }
  if ((local_d8 & 2) != 2) {
    local_6c = 0;
  }
  return local_6c;
}


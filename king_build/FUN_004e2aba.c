
undefined4 * FUN_004e2aba(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  undefined1 local_40 [12];
  undefined4 local_34 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_004bd520();
  puVar1 = (undefined4 *)FUN_004bddd0(local_40,param_2,param_3);
  local_34[0] = *puVar1;
  local_34[1] = puVar1[1];
  local_34[2] = puVar1[2];
  puVar1 = (undefined4 *)FUN_004bddd0(local_4c,param_2 + 0xc,param_3 + 0xc);
  local_34[3] = *puVar1;
  local_24 = puVar1[1];
  local_20 = puVar1[2];
  puVar1 = (undefined4 *)FUN_004bddd0(local_58,param_2 + 0x18,param_3 + 0x18);
  local_1c = *puVar1;
  local_18 = puVar1[1];
  local_14 = puVar1[2];
  local_10 = DAT_007015b0;
  local_c = DAT_007015b4;
  local_8 = DAT_007015b8;
  puVar1 = local_34;
  puVar3 = param_1;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


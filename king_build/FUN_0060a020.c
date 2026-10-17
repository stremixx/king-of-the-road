
void FUN_0060a020(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00609f70(local_40);
  local_8 = param_4;
  local_10 = param_2;
  local_c = param_3;
  puVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


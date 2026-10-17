
void FUN_005abd60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_30 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar1 = local_30 + 2;
  iVar2 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_30[0] = *param_2;
  local_30[1] = param_2[3];
  local_30[2] = param_2[6];
  local_30[3] = param_2[1];
  local_20 = param_2[4];
  local_1c = param_2[7];
  local_18 = param_2[2];
  local_14 = param_2[5];
  local_10 = param_2[8];
  local_c = param_2[9];
  local_8 = param_2[10];
  local_4 = param_2[0xb];
  puVar1 = local_30;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar1;
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


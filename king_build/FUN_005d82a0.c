
void FUN_005d82a0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198 [100];
  undefined4 local_8;
  undefined4 local_4;
  
  local_1a8 = 0;
  local_1ac = 0;
  local_1a4 = 0;
  local_19c = 0;
  local_4 = 0;
  local_8 = 0;
  puVar2 = local_198;
  for (iVar1 = 100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_1a0 = param_2;
  local_1b0 = param_1;
  (**(code **)(*param_3 + 0x20))(&LAB_005d8310,&local_1b0);
  return;
}


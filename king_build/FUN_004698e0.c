
void FUN_004698e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_640 [144];
  int local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8 [144];
  int local_198;
  undefined4 local_194 [49];
  undefined4 local_d0 [51];
  
  puVar2 = param_1;
  puVar3 = local_640;
  for (iVar1 = 0x18e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2;
  puVar3 = param_1;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined8 *)(param_1 + 0x92) = *(undefined8 *)(param_2 + 0x92);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined8 *)(param_1 + 0x96) = *(undefined8 *)(param_2 + 0x96);
  param_1[0x98] = param_2[0x98];
  param_1[0x99] = param_2[0x99];
  puVar2 = param_2 + 0x9a;
  puVar3 = param_1 + 0x9a;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 299;
  puVar3 = param_1 + 299;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = param_2 + 0x15c;
  puVar3 = param_1 + 0x15c;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_640;
  puVar3 = param_2;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x98] = local_3e0;
  *(undefined8 *)(param_2 + 0x92) = local_3f8;
  *(undefined8 *)(param_2 + 0x94) = local_3f0;
  param_2[0x99] = local_3dc;
  *(undefined8 *)(param_2 + 0x96) = local_3e8;
  puVar2 = local_3d8;
  puVar3 = param_2 + 0x9a;
  for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_194;
  puVar3 = param_2 + 299;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_3d8;
  puVar3 = local_d0;
  puVar4 = param_2 + 0x15c;
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  for (; puVar2 != local_3d8 + local_198 * 6; puVar2 = puVar2 + 6) {
    FUN_004030a0(puVar2);
  }
  for (puVar2 = local_640; puVar2 != local_640 + local_400 * 6; puVar2 = puVar2 + 6) {
    FUN_004030a0(puVar2);
  }
  return;
}


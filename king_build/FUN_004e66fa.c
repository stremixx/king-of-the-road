
bool FUN_004e66fa(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 local_d4;
  undefined4 local_d0 [12];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  
  FUN_005eebf0();
  puVar3 = &DAT_00701550;
  puVar4 = local_d0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_88 = *param_2;
  local_84 = param_2[1];
  local_80 = param_2[2];
  local_7c = *param_3;
  local_78 = param_3[1];
  local_74 = param_3[2];
  local_d4 = 0;
  local_5c = 0;
  local_60 = 0;
  local_6c = 0;
  uVar1 = FUN_004e5bdf(param_1,4,&local_d4);
  bVar5 = (uVar1 & 1) != 0;
  if (bVar5) {
    *param_4 = local_a0;
    param_4[1] = local_9c;
    param_4[2] = local_98;
    *param_5 = local_94;
    param_5[1] = local_90;
    param_5[2] = local_8c;
  }
  return bVar5;
}


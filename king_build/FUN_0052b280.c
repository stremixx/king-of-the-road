
void __fastcall FUN_0052b280(undefined4 *param_1)

{
  char *_Source;
  char *_Source_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c [12];
  char local_4c [32];
  char local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00646433;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064dc78;
  param_1[0x40] = &PTR_LAB_0064dc2c;
  param_1[0x5e] = &PTR_LAB_0064dc28;
  local_4 = 1;
  iVar4 = FUN_0052e200(param_1[0x952]);
  iVar4 = param_1[0x953] + (iVar4 + 200) * 1000;
  iVar5 = FUN_005e4980(iVar4);
  if (iVar5 != 0) {
    _Source = *(char **)(param_1[0x50] + 0xc);
    iVar5 = FUN_0057d5d0();
    _Source_00 = *(char **)(iVar5 + 0xc);
    uVar1 = param_1[300];
    uVar2 = param_1[0x5d];
    uVar3 = param_1[0x953];
    local_a8 = FUN_0052e200(param_1[0x952]);
    puVar6 = local_7c + 2;
    iVar5 = 4;
    do {
      puVar6[-2] = 0;
      puVar6[-1] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    local_94 = param_1[0x68];
    local_90 = param_1[0x69];
    local_88 = param_1[0x6b];
    local_8c = param_1[0x6a];
    local_84 = param_1[0x6c];
    local_80 = param_1[0x6d];
    puVar6 = param_1 + 0x7d;
    puVar7 = local_7c;
    for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    local_a4 = uVar3;
    _strncpy(local_4c,_Source_00,0x1f);
    _strncpy(local_2c,_Source,0x1f);
    local_98 = 0;
    local_a0 = uVar2;
    local_9c = uVar1;
    FUN_005e48c0(iVar4,*(undefined4 *)(param_1[0x49] + 0x3c),0x9c,&local_a8);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0052a6e0();
  local_4 = 0xffffffff;
  FUN_0058af70();
  ExceptionList = local_c;
  return;
}



void __thiscall FUN_005356b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_170 [12];
  undefined4 *puStack_140;
  undefined4 *puStack_13c;
  undefined4 *local_138;
  undefined1 *local_134;
  undefined4 *local_130;
  int *local_12c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [20];
  int local_cc;
  undefined4 local_c8 [12];
  undefined4 local_98 [12];
  undefined1 local_68 [48];
  undefined1 local_38 [52];
  
  if (DAT_006cdbc8 == 0) {
    puVar4 = (undefined4 *)(param_1 + 0x620);
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar4;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  local_130 = local_c8;
  local_12c = (int *)0x0;
  local_134 = (undefined1 *)0x5356f1;
  FUN_004de8f0();
  local_12c = (int *)local_e0;
  local_130 = &local_e8;
  local_134 = local_f0;
  local_138 = &local_f8;
  puStack_13c = &local_100;
  puStack_140 = &local_108;
  puVar4 = local_c8;
  puVar5 = auStack_170;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005de000();
  FUN_005da010(local_68,local_108,local_104,local_100,local_fc,local_f8,local_f4,0,0,local_e8,
               local_e4,0,0);
  local_12c = (int *)local_68;
  local_130 = (undefined4 *)local_38;
  local_134 = (undefined1 *)0x535794;
  FUN_005aba00();
  iVar1 = DAT_00671d7c;
  iVar2 = *(int *)(param_1 + 0x24);
  puVar4 = (undefined4 *)(param_1 + 0x620);
  puVar5 = local_98;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar3 = *(int *)(iVar2 + 0x100);
  local_cc = *(int *)(iVar2 + 0x104);
  local_12c = &local_118;
  local_130 = (undefined4 *)0x5357d1;
  FUN_005d7ca0();
  if ((((local_118 != 0) || (local_114 != iVar1)) || (local_110 != iVar3)) ||
     (local_10c != local_cc)) {
    local_138 = (undefined4 *)0x0;
    local_134 = (undefined1 *)iVar1;
    local_12c = (int *)local_cc;
    puStack_13c = (undefined4 *)0x53580f;
    local_130 = (undefined4 *)iVar3;
    (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))();
  }
  puVar4 = local_98;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  return;
}


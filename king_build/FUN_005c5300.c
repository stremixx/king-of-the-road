
void __thiscall
FUN_005c5300(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_stack_00000050;
  char *_Source;
  undefined1 local_128 [28];
  undefined4 local_10c;
  undefined1 local_108;
  char local_f4 [24];
  char local_dc [24];
  undefined4 local_c4 [14];
  undefined4 local_8a;
  undefined4 local_80;
  undefined4 local_76;
  undefined4 local_6c;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648259;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  if (DAT_0067e7b8 != -1) {
    *(int *)(param_1 + 0x158) = DAT_0067e7b8;
    DAT_0067e7b8 = -1;
  }
  if ((*(int *)(DAT_00706ecc + 0x1a0) != 0) || (*(int *)(param_2 + 0x1ef8) != 0)) {
    if (*(int *)(param_1 + 0x158) == -1) {
      uVar1 = FUN_005c5290();
      *(undefined4 *)(param_1 + 0x16c) = uVar1;
    }
    else {
      *(int *)(param_1 + 0x16c) = (*(int *)(param_1 + 0x158) * 5 + 500000) * 2;
    }
    *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x16c) + 2;
    uVar1 = FUN_005c2980(*(int *)(param_1 + 0x16c) + 1,1,*(undefined4 *)(param_1 + 0x144));
    *(undefined4 *)(param_1 + 0x160) = uVar1;
    iVar2 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = iVar2 + 1;
    uVar1 = FUN_005c2a20(iVar2,param_1,&LAB_005c5570,0x14);
    *(undefined4 *)(param_1 + 0x164) = uVar1;
    FUN_006022c0();
    local_4 = 0;
    _strncpy((char *)&local_10c,*(char **)(*(int *)(param_3 + 0x24) + 0x3c),0x18);
    _strncpy(local_f4,*(char **)(param_3 + 0xc),0x18);
    if (in_stack_00000050 == 900) {
      _Source = *(char **)(param_4 + 0xc);
    }
    else {
      _Source = *(char **)(param_1 + 0x10c);
    }
    _strncpy(local_dc,_Source,0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x158);
    puVar3 = (undefined4 *)&stack0x0000001c;
    puVar4 = local_c4;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    local_80 = param_5;
    local_8a = param_6;
    local_6c = *(undefined4 *)(param_1 + 0x16c);
    local_76 = uVar1;
    FUN_006027f0(in_stack_00000050,&local_10c,0xfa);
    FUN_005c2d10(local_128);
    iVar2 = FUN_00631d33(0x1c);
    local_4._0_1_ = 1;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_006022c0();
    }
    local_10c = *(undefined4 *)(param_1 + 0x16c);
    local_4 = (uint)local_4._1_3_ << 8;
    local_108 = 1;
    FUN_006027f0(0x388,&local_10c,5);
    FUN_005c3780(uVar1);
    local_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = local_c;
  return;
}


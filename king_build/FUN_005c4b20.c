
undefined4 __thiscall FUN_005c4b20(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  int iStack_a8;
  int iStack_a4;
  undefined1 local_90;
  undefined1 local_8f;
  char local_8e [130];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006481bb;
  local_c = ExceptionList;
  if (*(int *)(DAT_00706ecc + 0x1a4) == 2) {
    ExceptionList = &local_c;
    FUN_006022c0();
    uVar3 = 0xffffffff;
    pcVar5 = param_3;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    local_4 = 0;
    if (0x40 < ~uVar3 - 1) {
      local_4 = 0xffffffff;
      FUN_00602560();
      ExceptionList = local_c;
      return 0;
    }
    uVar2 = *(undefined4 *)(DAT_00706ecc + 0x1b8);
    if (*(code **)(param_1 + 0x1bc) == (code *)0x0) {
      local_8f = 0xff;
    }
    else {
      local_8f = (**(code **)(param_1 + 0x1bc))(param_2,uVar2);
    }
    *(int *)(DAT_00706ecc + 0x1b8) = *(int *)(DAT_00706ecc + 0x1b8) + 1;
    uVar3 = 0xffffffff;
    local_90 = (undefined1)uVar2;
    pcVar5 = param_3;
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = local_8e;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar3 = 0xffffffff;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
    } while (cVar1 != '\0');
    FUN_006027f0(0x385,&local_90,~uVar3 + 2);
    FUN_00601840(*(undefined4 *)(param_1 + 0x198),iStack_a8,iStack_a4 - iStack_a8);
    local_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = local_c;
  return 1;
}


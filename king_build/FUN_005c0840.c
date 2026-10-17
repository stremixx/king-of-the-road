
void __thiscall FUN_005c0840(int param_1,char *param_2)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647fa3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar4 = (undefined4 *)FUN_00631d33(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[1] = 0;
    puVar4[2] = 0;
    uVar7 = 0xffffffff;
    *puVar4 = &PTR_FUN_006508d4;
    local_4 = 1;
    pcVar5 = param_2;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    pcVar5 = (char *)FUN_00631d33(~uVar7);
    uVar7 = 0xffffffff;
    puVar4[3] = pcVar5;
    do {
      pcVar9 = param_2;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar9 = param_2 + 1;
      cVar2 = *param_2;
      param_2 = pcVar9;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar9 + -uVar7;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar5 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x128);
  local_4 = 0xffffffff;
  if (iVar6 == 0) {
    *(undefined4 **)(param_1 + 0x150) = puVar4;
    *(undefined4 **)(param_1 + 300) = puVar4;
    *(undefined4 **)(param_1 + 0x128) = puVar4;
  }
  else {
    for (iVar3 = *(int *)(iVar6 + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar6 = iVar3;
    }
    FUN_005d1840(iVar6);
    *(undefined4 **)(param_1 + 300) = puVar4;
  }
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
  iVar6 = FUN_005bfda0();
  if (iVar6 < *(int *)(param_1 + 0x148)) {
    psVar1 = (short *)(*(int *)(param_1 + 0x154) + 0x128);
    *psVar1 = *psVar1 + 1;
  }
  FUN_005c0320(0);
  ExceptionList = local_c;
  return;
}


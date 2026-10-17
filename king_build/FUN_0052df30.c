
void __thiscall FUN_0052df30(int param_1,int param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1b8 [28];
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  uint local_18c;
  char local_188 [380];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006465eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_19c = *(undefined4 *)(param_1 + 0x4a4);
  local_194 = *(undefined4 *)(param_2 + 0x2548);
  local_190 = param_3;
  local_18c = 0xffffffff;
  pcVar4 = param_4;
  do {
    if (local_18c == 0) break;
    local_18c = local_18c - 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  local_18c = ~local_18c;
  uVar2 = 0xffffffff;
  local_198 = 10;
  pcVar4 = param_4;
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  local_4 = 0;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = local_188;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_4;
    param_4 = param_4 + 1;
  } while (cVar1 != '\0');
  FUN_006027f0((int)DAT_0067c04a,&local_19c,~uVar2 + 0x14);
  FUN_005c2d10(local_1b8);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}


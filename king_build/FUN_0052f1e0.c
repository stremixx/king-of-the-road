
/* WARNING: Type propagation algorithm not settling */

void FUN_0052f1e0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int local_194;
  byte abStack_18c [44];
  int iStack_160;
  undefined1 auStack_15c [36];
  char local_138;
  undefined4 local_137 [74];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064662b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00630505(1);
  local_4 = 0;
  FUN_006305c9(param_4,0x21,DAT_00654594);
  iVar4 = *(int *)(local_194 + 4);
  if ((abStack_18c[iVar4] & 6) != 0) {
    local_4 = 0xffffffff;
    FUN_006305b6();
    FUN_0062fc10();
    ExceptionList = local_c;
    return;
  }
  iVar8 = 0;
  if (*(int *)((int)&iStack_160 + iVar4) < 0) {
    FUN_0062fb80(auStack_15c + iVar4);
  }
  FUN_0063063e(&local_138,300,10);
  if (*(int *)((int)&iStack_160 + *(int *)(local_194 + 4)) < 0) {
    FUN_0062fb8b(auStack_15c + *(int *)(local_194 + 4));
  }
  bVar2 = abStack_18c[*(int *)(local_194 + 4)];
  while ((bVar2 & 1) == 0) {
    iVar4 = 0;
    cVar3 = local_138;
    while ((cVar3 != '[' && (cVar3 != '\0'))) {
      pcVar1 = (char *)((int)local_137 + iVar4);
      iVar4 = iVar4 + 1;
      cVar3 = *pcVar1;
    }
    cVar3 = (&local_138)[iVar4];
    iVar7 = 0;
    if (cVar3 == '[') {
      iVar7 = iVar4;
    }
    while ((cVar3 != ']' && (cVar3 != '\0'))) {
      pcVar1 = (char *)((int)local_137 + iVar4);
      iVar4 = iVar4 + 1;
      cVar3 = *pcVar1;
    }
    if (((&local_138)[iVar4] == ']') && (iVar4 != 0)) {
      if (param_3 <= (iVar4 - iVar7) + 1 + iVar8) break;
      if (iVar7 + 1 < iVar4) {
        uVar5 = iVar4 - (iVar7 + 1);
        puVar9 = (undefined4 *)((int)local_137 + iVar7);
        puVar10 = (undefined4 *)(param_2 + iVar8);
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        iVar8 = iVar8 + uVar5;
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      iVar8 = iVar8 + 1;
      *(undefined1 *)(param_2 + -1 + iVar8) = 0;
    }
    if (*(int *)((int)&iStack_160 + *(int *)(local_194 + 4)) < 0) {
      FUN_0062fb80(auStack_15c + *(int *)(local_194 + 4));
    }
    FUN_0063063e(&local_138,300,10);
    if (*(int *)((int)&iStack_160 + *(int *)(local_194 + 4)) < 0) {
      FUN_0062fb8b(auStack_15c + *(int *)(local_194 + 4));
    }
    bVar2 = abStack_18c[*(int *)(local_194 + 4)];
  }
  *(undefined1 *)(param_2 + iVar8) = 0;
  FUN_0063060b();
  local_4 = 0xffffffff;
  FUN_006305b6();
  FUN_0062fc10();
  ExceptionList = local_c;
  return;
}


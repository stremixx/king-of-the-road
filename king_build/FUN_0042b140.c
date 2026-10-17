
undefined4 FUN_0042b140(int param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      pcVar2 = *(char **)(param_1 + 100);
      if (pcVar2 != *(char **)(param_1 + 0x68)) {
        iVar5 = -1;
        pcVar7 = pcVar2;
        do {
          if (iVar5 == 0) break;
          iVar5 = iVar5 + -1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (iVar5 != -2) {
          FUN_0056a570(pcVar2);
        }
      }
      puVar8 = *(undefined4 **)(param_1 + 0x70);
      if (puVar8 != *(undefined4 **)(param_1 + 0x74)) {
        do {
          FUN_0041fa60(*puVar8);
          puVar8 = puVar8 + 1;
        } while (puVar8 != *(undefined4 **)(param_1 + 0x74));
      }
    }
  }
  else if (*(char *)(param_1 + 0x1c) == '\0') {
    pcVar2 = *(char **)(param_1 + 0x58);
    if (pcVar2 != *(char **)(param_1 + 0x5c)) {
      iVar5 = -1;
      pcVar7 = pcVar2;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      if (iVar5 != -2) {
        FUN_0056a570(pcVar2);
      }
    }
    puVar8 = *(undefined4 **)(param_1 + 0x70);
    if (puVar8 != *(undefined4 **)(param_1 + 0x74)) {
      do {
        FUN_0041d0e0(*puVar8);
        puVar8 = puVar8 + 1;
      } while (puVar8 != *(undefined4 **)(param_1 + 0x74));
    }
  }
  *(char *)(param_1 + 0x1c) = param_2;
  if (param_1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1 + 0xc;
  }
  FUN_00483d00(iVar5);
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != -1) {
    if (param_2 != '\0') {
      FUN_00446cb0(iVar5,0x40);
      return 0;
    }
    iVar3 = *(int *)(DAT_0068be98 + iVar5 * 4);
    piVar6 = *(int **)(iVar3 + 0x78);
    if (piVar6 != *(int **)(iVar3 + 0x7c)) {
      do {
        uVar4 = *(uint *)(*piVar6 + 8);
        if ((uVar4 & 0x80) == 0) {
          *(uint *)(*piVar6 + 8) = uVar4 & 0xffffffbf;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != *(int **)(*(int *)(DAT_0068be98 + iVar5 * 4) + 0x7c));
    }
  }
  return 0;
}



void FUN_0056f1b0(undefined4 param_1,undefined4 param_2,char *param_3,char *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_a0 [28];
  undefined4 local_84;
  char local_80 [32];
  char local_60 [32];
  undefined4 local_40 [12];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646d8b;
  local_c = ExceptionList;
  if (*(int *)(DAT_006cdbcc + 0x514) == 1) {
    ExceptionList = &local_c;
    FUN_006022c0();
    local_84 = param_1;
    local_4 = 0;
    if (param_3 == (char *)0x0) {
      local_80[0] = '\0';
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pcVar5 = param_3;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar5 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar5;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar5 + -uVar2;
      pcVar7 = local_80;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    if (param_4 == (char *)0x0) {
      local_60[0] = '\0';
    }
    else {
      uVar2 = 0xffffffff;
      do {
        pcVar5 = param_4;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar5 = param_4 + 1;
        cVar1 = *param_4;
        param_4 = pcVar5;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar5 + -uVar2;
      pcVar7 = local_60;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar7 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    puVar6 = (undefined4 *)&stack0x00000014;
    puVar8 = local_40;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_10 = param_2;
    FUN_006027f0(0x3be,&local_84,0x78);
    FUN_005c2d10(local_a0);
    local_4 = 0xffffffff;
    FUN_00602560();
  }
  ExceptionList = local_c;
  return;
}


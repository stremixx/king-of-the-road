
undefined4 * __thiscall FUN_00600980(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar2 = (undefined4 *)FUN_00631d33(param_2[5]);
  param_1[4] = puVar2;
  uVar5 = param_2[5];
  if (uVar5 != 0) {
    puVar6 = (undefined4 *)param_2[4];
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  uVar5 = 0xffffffff;
  param_1[5] = param_2[5];
  pcVar3 = (char *)param_2[6];
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00631d33(~uVar5);
  uVar5 = 0xffffffff;
  param_1[6] = pcVar3;
  pcVar7 = (char *)param_2[6];
  do {
    pcVar8 = pcVar7;
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar8 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar8;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5;
  pcVar7 = pcVar8 + -uVar5;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar3 = pcVar3 + 1;
  }
  param_1[7] = param_2[7];
  return param_1;
}


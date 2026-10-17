
undefined4 * __thiscall
FUN_006008e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,char *param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar2 = (undefined4 *)FUN_00631d33(param_4);
  param_1[4] = puVar2;
  if (param_4 != 0) {
    for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_3;
      param_3 = (undefined4 *)((int)param_3 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  uVar4 = 0xffffffff;
  param_1[5] = param_4;
  pcVar3 = param_5;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = (char *)FUN_00631d33(~uVar4);
  uVar4 = 0xffffffff;
  param_1[6] = pcVar3;
  do {
    pcVar6 = param_5;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar6 = param_5 + 1;
    cVar1 = *param_5;
    param_5 = pcVar6;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar6 + -uVar4;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar3 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar3 = pcVar3 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar3 = pcVar3 + 1;
  }
  param_1[7] = param_6;
  return param_1;
}


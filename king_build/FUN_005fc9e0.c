
undefined4 * __thiscall
FUN_005fc9e0(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar3 = 0xffffffff;
  *param_1 = &PTR_FUN_0064c568;
  pcVar2 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00631d33(~uVar3);
  uVar3 = 0xffffffff;
  param_1[1] = pcVar2;
  do {
    pcVar5 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar2 = pcVar2 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar2 = pcVar2 + 1;
  }
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[7] = param_3;
  param_1[2] = param_4;
  param_1[6] = 0xffffffff;
  return param_1;
}


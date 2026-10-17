
int __thiscall FUN_0050bfe0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  
  iVar2 = FUN_0050bf80(param_2);
  if (iVar2 != -1) {
    return 0xff;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar6 = param_2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = param_2 + 1;
    cVar1 = *param_2;
    param_2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  piVar5 = (int *)(pcVar6 + -uVar3);
  piVar7 = param_1 + *param_1 * 4 + 1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar5;
    piVar5 = piVar5 + 1;
    piVar7 = piVar7 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)piVar7 = (char)*piVar5;
    piVar5 = (int *)((int)piVar5 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  param_1[*param_1 + 0x21] = 0;
  iVar2 = *param_1;
  *param_1 = iVar2 + 1;
  return iVar2;
}


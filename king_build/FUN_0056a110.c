
void __fastcall FUN_0056a110(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  float10 fVar6;
  
  uVar2 = 0xffffffff;
  pcVar4 = (char *)(*(int *)(param_1 + 0x4bc) * 0x80 + 0x2ac + param_1);
  do {
    pcVar5 = pcVar4;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar5 = pcVar4 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  pcVar4 = pcVar5 + -uVar2;
  pcVar5 = (char *)(param_1 + 0x22c);
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
  uVar2 = *(int *)(param_1 + 0x4bc) + 1U & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  *(uint *)(param_1 + 0x4bc) = uVar2;
  *(undefined4 *)(param_1 + 0x4c0) = 1;
  fVar6 = (float10)thunk_FUN_00603580();
  *(double *)(param_1 + 0x20) = (double)fVar6;
  return;
}


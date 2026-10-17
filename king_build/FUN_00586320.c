
void FUN_00586320(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 local_94 [12];
  char local_64 [100];
  
  uVar2 = 0xffffffff;
  pcVar6 = param_1;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (99 < (int)(~uVar2 - 1)) {
    FUN_004e1e9c(s__MovingItem__receiveSignFall____s_0067c868);
  }
  uVar3 = 0xffffffff;
  pcVar6 = param_1;
  do {
    pcVar7 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar6 = pcVar7 + -uVar3;
  pcVar7 = local_64;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  pcVar6 = param_1 + ~uVar2;
  puVar8 = local_94;
  for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    puVar8 = puVar8 + 1;
  }
  iVar5 = FUN_005ee8e0(0,local_64);
  if (iVar5 != 0) {
    FUN_005e1060(iVar5,0,local_94);
  }
  return;
}


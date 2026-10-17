
undefined4 FUN_0050c070(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  CHAR local_80 [128];
  
  GetPrivateProfileStringA
            (s_INSTALL_006751a4,s_SOURCE_006751ac,&DAT_006751b4,local_80,100,DAT_006957c8);
  uVar3 = 0xffffffff;
  pcVar6 = &DAT_0067519c;
  do {
    pcVar8 = pcVar6;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar8 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar8;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  iVar4 = -1;
  pcVar6 = local_80;
  do {
    pcVar7 = pcVar6;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  pcVar6 = pcVar8 + -uVar3;
  pcVar8 = pcVar7 + -1;
  for (uVar5 = uVar3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  iVar4 = FUN_0061c356(local_80,&DAT_00675198);
  if (iVar4 == 0) {
    *(int **)(DAT_006cdc20 + 0x188) = param_1;
    FUN_00518e90(0);
    return 0;
  }
  iVar2 = FUN_0050b4f0();
  if (iVar2 == 0) {
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_00518e90(9);
    }
    FUN_0061c25a(iVar4);
    return 0;
  }
  FUN_0061c25a(iVar4);
  return 1;
}


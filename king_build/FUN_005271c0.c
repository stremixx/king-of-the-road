
undefined4 FUN_005271c0(char *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  CHAR local_80 [128];
  
  if (DAT_006cdbe8 != 0) {
    GetPrivateProfileStringA
              (s_INSTALL_006751a4,s_movie_006771d8,&DAT_006751b4,local_80,100,DAT_006957c8);
    if ((1 < param_2) && (param_2 != 6)) {
      uVar2 = 0xffffffff;
      pcVar5 = &DAT_006751b4;
      do {
        pcVar7 = pcVar5;
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        pcVar7 = pcVar5 + 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar7;
      } while (cVar1 != '\0');
      uVar2 = ~uVar2;
      pcVar5 = pcVar7 + -uVar2;
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
    uVar2 = 0xffffffff;
    do {
      pcVar5 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar5 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar5;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = local_80;
    do {
      pcVar6 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    pcVar5 = pcVar5 + -uVar2;
    pcVar7 = pcVar6 + -1;
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
    iVar4 = FUN_0061c356(local_80,&DAT_0066f3e8);
    if (iVar4 != 0) {
      FUN_0061c25a(iVar4);
      if ((1 < param_2) && (param_2 != 6)) {
        (**(code **)(*(int *)DAT_00695c00[0x2ca] + 0x20))();
        (**(code **)(*DAT_006cdbd8 + 0x20))();
        (**(code **)(*DAT_006cdbd4 + 0x20))();
        (**(code **)(*DAT_006cdc00 + 0x20))();
        (**(code **)(*DAT_00695c00 + 0x20))();
        (**(code **)(*DAT_006cdc1c + 0x20))();
        (**(code **)(*DAT_006cdc10 + 0x20))();
        (**(code **)(*DAT_006cdc0c + 0x20))();
        (**(code **)(*DAT_006cdc14 + 0x20))();
        FUN_00598470();
        (**(code **)(*DAT_00695c10 + 0x20))();
        FUN_005fc7d0();
        FUN_005fc7d0();
        FUN_005fca50();
        if (*(int *)(DAT_006cdbcc + 0x540) != 0) {
          FUN_005ff190();
        }
      }
      FUN_00528690(local_80,param_2);
      return 1;
    }
  }
  return 0;
}


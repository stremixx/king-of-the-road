
void FUN_0051c8c0(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int **ppiVar4;
  char **ppcVar5;
  char *pcStack_8c;
  int *piStack_88;
  int *piStack_84;
  undefined4 uStack_80;
  int *apiStack_7c [4];
  char *pcStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  char *pcStack_58;
  undefined1 local_4c [12];
  int *piStack_40;
  int *piStack_30;
  int *piStack_2c;
  undefined1 auStack_18 [24];
  
  pcStack_58 = (char *)0x1;
  iStack_5c = param_1;
  uStack_60 = 0x51c8d7;
  piVar1 = (int *)FUN_0051b780();
  if (piVar1 == (int *)0x0) {
    pcStack_58 = s__pl1_file_not_found_006765d0;
    iStack_5c = DAT_006cdc38 + 0x278;
    uStack_60 = 0x51c8f4;
    FUN_005d2520();
  }
  iVar3 = *piVar1;
  pcStack_58 = local_4c;
  iStack_5c = 0;
  uStack_60 = 0;
  uStack_64 = 0x10;
  piStack_68 = (int *)0x0;
  pcStack_6c = s_listofgames_006757d4;
  apiStack_7c[3] = (int *)0x51c910;
  pcStack_6c = (char *)FUN_0050b500();
  apiStack_7c[2] = (int *)0x51c918;
  apiStack_7c[3] = piVar1;
  (**(code **)(iVar3 + 0x18))();
  if (piStack_68 != (int *)0x0) {
    apiStack_7c[2] = (int *)auStack_18;
    apiStack_7c[1] = (int *)0x0;
    apiStack_7c[0] = (int *)0x0;
    uStack_80 = 0;
    piStack_84 = piStack_68;
    piStack_88 = (int *)0x51c935;
    piStack_88 = (int *)(**(code **)(*piStack_68 + 0x2c))();
    if (piStack_88 == (int *)0x0) {
      piStack_88 = piStack_2c;
      pcStack_8c = (char *)0x51c947;
      (**(code **)(*piStack_2c + 0x14))();
      pcStack_8c = (char *)0x0;
      ppiVar4 = apiStack_7c;
      for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppiVar4 = (int *)0x0;
        ppiVar4 = ppiVar4 + 1;
      }
      iVar3 = (**(code **)(*piStack_30 + 0xc))(piStack_30,1,apiStack_7c);
      while (iVar3 == 0) {
        pcVar2 = (char *)FUN_0050b530(pcStack_8c);
        if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
          FUN_005c0840(pcVar2);
        }
        if (pcStack_8c != (char *)0x0) {
          CoTaskMemFree(pcStack_8c);
        }
        ppcVar5 = &pcStack_8c;
        for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar5 = (char *)0x0;
          ppcVar5 = ppcVar5 + 1;
        }
        iVar3 = (**(code **)(*piStack_40 + 0xc))(piStack_40,1,&pcStack_8c,0);
      }
      (**(code **)(*piStack_40 + 8))(piStack_40);
    }
    else {
      pcStack_8c = s_Enum_Elements_failed_006765b8;
      FUN_005d2250();
    }
    piStack_88 = apiStack_7c[0];
    pcStack_8c = (char *)0x51c9ea;
    (**(code **)(*apiStack_7c[0] + 8))();
  }
  apiStack_7c[1] = (int *)0x51c9f0;
  apiStack_7c[2] = piVar1;
  (**(code **)(*piVar1 + 8))();
  return;
}


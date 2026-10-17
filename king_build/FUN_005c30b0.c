
void __thiscall FUN_005c30b0(int param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char local_c [12];
  
  if (*(int *)(param_1 + 0x1a0) == 0) {
    iVar3 = 0;
    iVar1 = -(int)param_2;
    do {
      if (*param_2 == '\0') break;
      param_2[(int)(local_c + iVar1)] = *param_2;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 1;
    } while (iVar3 < 7);
    if (iVar3 < 0xc) {
      pcVar4 = local_c + iVar3;
      for (uVar2 = 0xcU - iVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + 4;
      }
      for (uVar2 = 0xcU - iVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *pcVar4 = '\0';
        pcVar4 = pcVar4 + 1;
      }
    }
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 1;
    FUN_00601860(local_c);
    *(undefined4 *)(param_1 + 0x1a0) = 1;
    if (param_3 != 0) {
      FUN_00601b80(param_3,0);
    }
  }
  return;
}


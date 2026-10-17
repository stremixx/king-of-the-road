
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042da40(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int **ppiVar3;
  int **ppiVar4;
  int ***pppiVar5;
  float10 fVar6;
  undefined4 ***pppuStack_3c;
  int ***local_38;
  undefined4 ***local_24;
  int *local_20;
  undefined4 **local_1c;
  undefined *local_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063d148;
  local_14 = ExceptionList;
  if (*param_1 != '\0') {
    pppiVar5 = (int ***)**(int ****)(param_1 + 4);
    ExceptionList = &local_14;
    if (pppiVar5 != *(int ****)(param_1 + 4)) {
      while( true ) {
        local_24 = (undefined4 ***)pppiVar5[2];
        local_38 = (int ***)0x42da8a;
        fVar6 = (float10)FUN_00401000();
        if ((float10)*(double *)(local_24 + 4) < fVar6) break;
        pppiVar5 = (int ***)*pppiVar5;
        if (pppiVar5 == *(int ****)(param_1 + 4)) {
          ExceptionList = local_14;
          return;
        }
      }
      local_20 = (int *)&local_38;
      pppuStack_3c = (undefined4 ***)&local_20;
      local_38 = pppiVar5;
      FUN_00602180();
      ppiVar4 = local_24[8];
      local_18 = &DAT_0071d768;
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
        *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      if (DAT_0071d774 != 0) {
        cVar1 = *(char *)ppiVar4;
        ppiVar3 = ppiVar4;
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *(char *)ppiVar3;
          ppiVar3 = (int **)((int)ppiVar3 + 1);
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *(char *)ppiVar3;
        }
      }
      local_c = 0;
      local_38 = (int ***)0x42db60;
      local_1c = ppiVar4;
      (*(code *)**local_24)();
      local_c = 0xffffffff;
      if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
        pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
        *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
        *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
        DAT_0071d778 = DAT_0071d778 + 8;
      }
      if (DAT_0071d774 != 0) {
        cVar1 = *(char *)ppiVar4;
        for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
          cVar1 = *(char *)ppiVar4;
          ppiVar4 = (int **)((int)ppiVar4 + 1);
          *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
          cVar1 = *(char *)ppiVar4;
        }
      }
      *(double *)(local_24 + 4) = *(double *)(local_24 + 6) + *(double *)(local_24 + 4);
      local_38 = (int ***)0x42dbee;
      fVar6 = (float10)FUN_00401000();
      if ((float10)*(double *)(local_24 + 6) * (float10)_DAT_0064a688 +
          (float10)*(double *)(local_24 + 4) < fVar6) {
        local_38 = (int ***)0x42dc0c;
        fVar6 = (float10)FUN_00401000();
        *(double *)(local_24 + 4) = (double)(fVar6 + (float10)*(double *)(local_24 + 6));
      }
      *param_1 = '\0';
      if (((uint)local_24[2] & 1) == 0) {
        local_38 = (int ***)&local_24;
        pppuStack_3c = local_24;
        FUN_004896a0(&pppuStack_3c);
        FUN_0044afd0(&local_1c);
        ExceptionList = local_14;
        return;
      }
      local_38 = local_24;
      pppuStack_3c = (undefined4 ***)0x42dc57;
      FUN_00631d5c();
    }
  }
  ExceptionList = local_14;
  return;
}


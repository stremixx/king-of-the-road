
/* WARNING: Type propagation algorithm not settling */

void FUN_00428020(int *param_1,double *param_2)

{
  char cVar1;
  char *pcVar2;
  double ***pppdStack_48;
  int ***pppiStack_44;
  int ***local_40;
  int ***local_30;
  undefined1 *local_2c;
  char *local_28;
  undefined *local_24;
  double local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cec8;
  local_14 = ExceptionList;
  local_28 = s_calculateNewPlace_int___newPlace_0066cab4;
  local_24 = &DAT_0071d768;
  ExceptionList = &local_14;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_14, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_14;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  local_40 = (int ***)s_calculateNewPlace_int___newPlace_0066cab4;
  pppiStack_44 = (int ***)0x42809b;
  FUN_004018b0();
  local_c = 0;
  *param_1 = 0;
  *(undefined4 *)param_2 = 0xffffffff;
  *(undefined4 *)((int)param_2 + 4) = 0x7fefffff;
  local_40 = (int ***)*DAT_0068a8f0;
  if (local_40 != DAT_0068a8f0) {
    do {
      local_2c = (undefined1 *)&local_40;
      pppiStack_44 = (int ***)0x4280de;
      local_30 = local_40;
      FUN_0040a950();
      local_2c = (undefined1 *)&pppiStack_44;
      pppdStack_48 = (double ***)&local_30;
      FUN_0041d3f0();
      pppdStack_48 = (double ***)0x4280fc;
      FUN_004042b0();
      pppiStack_44 = (int ***)0x428101;
      cVar1 = FUN_004171e0();
      if (cVar1 != '\0') {
        pppdStack_48 = (double ***)&local_20;
        local_2c = (undefined1 *)&pppdStack_48;
        pppiStack_44 = (int ***)pppdStack_48;
        local_40 = (int ***)pppdStack_48;
        FUN_0041d3f0(&local_30);
        FUN_004042b0();
        pppdStack_48 = (double ***)0x428131;
        cVar1 = FUN_00409ed0();
        if (cVar1 == '\0') {
          *param_1 = *param_1 + 1;
        }
        if (ABS(local_20) < *param_2) {
          *param_2 = ABS(local_20);
        }
      }
      local_40 = (int ***)*local_30;
    } while (local_40 != DAT_0068a8f0);
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_calculateNewPlace_int___newPlace_0066cab4;
  cVar1 = s_calculateNewPlace_int___newPlace_0066cab4[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_14;
  return;
}


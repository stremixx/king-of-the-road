
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442c30(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063deb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar3 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0();
  local_4 = 0;
  FUN_00442820();
  FUN_00425880();
  FUN_0041f080();
  FUN_004772b0();
  cVar1 = FUN_00417560();
  if (cVar1 != '\0') {
    FUN_0056eda0();
  }
  iVar2 = FUN_00477920();
  if (iVar2 == 0) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xfeefffff;
  }
  else {
    fVar4 = (float10)FUN_004715f0(iVar2,0,0);
    *(double *)(param_1 + 0x3c0) =
         (double)((float10)*(double *)(param_1 + 0x3c0) * (float10)_DAT_0064a888 +
                 fVar4 * (float10)_DAT_0064a830);
  }
  FUN_0042c190();
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar3 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar3 = s_accountForChangeInLoadState_Play_0066e124;
  cVar1 = s_accountForChangeInLoadState_Play_0066e124[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar3;
    }
  }
  ExceptionList = local_c;
  return;
}


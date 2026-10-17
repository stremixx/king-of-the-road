
/* WARNING: Removing unreachable block (ram,0x0042ba39) */
/* WARNING: Removing unreachable block (ram,0x0042ba4b) */
/* WARNING: Removing unreachable block (ram,0x0042ba40) */

void FUN_0042b950(int param_1)

{
  char cVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d010;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((DAT_0071d774 != 0) && (ExceptionList = &local_c, DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    ExceptionList = &local_c;
    *(undefined4 *)pcVar2 = s_START__0066b830._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_START__0066b830._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  FUN_004018b0();
  local_4 = 0;
  if (*(int *)(param_1 + 0x7c) != DAT_0068a8f0) {
    FUN_00477e00();
    *(uint *)(*(int *)(param_1 + 0x7c) + 0x60) =
         *(uint *)(*(int *)(param_1 + 0x7c) + 0x60) & 0xfff7ffff;
    *(int *)(param_1 + 0x7c) = DAT_0068a8f0;
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0044c100();
  }
  if ((DAT_0071d774 != 0) && (DAT_0071d778 + 8 < DAT_0071d770)) {
    pcVar2 = (char *)(DAT_0071d778 + DAT_0071d774);
    *(undefined4 *)pcVar2 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar2 + 4) = s_COMPL__0066b7ec._4_4_;
    DAT_0071d778 = DAT_0071d778 + 8;
  }
  pcVar2 = s_releaseAttachedPlayer_AI_Ambush___0066cc4c;
  cVar1 = s_releaseAttachedPlayer_AI_Ambush___0066cc4c[0];
  if (DAT_0071d774 != 0) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar2;
    }
  }
  ExceptionList = local_c;
  return;
}



void FUN_0042d720(void)

{
  char cVar1;
  char *pcVar2;
  undefined4 uStack_420;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  char local_400 [1024];
  
  FUN_00477c00(&uStack_420);
  FUN_0040b030(&local_418);
  uStack_420 = local_404;
  FUN_0061c369(local_400,s_LPP___g__g__g_0066cdb4,local_418,local_414,local_410,local_40c,local_408)
  ;
  pcVar2 = local_400;
  if (DAT_0071d774 != 0) {
    for (; (local_400[0] != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1)
    {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      local_400[0] = *pcVar2;
    }
  }
  return;
}


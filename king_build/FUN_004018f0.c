
void __fastcall FUN_004018f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = param_1[1];
  if ((*(int *)(iVar2 + 0xc) != 0) && (*(int *)(iVar2 + 0x10) + 8 < *(int *)(iVar2 + 8))) {
    pcVar3 = (char *)(*(int *)(iVar2 + 0x10) + *(int *)(iVar2 + 0xc));
    *(undefined4 *)pcVar3 = s_COMPL__0066b7ec._0_4_;
    *(undefined4 *)(pcVar3 + 4) = s_COMPL__0066b7ec._4_4_;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 8;
  }
  iVar2 = param_1[1];
  pcVar3 = (char *)*param_1;
  if (*(int *)(iVar2 + 0xc) != 0) {
    cVar1 = *pcVar3;
    while ((cVar1 != '\0' && (*(int *)(iVar2 + 0x10) < *(int *)(iVar2 + 8)))) {
      pcVar3 = pcVar3 + 1;
      *(char *)(*(int *)(iVar2 + 0xc) + *(int *)(iVar2 + 0x10)) = cVar1;
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
      cVar1 = *pcVar3;
    }
  }
  return;
}


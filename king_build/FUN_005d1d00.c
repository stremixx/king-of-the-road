
void __thiscall FUN_005d1d00(int *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006484ab;
  local_c = ExceptionList;
  if (param_2 != (char *)0x0) {
    cVar2 = *param_2;
    pcVar3 = param_2;
    while (cVar2 == ' ') {
      pcVar1 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
      cVar2 = *pcVar1;
    }
    if (*pcVar3 != '\0') {
      ExceptionList = &local_c;
      iVar4 = FUN_005d20b0(0x18);
      uStack_4 = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_005d1f50(param_2);
      }
      uStack_4 = 0xffffffff;
      if (iVar4 == 0) {
        FUN_005d2520(s_Not_enough_blocks_in_user_define_0067ea20,0);
      }
      *(undefined4 *)(iVar4 + 0x10) = param_3;
      *(int *)(iVar4 + 0x14) = param_1[3];
      if (*param_1 == 0) {
        *param_1 = iVar4;
        ExceptionList = local_c;
        return;
      }
      FUN_005d1840(*param_1);
    }
  }
  ExceptionList = local_c;
  return;
}


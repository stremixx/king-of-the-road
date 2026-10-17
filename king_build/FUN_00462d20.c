
void FUN_00462d20(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *local_124;
  undefined **local_118 [3];
  char local_10c [255];
  undefined1 local_d;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063f546;
  pvStack_c = ExceptionList;
  local_124 = (char *)0x0;
  uVar2 = 0xffffffff;
  local_4 = 0;
  pcVar3 = s_basic_string_0066e544;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  if (uVar2 == 0xffffffff) {
    ExceptionList = &pvStack_c;
    FUN_00462d20();
  }
  else if (uVar2 == 0) {
    local_124 = (char *)0x0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    local_124 = (char *)FUN_0044b6e0(uVar2);
  }
  FUN_0061c980(local_124,s_basic_string_0066e544,uVar2 - 1);
  FUN_00462cc0();
  local_4 = 1;
  FUN_0061d750();
  local_118[0] = &PTR_FUN_0064a964;
  _strncpy(local_10c,local_124,0x100);
  local_d = 0;
  local_118[0] = &PTR_FUN_0064a95c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_118,&DAT_0065b538);
}


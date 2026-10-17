
void __fastcall FUN_0057cb70(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00647141;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f534;
  param_1[0x40] = &PTR_LAB_0064f4e8;
  param_1[0x5e] = &PTR_LAB_0064f4e4;
  local_4 = 1;
  FUN_0057c130(param_1[5]);
  iVar2 = 0;
  iVar1 = DAT_006f549c;
  if (0 < (int)param_1[0x36c]) {
    piVar3 = param_1 + 0x363;
    do {
      if (*piVar3 != 0) {
        FUN_005d1860();
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar3)(1);
        }
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
      iVar1 = DAT_006f549c;
    } while (iVar2 < (int)param_1[0x36c]);
  }
  for (; (iVar1 != 0 && (iVar1 != 4)); iVar1 = *(int *)(iVar1 + 4)) {
    FUN_00587340(param_1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_005923f0();
  local_4 = 0xffffffff;
  FUN_005c58e0();
  ExceptionList = pvStack_c;
  return;
}


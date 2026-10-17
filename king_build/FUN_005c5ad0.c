
void __thiscall FUN_005c5ad0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006482f6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00631d33(0x2c,param_1);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_0070db44 = 0;
  }
  else {
    DAT_0070db44 = FUN_005cc000(iVar2);
  }
  DAT_00706ef4 = param_2;
  local_4 = 0xffffffff;
  DAT_00706ef8 = param_3;
  sVar5 = 0;
  psVar3 = &DAT_00706efe;
  do {
    sVar1 = sVar5 * 4;
    psVar3[-1] = sVar1;
    psVar4 = psVar3 + 6;
    *psVar3 = sVar1 + 1;
    psVar3[1] = sVar1 + 2;
    psVar3[2] = sVar1;
    psVar3[3] = sVar1 + 2;
    psVar3[4] = sVar1 + 3;
    sVar5 = sVar5 + 1;
    psVar3 = psVar4;
  } while (psVar4 < &DAT_007073ae);
  if (DAT_0070db58 == 0) {
    iVar2 = FUN_00631d33(0xa8);
    local_4 = 1;
    if (iVar2 != 0) {
      DAT_0070db58 = FUN_005cd1b0();
      ExceptionList = local_c;
      return;
    }
    DAT_0070db58 = 0;
  }
  ExceptionList = local_c;
  return;
}



void __fastcall FUN_00490e60(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640c58;
  local_c = ExceptionList;
  puVar1 = param_1 + 1;
  local_10 = param_1;
  if ((*(short *)param_1[1] == 0) ||
     (uVar2 = -(uint)(((short *)param_1[1])[2] != 1) & 0xfffffffe, uVar2 == 0xffffffff)) {
    ExceptionList = &local_c;
    FUN_00490de0(s_Zero_denominator__0066f55c);
  }
  else {
    ExceptionList = &local_c;
    if ((int)(uVar2 + 1) < 0) {
      ExceptionList = &local_c;
      uVar4 = FUN_0048c5f0(*puVar1,*puVar1);
      *puVar1 = uVar4;
      uVar4 = FUN_0048c5f0(*param_1,*param_1);
      *param_1 = uVar4;
    }
  }
  FUN_0048c640(&local_10,param_1,puVar1);
  local_4 = 0;
  iVar3 = FUN_0048b000(local_10,DAT_00690c30);
  if (iVar3 != 0) {
    uVar4 = FUN_0048b950(*param_1,local_10,*param_1);
    *param_1 = uVar4;
    uVar4 = FUN_0048b950(*puVar1,local_10,*puVar1);
    *puVar1 = uVar4;
  }
  local_4 = 0xffffffff;
  if ((local_10 != (undefined4 *)0x0) && (*(short *)((int)local_10 + 2) != 0)) {
    FUN_00631d5c(local_10);
  }
  ExceptionList = local_c;
  return;
}


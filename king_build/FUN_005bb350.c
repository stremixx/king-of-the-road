
void __fastcall FUN_005bb350(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_0065075c;
  if ((param_1[2] != 0) && ((*(byte *)(param_1 + 0xd) & 4) == 0)) {
    FUN_00631d5c(param_1[2]);
    param_1[2] = 0;
    if (param_1[3] != 0) {
      FUN_00631d5c(param_1[3]);
    }
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    FUN_005b8bd0();
    FUN_00631d5c(iVar1);
  }
  if (param_1[1] != 0) {
    FUN_00631d5c(param_1[1]);
  }
  if (param_1[7] != 0) {
    FUN_004843e0(param_1[7]);
  }
  FUN_005ba3c0();
  return;
}



bool __thiscall
FUN_004e5078(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = FUN_004e4ca5(param_2,param_3,param_4,param_5,param_6,param_1);
  bVar2 = (uVar1 & 1) != 0;
  if (bVar2) {
    FUN_004e4f28(param_6);
  }
  return bVar2;
}


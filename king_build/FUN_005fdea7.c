
undefined8 __fastcall
FUN_005fdea7(undefined4 param_1,undefined4 param_2,undefined2 *param_3,byte *param_4,int param_5)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = param_5 + 1;
  while (iVar1 + -1 != 0 && 0 < iVar1) {
    *param_3 = param_3[*param_4];
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


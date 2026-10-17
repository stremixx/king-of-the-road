
undefined8 __fastcall
FUN_005fded0(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4,
            undefined1 *param_5,int param_6)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = param_6 + 1;
  while (iVar1 + -1 != 0 && 0 < iVar1) {
    *param_4 = *(undefined1 *)((uint)CONCAT11(*param_5,*param_4) + param_3);
    param_5 = param_5 + 1;
    param_4 = param_4 + 1;
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


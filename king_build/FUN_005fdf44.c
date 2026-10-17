
undefined8 __fastcall
FUN_005fdf44(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4,byte *param_5,
            int param_6,undefined1 param_7)

{
  undefined4 in_EAX;
  int iVar1;
  
  iVar1 = param_6 + 1;
  while (iVar1 + -1 != 0 && 0 < iVar1) {
    if (*param_5 != 0) {
      *param_4 = *(undefined1 *)((uint)CONCAT11(param_7,param_4[*param_5]) + param_3);
    }
    param_5 = param_5 + 1;
    param_4 = param_4 + 1;
    iVar1 = iVar1 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


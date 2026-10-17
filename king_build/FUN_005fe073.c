
undefined8 __fastcall
FUN_005fe073(undefined4 param_1,undefined4 param_2,int param_3,short *param_4,undefined1 *param_5,
            int param_6)

{
  undefined4 in_EAX;
  int iVar1;
  
  if (DAT_0071d734 == 0) {
    iVar1 = param_6 + 1;
    while (iVar1 + -1 != 0 && 0 < iVar1) {
      *param_4 = *(short *)((CONCAT12(*param_5,*param_4) & 0xfffffffe) + param_3);
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    }
  }
  else {
    iVar1 = param_6 + 1;
    while (iVar1 + -1 != 0 && 0 < iVar1) {
      *param_4 = *(short *)((uint)CONCAT12(*param_5,*param_4 << 1) + param_3);
      param_5 = param_5 + 1;
      param_4 = param_4 + 1;
      iVar1 = iVar1 + -1;
    }
  }
  return CONCAT44(param_2,in_EAX);
}


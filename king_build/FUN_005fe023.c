
undefined8 __fastcall
FUN_005fe023(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4,byte param_5,
            int param_6)

{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  
  iVar1 = (uint)param_5 << 8;
  iVar2 = param_6 + 1;
  while (iVar2 + -1 != 0 && 0 < iVar2) {
    iVar1 = CONCAT31((int3)((uint)iVar1 >> 8),*param_4);
    *param_4 = *(undefined1 *)(iVar1 + param_3);
    param_4 = param_4 + 1;
    iVar2 = iVar2 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


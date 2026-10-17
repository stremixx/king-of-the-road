
undefined8 __fastcall
FUN_005fdfb3(undefined4 param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4,
            int param_5,ushort *param_6,uint param_7)

{
  undefined1 uVar1;
  undefined4 in_EAX;
  int iVar2;
  ushort uVar3;
  
  iVar2 = param_5 + 1;
  while (iVar2 + -1 != 0 && 0 < iVar2) {
    uVar3 = (ushort)(param_7 >> 9);
    if (*param_6 <= uVar3) {
      uVar1 = *param_4;
      *param_6 = uVar3;
      *param_3 = uVar1;
    }
    param_4 = param_4 + 1;
    param_3 = param_3 + 1;
    param_6 = param_6 + 1;
    iVar2 = iVar2 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


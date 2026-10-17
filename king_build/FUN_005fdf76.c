
undefined8 __fastcall
FUN_005fdf76(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4,
            undefined1 *param_5,int param_6,ushort *param_7,uint param_8)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 in_EAX;
  int iVar3;
  ushort uVar4;
  
  iVar3 = param_6 + 1;
  while (iVar3 + -1 != 0 && 0 < iVar3) {
    uVar4 = (ushort)(param_8 >> 9);
    if (*param_7 <= uVar4) {
      uVar1 = *param_5;
      uVar2 = *param_4;
      *param_7 = uVar4;
      *param_4 = *(undefined1 *)((uint)CONCAT11(uVar1,uVar2) + param_3);
    }
    param_5 = param_5 + 1;
    param_4 = param_4 + 1;
    param_7 = param_7 + 1;
    iVar3 = iVar3 + -1;
  }
  return CONCAT44(param_2,in_EAX);
}


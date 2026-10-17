
undefined8 __fastcall
FUN_005fdef7(undefined4 param_1,undefined4 param_2,int param_3,undefined1 *param_4,byte *param_5,
            char param_6,undefined1 param_7,undefined1 param_8)

{
  byte bVar1;
  undefined4 in_EAX;
  char cVar2;
  uint uVar3;
  
  uVar3 = (uint)CONCAT11(param_8,param_6 + '\x01');
  while (cVar2 = (char)uVar3 + -1, cVar2 != '\0' && '\0' < (char)uVar3) {
    bVar1 = *param_5;
    if (bVar1 != 0) {
      if (bVar1 == 0xff) {
        *param_4 = param_7;
      }
      else {
        *param_4 = *(undefined1 *)
                    (*(int *)(param_3 +
                             (uint)(ushort)((ushort)bVar1 / (ushort)(byte)(uVar3 >> 8)) * 4) +
                    (uint)CONCAT11(param_7,*param_4));
      }
    }
    param_5 = param_5 + 1;
    param_4 = param_4 + 1;
    uVar3 = CONCAT31((int3)(uVar3 >> 8),cVar2);
  }
  return CONCAT44(param_2,in_EAX);
}


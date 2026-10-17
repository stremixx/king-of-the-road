
void FUN_00405a50(int *param_1)

{
  undefined4 *puVar1;
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined1 auStack_38 [8];
  int local_30 [2];
  undefined1 auStack_28 [12];
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_50 = 0;
  iStack_54 = 0;
  piStack_5c = local_30;
  iStack_58 = 0;
  iStack_60 = 0x405a6b;
  (**(code **)*param_1)();
  puVar1 = (undefined4 *)*param_1;
  iStack_60 = 0x405a72;
  iStack_60 = (*(code *)puVar1[6])();
  iStack_60 = iStack_60 + -1;
  (*(code *)*puVar1)(auStack_28,0,0x3ff00000);
  FUN_00405680(&iStack_60,&uStack_50,uStack_18,uStack_14);
  FUN_00405680(&iStack_1c,auStack_38,uStack_18,uStack_14);
  iStack_54 = iStack_1c + 8;
  piStack_5c = param_1;
  iStack_58 = iStack_60 + 8;
  puVar1 = *(undefined4 **)(iStack_60 + 0x30);
  if (puVar1 == *(undefined4 **)(iStack_60 + 0x34)) {
    FUN_00454540(puVar1,&piStack_5c);
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = param_1;
      puVar1[1] = iStack_58;
      puVar1[2] = iStack_54;
    }
    *(int *)(iStack_60 + 0x30) = *(int *)(iStack_60 + 0x30) + 0xc;
  }
  puVar1 = *(undefined4 **)(iStack_1c + 0x30);
  if (puVar1 != *(undefined4 **)(iStack_1c + 0x34)) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = piStack_5c;
      puVar1[1] = iStack_58;
      puVar1[2] = iStack_54;
    }
    *(int *)(iStack_1c + 0x30) = *(int *)(iStack_1c + 0x30) + 0xc;
    return;
  }
  FUN_00454540(puVar1,&piStack_5c);
  return;
}



void __thiscall FUN_005461e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = *(char *)(param_1 + 0x26a8);
  if (cVar1 == '\x01') {
    uVar3 = 2;
    uVar2 = *(undefined4 *)(&DAT_006d1098 + *(int *)(param_1 + 0x27a4) * 0x5d0);
  }
  else if (cVar1 == '\x02') {
    uVar3 = 0;
    uVar2 = *(undefined4 *)(&DAT_006d1098 + *(int *)(param_1 + 0x27a4) * 0x5d0);
  }
  else {
    if (cVar1 != '\x03') goto LAB_00546254;
    uVar3 = 1;
    uVar2 = *(undefined4 *)(&DAT_006d1098 + *(int *)(param_1 + 0x27a4) * 0x5d0);
  }
  FUN_004e409c(uVar2,uVar3);
LAB_00546254:
  FUN_005f9170(param_2,param_3);
  return;
}


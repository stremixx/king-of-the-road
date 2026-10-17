
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall
FUN_005fe574(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,undefined4 param_10
            )

{
  undefined4 in_EAX;
  
  if (1 < DAT_0070e338) {
    param_4 = param_4 << 1;
  }
  DAT_00682b9e = param_4 + param_3;
  DAT_00682ba2 = param_10;
  _DAT_00682b90 = param_6;
  _DAT_00682b94 = param_9 << 7;
  (*DAT_00682ba6)();
  return CONCAT44(param_2,in_EAX);
}


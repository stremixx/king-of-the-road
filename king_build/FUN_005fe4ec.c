
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __fastcall
FUN_005fe4ec(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,undefined4 param_9,int param_10,
            undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  undefined4 in_EAX;
  
  if (3 < DAT_0070e338) {
    param_4 = param_4 << 1;
  }
  if (1 < DAT_0070e338) {
    param_4 = param_4 << 1;
  }
  DAT_00682b9e = param_4 + param_3;
  DAT_00682ba2 = param_11;
  DAT_00682b98 = param_12;
  _DAT_00682b90 = param_13;
  _DAT_00682b88 = param_7 << (0x10U - DAT_0070e33c & 0x1f);
  _DAT_00682b8c = param_8 << (0x10U - DAT_0070e33c & 0x1f);
  _DAT_00682b94 = param_10 << 7;
  (*DAT_00682ba6)();
  return CONCAT44(param_2,in_EAX);
}


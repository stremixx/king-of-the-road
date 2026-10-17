
void __thiscall
FUN_005b99b0(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int param_7)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0xff < param_2) {
    return;
  }
  if (-1 < param_3) {
    if (0xff < param_3) {
      param_3 = 0xff;
    }
    if (((0 < param_7) && (param_7 < 0x100)) && (param_2 <= param_3)) {
      iVar3 = 0xff - param_7;
      iVar2 = (param_3 - param_2) + 1;
      pbVar1 = (byte *)(param_2 * 3 + 0x19 + param_1);
      do {
        pbVar1[-1] = (byte)((uint)pbVar1[-1] * iVar3 + (param_4 & 0xff) * param_7 >> 8);
        *pbVar1 = (byte)((uint)*pbVar1 * iVar3 + (param_5 & 0xff) * param_7 >> 8);
        pbVar1[1] = (byte)((uint)pbVar1[1] * iVar3 + (param_6 & 0xff) * param_7 >> 8);
        iVar2 = iVar2 + -1;
        pbVar1 = pbVar1 + 3;
      } while (iVar2 != 0);
    }
  }
  return;
}


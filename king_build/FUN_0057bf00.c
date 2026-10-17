
undefined4
FUN_0057bf00(float *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,uint param_8)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  if (param_8 != 0) {
    param_5 = param_5 - param_4;
    do {
      iVar1 = FUN_0057bcc0(param_2,param_3,param_4,param_5 + param_4);
      if (iVar1 != 0) {
        fVar3 = (float10)FUN_0057be10(param_2,param_3,*(undefined4 *)(param_6 + uVar2 * 4),
                                      *(undefined4 *)(param_7 + uVar2 * 4));
        *param_1 = (float)fVar3;
        return 1;
      }
      uVar2 = uVar2 + 1;
      param_4 = param_4 + 0xc;
    } while (uVar2 < param_8);
  }
  return 0;
}



void FUN_00465e20(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int aiStack_58 [10];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_18 [6];
  
  if (0x40 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      puVar4 = (undefined4 *)&stack0x00000014;
      piVar6 = aiStack_58 + 6;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      puVar4 = (undefined4 *)&stack0x00000014;
      piVar6 = aiStack_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      aiStack_58[4] =
           FUN_00468d10(param_1,param_1 + ((param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >>
                                          1) * 4,param_2 + -4);
      aiStack_58[3] = 0x465e95;
      FUN_0041d3f0();
      aiStack_58[4] = param_2;
      aiStack_58[3] = param_1;
      aiStack_58[2] = 0x465e9c;
      iVar1 = FUN_00469150();
      puVar4 = (undefined4 *)&stack0x00000014;
      piVar6 = aiStack_58 + 6;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      aiStack_58[4] = 0;
      aiStack_58[3] = param_2;
      aiStack_58[1] = 0x465ebe;
      aiStack_58[2] = iVar1;
      aiStack_58[5] = param_4;
      FUN_00465e20();
      param_2 = iVar1;
      if ((int)(iVar1 - param_1 & 0xfffffffcU) < 0x41) {
        return;
      }
    }
    uStack_2c = 0;
    uStack_30 = 0;
    puVar4 = (undefined4 *)&stack0x00000014;
    puVar5 = local_18;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    aiStack_58[3] = param_2;
    aiStack_58[2] = param_1;
    puVar4 = (undefined4 *)&stack0x00000014;
    piVar6 = aiStack_58 + 4;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar6 = *puVar4;
      puVar4 = puVar4 + 1;
      piVar6 = piVar6 + 1;
    }
    aiStack_58[1] = 0x465f06;
    FUN_0046cf60();
    uVar3 = param_2 - param_1;
    puVar4 = local_18;
    puVar5 = (undefined4 *)&stack0x00000014;
    for (iVar1 = 6; aiStack_58[5] = param_2, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    while (4 < (int)(uVar3 & 0xfffffffc)) {
      iVar1 = aiStack_58[5] + -4;
      aiStack_58[4] = param_1;
      puVar4 = (undefined4 *)&stack0x00000014;
      piVar6 = aiStack_58 + 6;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        piVar6 = piVar6 + 1;
      }
      aiStack_58[3] = 0x465f4a;
      FUN_0046d160();
      aiStack_58[5] = iVar1;
      uVar3 = iVar1 - param_1;
    }
  }
  return;
}


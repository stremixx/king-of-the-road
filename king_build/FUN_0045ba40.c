
void FUN_0045ba40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int aiStack_58 [10];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_18 [6];
  
  if (0x40 < (int)(param_2 - param_1 & 0xfffffffcU)) {
    while (param_4 != 0) {
      param_4 = param_4 + -1;
      puVar3 = (undefined4 *)&stack0x00000014;
      piVar5 = aiStack_58 + 6;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      puVar3 = (undefined4 *)&stack0x00000014;
      piVar5 = aiStack_58;
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      aiStack_58[4] =
           FUN_004644c0(param_1,param_1 + ((param_2 - param_1 >> 2) - (param_2 - param_1 >> 0x1f) >>
                                          1) * 4,param_2 + -4);
      aiStack_58[3] = 0x45baba;
      FUN_0041d3f0();
      aiStack_58[3] = param_1;
      aiStack_58[2] = 0x45bac1;
      aiStack_58[4] = param_2;
      iVar1 = FUN_00464850();
      aiStack_58[4] = 0;
      puVar3 = (undefined4 *)&stack0x00000014;
      piVar5 = aiStack_58 + 6;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar5 = *puVar3;
        puVar3 = puVar3 + 1;
        piVar5 = piVar5 + 1;
      }
      aiStack_58[1] = 0x45bae1;
      aiStack_58[2] = iVar1;
      aiStack_58[3] = param_2;
      aiStack_58[5] = param_4;
      FUN_0045ba40();
      param_2 = iVar1;
      if ((int)(iVar1 - param_1 & 0xfffffffcU) < 0x41) {
        return;
      }
    }
    uStack_2c = 0;
    uStack_30 = 0;
    puVar3 = (undefined4 *)&stack0x00000014;
    puVar4 = local_18;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    aiStack_58[2] = param_1;
    puVar3 = (undefined4 *)&stack0x00000014;
    piVar5 = aiStack_58 + 4;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    aiStack_58[1] = 0x45bb2a;
    aiStack_58[3] = param_2;
    FUN_0046b5d0();
    aiStack_58[4] = param_1;
    puVar3 = local_18;
    piVar5 = aiStack_58 + 6;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar5 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar5 = piVar5 + 1;
    }
    aiStack_58[3] = 0x45bb41;
    aiStack_58[5] = param_2;
    FUN_00469a80();
  }
  return;
}


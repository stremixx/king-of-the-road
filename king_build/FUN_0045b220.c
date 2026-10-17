
void FUN_0045b220(uint *param_1,uint *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  if (0x40 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
    while (param_4 != 0) {
      uVar1 = *param_1;
      iVar3 = ((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f) >> 1;
      param_4 = param_4 + -1;
      uVar6 = param_1[iVar3];
      uVar2 = uVar6;
      puVar7 = param_1 + iVar3;
      puVar4 = param_1;
      if (uVar1 < uVar6) {
        uVar2 = uVar1;
        puVar7 = param_1;
        puVar4 = param_1 + iVar3;
        uVar1 = uVar6;
      }
      if ((param_2[-1] <= uVar1) && (puVar4 = puVar7, uVar2 < param_2[-1])) {
        puVar4 = param_2 + -1;
      }
      uVar6 = *puVar4;
      puVar4 = param_2;
      puVar7 = param_1;
      while( true ) {
        uVar1 = *puVar7;
        while (uVar1 < uVar6) {
          puVar5 = puVar7 + 1;
          puVar7 = puVar7 + 1;
          uVar1 = *puVar5;
        }
        uVar1 = puVar4[-1];
        puVar5 = puVar4;
        while (puVar4 = puVar5 + -1, uVar6 < uVar1) {
          uVar1 = puVar5[-2];
          puVar5 = puVar4;
        }
        if (puVar4 <= puVar7) break;
        uVar1 = *puVar7;
        *puVar7 = *puVar4;
        *puVar4 = uVar1;
        puVar7 = puVar7 + 1;
      }
      FUN_0045b220(puVar7,param_2,0,param_4);
      param_2 = puVar7;
      if ((int)((int)puVar7 - (int)param_1 & 0xfffffffcU) < 0x41) {
        return;
      }
    }
    FUN_0046b200(param_1,param_2,0,0);
    uVar6 = (int)param_2 - (int)param_1;
    while (4 < (int)(uVar6 & 0xfffffffc)) {
      FUN_0046c8a0(param_1,param_2,0);
      uVar6 = (int)(param_2 + -1) - (int)param_1;
      param_2 = param_2 + -1;
    }
  }
  return;
}


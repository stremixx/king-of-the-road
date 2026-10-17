
void FUN_0046f8a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,undefined4 *param_6,int param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar7 = param_6;
  while( true ) {
    if ((param_4 <= param_5) && (param_4 <= param_7)) {
      iVar6 = ((int)param_2 - (int)param_1) / 0xc;
      puVar3 = param_1;
      puVar2 = param_6;
      if (0 < iVar6) {
        iVar8 = (int)param_1 - (int)param_6;
        puVar4 = param_6;
        param_6 = (undefined4 *)iVar6;
        do {
          puVar1 = (undefined4 *)(iVar8 + (int)puVar4);
          puVar2 = puVar4 + 3;
          *puVar4 = *puVar1;
          puVar4[1] = puVar1[1];
          puVar4[2] = puVar1[2];
          param_6 = (undefined4 *)((int)param_6 + -1);
          puVar4 = puVar2;
        } while (param_6 != (undefined4 *)0x0);
      }
      while ((puVar7 != puVar2 && (param_2 != param_3))) {
        if ((uint)param_2[2] < (uint)puVar7[2]) {
          *puVar3 = *param_2;
          puVar3[1] = param_2[1];
          puVar3[2] = param_2[2];
          puVar4 = puVar7;
          param_2 = param_2 + 3;
        }
        else {
          puVar4 = puVar7 + 3;
          *puVar3 = *puVar7;
          puVar3[1] = puVar7[1];
          puVar3[2] = puVar7[2];
        }
        puVar3 = puVar3 + 3;
        puVar7 = puVar4;
      }
      uVar5 = FUN_0047c830(puVar7,puVar2,puVar3,param_1,0);
      FUN_0045aa20(param_2,param_3,uVar5);
      return;
    }
    if (param_5 <= param_7) break;
    if (param_5 < param_4) {
      iVar8 = param_4 / 2;
      puVar3 = param_1 + iVar8 * 3;
      puVar2 = (undefined4 *)FUN_00470800(param_2,param_3,puVar3,param_8,0);
      iVar6 = ((int)puVar2 - (int)param_2) / 0xc;
    }
    else {
      iVar6 = param_5 / 2;
      puVar2 = param_2 + iVar6 * 3;
      puVar3 = (undefined4 *)FUN_00470860(param_1,param_2,puVar2,param_8,0);
      iVar8 = ((int)puVar3 - (int)param_1) / 0xc;
    }
    param_4 = param_4 - iVar8;
    puVar4 = (undefined4 *)FUN_004704f0(puVar3,param_2,puVar2,param_4,iVar6,param_6,param_7);
    FUN_0046f8a0(param_1,puVar3,puVar4,iVar8,iVar6,param_6,param_7,param_8);
    param_5 = param_5 - iVar6;
    param_2 = puVar2;
    param_1 = puVar4;
  }
  iVar6 = ((int)param_3 - (int)param_2) / 0xc;
  if (0 < iVar6) {
    puVar3 = param_6;
    do {
      puVar2 = (undefined4 *)(((int)param_2 - (int)param_6) + (int)puVar3);
      puVar7 = puVar3 + 3;
      iVar6 = iVar6 + -1;
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      puVar3[2] = puVar2[2];
      puVar3 = puVar7;
    } while (iVar6 != 0);
  }
  if (param_1 == param_2) {
    FUN_0046fb80(param_6,puVar7,param_3);
    return;
  }
  if (param_6 == puVar7) {
    FUN_0046fb80(param_1,param_2,param_3);
    return;
  }
  param_2 = param_2 + -3;
  puVar7 = puVar7 + -3;
  while( true ) {
    for (; (uint)param_2[2] <= (uint)puVar7[2]; puVar7 = puVar7 + -3) {
      puVar3 = param_3 + -3;
      *puVar3 = *puVar7;
      param_3[-2] = puVar7[1];
      param_3[-1] = puVar7[2];
      if (param_6 == puVar7) {
        FUN_0046fb80(param_1,param_2 + 3,puVar3);
        return;
      }
      param_3 = puVar3;
    }
    puVar3 = param_3 + -3;
    *puVar3 = *param_2;
    param_3[-2] = param_2[1];
    param_3[-1] = param_2[2];
    if (param_1 == param_2) break;
    param_2 = param_2 + -3;
    param_3 = puVar3;
  }
  FUN_0046fb80(param_6,puVar7 + 3,puVar3);
  return;
}


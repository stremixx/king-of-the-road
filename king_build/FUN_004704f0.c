
undefined4 *
FUN_004704f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            undefined4 *param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  
  puVar10 = param_2;
  puVar7 = param_1;
  if ((param_5 < param_4) && (param_5 <= param_7)) {
    iVar9 = ((int)param_3 - (int)param_2) / 0xc;
    puVar7 = param_6;
    if (0 < iVar9) {
      iVar5 = (int)param_2 - (int)param_6;
      puVar8 = param_6;
      param_2 = (undefined4 *)iVar9;
      do {
        puVar1 = (undefined4 *)(iVar5 + (int)puVar8);
        puVar7 = puVar8 + 3;
        *puVar8 = *puVar1;
        puVar8[1] = puVar1[1];
        puVar8[2] = puVar1[2];
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar8 = puVar7;
      } while (param_2 != (undefined4 *)0x0);
    }
    param_2 = (undefined4 *)(((int)puVar10 - (int)param_1) / 0xc);
    if (0 < (int)param_2) {
      iVar9 = (int)puVar10 - (int)param_3;
      do {
        puVar10 = param_3 + -3;
        *puVar10 = *(undefined4 *)(iVar9 + (int)puVar10);
        param_3[-2] = *(undefined4 *)((int)puVar10 + iVar9 + 4);
        param_3[-1] = *(undefined4 *)((int)puVar10 + iVar9 + 8);
        param_2 = (undefined4 *)((int)param_2 + -1);
        param_3 = puVar10;
      } while (param_2 != (undefined4 *)0x0);
    }
    iVar9 = ((int)puVar7 - (int)param_6) / 0xc;
    if (0 < iVar9) {
      iVar5 = (int)param_6 - (int)param_1;
      puVar7 = param_1;
      do {
        puVar10 = (undefined4 *)(iVar5 + (int)puVar7);
        param_1 = puVar7 + 3;
        iVar9 = iVar9 + -1;
        *puVar7 = *puVar10;
        puVar7[1] = puVar10[1];
        puVar7[2] = puVar10[2];
        puVar7 = param_1;
      } while (iVar9 != 0);
    }
    return param_1;
  }
  if (param_7 < param_4) {
    if (param_1 == param_2) {
      return param_3;
    }
    puVar7 = param_2;
    puVar10 = param_1;
    if (param_3 != param_2) {
      for (; (puVar10 != puVar7 && (puVar7 = puVar7 + -3, puVar10 != puVar7)); puVar10 = puVar10 + 3
          ) {
        FUN_00470920(puVar10,puVar7);
      }
      FUN_004708c0(param_2,param_3,param_2);
      do {
        if (param_2 == param_3) {
          puVar7 = param_3;
          if (param_1 != param_2) {
            FUN_004708c0(param_1,param_2,param_2);
            return param_1;
          }
          break;
        }
        puVar7 = param_3 + -3;
        puVar10 = param_1 + 3;
        uVar2 = *param_1;
        uVar3 = param_1[1];
        uVar4 = param_1[2];
        *param_1 = *puVar7;
        param_1[1] = param_3[-2];
        param_1[2] = param_3[-1];
        *puVar7 = uVar2;
        param_3[-2] = uVar3;
        param_3[-1] = uVar4;
        param_3 = puVar7;
        param_1 = puVar10;
      } while (puVar10 != param_2);
      FUN_004708c0(param_2,puVar7,param_2);
      return puVar7;
    }
  }
  else {
    iVar5 = (int)param_2 - (int)param_1;
    iVar9 = iVar5 / 0xc;
    puVar10 = param_6;
    if (0 < iVar9) {
      iVar6 = (int)param_1 - (int)param_6;
      puVar8 = param_6;
      param_1 = (undefined4 *)iVar9;
      do {
        puVar1 = (undefined4 *)(iVar6 + (int)puVar8);
        puVar10 = puVar8 + 3;
        *puVar8 = *puVar1;
        puVar8[1] = puVar1[1];
        puVar8[2] = puVar1[2];
        param_1 = (undefined4 *)((int)param_1 + -1);
        puVar8 = puVar10;
      } while (param_1 != (undefined4 *)0x0);
    }
    param_2 = (undefined4 *)(((int)param_3 - (int)param_2) / 0xc);
    if (0 < (int)param_2) {
      do {
        puVar8 = (undefined4 *)(iVar5 + (int)puVar7);
        *puVar7 = *puVar8;
        puVar7[1] = puVar8[1];
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar7[2] = puVar8[2];
        puVar7 = puVar7 + 3;
      } while (param_2 != (undefined4 *)0x0);
    }
    iVar9 = ((int)puVar10 - (int)param_6) / 0xc;
    param_1 = param_3;
    if (0 < iVar9) {
      iVar5 = (int)puVar10 - (int)param_3;
      do {
        puVar7 = param_3 + -3;
        iVar9 = iVar9 + -1;
        *puVar7 = *(undefined4 *)(iVar5 + (int)puVar7);
        param_3[-2] = *(undefined4 *)((int)puVar7 + iVar5 + 4);
        param_3[-1] = *(undefined4 *)((int)puVar7 + iVar5 + 8);
        param_3 = puVar7;
      } while (iVar9 != 0);
      return puVar7;
    }
  }
  return param_1;
}


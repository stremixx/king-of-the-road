
void FUN_0045e300(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_2c;
  undefined4 local_28 [2];
  double local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((int)((int)param_2 - (int)param_1 & 0xffffffe0U) < 0x201) {
    puVar3 = param_1;
    if (param_1 != param_2) {
      while (puVar4 = puVar3 + 8, puVar4 != param_2) {
        local_20 = *(double *)(puVar3 + 10);
        local_18 = puVar3[0xc];
        local_28[0] = *puVar4;
        local_c = puVar3[0xf];
        local_14 = puVar3[0xd];
        local_10 = puVar3[0xe];
        if (*(double *)(puVar3 + 10) <= *(double *)(param_1 + 2)) {
          FUN_00458ab0(local_28);
          FUN_0046a9e0(puVar4);
          puVar3 = puVar4;
        }
        else {
          local_2c = puVar3 + 0x10;
          iVar1 = (int)puVar4 - (int)param_1 >> 5;
          puVar3 = puVar4;
          if (0 < iVar1) {
            do {
              local_2c = local_2c + -8;
              iVar1 = iVar1 + -1;
              puVar5 = puVar3 + -8;
              puVar6 = local_2c;
              for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              puVar3 = puVar3 + -8;
            } while (iVar1 != 0);
          }
          puVar5 = local_28;
          puVar6 = param_1;
          for (iVar1 = 8; puVar3 = puVar4, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
        }
      }
    }
  }
  else {
    if ((param_1 != param_1 + 0x80) && (puVar3 = param_1 + 8, puVar3 != param_1 + 0x80)) {
      do {
        local_20 = *(double *)(puVar3 + 2);
        local_14 = puVar3[5];
        local_28[0] = *puVar3;
        local_18 = puVar3[4];
        local_10 = puVar3[6];
        local_c = puVar3[7];
        if (local_20 <= *(double *)(param_1 + 2)) {
          FUN_00458ab0(local_28);
          FUN_0046a9e0(puVar3);
        }
        else {
          FUN_00465cf0(param_1,puVar3,puVar3 + 8,local_2c,0);
          puVar4 = local_28;
          puVar5 = param_1;
          for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
        }
        puVar3 = puVar3 + 8;
      } while (puVar3 != param_1 + 0x80);
    }
    param_1 = param_1 + 0x80;
    if (param_1 != param_2) {
      do {
        FUN_00458ab0(param_1);
        FUN_0046a9e0(param_1);
        param_1 = param_1 + 8;
      } while (param_1 != param_2);
      return;
    }
  }
  return;
}


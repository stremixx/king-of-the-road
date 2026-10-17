
void FUN_00468740(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,int param_5
                 ,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float10 fVar10;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  undefined4 local_c;
  double local_8;
  
  puVar8 = param_2;
  if (param_4 != 0) {
    while (param_5 != 0) {
      if (param_4 + param_5 == 2) {
        fVar10 = (float10)FUN_00418960(puVar8,param_6);
        local_8 = (double)fVar10;
        fVar10 = (float10)FUN_00418960(param_1,param_6);
        if (fVar10 <= (float10)local_8) {
          return;
        }
        uVar2 = *param_1;
        *param_1 = *puVar8;
        *puVar8 = uVar2;
        return;
      }
      if (param_5 < param_4) {
        iVar7 = param_4 / 2;
        local_c = param_6;
        local_20 = 0;
        param_2 = param_1 + iVar7;
        FUN_00467f10(puVar8,param_3,&local_20);
        puVar9 = puVar8;
        iVar4 = local_20;
        while (local_20 = iVar4, 0 < local_20) {
          iVar4 = local_20 >> 1;
          local_14 = puVar9;
          FUN_0046a450(&local_14,iVar4);
          cVar3 = FUN_004689b0(local_14,param_2);
          if (cVar3 != '\0') {
            puVar9 = local_14 + 1;
            iVar4 = local_20 + (-1 - iVar4);
          }
        }
        local_10 = (int)puVar9 - (int)puVar8 >> 2;
        local_18 = puVar9;
      }
      else {
        local_10 = param_5 / 2;
        local_18 = puVar8 + local_10;
        local_8 = (double)CONCAT44(local_8._4_4_,param_6);
        local_1c = 0;
        FUN_00467f10(param_1,puVar8,&local_1c);
        param_2 = param_1;
        iVar7 = local_1c;
        while (local_1c = iVar7, 0 < local_1c) {
          iVar7 = local_1c >> 1;
          cVar3 = FUN_004689b0(local_18,param_2 + iVar7);
          if (cVar3 == '\0') {
            param_2 = param_2 + iVar7 + 1;
            iVar7 = local_1c + (-1 - iVar7);
          }
        }
        iVar7 = (int)param_2 - (int)param_1 >> 2;
      }
      puVar9 = local_18;
      puVar5 = local_18;
      if ((param_2 != puVar8) && (puVar5 = param_2, local_18 != puVar8)) {
        FUN_0046ce40(param_2,puVar8,param_1);
        FUN_0046ce40(puVar8,local_18,param_1);
        do {
          if (puVar8 == puVar9) {
            if (puVar5 == puVar8) {
              FUN_0046ce40(puVar8,puVar9,param_1);
              puVar5 = puVar9;
            }
            else {
              FUN_0046ce40(puVar5,puVar8,param_1);
            }
            goto LAB_00468926;
          }
          puVar1 = puVar9 + -1;
          puVar9 = puVar9 + -1;
          puVar6 = puVar5 + 1;
          uVar2 = *puVar5;
          *puVar5 = *puVar1;
          *puVar9 = uVar2;
          puVar5 = puVar6;
        } while (puVar6 != puVar8);
        FUN_0046ce40(puVar8,puVar9,param_1);
        puVar5 = puVar9;
      }
LAB_00468926:
      FUN_00468740(param_1,param_2,puVar5,iVar7,local_10,param_6);
      param_5 = param_5 - local_10;
      param_4 = param_4 - iVar7;
      puVar8 = local_18;
      param_1 = puVar5;
      if (param_4 == 0) {
        return;
      }
    }
  }
  return;
}


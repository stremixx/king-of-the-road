
void FUN_00468a00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,
                 int param_5,undefined4 *param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  while( true ) {
    if ((param_4 <= param_5) && (param_4 <= param_7)) {
      iVar6 = (int)param_2 - (int)param_1 >> 2;
      puVar3 = param_6;
      if (0 < iVar6) {
        do {
          *puVar3 = *(undefined4 *)(((int)param_1 - (int)param_6) + (int)puVar3);
          puVar3 = puVar3 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      while ((param_6 != puVar3 && (param_2 != param_3))) {
        fVar8 = (float10)FUN_00418960(param_2,param_8);
        fVar9 = (float10)FUN_00418960(param_6,param_8);
        if (fVar9 <= (float10)(double)fVar8) {
          uVar5 = *param_6;
          param_6 = param_6 + 1;
          *param_1 = uVar5;
        }
        else {
          uVar5 = *param_2;
          param_2 = param_2 + 1;
          *param_1 = uVar5;
        }
        param_1 = param_1 + 1;
      }
      uVar5 = FUN_00457bc0(param_6,puVar3,param_1);
      FUN_00457bc0(param_2,param_3,uVar5);
      return;
    }
    if (param_5 <= param_7) break;
    if (param_5 < param_4) {
      iVar7 = param_4 / 2;
      puVar3 = param_1 + iVar7;
      puVar2 = (undefined4 *)FUN_0046bce0(param_2,param_3,puVar3,param_8,0);
      iVar6 = (int)puVar2 - (int)param_2 >> 2;
    }
    else {
      iVar6 = param_5 / 2;
      puVar2 = param_2 + iVar6;
      puVar3 = (undefined4 *)FUN_0046bd50(param_1,param_2,puVar2,param_8,0);
      iVar7 = (int)puVar3 - (int)param_1 >> 2;
    }
    param_4 = param_4 - iVar7;
    puVar4 = (undefined4 *)FUN_00469ff0(puVar3,param_2,puVar2,param_4,iVar6,param_6,param_7);
    FUN_00468a00(param_1,puVar3,puVar4,iVar7,iVar6,param_6,param_7,param_8);
    param_5 = param_5 - iVar6;
    param_2 = puVar2;
    param_1 = puVar4;
  }
  iVar6 = (int)param_3 - (int)param_2 >> 2;
  puVar3 = param_6;
  if (0 < iVar6) {
    do {
      *puVar3 = *(undefined4 *)(((int)param_2 - (int)param_6) + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (param_1 == param_2) {
    FUN_00468c90(param_6,puVar3,param_3,param_1,0);
    return;
  }
  if (param_6 == puVar3) {
    FUN_00468c60(param_1,param_2,param_3);
    return;
  }
  param_2 = param_2 + -1;
  puVar3 = puVar3 + -1;
  while( true ) {
    while (cVar1 = FUN_004689b0(puVar3,param_2), cVar1 != '\0') {
      param_3 = param_3 + -1;
      *param_3 = *param_2;
      if (param_1 == param_2) {
        FUN_00468c60(param_6,puVar3 + 1,param_3);
        return;
      }
      param_2 = param_2 + -1;
    }
    param_3 = param_3 + -1;
    *param_3 = *puVar3;
    if (param_6 == puVar3) break;
    puVar3 = puVar3 + -1;
  }
  FUN_00468c60(param_1,param_2 + 1,param_3);
  return;
}



void FUN_00465790(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float10 fVar11;
  double local_14;
  undefined4 *local_c;
  double local_8;
  
  uVar4 = param_3;
  puVar6 = param_2;
  puVar1 = param_1;
  uVar2 = (int)param_2 - (int)param_1;
  if ((int)(uVar2 & 0xfffffffc) < 0x3c) {
    if ((param_1 != param_2) && (puVar6 = param_1 + 1, puVar6 != param_2)) {
      puVar10 = param_1 + 2;
      puVar7 = param_2;
      do {
        param_1 = (undefined4 *)*puVar6;
        local_c = puVar10;
        fVar11 = (float10)FUN_00418960(&param_1,param_3);
        local_8 = (double)fVar11;
        fVar11 = (float10)FUN_00418960(puVar1,param_3);
        if (fVar11 <= (float10)local_8) {
          local_8 = (double)CONCAT44(local_8._4_4_,param_1);
          puVar7 = puVar6;
          puVar10 = puVar10 + -2;
          while( true ) {
            fVar11 = (float10)FUN_00418960(&local_8,param_3);
            local_14 = (double)fVar11;
            fVar11 = (float10)FUN_00418960(puVar10,param_3);
            if (fVar11 <= (float10)local_14) break;
            *puVar7 = *puVar10;
            puVar7 = puVar10;
            puVar10 = puVar10 + -1;
          }
          *puVar7 = local_8._0_4_;
          puVar7 = param_2;
        }
        else {
          iVar3 = (int)puVar6 - (int)puVar1 >> 2;
          if (0 < iVar3) {
            puVar5 = puVar10;
            do {
              puVar7 = (undefined4 *)((int)puVar6 + (-4 - (int)puVar10) + (int)puVar5);
              puVar5 = puVar5 + -1;
              iVar3 = iVar3 + -1;
              *puVar5 = *puVar7;
              puVar7 = param_2;
            } while (iVar3 != 0);
          }
          *puVar1 = param_1;
          local_c = puVar10;
        }
        puVar6 = puVar6 + 1;
        puVar10 = local_c + 1;
      } while (puVar6 != puVar7);
      return;
    }
  }
  else {
    puVar10 = param_1 + (((int)uVar2 >> 2) - ((int)uVar2 >> 0x1f) >> 1);
    FUN_00465790(param_1,puVar10,param_3);
    FUN_00465790(puVar10,puVar6,uVar4);
    uVar4 = param_3;
    iVar8 = (int)puVar6 - (int)puVar10;
    iVar9 = iVar8 >> 2;
    iVar3 = (int)puVar10 - (int)puVar1 >> 2;
    if ((iVar3 != 0) && (iVar9 != 0)) {
      if (iVar3 + iVar9 == 2) {
        fVar11 = (float10)FUN_00418960(puVar10,param_3);
        local_8 = (double)fVar11;
        fVar11 = (float10)FUN_00418960(puVar1,uVar4);
        if ((float10)local_8 < fVar11) {
          uVar4 = *puVar1;
          *puVar1 = *puVar10;
          *puVar10 = uVar4;
          return;
        }
      }
      else {
        local_c = (undefined4 *)0x0;
        local_14._0_4_ = puVar10;
        if (iVar9 < iVar3) {
          local_c = (undefined4 *)(iVar3 - ((int)puVar10 - (int)puVar1 >> 0x1f) >> 1);
          local_8 = (double)CONCAT44(local_8._4_4_,puVar1 + (int)local_c);
          local_14._0_4_ =
               (undefined4 *)FUN_0046bce0(puVar10,param_2,puVar1 + (int)local_c,param_3,0);
          iVar8 = (int)local_14._0_4_ - (int)puVar10 >> 2;
        }
        else {
          iVar8 = iVar9 - (iVar8 >> 0x1f) >> 1;
          FUN_0046a450(&local_14,iVar8);
          uVar4 = FUN_0046bd50(param_1,puVar10,local_14._0_4_,param_3);
          local_8 = (double)CONCAT44(local_8._4_4_,uVar4);
          FUN_00467f10(param_1,uVar4,&local_c);
        }
        uVar4 = FUN_0046a470(local_8._0_4_,puVar10,local_14._0_4_);
        FUN_00468740(param_1,local_8._0_4_,uVar4,local_c,iVar8,param_3);
        FUN_00468740(uVar4,local_14._0_4_,param_2,iVar3 - (int)local_c,iVar9 - iVar8,param_3);
      }
    }
  }
  return;
}


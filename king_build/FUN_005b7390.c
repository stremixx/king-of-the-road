
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b7390(ushort *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6
                 )

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  iVar2 = FUN_005b5b70();
  if ((-1 < param_2) && (param_2 < (int)(uint)param_1[1])) {
    iVar3 = param_4;
    if (param_4 < param_3) {
      iVar3 = param_3;
      param_3 = param_4;
    }
    uVar4 = (uint)*param_1;
    if ((param_3 < (int)uVar4) && (-1 < iVar3)) {
      if (param_3 < 0) {
        param_3 = 0;
      }
      if ((int)uVar4 <= iVar3) {
        iVar3 = uVar4 - 1;
      }
      if (*(int *)(param_1 + 0x3a) == 1) {
        FUN_005b6a50(param_1,param_3,param_2,iVar3,param_2,param_5,0);
        return;
      }
      if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) {
        uVar1 = param_1[2];
        puVar7 = (undefined4 *)
                 ((uint)uVar1 * param_3 + *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) +
                 (uint)param_1[3] * param_2);
        uVar4 = (iVar3 - param_3) + 1;
        if (*(int *)(param_1 + 0x28) != 0) {
          if (*(int *)(param_1 + 0x28) != 2) {
            return;
          }
          if (*(float *)(param_1 + 0x2c) != (float)_DAT_0064a660) {
            if (iVar2 == 0) {
              return;
            }
            if (*(float *)(param_1 + 0x2c) == (float)_DAT_0064a668) {
              return;
            }
            uVar5 = __ftol();
            uVar5 = FUN_005b8b60(uVar5);
            uVar1 = param_1[2];
            if (uVar1 == 1) {
              FUN_005fe023(uVar5,puVar7,param_5,uVar4);
              return;
            }
            if (uVar1 != 2) {
              if (uVar1 != 4) {
                return;
              }
              if (param_6 == 0) {
                param_5 = FUN_005b9aa0(param_5);
              }
              uVar5 = __ftol(puVar7,param_5,uVar4);
              FUN_005fe182(uVar5);
              return;
            }
            FUN_005fe0dc(uVar5,puVar7,param_5,uVar4);
            return;
          }
        }
        if (uVar1 == 1) {
          for (uVar6 = uVar4 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar7 = CONCAT22(CONCAT11((undefined1)param_5,(undefined1)param_5),
                               CONCAT11((undefined1)param_5,(undefined1)param_5));
            puVar7 = puVar7 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar7 = (undefined1)param_5;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
          }
          return;
        }
        if (uVar1 == 2) {
          if (param_6 != 0) {
            FUN_005fe13e(puVar7,param_5,uVar4);
            return;
          }
          if (iVar2 != 0) {
            uVar5 = FUN_005b9aa0(param_5);
            FUN_005fe13e(puVar7,uVar5,uVar4);
            return;
          }
        }
        else if (uVar1 == 4) {
          if (param_6 == 0) {
            if (iVar2 != 0) {
              uVar5 = FUN_005b9aa0(param_5);
              FUN_005fe16a(puVar7,uVar5,uVar4);
              return;
            }
          }
          else {
            FUN_005fe16a(puVar7,param_5,uVar4);
          }
        }
      }
    }
  }
  return;
}


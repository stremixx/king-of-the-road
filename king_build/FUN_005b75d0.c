
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b75d0(ushort *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  
  iVar5 = param_3;
  iVar3 = FUN_005b5b70();
  if ((-1 < param_2) && (param_2 < (int)(uint)*param_1)) {
    if (param_4 < param_3) {
      param_3 = param_4;
      param_4 = iVar5;
    }
    uVar6 = (uint)param_1[1];
    if ((param_3 < (int)uVar6) && (-1 < param_4)) {
      if (param_3 < 0) {
        param_3 = 0;
      }
      if ((int)uVar6 <= param_4) {
        param_4 = uVar6 - 1;
      }
      if (*(int *)(param_1 + 0x3a) == 1) {
        FUN_005b6a50(param_1,param_2,param_3,param_2,param_4,param_5,0);
        return;
      }
      if (*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) != 0) {
        uVar1 = param_1[2];
        uVar6 = (uint)param_1[3];
        pbVar7 = (byte *)((uint)uVar1 * param_2 +
                         uVar6 * param_3 + *(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc));
        if (*(int *)(param_1 + 0x28) != 0) {
          if (*(int *)(param_1 + 0x28) != 2) {
            return;
          }
          if (*(float *)(param_1 + 0x2c) != (float)_DAT_0064a660) {
            if (iVar3 == 0) {
              return;
            }
            if (*(float *)(param_1 + 0x2c) == (float)_DAT_0064a668) {
              return;
            }
            uVar4 = __ftol();
            iVar5 = FUN_005b8b60(uVar4);
            uVar1 = param_1[2];
            if (uVar1 == 1) {
              if (param_4 < param_3) {
                return;
              }
              iVar3 = (param_4 - param_3) + 1;
              do {
                *pbVar7 = *(byte *)((uint)*pbVar7 + param_5 * 0x100 + iVar5);
                pbVar7 = pbVar7 + uVar6;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              return;
            }
            if (uVar1 == 2) {
              if (param_4 < param_3) {
                return;
              }
              iVar3 = (param_4 - param_3) + 1;
              do {
                FUN_005fe0dc(iVar5,pbVar7,param_5,1);
                pbVar7 = pbVar7 + uVar6;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
              return;
            }
            if (uVar1 != 4) {
              return;
            }
            if (param_6 == 0) {
              param_5 = FUN_005b9aa0(param_5);
            }
            if (param_4 < param_3) {
              return;
            }
            iVar5 = (param_4 - param_3) + 1;
            do {
              uVar4 = __ftol(pbVar7,param_5,1);
              FUN_005fe182(uVar4);
              pbVar7 = pbVar7 + uVar6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            return;
          }
        }
        if (uVar1 == 1) {
          if (param_3 <= param_4) {
            iVar5 = (param_4 - param_3) + 1;
            do {
              *pbVar7 = (byte)param_5;
              pbVar7 = pbVar7 + uVar6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            return;
          }
        }
        else if (uVar1 == 2) {
          if (param_6 == 0) {
            if (iVar3 == 0) {
              return;
            }
            uVar2 = FUN_005b9aa0(param_5);
          }
          else {
            uVar2 = (undefined2)param_5;
          }
          if (param_3 <= param_4) {
            iVar5 = (param_4 - param_3) + 1;
            do {
              *(undefined2 *)pbVar7 = uVar2;
              pbVar7 = pbVar7 + uVar6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            return;
          }
        }
        else if (uVar1 == 4) {
          if (param_6 == 0) {
            if (iVar3 == 0) {
              return;
            }
            param_5 = FUN_005b9aa0(param_5);
          }
          if (param_3 <= param_4) {
            iVar5 = (param_4 - param_3) + 1;
            do {
              *(int *)pbVar7 = param_5;
              pbVar7 = pbVar7 + uVar6;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
    }
  }
  return;
}


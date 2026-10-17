
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cf1e0(uint param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  DAT_0071d724 = *(int *)(param_2 + *(int *)(param_2 + 8) * 2 + 0xc);
  if (DAT_0071d724 != 0) {
    _DAT_0071d754 = param_2[*(int *)(param_2 + 8) * 2 + 0x1c];
    DAT_0071d748 = *(undefined4 *)(param_2 + 0x18);
    DAT_0071d714 = (uint)*param_2;
    DAT_0071d718 = (uint)param_2[1];
    DAT_0070e338 = (uint)param_2[2];
    DAT_0071d71c = (uint)param_2[3];
    DAT_0071d758 = (uint)param_2[4];
    DAT_0071d74c = thunk_FUN_005b5b70();
    if (DAT_0071d74c != 0) {
      if (((*(int *)(DAT_0071d74c + 800) == 0) && (DAT_0070e338 != 4)) || ((param_1 & 0x40) == 0)) {
        param_2 = (ushort *)0x0;
      }
      else {
        param_2 = (ushort *)0x4;
      }
      if ((*(uint *)(param_5 + 0x20) & 0x100) != 0) {
        param_2 = (ushort *)0x0;
      }
      if (((DAT_00701dec & 0x4000) == 0) || ((*(uint *)(param_5 + 0x20) & 0x80) != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((param_1 & 0x20) == 0) {
        if ((param_1 & 0x80) == 0) {
          DAT_0071d73c = DAT_0071d718 - 1;
          DAT_0071d738 = 0;
          if (bVar1) {
            param_3 = param_3 + -1;
            iVar5 = param_4;
            iVar2 = 0;
            iVar6 = param_3;
            if (0 < param_3) {
              do {
                FUN_005cfab0(iVar5,iVar5 + 0x2c);
                iVar6 = iVar6 + -1;
                iVar5 = iVar5 + 0x2c;
                iVar2 = param_3;
              } while (iVar6 != 0);
            }
            FUN_005cfab0(param_4 + iVar2 * 0x2c,param_4);
          }
          else {
            param_3 = param_3 + -1;
            iVar5 = param_4;
            iVar2 = 0;
            iVar6 = param_3;
            if (0 < param_3) {
              do {
                FUN_005cf960(iVar5,iVar5 + 0x2c);
                iVar6 = iVar6 + -1;
                iVar5 = iVar5 + 0x2c;
                iVar2 = param_3;
              } while (iVar6 != 0);
            }
            FUN_005cf960(param_4 + iVar2 * 0x2c,param_4);
          }
          if (DAT_0071d73c <= DAT_0071d738) {
            uVar3 = *(undefined4 *)(param_5 + 0x28);
            if ((DAT_0070e338 != 1) && ((param_1 & 0x100) == 0)) {
              uVar3 = FUN_005b9aa0(uVar3);
            }
            if (((DAT_00701dec & 0x40) != 0) && (10 < param_6)) {
              uVar3 = FUN_005b96c0(uVar3,param_6);
            }
            if (param_2 != (ushort *)0x0) {
              uVar3 = FUN_005b9720(uVar3,DAT_0067e9e0);
            }
            if (bVar1) {
              FUN_005d0ca0();
              return;
            }
            FUN_005d0ae0((*(byte *)(param_5 + 0x20) & 0x20) != 0,uVar3,
                         *(undefined4 *)(param_5 + 0x28),*(undefined4 *)(param_5 + 0x58));
          }
        }
        else {
          if (param_2 != (ushort *)0x0) {
            DAT_0071d710 = FUN_005b9820(DAT_0067e9e0);
          }
          uVar3 = *(undefined4 *)(param_5 + 0x28);
          iVar5 = thunk_FUN_005b5b70();
          _DAT_0071d730 = *(undefined4 *)(iVar5 + 0x14);
          iVar5 = thunk_FUN_005b5b70();
          DAT_0070e340 = *(undefined4 *)(iVar5 + 0x10);
          DAT_0071d73c = DAT_0071d718 - 1;
          DAT_0071d738 = 0;
          if (bVar1) {
            param_3 = param_3 + -1;
            iVar5 = param_4;
            iVar2 = 0;
            iVar6 = param_3;
            if (0 < param_3) {
              do {
                FUN_005cfe40(iVar5,iVar5 + 0x2c);
                iVar6 = iVar6 + -1;
                iVar5 = iVar5 + 0x2c;
                iVar2 = param_3;
              } while (iVar6 != 0);
            }
            FUN_005cfe40(param_4 + iVar2 * 0x2c,param_4);
          }
          else {
            param_3 = param_3 + -1;
            iVar5 = param_4;
            iVar2 = 0;
            iVar6 = param_3;
            if (0 < param_3) {
              do {
                FUN_005cfc90(iVar5,iVar5 + 0x2c);
                iVar6 = iVar6 + -1;
                iVar5 = iVar5 + 0x2c;
                iVar2 = param_3;
              } while (iVar6 != 0);
            }
            FUN_005cfc90(param_4 + iVar2 * 0x2c,param_4);
          }
          if (DAT_0071d73c <= DAT_0071d738) {
            if (DAT_0070e338 == 1) {
              if (bVar1) {
                FUN_005ceb30();
                return;
              }
            }
            else {
              if (bVar1) {
                thunk_FUN_005b5b70();
                uVar3 = FUN_005b9aa0(uVar3);
                FUN_005ceb30(param_2,uVar3);
                return;
              }
              thunk_FUN_005b5b70(uVar3);
              uVar3 = FUN_005b9aa0(uVar3);
            }
            FUN_005cece0(param_2,uVar3);
            return;
          }
        }
      }
      else {
        _DAT_0070e344 = FUN_005b9c70(DAT_0071d760);
        _DAT_0071d728 = FUN_005b9ca0(DAT_0071d760);
        _DAT_0071d75c = *(undefined2 *)(*(int *)(param_5 + 0x4c) + 0x1c);
        DAT_0070e33c = *(char *)(*(int *)(param_5 + 0x4c) + 0x1a) - (char)DAT_0071d760;
        DAT_0067e9bc = (DAT_0071d714 != 0x140) + 4;
        if (((param_1 & 0x10) == 0) || (param_2 != (ushort *)0x0)) {
          iVar5 = 0;
          if ((param_1 & 2) == 0) {
            if ((param_1 & 1) != 0) {
              DAT_0071d73c = DAT_0071d714 - 1;
              DAT_0071d738 = 0;
              if (0 < param_3) {
                piVar4 = (int *)(param_4 + 0x10);
                iVar5 = param_3;
                do {
                  iVar2 = piVar4[-1];
                  iVar6 = DAT_0071d714 * 0x100000;
                  piVar4[-1] = *piVar4;
                  *piVar4 = (iVar6 - iVar2) + -0x100000;
                  iVar5 = iVar5 + -1;
                  piVar4 = piVar4 + 0xb;
                } while (iVar5 != 0);
              }
              param_3 = param_3 + -1;
              iVar5 = param_4;
              iVar2 = 0;
              iVar6 = param_3;
              if (0 < param_3) {
                do {
                  FUN_005d06e0(iVar5,iVar5 + 0x2c);
                  iVar6 = iVar6 + -1;
                  iVar5 = iVar5 + 0x2c;
                  iVar2 = param_3;
                } while (iVar6 != 0);
              }
              FUN_005d06e0(param_4 + iVar2 * 0x2c,param_4);
              if (DAT_0071d738 < DAT_0071d73c) {
                return;
              }
              FUN_005cefd0(*(undefined4 *)(param_5 + 0x4c),
                           (*(uint *)(param_5 + 0x20) & 2 | 4) >> 1 | (uint)param_2);
              return;
            }
          }
          else if ((param_1 & 1) != 0) {
            DAT_0071d73c = DAT_0071d718 - 1;
            param_3 = param_3 + -1;
            DAT_0071d738 = 0;
            iVar2 = param_4;
            iVar6 = param_3;
            if (0 < param_3) {
              do {
                FUN_005d04f0(iVar2,iVar2 + 0x2c);
                iVar6 = iVar6 + -1;
                iVar2 = iVar2 + 0x2c;
                iVar5 = param_3;
              } while (iVar6 != 0);
            }
            FUN_005d04f0(param_4 + iVar5 * 0x2c,param_4);
            if (DAT_0071d738 < DAT_0071d73c) {
              return;
            }
            FUN_005d1300(*(undefined4 *)(param_5 + 0x4c),
                         *(uint *)(param_5 + 0x20) >> 1 & 1 | (uint)param_2);
            return;
          }
          DAT_0071d738 = 0;
          if ((param_1 & 2) == 0) {
            DAT_0071d73c = DAT_0071d718 - 1;
            iVar2 = thunk_FUN_005b5b70();
            DAT_0070e340 = *(undefined4 *)(iVar2 + 0x10);
            if ((param_1 & 0x80) == 0) {
              param_3 = param_3 + -1;
              iVar2 = param_4;
              iVar6 = param_3;
              if (0 < param_3) {
                do {
                  FUN_005d06e0(iVar2,iVar2 + 0x2c);
                  iVar6 = iVar6 + -1;
                  iVar2 = iVar2 + 0x2c;
                  iVar5 = param_3;
                } while (iVar6 != 0);
              }
              FUN_005d06e0(param_4 + iVar5 * 0x2c,param_4);
              if (DAT_0071d73c <= DAT_0071d738) {
                FUN_005d0df0(*(undefined4 *)(param_5 + 0x4c),
                             *(uint *)(param_5 + 0x20) >> 1 & 1 | (uint)param_2,DAT_0067e9bc,param_6
                            );
                return;
              }
            }
            else {
              param_3 = param_3 + -1;
              iVar2 = param_4;
              iVar6 = param_3;
              if (0 < param_3) {
                do {
                  FUN_005d0040(iVar2,iVar2 + 0x2c);
                  iVar6 = iVar6 + -1;
                  iVar2 = iVar2 + 0x2c;
                  iVar5 = param_3;
                } while (iVar6 != 0);
              }
              FUN_005d0040(param_4 + iVar5 * 0x2c,param_4);
              if (DAT_0071d73c <= DAT_0071d738) {
                FUN_005d0f80(*(undefined4 *)(param_5 + 0x4c),
                             *(uint *)(param_5 + 0x20) >> 1 & 1 | (uint)param_2,DAT_0067e9bc);
                return;
              }
            }
          }
          else {
            DAT_0071d73c = DAT_0071d718 - 1;
            param_3 = param_3 + -1;
            iVar2 = param_4;
            iVar6 = param_3;
            if (0 < param_3) {
              do {
                FUN_005d06e0(iVar2,iVar2 + 0x2c);
                iVar6 = iVar6 + -1;
                iVar2 = iVar2 + 0x2c;
                iVar5 = param_3;
              } while (iVar6 != 0);
            }
            FUN_005d06e0(param_4 + iVar5 * 0x2c,param_4);
            if (DAT_0071d73c <= DAT_0071d738) {
              FUN_005d1130(*(undefined4 *)(param_5 + 0x4c),
                           *(uint *)(param_5 + 0x20) >> 1 & 1 | (uint)param_2);
              return;
            }
          }
        }
        else {
          DAT_0071d73c = DAT_0071d718 - 1;
          param_3 = param_3 + -1;
          DAT_0071d738 = 0;
          iVar5 = param_4;
          iVar2 = 0;
          iVar6 = param_3;
          if (0 < param_3) {
            do {
              FUN_005d04f0(iVar5,iVar5 + 0x2c);
              iVar6 = iVar6 + -1;
              iVar5 = iVar5 + 0x2c;
              iVar2 = param_3;
            } while (iVar6 != 0);
          }
          FUN_005d04f0(param_4 + iVar2 * 0x2c,param_4);
          if (DAT_0071d73c <= DAT_0071d738) {
            FUN_005d1500(*(undefined4 *)(param_5 + 0x4c),*(uint *)(param_5 + 0x20) >> 1 & 1);
            return;
          }
        }
      }
    }
  }
  return;
}


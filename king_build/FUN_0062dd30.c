
void FUN_0062dd30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  
  uVar6 = 0xffffffff;
  iVar1 = 7;
  iVar2 = 4;
  if (*(ushort *)(param_1 + 2) == 0) {
    iVar1 = 0x8a;
    iVar2 = 3;
  }
  if (-1 < param_2) {
    puVar3 = (ushort *)(param_1 + 6);
    param_2 = param_2 + 1;
    uVar4 = (uint)*(ushort *)(param_1 + 2);
    iVar7 = 0;
    do {
      uVar5 = (uint)*puVar3;
      iVar8 = iVar7 + 1;
      if ((iVar1 <= iVar8) || (uVar4 != uVar5)) {
        if (iVar8 < iVar2) {
          do {
            FUN_0062e200((&DAT_0077bf4c)[uVar4 * 2],*(undefined2 *)(&DAT_0077bf4e + uVar4 * 4));
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        else {
          if (uVar4 == 0) {
            if (iVar8 < 0xb) {
              FUN_0062e200(DAT_0077bf90 & 0xffff,DAT_0077bf90 >> 0x10);
              uVar9 = 3;
              iVar8 = iVar7 + -2;
            }
            else {
              FUN_0062e200(DAT_0077bf94 & 0xffff,DAT_0077bf94 >> 0x10);
              uVar9 = 7;
              iVar8 = iVar7 + -10;
            }
          }
          else {
            if (uVar4 != uVar6) {
              FUN_0062e200((&DAT_0077bf4c)[uVar4 * 2],*(undefined2 *)(&DAT_0077bf4e + uVar4 * 4));
              iVar8 = iVar7;
            }
            FUN_0062e200(DAT_0077bf8c & 0xffff,DAT_0077bf8c >> 0x10);
            uVar9 = 2;
            iVar8 = iVar8 + -3;
          }
          FUN_0062e200(iVar8,uVar9);
        }
        iVar8 = 0;
        uVar6 = uVar4;
        if (uVar5 == 0) {
          iVar1 = 0x8a;
          iVar2 = 3;
        }
        else if (uVar4 == uVar5) {
          iVar1 = 6;
          iVar2 = 3;
        }
        else {
          iVar1 = 7;
          iVar2 = 4;
        }
      }
      puVar3 = puVar3 + 2;
      param_2 = param_2 + -1;
      uVar4 = uVar5;
      iVar7 = iVar8;
    } while (param_2 != 0);
  }
  return;
}


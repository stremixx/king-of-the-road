
void FUN_0062dbc0(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(ushort *)((int)param_1 + 2);
  uVar5 = 0xffffffff;
  iVar6 = 0;
  iVar4 = 7;
  iVar7 = 4;
  if (uVar1 == 0) {
    iVar4 = 0x8a;
    iVar7 = 3;
  }
  *(undefined2 *)((int)param_1 + 6 + param_2 * 4) = 0xffff;
  if (-1 < param_2) {
    param_1 = (ushort *)((int)param_1 + 6);
    param_2 = param_2 + 1;
    uVar2 = (uint)uVar1;
    do {
      iVar6 = iVar6 + 1;
      uVar3 = (uint)*param_1;
      if ((iVar4 <= iVar6) || (uVar2 != uVar3)) {
        if (iVar6 < iVar7) {
          (&DAT_0077bf4c)[uVar2 * 2] = (&DAT_0077bf4c)[uVar2 * 2] + (short)iVar6;
        }
        else if (uVar2 == 0) {
          if (iVar6 < 0xb) {
            DAT_0077bf90._0_2_ = (short)DAT_0077bf90 + 1;
          }
          else {
            DAT_0077bf94._0_2_ = (short)DAT_0077bf94 + 1;
          }
        }
        else {
          if (uVar2 != uVar5) {
            (&DAT_0077bf4c)[uVar2 * 2] = (&DAT_0077bf4c)[uVar2 * 2] + 1;
          }
          DAT_0077bf8c._0_2_ = (short)DAT_0077bf8c + 1;
        }
        iVar6 = 0;
        uVar5 = uVar2;
        if (uVar3 == 0) {
          iVar4 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar2 == uVar3) {
          iVar4 = 6;
          iVar7 = 3;
        }
        else {
          iVar4 = 7;
          iVar7 = 4;
        }
      }
      param_1 = param_1 + 2;
      param_2 = param_2 + -1;
      uVar2 = uVar3;
    } while (param_2 != 0);
  }
  return;
}


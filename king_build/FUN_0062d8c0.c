
void FUN_0062d8c0(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar3 = *(int *)(&DAT_0077c958 + param_2 * 4);
  iVar6 = param_2 * 2;
  if (iVar6 <= DAT_0077a45c) {
    bVar7 = SBORROW4(iVar6,DAT_0077a45c);
    iVar4 = iVar6 - DAT_0077a45c;
    do {
      iVar5 = iVar6;
      if (bVar7 != iVar4 < 0) {
        uVar1 = *(ushort *)(param_1 + (&DAT_0077c95c)[iVar6] * 4);
        uVar2 = *(ushort *)(param_1 + *(int *)(&DAT_0077c958 + iVar6 * 4) * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            ((byte)(&DAT_0077b808)[(&DAT_0077c95c)[iVar6]] <=
             (byte)(&DAT_0077b808)[*(int *)(&DAT_0077c958 + iVar6 * 4)])))) {
          iVar5 = iVar6 + 1;
        }
      }
      iVar6 = *(int *)(&DAT_0077c958 + iVar5 * 4);
      uVar1 = *(ushort *)(param_1 + iVar3 * 4);
      uVar2 = *(ushort *)(param_1 + iVar6 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 && ((byte)(&DAT_0077b808)[iVar3] <= (byte)(&DAT_0077b808)[iVar6]))))
      break;
      *(int *)(&DAT_0077c958 + param_2 * 4) = iVar6;
      iVar6 = iVar5 * 2;
      bVar7 = SBORROW4(iVar6,DAT_0077a45c);
      iVar4 = iVar6 - DAT_0077a45c;
      param_2 = iVar5;
    } while (iVar4 == 0 || iVar6 < DAT_0077a45c);
  }
  *(int *)(&DAT_0077c958 + param_2 * 4) = iVar3;
  return;
}


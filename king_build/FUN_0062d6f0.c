
void FUN_0062d6f0(undefined4 *param_1)

{
  short *psVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_4;
  
  iVar7 = param_1[4];
  psVar1 = (short *)*param_1;
  iVar8 = param_1[1];
  iVar6 = -1;
  iVar4 = 0;
  iVar2 = 0;
  local_4 = -1;
  DAT_0077a45c = 0;
  DAT_0077a460 = 0x23d;
  psVar5 = psVar1;
  if (0 < iVar7) {
    do {
      if (*psVar5 == 0) {
        psVar5[1] = 0;
        iVar4 = DAT_0077a45c;
      }
      else {
        iVar4 = iVar4 + 1;
        DAT_0077a45c = iVar4;
        (&DAT_0077b808)[iVar2] = 0;
        *(int *)(&DAT_0077c958 + iVar4 * 4) = iVar2;
        iVar6 = iVar2;
        local_4 = iVar2;
      }
      iVar2 = iVar2 + 1;
      psVar5 = psVar5 + 2;
    } while (iVar2 < iVar7);
    if (1 < iVar4) goto LAB_0062d7bc;
  }
  do {
    if (iVar6 < 2) {
      iVar2 = iVar6 + 1;
      iVar6 = iVar2;
    }
    else {
      iVar2 = 0;
    }
    DAT_0077a45c = iVar4 + 1;
    *(int *)(&DAT_0077c958 + DAT_0077a45c * 4) = iVar2;
    psVar1[iVar2 * 2] = 1;
    (&DAT_0077b808)[iVar2] = 0;
    DAT_0077b804 = DAT_0077b804 + -1;
    if (iVar8 != 0) {
      DAT_0077b800 = DAT_0077b800 - (uint)*(ushort *)(iVar8 + 2 + iVar2 * 4);
    }
    iVar4 = DAT_0077a45c;
    local_4 = iVar6;
  } while (DAT_0077a45c < 2);
LAB_0062d7bc:
  param_1[6] = iVar6;
  for (iVar8 = DAT_0077a45c / 2; 0 < iVar8; iVar8 = iVar8 + -1) {
    FUN_0062d8c0(psVar1,iVar8);
  }
  psVar5 = psVar1 + iVar7 * 2;
  do {
    iVar8 = DAT_0077c95c;
    DAT_0077c95c = *(int *)(&DAT_0077c958 + DAT_0077a45c * 4);
    DAT_0077a45c = DAT_0077a45c + -1;
    FUN_0062d8c0(psVar1,1);
    *(int *)(&DAT_0077c958 + (DAT_0077a460 + -1) * 4) = iVar8;
    DAT_0077a460 = DAT_0077a460 + -2;
    *(int *)(&DAT_0077c958 + DAT_0077a460 * 4) = DAT_0077c95c;
    *psVar5 = psVar1[DAT_0077c95c * 2] + psVar1[iVar8 * 2];
    bVar3 = (&DAT_0077b808)[iVar8];
    if ((byte)(&DAT_0077b808)[iVar8] < (byte)(&DAT_0077b808)[DAT_0077c95c]) {
      bVar3 = (&DAT_0077b808)[DAT_0077c95c];
    }
    (&DAT_0077b808)[iVar7] = bVar3 + 1;
    psVar1[DAT_0077c95c * 2 + 1] = (short)iVar7;
    psVar1[iVar8 * 2 + 1] = (short)iVar7;
    psVar5 = psVar5 + 2;
    DAT_0077c95c = iVar7;
    FUN_0062d8c0(psVar1,1);
    iVar7 = iVar7 + 1;
  } while (1 < DAT_0077a45c);
  DAT_0077a460 = DAT_0077a460 + -1;
  *(int *)(&DAT_0077c958 + DAT_0077a460 * 4) = DAT_0077c95c;
  FUN_0062d960(param_1);
  FUN_0062d530(psVar1,local_4);
  return;
}


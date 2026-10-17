
uint FUN_0062d5a0(int param_1,int param_2,int param_3)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  psVar1 = DAT_0077d24c;
  (&DAT_0077a588)[DAT_0077bfe8] = DAT_0077a485;
  if (*psVar1 == -1) {
    FUN_0062e160();
  }
  FUN_0062d6f0(&PTR_DAT_006894a0);
  FUN_0062d6f0(&PTR_DAT_006894c0);
  iVar2 = FUN_0062db60();
  DAT_0077a458 = DAT_0077a458 + param_2;
  uVar3 = DAT_0077b804 + 10U >> 3;
  uVar4 = DAT_0077b800 + 10U >> 3;
  if (uVar4 <= uVar3) {
    uVar3 = uVar4;
  }
  if ((uVar3 < param_2 + 4U) || (param_1 == 0)) {
    if (uVar4 == uVar3) {
      FUN_0062e200(param_3 + 2,3);
      FUN_0062e000(&DAT_0077ba48,&DAT_0077becc);
      iVar2 = DAT_0077b800;
    }
    else {
      FUN_0062e200(param_3 + 4,3);
      FUN_0062dcb0(DAT_006894b8 + 1,DAT_006894d8 + 1,iVar2 + 1);
      FUN_0062e000(&DAT_0077bfec,&DAT_0077d250);
      iVar2 = DAT_0077b804;
    }
    DAT_0077b5fc = DAT_0077b5fc + 3 + iVar2;
  }
  else {
    FUN_0062e200(param_3,3);
    DAT_0077b5fc = (DAT_0077b5fc + 10 & 0xfffffff8) + (param_2 + 4U) * 8;
    FUN_0062e3d0(param_1,param_2,1);
  }
  FUN_0062d4c0();
  if (param_3 != 0) {
    FUN_0062e300();
    DAT_0077b5fc = DAT_0077b5fc + 7;
  }
  return DAT_0077b5fc >> 3;
}


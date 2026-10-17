
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050b390(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  double local_288 [16];
  undefined1 local_208 [256];
  undefined1 local_108 [128];
  undefined1 local_88 [132];
  
  _DAT_006cd2ec = 0;
  FUN_0050ad70();
  FUN_0050ad70();
  FUN_0050ad70();
  iVar4 = 1000;
  do {
    pdVar5 = local_288;
    iVar3 = 4;
    do {
      iVar7 = 4;
      pdVar6 = pdVar5;
      do {
        iVar1 = _rand();
        pdVar5 = pdVar6 + 1;
        iVar7 = iVar7 + -1;
        *pdVar6 = ((double)iVar1 - _DAT_0064cb60) * _PTR_DAT_0064cb58;
        pdVar6 = pdVar5;
      } while (iVar7 != 0);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = FUN_0050b230(local_108,local_288);
    FUN_0050ae50(uVar2);
    uVar2 = FUN_0050b310(local_88,local_208,local_288);
    FUN_0050ae50(uVar2);
    FUN_0050aea0();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


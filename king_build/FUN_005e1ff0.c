
void FUN_005e1ff0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int local_320 [200];
  
  puVar5 = (undefined4 *)&stack0xfffffcdc;
  iVar7 = 100;
  do {
    puVar5 = puVar5 + 1;
    uVar2 = FUN_00631d33(0x10000);
    *puVar5 = uVar2;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = 2;
  do {
    piVar4 = local_320;
    iVar6 = 100;
    do {
      iVar1 = *piVar4;
      iVar3 = 0;
      do {
        *(char *)(iVar1 + iVar3) = (char)iVar3;
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x10000);
      piVar4 = piVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar4 = local_320;
  iVar7 = 100;
  do {
    FUN_00631d5c(*piVar4);
    piVar4 = piVar4 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  return;
}


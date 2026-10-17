
void FUN_0050ba40(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (DAT_006957fc != 0) {
    if (DAT_006cd454 == (undefined4 *)0x0) {
      FUN_0052f780();
      FUN_0050b880();
      DAT_006cdca0 = 0;
    }
    else if (DAT_006cdca4 == 0) {
      DAT_006cdca0 = 1;
    }
    piVar4 = DAT_006957ac;
    iVar3 = DAT_006957ac[3];
    if (DAT_006cd454 != (undefined4 *)0x0) {
      FUN_005b7d70(iVar3,0,0,DAT_006cd454);
    }
    if (DAT_006cdc98 != 0) {
      uVar1 = *(ushort *)(DAT_006cdc98 + 4);
      iVar5 = (**(code **)(*piVar4 + 0x14))();
      uVar2 = *(ushort *)(DAT_006cdc98 + 6);
      iVar6 = (**(code **)(*piVar4 + 0x18))();
      FUN_005b8030(iVar3,(int)(iVar5 - (uint)uVar1) / 2,(int)(iVar6 - (uint)uVar2) / 2,DAT_006cdc98,
                   0);
    }
    DAT_006cdc9c = 1;
    DAT_006cdca4 = DAT_006957fc;
    return;
  }
  if ((DAT_006cd454 != (undefined4 *)0x0) && (DAT_006cdc9c != 0)) {
    DAT_006cdc9c = 0;
    if (DAT_006cdca0 == 0) {
      if (DAT_006cd454 != (undefined4 *)0x0) {
        (**(code **)*DAT_006cd454)(1);
      }
      DAT_006cd454 = (undefined4 *)0x0;
      *(uint *)(DAT_00695c00 + 0x10) = *(uint *)(DAT_00695c00 + 0x10) | 3;
      FUN_00568e20();
    }
    DAT_006cdca0 = 0;
    DAT_006cdca4 = DAT_006957fc;
    return;
  }
  DAT_006cdca4 = DAT_006957fc;
  return;
}


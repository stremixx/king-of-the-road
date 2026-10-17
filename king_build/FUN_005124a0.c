
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005124a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_c [4];
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  iVar2 = DAT_006cd480;
  if (DAT_006cd480 != 0) {
    FUN_0060ca60();
    FUN_00631d5c(iVar2);
  }
  DAT_006cd480 = 0;
  if (DAT_006cdc54 != (int *)0x0) {
    (**(code **)(*DAT_006cdc54 + 0x28))();
  }
  DAT_006957d4 = DAT_006957d4 | 0x40;
  _DAT_006957d8 = 0;
  *(undefined4 *)(DAT_006cdbcc + 0x514) = 0;
  iVar2 = FUN_005bd200(0x92);
  *(uint *)(iVar2 + 0x11c) = *(uint *)(iVar2 + 0x11c) & 0xfffffffd;
  if (DAT_006cdcb4 != (undefined4 *)0x0) {
    (**(code **)*DAT_006cdcb4)(1);
    DAT_006cdcb4 = (undefined4 *)0x0;
  }
  iVar2 = DAT_006cdc84;
  if (DAT_006cdc84 != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar2);
  }
  iVar2 = DAT_006cdc8c;
  if (DAT_006cdc8c != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar2);
  }
  iVar2 = DAT_006cdc90;
  if (DAT_006cdc90 != 0) {
    FUN_005bb9a0();
    FUN_00631d5c(iVar2);
  }
  DAT_006cdc98 = DAT_006cdc94;
  if (DAT_006cdbd4 != 0) {
    FUN_005db0b0(DAT_006cdbd4);
    DAT_006cdbd4 = 0;
  }
  uVar1 = DAT_006957bc;
  uVar3 = FUN_0050b5f0(auStack_4,auStack_8,auStack_c);
  iVar2 = FUN_005d72d0(800,600,1,~(uVar3 | 0x4000) & uVar1 | 0xe00);
  uVar1 = DAT_006957bc;
  if (iVar2 == 0) {
    uVar3 = FUN_0050b5f0();
    FUN_005dcf80(800,600,1,~(uVar3 | 0x4000) & uVar1);
  }
  uVar1 = DAT_006957bc;
  uVar3 = FUN_0050b5f0();
  FUN_005dcf80(800,600,1,~(uVar3 | 0x4000) & uVar1 | 0xe00);
  FUN_005b62a0();
  FUN_005d7ce0(0);
  FUN_005d7f70();
  FUN_005b9a80();
  *(undefined4 *)(DAT_006cdbcc + 0x54c) = 0;
  FUN_005d7b10(1,0xffffffff);
  DAT_006cdc84 = DAT_006cdc58;
  DAT_006f1e30 = DAT_006f1e48;
  DAT_006f1e34 = DAT_006f1e4c;
  DAT_006f1e38 = DAT_006f1e50;
  FUN_00527680(0,0);
  return;
}



bool FUN_00635c2d(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_108 [260];
  
  iVar1 = FUN_00635cb1(param_1,local_108,0x100);
  if (0x100U - iVar1 < 3) {
    iVar3 = 0x100;
    do {
      iVar4 = iVar3 + 0x100;
      iVar1 = iVar4;
      uVar2 = FUN_00635b61(iVar3 + 0xff);
      iVar1 = FUN_00635cb1(param_1,uVar2,iVar1);
      iVar3 = iVar4;
    } while (iVar4 - iVar1 < 3);
    FUN_00635bb0(0xffffffff);
  }
  else {
    FUN_00635b3a(local_108);
  }
  return 0 < iVar1;
}


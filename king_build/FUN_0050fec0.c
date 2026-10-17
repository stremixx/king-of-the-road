
int FUN_0050fec0(void)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10 [4];
  
  piVar3 = DAT_006957ac;
  iVar5 = 0;
  if (DAT_006cdcc4 != 0) {
    FUN_005b62a0();
    FUN_005b6580();
    iVar4 = DAT_006cdcb0 + 1;
    if (DAT_006cdcb0 < 0) {
      DAT_006cdcb0 = 0;
    }
    iVar6 = DAT_006cdcb0;
    if (DAT_006743e0 < DAT_006cdcb0) {
      iVar6 = DAT_006743e0;
    }
    iVar5 = iVar6 / 10;
    DAT_006cdcb0 = iVar4;
    if (iVar6 % 10 == 0) {
      local_10[3] = 0;
      local_10[2] = 0;
      local_10[1] = 0;
      local_10[0] = 0;
      local_10[2] = (**(code **)(*piVar3 + 0x14))();
      local_10[3] = (**(code **)(*piVar3 + 0x18))();
      uVar1 = *(ushort *)(DAT_006cdcbc + 0x14);
      iVar5 = (**(code **)(*piVar3 + 0x14))();
      uVar2 = *(ushort *)(DAT_006cdcbc + 0x16);
      iVar7 = (int)(iVar5 - (uint)uVar1) / 2;
      iVar5 = (**(code **)(*piVar3 + 0x18))();
      iVar4 = (int)(iVar5 - (uint)uVar2) / 2;
      FUN_005b7d70(piVar3[3],iVar7,iVar4,DAT_006cdcbc);
      local_10[0] = -iVar7;
      iVar5 = (**(code **)(*piVar3 + 0x14))();
      local_10[1] = 0;
      local_10[2] = (iVar5 * iVar6) / DAT_006743e0 + local_10[0];
      local_10[3] = (int)*(ushort *)(DAT_006cdcc0 + 0x16);
      FUN_005b7870(piVar3[3],DAT_006cdcc0,local_10,0,iVar4 + 0x228);
      iVar5 = FUN_005b61c0();
    }
  }
  return iVar5;
}


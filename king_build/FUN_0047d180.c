
void FUN_0047d180(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  int local_4;
  
  iVar5 = param_5;
  iVar6 = ((param_2 - param_1) / 0x28 + 1) / 2;
  iVar1 = param_1 + iVar6 * 0x28;
  if (param_4 < iVar6) {
    FUN_0047d180(param_1,iVar1,param_3,param_4,param_5);
    FUN_0047d180(iVar1,param_2,param_3,param_4,iVar5);
  }
  else {
    iVar8 = iVar1 - param_1;
    iVar4 = iVar8 / 0x28;
    iVar6 = 7;
    local_4 = param_3 + iVar4 * 0x28;
    iVar2 = iVar8;
    iVar10 = param_1;
    iVar9 = param_5;
    iVar3 = iVar4;
    while (param_5 = iVar2, 6 < iVar3) {
      FUN_0047dcd0(iVar10,iVar10 + 0x118,iVar5);
      iVar9 = param_5 + -0x118;
      iVar2 = iVar9;
      iVar10 = iVar10 + 0x118;
      iVar3 = iVar9 / 0x28;
    }
    param_5 = iVar9;
    FUN_0047dcd0(iVar10,iVar1,iVar5);
    if (7 < iVar4) {
      do {
        local_20 = param_3;
        iVar3 = iVar6 * 2;
        iVar10 = param_1;
        param_5 = iVar6;
        if (iVar3 <= iVar4) {
          local_8 = iVar6 * -0x50;
          iVar9 = param_1;
          local_14 = iVar8;
          do {
            iVar10 = iVar6 * 0x50 + iVar9;
            iVar2 = iVar9 + param_5 * 0x28;
            local_20 = FUN_0047f4e0(iVar9,iVar2,iVar2,iVar10,local_20,iVar5);
            local_14 = local_14 + local_8;
            iVar9 = iVar10;
          } while (iVar3 <= local_14 / 0x28);
        }
        local_8 = (iVar1 - iVar10) / 0x28;
        piVar7 = (int *)FUN_004652b0(&local_8,&param_5);
        param_5 = *piVar7;
        iVar9 = iVar10 + param_5 * 0x28;
        FUN_0047f4e0(iVar10,iVar9,iVar9,iVar1,local_20,iVar5);
        FUN_0047f260(param_3,local_4,param_1,iVar3,iVar5);
        iVar6 = iVar6 * 4;
      } while (iVar6 < iVar4);
    }
    iVar8 = param_2 - iVar1;
    iVar6 = 7;
    iVar4 = iVar8 / 0x28;
    iVar10 = iVar1;
    iVar2 = iVar8;
    iVar9 = param_5;
    iVar3 = iVar4;
    while (param_5 = iVar2, 6 < iVar3) {
      local_4 = iVar10 + 0x118;
      FUN_0047dcd0(iVar10,local_4,iVar5);
      iVar9 = param_5 + -0x118;
      iVar10 = local_4;
      iVar2 = iVar9;
      iVar3 = iVar9 / 0x28;
    }
    param_5 = iVar9;
    FUN_0047dcd0(iVar10,param_2,iVar5);
    if (7 < iVar4) {
      do {
        local_1c = param_3;
        iVar3 = iVar6 * 2;
        iVar10 = iVar1;
        param_5 = iVar6;
        if (iVar3 <= iVar4) {
          local_4 = iVar6 * 0x50;
          local_8 = iVar6 * -0x50;
          iVar9 = iVar1;
          local_18 = iVar8;
          do {
            iVar10 = local_4 + iVar9;
            iVar2 = iVar9 + param_5 * 0x28;
            local_1c = FUN_0047f4e0(iVar9,iVar2,iVar2,iVar10,local_1c,iVar5);
            local_18 = local_18 + local_8;
            iVar9 = iVar10;
          } while (iVar3 <= local_18 / 0x28);
        }
        local_4 = (param_2 - iVar10) / 0x28;
        piVar7 = (int *)FUN_004652b0(&local_4,&param_5);
        param_5 = *piVar7;
        iVar9 = iVar10 + param_5 * 0x28;
        FUN_0047f4e0(iVar10,iVar9,iVar9,param_2,local_1c,iVar5);
        FUN_0047f260(param_3,param_3 + iVar4 * 0x28,iVar1,iVar3,iVar5);
        iVar6 = iVar6 * 4;
      } while (iVar6 < iVar4);
    }
  }
  FUN_0047e080(param_1,iVar1,param_2,(iVar1 - param_1) / 0x28,(param_2 - iVar1) / 0x28,param_3,
               param_4,iVar5);
  return;
}


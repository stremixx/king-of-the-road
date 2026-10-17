
void FUN_004659f0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_c;
  int local_8;
  int local_4;
  
  uVar2 = param_5;
  iVar4 = ((param_2 - param_1 >> 2) + 1) / 2;
  iVar10 = param_1 + iVar4 * 4;
  local_4 = iVar10;
  if (param_4 < iVar4) {
    FUN_004659f0(param_1,iVar10,param_3,param_4,param_5);
    FUN_004659f0(iVar10,param_2,param_3,param_4,uVar2);
  }
  else {
    uVar7 = iVar10 - param_1;
    iVar9 = 7;
    iVar6 = (int)uVar7 >> 2;
    local_8 = param_3 + iVar6 * 4;
    iVar4 = param_1;
    iVar8 = param_1;
    uVar3 = uVar7;
    if (6 < iVar6) {
      do {
        param_5 = uVar3;
        iVar4 = iVar8 + 0x1c;
        FUN_00468660(iVar8,iVar4,uVar2);
        param_5 = param_5 - 0x1c;
        iVar8 = iVar4;
        uVar3 = param_5;
      } while (0x1b < (int)(param_5 & 0xfffffffc));
    }
    FUN_00468660(iVar4,iVar10,uVar2);
    if (7 < iVar6) {
      do {
        iVar8 = iVar9 * 2;
        local_20 = param_3;
        iVar4 = param_1;
        param_5 = iVar9;
        if (iVar8 <= iVar6) {
          local_c = iVar9 * -8;
          iVar11 = param_1;
          local_18 = uVar7;
          do {
            iVar4 = iVar11 + iVar9 * 8;
            iVar1 = iVar11 + param_5 * 4;
            local_20 = FUN_0046a940(iVar11,iVar1,iVar1,iVar4,local_20,uVar2);
            local_18 = local_18 + local_c;
            iVar11 = iVar4;
          } while (iVar8 <= (int)local_18 >> 2);
        }
        local_c = iVar10 - iVar4 >> 2;
        puVar5 = (uint *)FUN_004652b0(&local_c,&param_5);
        param_5 = *puVar5;
        iVar11 = iVar4 + param_5 * 4;
        FUN_0046a940(iVar4,iVar11,iVar11,iVar10,local_20,uVar2);
        FUN_0046a780(param_3,local_8,param_1,iVar8,uVar2);
        iVar9 = iVar9 * 4;
      } while (iVar9 < iVar6);
    }
    local_c = param_2 - iVar10;
    iVar4 = 7;
    iVar8 = (int)local_c >> 2;
    iVar9 = iVar10;
    uVar3 = local_c;
    if (6 < iVar8) {
      do {
        param_5 = uVar3;
        local_8 = iVar9 + 0x1c;
        FUN_00468660(iVar9,local_8,uVar2);
        param_5 = param_5 - 0x1c;
        iVar9 = local_8;
        uVar3 = param_5;
      } while (0x1b < (int)(param_5 & 0xfffffffc));
    }
    FUN_00468660(iVar9,param_2,uVar2);
    if (7 < iVar8) {
      do {
        iVar6 = iVar4 * 2;
        local_1c = param_3;
        iVar9 = iVar10;
        param_5 = iVar4;
        if (iVar6 <= iVar8) {
          local_8 = iVar4 * -8;
          local_18 = local_c;
          iVar11 = iVar10;
          do {
            iVar9 = iVar11 + iVar4 * 8;
            iVar10 = iVar11 + param_5 * 4;
            local_1c = FUN_0046a940(iVar11,iVar10,iVar10,iVar9,local_1c,uVar2);
            local_18 = local_18 + local_8;
            iVar10 = local_4;
            iVar11 = iVar9;
          } while (iVar6 <= (int)local_18 >> 2);
        }
        local_8 = param_2 - iVar9 >> 2;
        puVar5 = (uint *)FUN_004652b0(&local_8,&param_5);
        param_5 = *puVar5;
        iVar11 = iVar9 + param_5 * 4;
        FUN_0046a940(iVar9,iVar11,iVar11,param_2,local_1c,uVar2);
        FUN_0046a780(param_3,param_3 + iVar8 * 4,iVar10,iVar6,uVar2);
        iVar4 = iVar4 * 4;
      } while (iVar4 < iVar8);
    }
  }
  FUN_00468a00(param_1,iVar10,param_2,iVar10 - param_1 >> 2,param_2 - iVar10 >> 2,param_3,param_4,
               uVar2);
  return;
}


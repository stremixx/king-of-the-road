
/* WARNING: Removing unreachable block (ram,0x006005f6) */
/* WARNING: Removing unreachable block (ram,0x006005fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006004d0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_8 [2];
  
  piVar2 = param_1;
  if (DAT_00722d44 != '\0') {
    iVar7 = param_1[1];
    iVar3 = *param_1;
    FUN_0046ecd0(iVar7,iVar7,iVar3,param_3,0);
    iVar5 = *piVar2;
    iVar7 = piVar2[1] + (iVar3 - iVar7);
    piVar2[1] = iVar7;
    if ((uint)(piVar2[2] - iVar5) < 0x800) {
      iVar3 = FUN_004837c0(0x800,iVar5,iVar7);
      iVar4 = piVar2[2] - *piVar2;
      if (iVar4 != 0) {
        FUN_0044b440(*piVar2,iVar4);
      }
      *piVar2 = iVar3;
      piVar2[1] = (iVar7 - iVar5) + iVar3;
      piVar2[2] = iVar3 + 0x800;
    }
    param_1 = (int *)FUN_0062a190(param_2,param_3);
    iVar7 = FUN_00631d33(0xc);
    if (iVar7 == 0) {
      local_8[0] = 0;
    }
    else {
      local_8[0] = FUN_006001e0(piVar2);
    }
    FUN_0062a250(param_1,local_8[0]);
    FUN_0062a020(&param_1);
    FUN_0062a020(local_8);
    FUN_0046e460(*piVar2,&DAT_00682c08,&DAT_00682c0c);
    local_8[0] = piVar2[1] - *piVar2;
    local_8[1] = 0;
    if ((double)local_8[0] / (double)param_3 < _DAT_0064a660) {
      return;
    }
  }
  iVar3 = piVar2[1] + (*piVar2 - piVar2[1]);
  iVar7 = *piVar2;
  piVar2[1] = iVar3;
  if ((uint)(piVar2[2] - iVar7) < 0x800) {
    iVar5 = FUN_004837c0(0x800,iVar7,iVar3);
    piVar1 = (int *)*piVar2;
    uVar6 = piVar2[2] - (int)piVar1;
    if (uVar6 != 0) {
      if (uVar6 < 0x81) {
        param_1 = (int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
        FUN_00401aa0();
        *piVar1 = *param_1;
        *param_1 = (int)piVar1;
        DAT_0068c164 = 0;
      }
      else {
        FUN_0061c888(piVar1);
      }
    }
    *piVar2 = iVar5;
    piVar2[1] = iVar5 + (iVar3 - iVar7);
    piVar2[2] = iVar5 + 0x800;
  }
  FUN_0046e460(piVar2[1],param_2,param_2 + param_3);
  return;
}


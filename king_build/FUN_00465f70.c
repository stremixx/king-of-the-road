
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465f70(int *param_1,uint *param_2,uint *param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = (int)param_2 - (int)param_1 & 0xfffffffc;
  uVar4 = uVar3;
  puVar1 = param_2;
  if (7 < (int)uVar3) {
    iVar2 = (int)param_2 - (int)param_1 >> 2;
    iVar6 = (iVar2 + -2) / 2;
    piVar5 = param_1 + iVar6;
    while( true ) {
      uVar7 = param_4;
      FUN_0041d3f0(piVar5);
      FUN_0046c090(param_1,iVar6,iVar2,uVar4,uVar7);
      uVar4 = extraout_ECX;
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      piVar5 = piVar5 + -1;
    }
  }
  for (; puVar1 < param_3; puVar1 = puVar1 + 1) {
    uVar4 = *puVar1;
    if (*(double *)(uVar4 + 0x1f8) - *(double *)(*param_1 + 0x1f8) != _DAT_0064a668) {
      uVar8 = 0;
      uVar7 = param_4;
      FUN_0041d3f0(puVar1);
      FUN_0046ac10(param_1,param_2,puVar1,uVar4,uVar7,uVar8);
      uVar4 = extraout_ECX_00;
    }
  }
  while (4 < (int)uVar3) {
    uVar8 = 0;
    param_2 = param_2 + -1;
    uVar7 = param_4;
    FUN_0041d3f0(param_2);
    FUN_0046ac10(param_1,param_2,param_2,uVar4,uVar7,uVar8);
    uVar4 = (int)param_2 - (int)param_1 & 0xfffffffc;
    uVar3 = uVar4;
  }
  return;
}


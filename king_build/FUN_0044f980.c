
undefined4 * __thiscall FUN_0044f980(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  
  piVar1 = (int *)*param_3;
  iVar8 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 4);
  if ((piVar1 == (int *)0x0) || (iVar3 = *piVar1, iVar3 == 0)) {
    uVar7 = 0;
  }
  else {
    cVar5 = FUN_0044f260(piVar1,0);
    cVar6 = FUN_0044f260(*param_3,iVar3 + -1);
    uVar7 = cVar5 * 0xd + cVar6 * 5 + iVar3;
  }
  uVar7 = uVar7 % (uint)(iVar8 - iVar2 >> 2);
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar7 * 4);
  puVar9 = puVar4;
  while( true ) {
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)FUN_00459320(param_3);
      *puVar9 = puVar4;
      *(undefined4 **)(*(int *)(param_1 + 4) + uVar7 * 4) = puVar9;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *param_2 = puVar9;
      param_2[1] = param_1;
      *(undefined1 *)(param_2 + 2) = 1;
      return param_2;
    }
    iVar8 = FUN_0045a840(puVar9[1],*param_3);
    if (iVar8 == 0) break;
    puVar9 = (undefined4 *)*puVar9;
  }
  *param_2 = puVar9;
  param_2[1] = param_1;
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}


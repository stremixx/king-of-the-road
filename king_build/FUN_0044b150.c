
void __thiscall FUN_0044b150(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 8);
  piVar2 = (int *)*param_3;
  if ((piVar2 == (int *)0x0) || (iVar3 = *piVar2, iVar3 == 0)) {
    uVar7 = 0;
  }
  else {
    cVar5 = FUN_0044f260(piVar2,0);
    cVar6 = FUN_0044f260(*param_3,iVar3 + -1);
    uVar7 = cVar5 * 0xd + cVar6 * 5 + iVar3;
  }
  puVar4 = *(undefined4 **)(*(int *)(param_1 + 4) + (uVar7 % (uint)(iVar1 - iVar8 >> 2)) * 4);
  while ((puVar4 != (undefined4 *)0x0 && (iVar8 = FUN_0045a840(puVar4[1],*param_3), iVar8 != 0))) {
    puVar4 = (undefined4 *)*puVar4;
  }
  *param_2 = puVar4;
  param_2[1] = param_1;
  return;
}



void FUN_0047a000(int *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  piVar5 = param_2;
  uVar9 = *(uint *)*param_1;
  *param_1 = (int)((uint *)*param_1 + 1);
  iVar2 = param_2[1];
  iVar6 = *param_2;
  FUN_0046ecd0(iVar2,iVar2,iVar6,param_1,0);
  iVar6 = piVar5[1] + (iVar6 - iVar2);
  piVar5[1] = iVar6;
  iVar2 = *piVar5;
  if ((uint)(piVar5[2] - iVar2) < uVar9) {
    iVar7 = FUN_00458d60(uVar9,iVar2,iVar6);
    iVar8 = piVar5[2] - *piVar5;
    if (iVar8 != 0) {
      FUN_0044b440(*piVar5,iVar8);
    }
    *piVar5 = iVar7;
    piVar5[1] = (iVar6 - iVar2) + iVar7;
    piVar5[2] = iVar7 + uVar9;
  }
  for (; uVar9 != 0; uVar9 = uVar9 - 1) {
    uVar1 = *(undefined1 *)*param_1;
    *param_1 = (int)((undefined1 *)*param_1 + 1);
    puVar3 = (undefined1 *)piVar5[1];
    uVar4 = (uint)param_2 >> 8;
    param_2 = (int *)CONCAT31((int3)uVar4,uVar1);
    if (puVar3 == (undefined1 *)piVar5[2]) {
      FUN_0044be90(puVar3,&param_2);
    }
    else {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = uVar1;
      }
      piVar5[1] = piVar5[1] + 1;
    }
  }
  return;
}


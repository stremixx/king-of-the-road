
void FUN_0045c200(int *param_1,int *param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  
  if ((int)((int)param_2 - (int)param_1 & 0xfffffffcU) < 0x41) {
    return;
  }
  do {
    if (param_4 == 0) {
      FUN_0046b7b0(param_1,param_2,param_5,0,0);
      uVar8 = (int)param_2 - (int)param_1;
      while (4 < (int)(uVar8 & 0xfffffffc)) {
        FUN_0046b920(param_1,param_2,param_5);
        uVar8 = (int)(param_2 + -1) - (int)param_1;
        param_2 = param_2 + -1;
      }
      return;
    }
    param_4 = param_4 + -1;
    iVar1 = *(int *)(*param_1 + 0x18);
    iVar4 = ((int)param_2 - (int)param_1 >> 2) - ((int)param_2 - (int)param_1 >> 0x1f) >> 1;
    iVar2 = *(int *)(param_2[-1] + 0x18);
    iVar3 = *(int *)(param_1[iVar4] + 0x18);
    if (iVar1 < iVar3) {
      if (iVar3 < iVar2) {
LAB_0045c26b:
        piVar5 = param_1 + iVar4;
      }
      else {
        piVar5 = param_2 + -1;
        if (iVar2 <= iVar1) {
          piVar5 = param_1;
        }
      }
    }
    else {
      piVar5 = param_1;
      if ((iVar2 <= iVar1) && (piVar5 = param_2 + -1, iVar2 <= iVar3)) goto LAB_0045c26b;
    }
    iVar1 = *piVar5;
    piVar6 = param_2;
    piVar5 = param_1;
    while( true ) {
      iVar2 = *(int *)(*piVar5 + 0x18);
      while (iVar2 < *(int *)(iVar1 + 0x18)) {
        piVar7 = piVar5 + 1;
        piVar5 = piVar5 + 1;
        iVar2 = *(int *)(*piVar7 + 0x18);
      }
      iVar2 = *(int *)(piVar6[-1] + 0x18);
      piVar7 = piVar6;
      while (piVar6 = piVar7 + -1, *(int *)(iVar1 + 0x18) < iVar2) {
        iVar2 = *(int *)(piVar7[-2] + 0x18);
        piVar7 = piVar6;
      }
      if (piVar6 <= piVar5) break;
      iVar2 = *piVar5;
      *piVar5 = *piVar6;
      *piVar6 = iVar2;
      piVar5 = piVar5 + 1;
    }
    FUN_0045c200(piVar5,param_2,0,param_4,param_5);
    param_2 = piVar5;
    if ((int)((int)piVar5 - (int)param_1 & 0xfffffffcU) < 0x41) {
      return;
    }
  } while( true );
}


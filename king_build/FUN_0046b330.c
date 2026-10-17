
void FUN_0046b330(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 undefined4 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  puStack_8 = &LAB_0063f808;
  local_4 = 0;
  local_c = ExceptionList;
  iVar6 = param_2;
  ExceptionList = &local_c;
  while( true ) {
    iVar5 = iVar6 * 2;
    param_2 = iVar5 + 2;
    if (param_3 <= param_2) break;
    iVar4 = FUN_0061d520();
    if (iVar4 < 0) {
      param_2 = iVar5 + 1;
    }
    piVar1 = (int *)(param_1 + param_2 * 0xc);
    piVar2 = (int *)(param_1 + iVar6 * 0xc);
    iVar6 = param_2;
    if (piVar1 != piVar2) {
      uVar7 = piVar1[1] - *piVar1;
      if ((uint)(piVar2[2] - *piVar2) < uVar7) {
        iVar5 = FUN_00458d60();
        if (piVar2[2] != *piVar2) {
          FUN_0044b440();
        }
        *piVar2 = iVar5;
        piVar2[2] = iVar5 + uVar7;
      }
      else if ((uint)(piVar2[1] - *piVar2) < uVar7) {
        FUN_0061c980();
        FUN_0061c980(piVar2[1],(piVar2[1] - *piVar2) + *piVar1);
      }
      else {
        FUN_0061c980();
      }
      piVar2[1] = *piVar2 + uVar7;
    }
  }
  if (param_2 == param_3) {
    piVar1 = (int *)(param_1 + -0xc + param_2 * 0xc);
    piVar2 = (int *)(param_1 + iVar6 * 0xc);
    if (piVar1 != piVar2) {
      uVar7 = piVar1[1] - *piVar1;
      if ((uint)(piVar2[2] - *piVar2) < uVar7) {
        iVar6 = FUN_00458d60();
        if (piVar2[2] != *piVar2) {
          FUN_0044b440();
        }
        *piVar2 = iVar6;
        piVar2[2] = iVar6 + uVar7;
      }
      else if ((uint)(piVar2[1] - *piVar2) < uVar7) {
        FUN_00407250();
        FUN_00407250((piVar2[1] - *piVar2) + *piVar1,piVar1[1]);
      }
      else {
        FUN_0061c980();
      }
      piVar2[1] = *piVar2 + uVar7;
    }
    iVar6 = iVar5 + 1;
  }
  FUN_0044dd30(&param_4);
  FUN_0046c920(param_1,iVar6,iVar3);
  if (param_6 != param_4) {
    FUN_0044b440();
  }
  ExceptionList = local_c;
  return;
}



int * FUN_005ffa90(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00649401;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  while( true ) {
    iVar3 = 0;
    if (param_1 == param_2) break;
    local_8 = 1;
    if (param_3 != (int *)0x0) {
      iVar2 = param_1[1] - *param_1;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      if (iVar2 != 0) {
        iVar3 = FUN_0044b6e0(iVar2);
      }
      *param_3 = iVar3;
      param_3[1] = iVar3;
      param_3[2] = iVar2 + iVar3;
      iVar2 = param_1[1];
      iVar1 = *param_1;
      FUN_0061c980(iVar3,iVar1,iVar2 - iVar1);
      param_3[1] = (iVar3 - iVar1) + iVar2;
      piVar4 = param_1 + 4;
      piVar5 = param_3 + 4;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      param_3[10] = param_1[10];
      param_3[0xb] = param_1[0xb];
      param_3[0xc] = param_1[0xc];
      param_3[0xd] = param_1[0xd];
    }
    param_1 = param_1 + 0xe;
    param_3 = param_3 + 0xe;
  }
  ExceptionList = local_10;
  return param_3;
}


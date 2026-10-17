
undefined4 __thiscall
FUN_004500f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
            int *param_6,double param_7,int param_8,int param_9,undefined4 param_10,
            undefined4 param_11,int param_12,int param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_10;
  undefined4 uStack_c;
  
  while( true ) {
    while( true ) {
      iVar3 = param_8;
      iVar1 = param_13;
      local_10 = SUB84(param_7,0);
      uStack_c = (undefined4)((ulonglong)param_7 >> 0x20);
      param_13 = param_9;
      if (param_9 <= iVar1) break;
      param_7 = (double)CONCAT44(param_11,param_10);
      param_10 = local_10;
      param_11 = uStack_c;
      param_9 = iVar1;
      param_8 = param_12;
      param_12 = iVar3;
    }
    if (iVar1 != param_9) break;
    if (param_12 < iVar3) {
      param_7 = (double)CONCAT44(param_11,param_10);
      param_11 = uStack_c;
      param_10 = local_10;
      param_9 = iVar1;
      param_8 = param_12;
      param_12 = iVar3;
    }
    else {
      if ((param_12 != iVar3) || (param_7 <= (double)CONCAT44(param_11,param_10))) break;
      param_7 = (double)CONCAT44(param_11,param_10);
      param_11 = uStack_c;
      param_10 = local_10;
      param_9 = iVar1;
      param_8 = param_12;
      param_12 = iVar3;
    }
  }
  if (param_9 == iVar1) {
    iVar1 = (**(code **)(**(int **)(*param_1 + param_9 * 4) + 8))
                      (param_2,param_3,param_4,param_5,local_10,uStack_c,iVar3,param_10,param_11,
                       param_12);
    if (iVar1 != 0) {
      *param_6 = param_9;
      return 1;
    }
  }
  else {
    iVar2 = (**(code **)(**(int **)(*param_1 + param_9 * 4) + 0x18))();
    piVar4 = param_5;
    iVar3 = (**(code **)(**(int **)(*param_1 + param_9 * 4) + 8))
                      (param_2,param_3,param_4,param_5,local_10,uStack_c,iVar3,0,0x3ff00000,
                       iVar2 + -1);
    if (iVar3 != 0) {
      local_10 = 1;
      *param_6 = param_9;
    }
    while (param_9 = param_9 + 1, param_9 < iVar1) {
      iVar3 = (**(code **)(**(int **)(*piVar4 + param_9 * 4) + 0xc))
                        (param_2,param_3,param_4,param_5);
      if (iVar3 != 0) {
        local_10 = 1;
        *param_6 = param_9;
      }
    }
    iVar3 = (**(code **)(**(int **)(*piVar4 + iVar1 * 4) + 8))
                      (param_2,param_3,param_4,param_5,0,0,0,param_10,param_11,param_12);
    if (iVar3 != 0) {
      *param_6 = iVar1;
      return 1;
    }
  }
  return local_10;
}


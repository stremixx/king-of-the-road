
int __thiscall
FUN_005bc980(int *param_1,int param_2,double *param_3,int *param_4,undefined4 *param_5,uint param_6,
            code *param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_4 = 0;
  iVar4 = 0;
  *(undefined4 *)param_3 = 0;
  *(undefined4 *)((int)param_3 + 4) = 0x40f86a00;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_2 + 0x24);
    param_5[1] = *(undefined4 *)(param_2 + 0x28);
    param_5[2] = *(undefined4 *)(param_2 + 0x2c);
  }
  if ((param_7 != (code *)0x0) && (*param_1 != 0)) {
    param_6 = (*param_7)(*param_1);
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    do {
      if (((param_6 & *(uint *)(iVar2 + 0x28)) != 0) &&
         (iVar1 = FUN_005bba20(param_2,&local_20,&local_14),
         ABS((double)CONCAT44(uStack_1c,local_20)) < ABS(*param_3))) {
        *(undefined4 *)param_3 = local_20;
        *(undefined4 *)((int)param_3 + 4) = uStack_1c;
        *param_4 = iVar1;
        iVar4 = iVar2;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_14;
          param_5[1] = uStack_10;
          param_5[2] = uStack_c;
        }
      }
      iVar2 = FUN_005bc690();
    } while (iVar2 != 0);
    if (iVar4 != 0) goto LAB_005bcb23;
  }
  iVar2 = *param_1;
  if (iVar2 != 0) {
    do {
      if ((*(int *)(iVar2 + 0x28) == 0) &&
         (iVar1 = FUN_005bba20(param_2,&local_20,&local_14),
         ABS((double)CONCAT44(uStack_1c,local_20)) < ABS(*param_3))) {
        *(undefined4 *)param_3 = local_20;
        *(undefined4 *)((int)param_3 + 4) = uStack_1c;
        *param_4 = iVar1;
        iVar4 = iVar2;
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_14;
          param_5[1] = uStack_10;
          param_5[2] = uStack_c;
        }
      }
      iVar2 = FUN_005bc690();
    } while (iVar2 != 0);
    if (iVar4 != 0) goto LAB_005bcb23;
  }
  iVar4 = *param_1;
  iVar2 = FUN_005bba20(param_2,&local_20,&local_14);
  *(undefined4 *)param_3 = local_20;
  *(undefined4 *)((int)param_3 + 4) = uStack_1c;
  *param_4 = iVar2;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_14;
    param_5[1] = uStack_10;
    param_5[2] = uStack_c;
  }
LAB_005bcb23:
  if (-1 < *param_4) {
    return iVar4;
  }
  do {
    if (*param_4 == -1) {
      local_24 = 0;
      if (*(int *)(iVar4 + 0x38) < 1) {
        return iVar4;
      }
      piVar3 = (int *)(iVar4 + 0x40);
      do {
        iVar1 = *piVar3;
        if ((*(uint *)(iVar1 + 0x28) == 0) || ((param_6 & *(uint *)(iVar1 + 0x28)) != 0)) break;
        local_24 = local_24 + 1;
        piVar3 = piVar3 + 1;
      } while (local_24 < *(int *)(iVar4 + 0x38));
    }
    else {
      if (*param_4 != -1 - *(int *)(iVar4 + 4)) {
        return iVar4;
      }
      iVar2 = 0;
      if (*(int *)(iVar4 + 0x3c) < 1) {
        return iVar4;
      }
      piVar3 = (int *)(iVar4 + 0x68);
      do {
        iVar1 = *piVar3;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < *(int *)(iVar4 + 0x3c));
    }
    if (iVar1 == 0) {
      return iVar4;
    }
    iVar2 = FUN_005bba20(param_2,&local_20,0);
    if (ABS(*param_3) <= ABS((double)CONCAT44(uStack_1c,local_20))) {
      return iVar4;
    }
    *param_3 = (double)CONCAT44(uStack_1c,local_20);
    *param_4 = iVar2;
    iVar4 = iVar1;
    if (-1 < iVar2) {
      return iVar1;
    }
  } while( true );
}


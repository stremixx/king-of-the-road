
int __thiscall FUN_00605b80(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  int iVar5;
  
  iVar3 = FUN_00631d33(0x6c);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    *(int *)(iVar3 + 4) = iVar3;
    *(int *)iVar3 = iVar3;
    *(undefined ***)(iVar3 + 0x10) = &PTR_LAB_00651e38;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *(undefined4 *)(iVar3 + 0x24) = 0;
    *(undefined ***)(iVar3 + 0x2c) = &PTR_LAB_00651e38;
    *(undefined4 *)(iVar3 + 0x30) = 0;
    *(undefined4 *)(iVar3 + 0x34) = 0;
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    *(undefined4 *)(iVar3 + 0x40) = 0;
    *(undefined ***)(iVar3 + 0x4c) = &PTR_LAB_00651e38;
    *(undefined4 *)(iVar3 + 0x50) = 0;
    *(undefined4 *)(iVar3 + 0x54) = 0;
    *(undefined4 *)(iVar3 + 0x58) = 0;
    *(undefined4 *)(iVar3 + 0x5c) = 0;
    *(undefined4 *)(iVar3 + 0x60) = 0;
  }
  if ((((param_2[2] != 0) && (*param_2 != 0)) && (param_2[1] != 0)) &&
     ((*(int *)(param_2[1] + 0xc) != 0 && (*(int *)(*param_2 + 0xc) != 0)))) {
    *(int **)(iVar3 + 8) = param_2;
    iVar5 = *param_2;
    if (*(int *)(*(int *)(iVar5 + 0xc) + 0x30) != *(int *)(param_2[1] + 0xc)) {
      *param_2 = param_2[1];
      *(int *)(*(int *)(iVar3 + 8) + 4) = iVar5;
    }
    piVar2 = *(int **)(iVar3 + 8);
    FUN_0061b870(*(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x18),
                 *(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x10),
                 *(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x10),piVar2);
    *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x20);
    *(undefined4 *)(iVar3 + 0xc) = 0;
    if (param_3 != (int *)0x0) {
      if (((param_3[2] == 0) || (*param_3 == 0)) ||
         ((param_3[1] == 0 || ((*(int *)(*param_3 + 0xc) == 0 || (*(int *)(param_3[1] + 0xc) == 0)))
          ))) goto LAB_00605d7c;
      *(int **)(iVar3 + 0xc) = param_3;
      iVar5 = *param_3;
      if (*(int *)(*(int *)(iVar5 + 0xc) + 0x30) != *(int *)(param_3[1] + 0xc)) {
        *param_3 = param_3[1];
        *(int *)(*(int *)(iVar3 + 0xc) + 4) = iVar5;
      }
      piVar2 = *(int **)(iVar3 + 0xc);
      FUN_0061b870(*(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x10),
                   *(undefined4 *)(*(int *)(piVar2[1] + 0xc) + 0x18),
                   *(undefined4 *)(*(int *)(*piVar2 + 0xc) + 0x18),piVar2);
      if (*(float *)(iVar3 + 0x48) <= *(float *)(iVar3 + 0x3c)) {
        uVar1 = *(undefined4 *)(iVar3 + 0x3c);
      }
      else {
        uVar1 = *(undefined4 *)(iVar3 + 0x48);
      }
      *(undefined4 *)(iVar3 + 0x48) = uVar1;
    }
    if (param_2 != (int *)0x0) {
      *(int *)(*(int *)(*param_2 + 0xc) + 0x38) = iVar3;
      *(int *)(*(int *)(param_2[1] + 0xc) + 0x38) = iVar3;
    }
    if (param_3 != (int *)0x0) {
      *(int *)(*(int *)(*param_3 + 0xc) + 0x38) = iVar3;
      *(int *)(*(int *)(param_3[1] + 0xc) + 0x38) = iVar3;
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
      iVar5 = 0;
      fVar4 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x20))
                                 (*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),
                                  *(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x10,0,0,0,0);
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x30);
      fVar4 = (float10)(**(code **)(**(int **)(param_1 + 4) + 0x20))
                                 (*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),
                                  *(undefined4 *)(iVar3 + 0x1c),iVar3 + 0x10,iVar5,
                                  *(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),
                                  iVar3 + 0x2c);
    }
    *(float *)(iVar3 + 0x48) = (float)fVar4;
    FUN_0060efe0(iVar3);
    *(short *)(iVar5 + 0x34) = *(short *)(iVar5 + 0x34) + 1;
    return iVar3;
  }
LAB_00605d7c:
  if (iVar3 != 0) {
    *(undefined ***)(iVar3 + 0x4c) = &PTR_LAB_00651e38;
    *(undefined ***)(iVar3 + 0x2c) = &PTR_LAB_00651e38;
    *(undefined ***)(iVar3 + 0x10) = &PTR_LAB_00651e38;
    FUN_00631d5c(iVar3);
  }
  return 0;
}


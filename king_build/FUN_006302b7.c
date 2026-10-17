
undefined4 __thiscall FUN_006302b7(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 0x20)) {
LAB_00630310:
    if ((param_2 != -1) &&
       (**(undefined1 **)(param_1 + 0x1c) = (char)param_2, *(int *)(param_1 + 0x20) != 0)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
    }
    uVar2 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x4c) != 0) {
      iVar1 = FUN_0063019e();
      if (iVar1 != -1) {
        if (*(int *)(param_1 + 0x20) == 0) {
          iVar1 = (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24)) + *(int *)(param_1 + 0x10);
          *(int *)(param_1 + 0x18) = iVar1;
          *(int *)(param_1 + 0x1c) = iVar1;
          *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x14);
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0x1c);
          *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x18);
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x14);
          if (*(int *)(param_1 + 0x14) != 0) {
            *(undefined4 *)(param_1 + 0x1c) = uVar2;
          }
        }
        goto LAB_00630310;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


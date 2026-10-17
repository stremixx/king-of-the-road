
void __thiscall FUN_0060dc40(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x70) + 0xbb0) < 6) {
    *(undefined4 *)(param_1 + 0x78) = 1;
    if (*(int *)(param_1 + 0x74) != 1) {
      *(undefined4 *)(param_1 + 0x9c) = DAT_00651ff8;
    }
    *(undefined4 *)(param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  uVar1 = DAT_00651ff8;
  if ((param_2 == 0) && (*(int *)(param_1 + 0x74) == 0)) {
    *(undefined4 *)(param_1 + 0x9c) = 0;
    *(undefined4 *)(param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0x84) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x74) = 1;
  *(undefined4 *)(param_1 + 0x9c) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}


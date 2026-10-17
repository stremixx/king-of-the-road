
void __thiscall FUN_005b5dc0(ushort *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = param_1[1];
    uVar2 = *param_1;
    *param_2 = 0;
    param_2[2] = (uint)uVar2;
    param_2[1] = 0;
    param_2[3] = (uint)uVar1;
    return;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x32);
  param_2[1] = *(undefined4 *)(param_1 + 0x34);
  param_2[2] = *(undefined4 *)(param_1 + 0x36);
  param_2[3] = *(undefined4 *)(param_1 + 0x38);
  return;
}



void __thiscall
FUN_006167d0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 0xc) != *(int *)(param_1 + 8)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(*(int *)(param_1 + 4) + 0xc + *(int *)(param_1 + 8) * 0x18) = *param_3;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x10 + *(int *)(param_1 + 8) * 0x18) = param_4;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x14 + *(int *)(param_1 + 8) * 0x18) = param_5;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  return;
}


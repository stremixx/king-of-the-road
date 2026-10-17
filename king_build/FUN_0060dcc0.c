
void __thiscall FUN_0060dcc0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00651ff8;
  if ((*(int *)(param_1 + 0x74) == 1) && (param_2 == 0)) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  return;
}


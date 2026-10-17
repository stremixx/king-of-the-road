
int __thiscall
FUN_0060e7b0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
            uint param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_34 [24];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00649776;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(int *)(param_1 + 4) = param_1;
  *(int *)param_1 = param_1;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + 1;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_3 + 4) = param_1;
  local_4 = 1;
  if (param_6 < 9) {
    *(undefined4 *)(param_1 + 0xc) = 5;
  }
  else {
    if (param_6 < 0xb) {
      *(undefined4 *)(param_1 + 0xc) = 100;
    }
    else {
      *(undefined4 *)(param_1 + 0xc) = 0xfa;
    }
    FUN_006085b0(local_34,**(undefined4 **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x2c) = local_1c;
    *(undefined4 *)(param_1 + 0x30) = local_18;
    *(undefined4 *)(param_1 + 0x34) = local_14;
    *(undefined4 *)(param_1 + 0x38) = local_10;
  }
  ExceptionList = local_c;
  return param_1;
}


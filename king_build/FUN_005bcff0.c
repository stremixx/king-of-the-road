
undefined4 __thiscall
FUN_005bcff0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_40 [9];
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *(int *)(param_1 + 0x2c) + param_3;
  local_c = *(int *)(param_1 + 0x30) + param_4;
  local_4 = *(int *)(param_1 + 0x38) + param_4;
  local_8 = *(int *)(param_1 + 0x34) + param_3;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar3 = *(uint *)(param_1 + 0x11c);
    if (((uVar3 & 4) == 0) || ((*(int *)(param_1 + 0x118) == 0 && (*(int *)(param_1 + 0x114) == 0)))
       ) {
      if (param_5 == 0) {
        uVar3 = uVar3 & 2;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      puVar4 = (undefined4 *)(param_1 + 0x44 + (uVar3 & 3) * 0x24);
      puVar5 = auStack_40;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_005bcdc0(param_2,&local_10,uVar1);
      return 0;
    }
    puVar4 = (undefined4 *)(param_1 + 0xf8);
  }
  else {
    puVar4 = (undefined4 *)(param_1 + 0xd4);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  puVar5 = auStack_40;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005bcdc0(param_2,&local_10,uVar1);
  return 0;
}


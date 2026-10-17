
int __fastcall FUN_00587370(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_4;
  
  puVar1 = (undefined4 *)(param_1 + 8);
  iVar3 = 0x40;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (undefined4 *)(param_1 + 0x300);
  iVar3 = 0x40;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = (undefined4 *)(param_1 + 0xd04);
  local_4 = 0x40;
  do {
    FUN_004011e0(puVar1,0xc,4,FUN_004042a0);
    puVar4 = &DAT_00701550;
    puVar5 = puVar1;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = puVar1 + 0xc;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined4 *)(param_1 + 0xb00) = 0;
  do {
    iVar3 = param_1 + *(int *)(param_1 + 0xb00) * 0xc;
    *(undefined4 *)(param_1 + *(int *)(param_1 + 0xb00) * 0xc) = DAT_007015b0;
    *(undefined4 *)(iVar3 + 4) = DAT_007015b4;
    *(undefined4 *)(iVar3 + 8) = DAT_007015b8;
    iVar2 = *(int *)(param_1 + 0xb00) + 0x40;
    iVar3 = param_1 + iVar2 * 0xc;
    *(undefined4 *)(param_1 + iVar2 * 0xc) = DAT_007015b0;
    *(undefined4 *)(iVar3 + 4) = DAT_007015b4;
    *(undefined4 *)(iVar3 + 8) = DAT_007015b8;
    *(undefined4 *)(param_1 + 0x600 + *(int *)(param_1 + 0xb00) * 4) = 0;
    *(undefined4 *)(param_1 + 0x700 + *(int *)(param_1 + 0xb00) * 4) = 0;
    *(undefined4 *)(param_1 + 0x800 + *(int *)(param_1 + 0xb00) * 4) = 0;
    *(undefined4 *)(param_1 + 0x900 + *(int *)(param_1 + 0xb00) * 4) = 0;
    *(undefined4 *)(param_1 + 0xa00 + *(int *)(param_1 + 0xb00) * 4) = 0;
    *(undefined4 *)(param_1 + 0xb04 + *(int *)(param_1 + 0xb00) * 4) = 0;
    puVar1 = &DAT_00701550;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0xb00) * 0x30 + 0xd04 + param_1);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0xc04 + *(int *)(param_1 + 0xb00) * 4) = 0;
    iVar3 = *(int *)(param_1 + 0xb00) + 1;
    *(int *)(param_1 + 0xb00) = iVar3;
  } while (iVar3 < 0x40);
  *(undefined4 *)(param_1 + 0xb00) = 0;
  return param_1;
}


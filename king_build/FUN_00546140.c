
int __thiscall FUN_00546140(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  
  iVar1 = 0;
  puVar2 = param_2;
  do {
    iVar1 = iVar1 + 0x14;
    *puVar2 = *(undefined4 *)(param_1[0x950] + -8 + iVar1);
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xb4);
  fVar3 = (float10)FUN_004eaf10();
  param_2[9] = (float)fVar3;
  fVar3 = (float10)FUN_004eaf10();
  param_2[10] = (float)fVar3;
  fVar3 = (float10)FUN_004eaf10();
  param_2[0xb] = (float)fVar3;
  fVar3 = (float10)FUN_004eaf10();
  param_2[0xc] = (float)fVar3;
  fVar3 = (float10)(**(code **)(*param_1 + 0xb8))();
  param_2[0xd] = (float)fVar3;
  if (param_1[0x1518] == 0) {
    puVar2 = param_2 + 0xe;
    for (iVar1 = 0x23; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return 0x31;
  }
  iVar1 = FUN_00500d30(param_2 + 0xe);
  return iVar1 + 0xe;
}



void FUN_00594500(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (param_3 == -1) {
    puVar3 = &DAT_00696efc + *(int *)(param_2 + 0x28b4) * 0x25c;
  }
  else {
    puVar3 = (undefined4 *)(&DAT_00696ebc + param_3 * 0xc + *(int *)(param_2 + 0x28b4) * 0x970);
  }
  uVar1 = puVar3[1];
  uVar2 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return;
}


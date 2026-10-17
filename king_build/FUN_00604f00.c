
undefined4 __thiscall FUN_00604f00(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)0x0;
  puVar2 = (undefined4 *)0x0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    puVar2 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[2] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
      puVar2[3] = 0;
    }
    puVar2[2] = param_1;
    puVar2[3] = param_2;
    puVar2[4] = param_1[4] + 1;
    *(undefined4 **)(param_2 + 0x20) = puVar2;
  }
  if (param_3 != 0) {
    puVar3 = (undefined4 *)FUN_00631d33(0x14);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[2] = 0;
      puVar3[1] = 0;
      *puVar3 = 0;
      puVar3[3] = 0;
    }
    puVar3[2] = param_1;
    iVar1 = param_1[4];
    puVar3[3] = param_3;
    puVar3[4] = iVar1 + 1;
    *(undefined4 **)(param_3 + 0x20) = puVar3;
  }
  param_1[1] = puVar3;
  *param_1 = puVar2;
  return 1;
}


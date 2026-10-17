
undefined4 __thiscall
FUN_005e48c0(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (param_2 < 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + (param_2 / 1000) * 4);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  puVar2 = *(undefined4 **)(iVar1 + (param_2 % 1000) * 4);
  if (puVar2 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  if (puVar2[6] != 0) {
    FUN_00631d5c(puVar2[6]);
  }
  puVar2[5] = param_4;
  if (param_4 == 0) {
    puVar2[6] = 0;
  }
  else {
    uVar3 = FUN_00631d33(param_4);
    puVar2[6] = uVar3;
  }
  puVar2[7] = 0;
  puVar5 = (undefined4 *)puVar2[6];
  for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = *param_5;
    param_5 = param_5 + 1;
    puVar5 = puVar5 + 1;
  }
  for (param_4 = param_4 & 3; param_4 != 0; param_4 = param_4 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)param_5;
    param_5 = (undefined4 *)((int)param_5 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *puVar2 = 2;
  uVar3 = FUN_005e4a30(param_3,puVar2);
  return uVar3;
}


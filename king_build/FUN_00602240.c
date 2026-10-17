
void __thiscall FUN_00602240(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00631d5c(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  *(uint *)(param_1 + 8) = param_3;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != 0)) {
    puVar1 = (undefined4 *)FUN_00631d33(param_3);
    *(undefined4 **)(param_1 + 4) = puVar1;
    for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *param_2;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    }
    for (param_3 = param_3 & 3; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  return;
}


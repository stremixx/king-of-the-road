
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005772f0(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 local_38 [11];
  undefined4 local_c;
  undefined4 *local_8;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    puVar5 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    local_8 = &param_2;
    local_38[0] = 0x38;
    local_c = 4;
    param_2 = __ftol();
    uVar2 = param_1[2];
    uVar4 = (int)(param_2 - uVar2) >> 0x1f;
    if ((double)(int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) * _DAT_0064a948 <
        (double)(int)((param_2 - uVar2 ^ uVar4) - uVar4)) {
      param_1[2] = param_2;
      (**(code **)(*piVar1 + 0x18))(piVar1,local_38,0x100);
    }
    if (*param_1 == 0) {
      *param_1 = 1;
      (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],0xffffffff,0);
    }
  }
  return;
}


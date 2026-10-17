
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00576c00(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38 [11];
  undefined4 local_c;
  undefined4 *local_8;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    puVar6 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_48 = __ftol();
    local_44 = __ftol();
    local_40 = 0;
    local_3c = __ftol();
    uVar2 = param_1[3];
    local_38[0] = 0x38;
    uVar4 = uVar2;
    if (uVar2 <= local_3c) {
      uVar4 = local_3c;
    }
    uVar5 = (int)(uVar2 - local_3c) >> 0x1f;
    if ((double)uVar4 * _DAT_0064a5a8 < (double)(int)((uVar2 - local_3c ^ uVar5) - uVar5)) {
      local_8 = &local_48;
      param_1[3] = local_3c;
      local_c = 0x10;
      (**(code **)(*piVar1 + 0x18))(piVar1,local_38,0x100);
    }
    if (*param_1 == 0) {
      *param_1 = 1;
      (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],0xffffffff,0);
    }
  }
  return;
}


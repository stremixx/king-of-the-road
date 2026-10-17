
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00576e70(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int local_50 [6];
  undefined4 local_38 [4];
  int local_28;
  undefined4 local_c;
  int *local_8;
  
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    puVar6 = local_38;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    piVar5 = param_1 + 4;
    piVar7 = local_50;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    iVar3 = __ftol();
    local_38[0] = 0x38;
    local_50[0] = iVar3;
    local_28 = __ftol();
    local_8 = local_50;
    uVar2 = local_28 - param_1[2];
    uVar4 = (int)uVar2 >> 0x1f;
    local_c = 0x18;
    if (((double)param_1[2] * _DAT_0064c328 < (double)(int)((uVar2 ^ uVar4) - uVar4)) ||
       (uVar2 = iVar3 - param_1[3], uVar4 = (int)uVar2 >> 0x1f,
       (double)param_1[3] * _DAT_0064c328 < (double)(int)((uVar2 ^ uVar4) - uVar4))) {
      param_1[2] = local_28;
      param_1[3] = iVar3;
      (**(code **)(*piVar1 + 0x18))(piVar1,local_38,4);
    }
    if (*param_1 == 0) {
      *param_1 = 1;
      (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],0xffffffff,0);
    }
    return;
  }
  return;
}


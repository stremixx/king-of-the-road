
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00612620(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  
  pvVar5 = _malloc(param_2 << 4);
  *(void **)(param_1 + 8) = pvVar5;
  iVar11 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    iVar6 = _rand();
    fVar2 = (float)iVar6 * _DAT_0064b244;
    iVar6 = _rand();
    fVar1 = (float)iVar6 * _DAT_0064b244;
    iVar6 = _rand();
    fVar3 = (float)iVar6 * _DAT_0064b244;
    iVar6 = _rand();
    fVar4 = (float)iVar6 * _DAT_0064b244;
    iVar6 = _rand();
    fVar4 = fVar4 - (float)iVar6 * _DAT_0064b244;
    fVar1 = fVar1 - fVar3;
    iVar6 = _rand();
    fVar3 = (float)iVar6 * _DAT_0064b244;
    pfVar10 = (float *)(iVar11 + *(int *)(param_1 + 8));
    *pfVar10 = fVar4 + fVar4;
    fVar2 = (fVar3 - fVar2) * _DAT_0064b324;
    pfVar10[1] = fVar1 + fVar1;
    pfVar10[2] = fVar2;
    _rand();
    iVar6 = __ftol();
    uVar7 = __ftol();
    uVar8 = __ftol();
    uVar9 = __ftol();
    *(uint *)(iVar11 + 0xc + *(int *)(param_1 + 8)) =
         ((iVar6 << 8 | uVar7) << 8 | uVar8) << 8 | uVar9;
    iVar11 = iVar11 + 0x10;
  }
  return;
}


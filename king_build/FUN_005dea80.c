
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dea80(int param_1,undefined4 *param_2)

{
  double dVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 auStack_58 [12];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  
  puStack_14 = &DAT_0071fab8;
  puStack_18 = &DAT_00720208;
  iStack_20 = param_1 + 0xb68;
  puStack_1c = &DAT_0071fbe0;
  iStack_24 = param_1 + 0xb60;
  iStack_28 = param_1 + 0xb58;
  puVar3 = param_2;
  puVar4 = auStack_58;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_005de000();
  dVar1 = _DAT_0071fbe0 - *(double *)(param_1 + 0xb70);
  if (_DAT_0064c8f0 < dVar1) {
    dVar1 = dVar1 - _DAT_0064c8f8;
  }
  if (dVar1 < _DAT_0064c900) {
    dVar1 = dVar1 + _DAT_0064c8f8;
  }
  if (_DAT_00681960 < dVar1) {
    *(double *)(param_1 + 0xb70) = _DAT_0071fbe0 - _DAT_00681960;
  }
  if (dVar1 < -_DAT_00681960) {
    *(double *)(param_1 + 0xb70) = _DAT_00681960 + _DAT_0071fbe0;
  }
  if (_DAT_00681960 < _DAT_00720208 - *(double *)(param_1 + 0xb78)) {
    *(double *)(param_1 + 0xb78) = _DAT_00720208 - _DAT_00681960;
  }
  if (_DAT_00720208 - *(double *)(param_1 + 0xb78) < -_DAT_00681960) {
    *(double *)(param_1 + 0xb78) = _DAT_00681960 + _DAT_00720208;
  }
  if (_DAT_00681960 < _DAT_0071fab8 - *(double *)(param_1 + 0xb80)) {
    *(double *)(param_1 + 0xb80) = _DAT_0071fab8 - _DAT_00681960;
  }
  if (_DAT_0071fab8 - *(double *)(param_1 + 0xb80) < -_DAT_00681960) {
    *(double *)(param_1 + 0xb80) = _DAT_00681960 + _DAT_0071fab8;
  }
  *(undefined4 *)(param_1 + 0x244) = param_2[9];
  *(undefined4 *)(param_1 + 0x248) = param_2[10];
  *(undefined4 *)(param_1 + 0x24c) = param_2[0xb];
  return;
}


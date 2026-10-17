
undefined4 * __thiscall
FUN_006124f0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  DWORD DVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = param_5;
  param_1[5] = param_2;
  param_1[6] = param_3;
  DVar1 = timeGetTime();
  puVar2 = _malloc(param_2 * 0x3c);
  param_1[3] = puVar2;
  for (uVar3 = param_2 * 0xf & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  FUN_0061e481(DVar1);
  FUN_00612620(param_1[6],param_4);
  param_1[8] = 6000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[1] = 1;
  return param_1;
}


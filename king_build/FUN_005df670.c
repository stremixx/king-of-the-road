
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005df670(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 local_90 [12];
  undefined4 local_60 [12];
  undefined1 local_30 [48];
  
  puVar1 = local_60 + 2;
  iVar2 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = local_90 + 2;
  puVar4 = &DAT_00701550;
  puVar5 = local_60;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  puVar1 = &DAT_00701550;
  puVar4 = local_90;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)FUN_005db3f0(local_30);
    puVar4 = local_90;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1 = local_90;
    puVar4 = local_60;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    fVar6 = (float10)thunk_FUN_00603580();
    if ((DAT_00701dec & 0x100) != 0) {
      FUN_005ad380(*(undefined4 *)(param_1 + 0x224));
    }
    iVar2 = *(int *)(param_1 + 0x1d0);
    *(undefined4 *)(iVar2 + 0x2120) = *(undefined4 *)(param_1 + 0xb90);
    *(undefined4 *)(iVar2 + 0x2124) = *(undefined4 *)(param_1 + 0xb94);
    iVar2 = *(int *)(param_1 + 0x1d0);
    *(undefined4 *)(iVar2 + 0x2128) = *(undefined4 *)(param_1 + 0xb98);
    *(undefined4 *)(iVar2 + 0x212c) = *(undefined4 *)(param_1 + 0xb9c);
    if (*(int *)(param_1 + 0x20c) != 0) {
      FUN_005ad7f0(&DAT_00701550,&DAT_00701550);
      (**(code **)(**(int **)(param_1 + 0x20c) + 0x38))
                ((-(uint)(*(int *)(DAT_007206b0 + 0x158) != 0) & 0xfffffffc) + 5,local_60,local_90,
                 *(undefined4 *)(param_1 + 0x1d0));
    }
    if (*(int *)(param_1 + 0x20c) != 0) {
      FUN_005ea940(*(undefined4 *)(param_1 + 0x1e8),*(int *)(param_1 + 0x20c),
                   *(undefined4 *)(param_1 + 0x1d8),1,*(undefined4 *)(param_1 + 0x1d0));
    }
    fVar7 = (float10)thunk_FUN_00603580();
    _DAT_00720170 = (float)(fVar7 - (float10)(float)fVar6);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_0048dc60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_419;
  double local_418;
  undefined1 local_410 [12];
  undefined4 *local_404;
  undefined1 local_400 [32];
  undefined1 local_3e0 [196];
  undefined1 local_31c [196];
  undefined1 local_258 [580];
  void *local_14;
  undefined1 *puStack_10;
  undefined1 local_c;
  undefined3 uStack_b;
  
  puStack_10 = &LAB_00640964;
  local_14 = ExceptionList;
  puVar1 = param_1;
  ExceptionList = &local_14;
  for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar1 = *param_2;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  }
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x12a] = 0;
  param_1[0x15b] = 0;
  param_1[0x18c] = 0;
  local_c = 3;
  uStack_b = 0;
  local_404 = param_1;
  puVar1 = (undefined4 *)FUN_0048efb0(local_258);
  puVar4 = param_1 + 0x9a;
  for (iVar3 = 0x91; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_0048e6b0(param_1 + 299,param_1);
  FUN_0048ff30(local_31c,0,0,0,0x3ff00000,8,param_1 + 299);
  local_c = 4;
  puVar1 = (undefined4 *)FUN_0048eae0(local_3e0);
  puVar4 = param_1 + 0x15c;
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004030a0();
  local_c = 3;
  FUN_004030a0();
  FUN_00478a20(&local_419);
  iVar3 = 0;
  local_c = 5;
  local_418 = 0.0;
  do {
    local_418 = (double)local_418._0_4_ * _DAT_0064a590;
    uVar2 = FUN_0048eda0(local_400,&local_418);
    FUN_0048e9d0(uVar2);
    iVar3 = iVar3 + 1;
    local_418 = (double)CONCAT44(local_418._4_4_,iVar3);
  } while (iVar3 < 100);
  iVar3 = FUN_00490ad0(local_400,local_410);
  FUN_00405ed0(iVar3);
  param_1[0x98] = *(undefined4 *)(iVar3 + 0x18);
  param_1[0x99] = *(undefined4 *)(iVar3 + 0x1c);
  _local_c = CONCAT31(uStack_b,3);
  FUN_00447240();
  ExceptionList = local_14;
  return param_1;
}


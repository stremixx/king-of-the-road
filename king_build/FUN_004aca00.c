
void __thiscall FUN_004aca00(int *param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00643610;
  local_10 = ExceptionList;
  uVar2 = param_2 + 0x1ffU >> 9;
  ExceptionList = &local_10;
  if ((uint)(param_1[5] - *param_1 >> 2) < uVar2) {
    ExceptionList = &local_10;
    FUN_004a2bd0(uVar2,1);
  }
  local_8 = 0;
  for (uVar3 = 1; uVar3 <= uVar2; uVar3 = uVar3 + 1) {
    pvVar1 = _malloc(0x200);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)FUN_00458210(0x200);
    }
    *(void **)(param_1[5] + uVar3 * -4) = pvVar1;
  }
  ExceptionList = local_10;
  return;
}


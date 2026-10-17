
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00430560(void)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28;
  undefined4 uStack_24;
  double local_20;
  undefined1 local_18 [8];
  undefined1 local_10 [12];
  
  iVar4 = 0;
  uVar3 = 0;
  _DAT_0068c0e0 = 0.0;
  local_28 = 0;
  iVar2 = local_28;
  if (DAT_0068bf3c - DAT_0068bf38 >> 2 != 0) {
    do {
      FUN_0041b970(uVar3,&local_28,&local_20);
      if (((((double)CONCAT44(uStack_24,local_28) != _DAT_0064a668) && (local_20 != _DAT_0064a668))
          && (iVar2 = *(int *)(*(int *)(DAT_0068bf38 + uVar3 * 4) + 0x20), iVar2 != 3)) &&
         ((iVar2 != 1 &&
          (dVar1 = (double)CONCAT44(uStack_24,local_28) / local_20, dVar1 < _DAT_0064a748)))) {
        _DAT_0068c0e0 = _DAT_0068c0e0 + dVar1;
        iVar4 = iVar4 + 1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar4;
    } while (uVar3 < (uint)(DAT_0068bf3c - DAT_0068bf38 >> 2));
  }
  local_28 = iVar2;
  uVar3 = 0;
  iVar2 = DAT_0068bf38;
  iVar4 = local_28;
  if (DAT_0068bf3c - DAT_0068bf38 >> 2 != 0) {
    do {
      if (*(int *)(*(int *)(iVar2 + uVar3 * 4) + 0x20) == 3) {
        FUN_0041b970(uVar3,&local_20,local_18);
        FUN_0041b970(**(undefined4 **)(*(int *)(DAT_0068bf38 + uVar3 * 4) + 0x60),local_10,&local_28
                    );
        dVar1 = local_20 / (double)CONCAT44(uStack_24,local_28);
        iVar2 = DAT_0068bf38;
        if (dVar1 < _DAT_0064a748) {
          _DAT_0068c0e0 = _DAT_0068c0e0 + dVar1;
          iVar4 = iVar4 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(DAT_0068bf3c - iVar2 >> 2));
  }
  local_28 = iVar4;
  if (local_28 != 0) {
    _DAT_0068c0e0 = _DAT_0068c0e0 / (double)local_28;
  }
  return;
}


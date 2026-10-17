
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d4190(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_7c [17];
  byte bStack_38;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (param_1 != (int *)0x0) {
    puVar1 = local_7c;
    for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
    local_7c[0] = 0x7c;
    iVar3 = (**(code **)(*param_1 + 0x58))(param_1,local_7c);
    if (iVar3 != 0) {
      uVar2 = FUN_005d42c0(iVar3,s_check_pf_0067edb0,0);
      FUN_005d2250(uVar2);
    }
    if (((bStack_38 & 0x40) != 0) && (iStack_30 == 0x10)) {
      if ((iStack_24 == 0x1f) && ((iStack_28 == 0x7e0 && (iStack_2c == 0xf800)))) {
        DAT_0071f80c = 1;
        _DAT_0071f810 = 1;
        return;
      }
      DAT_0071f80c = 0;
      _DAT_0071f810 = 0;
    }
  }
  return;
}



undefined4 * __thiscall FUN_00458350(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int local_4;
  
  puVar2 = param_2;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  puVar7 = param_2 + 6;
  puVar8 = param_1 + 6;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  piVar1 = param_1 + 0x1e;
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  if (param_2 + 0x1e != piVar1) {
    iVar6 = param_2[0x1f];
    param_2 = (undefined4 *)param_2[0x1e];
    iVar5 = *piVar1;
    uVar9 = iVar6 - (int)param_2 >> 4;
    if ((uint)(param_1[0x20] - iVar5 >> 4) < uVar9) {
      iVar3 = FUN_00461de0(uVar9,param_2,iVar6);
      iVar5 = param_1[0x1f];
      for (iVar6 = *piVar1; iVar6 != iVar5; iVar6 = iVar6 + 0x10) {
        FUN_0046c840(0);
      }
      iVar6 = param_1[0x20] - *piVar1 >> 4;
      if (iVar6 != 0) {
        FUN_0044b440(*piVar1,iVar6 << 4);
      }
      *piVar1 = iVar3;
      param_1[0x20] = uVar9 * 0x10 + iVar3;
    }
    else {
      uVar4 = param_1[0x1f] - iVar5 >> 4;
      if (uVar4 < uVar9) {
        local_4 = (int)(uVar4 * 0x10) >> 4;
        if (0 < local_4) {
          do {
            FUN_0042c0c0(param_2);
            param_2 = (undefined4 *)((int)param_2 + 0x10);
            local_4 = local_4 + -1;
          } while (local_4 != 0);
        }
        FUN_004662a0((param_1[0x1f] - *piVar1 >> 4) * 0x10 + puVar2[0x1e],puVar2[0x1f],param_1[0x1f]
                     ,param_2);
      }
      else {
        iVar5 = FUN_0047c550(param_2,iVar6,iVar5,uVar9,0);
        iVar6 = param_1[0x1f];
        for (; iVar5 != iVar6; iVar5 = iVar5 + 0x10) {
          FUN_0046c840(0);
        }
      }
    }
    param_1[0x1f] = uVar9 * 0x10 + *piVar1;
  }
  param_1[0x21] = puVar2[0x21];
  param_1[0x22] = puVar2[0x22];
  return param_1;
}


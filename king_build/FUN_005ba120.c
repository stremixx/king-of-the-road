
void FUN_005ba120(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_7c [20];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint uStack_1c;
  
  iVar2 = DAT_00701e08;
  if (DAT_00701df8 == 0) {
    if (param_1 != (int *)0x0) {
      DAT_00701e00 = DAT_00701e00 + -1;
      (**(code **)(*param_1 + 8))(param_1);
    }
    return;
  }
  if (param_1 == (int *)0x0) {
    if (DAT_00701e08 != 0) {
      FUN_005ba320();
      FUN_00631d5c(iVar2);
    }
    DAT_00701e08 = 0;
    return;
  }
  piVar1 = local_7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar1 = 0;
    piVar1 = piVar1 + 1;
  }
  local_7c[0] = 0x7c;
  iVar3 = (**(code **)(*param_1 + 0x58))(param_1,local_7c);
  if (iVar3 != 0) {
    FUN_005d2250(s_asf_dsc_fail_0067e054,0x33);
  }
  if ((uStack_1c & 0x400000) == 0) {
    iVar3 = *(int *)(iVar2 + 0x468);
    iVar4 = 0;
    if (0 < iVar3) {
      piVar1 = (int *)(iVar2 + 0xc);
      do {
        if (((((local_7c[0] == piVar1[-1]) && (local_7c[1] == *piVar1)) &&
             (iStack_2c == piVar1[0x13])) &&
            ((iStack_28 == piVar1[0x14] && (iStack_24 == piVar1[0x15])))) &&
           (iStack_20 == piVar1[0x16])) {
          iVar3 = *(int *)(iVar2 + 0xb8 + iVar4 * 0xbc);
          iVar2 = iVar2 + iVar4 * 0xbc;
          if (iVar3 < 0xf) {
            *(int **)(iVar2 + 0x7c + iVar3 * 4) = param_1;
            *(int *)(iVar2 + 0xb8) = *(int *)(iVar2 + 0xb8) + 1;
            return;
          }
          goto LAB_005ba2ae;
        }
        iVar4 = iVar4 + 1;
        piVar1 = piVar1 + 0x2f;
      } while (iVar4 < iVar3);
    }
    if ((iVar3 < 6) && (((local_7c[0] == 0x100 || (local_7c[0] == 0x80)) || (local_7c[0] == 0x40))))
    {
      puVar5 = (undefined4 *)&stack0xffffff7c;
      puVar6 = (undefined4 *)(iVar2 + iVar3 * 0xbc);
      for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      iVar3 = *(int *)(iVar2 + 0x468);
      *(int *)(iVar2 + 0x468) = iVar3 + 1;
      iVar4 = *(int *)(iVar2 + 0xb8 + iVar3 * 0xbc);
      iVar2 = iVar2 + iVar3 * 0xbc;
      if (iVar4 < 0xf) {
        *(int **)(iVar2 + 0x7c + iVar4 * 4) = param_1;
        *(int *)(iVar2 + 0xb8) = *(int *)(iVar2 + 0xb8) + 1;
        return;
      }
    }
  }
LAB_005ba2ae:
  iVar2 = *param_1;
  puVar5 = (undefined4 *)&stack0xffffff7c;
  for (iVar3 = 0x1f; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  iVar2 = (**(code **)(iVar2 + 0x58))(param_1,&stack0xffffff7c);
  if (iVar2 != 0) {
    FUN_005d2250(s_asf_dsc_fail_0067e054,1);
  }
  (**(code **)(*param_1 + 8))(param_1);
  return;
}


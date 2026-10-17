
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b8f00(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_18;
  int local_14;
  int local_10;
  
  param_1[0xc6] = param_3;
  if (param_1[0xca] == 1) {
    iVar7 = 0x100;
    local_14 = 0x100;
  }
  else {
    if (param_1[0xca] != 2) {
      return;
    }
    local_14 = 0x8000;
    iVar7 = 0x8000;
  }
  param_1[199] = param_2;
  iVar5 = FUN_00631d33(param_2 * 4);
  *param_1 = iVar5;
  iVar5 = FUN_00631d33(param_2 * 2);
  param_1[1] = iVar5;
  local_28 = 0;
  if (0 < param_2) {
    do {
      uVar6 = FUN_00631d33(param_1[0xca] * iVar7 * param_1[0xc6]);
      *(undefined4 *)(*param_1 + local_28 * 4) = uVar6;
      uVar4 = FUN_0062a170(*(undefined4 *)(*param_1 + local_28 * 4),
                           param_1[0xca] * iVar7 * param_1[0xc6]);
      iVar5 = 0;
      *(undefined2 *)(param_1[1] + local_28 * 2) = uVar4;
      iVar9 = local_28 + 1;
      if (iVar7 != 0) {
        do {
          local_10 = 0;
          if (0 < param_1[0xc6]) {
            local_18 = 0;
            iVar8 = iVar5 * 2;
            do {
              if (param_1[0xca] == 1) {
                uVar1 = __ftol();
                uVar2 = __ftol();
                uVar3 = __ftol();
                uVar1 = FUN_005b8d10(uVar1,uVar2,uVar3);
                *(undefined1 *)(*(int *)(*param_1 + local_28 * 4) + local_18 + iVar5) = uVar1;
              }
              else if (param_1[0xca] == 2) {
                uVar1 = __ftol();
                uVar2 = __ftol();
                uVar3 = __ftol();
                uVar4 = FUN_005b58c0(uVar1,uVar2,uVar3);
                *(undefined2 *)(*(int *)(*param_1 + local_28 * 4) + iVar8) = uVar4;
              }
              local_10 = local_10 + 1;
              local_18 = local_18 + 0x100;
              iVar8 = iVar8 + 0x10000;
              iVar7 = local_14;
            } while (local_10 < param_1[0xc6]);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar7);
      }
      local_28 = iVar9;
    } while (iVar9 < param_2);
  }
  return;
}


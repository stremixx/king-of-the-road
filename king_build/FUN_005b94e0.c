
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b94e0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_18;
  
  if (*(int *)(param_1 + 0x328) == 1) {
    iVar7 = 0x100;
    local_18 = 0x100;
  }
  else {
    if (*(int *)(param_1 + 0x328) != 2) {
      return;
    }
    local_18 = 0x8000;
    iVar7 = 0x8000;
  }
  *(int *)(param_1 + 0x324) = param_2;
  uVar5 = FUN_00631d33(param_2 * 4);
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  uVar5 = FUN_00631d33(param_2 * 2);
  iVar6 = 0;
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  if (0 < param_2) {
    do {
      uVar5 = FUN_00631d33(iVar7 * *(int *)(param_1 + 0x328));
      *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar6 * 4) = uVar5;
      uVar4 = FUN_0062a170(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar6 * 4),
                           iVar7 * *(int *)(param_1 + 0x328));
      iVar8 = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x14) + iVar6 * 2) = uVar4;
      if (iVar7 != 0) {
        do {
          if (*(int *)(param_1 + 0x328) == 1) {
            uVar1 = __ftol();
            uVar2 = __ftol();
            uVar3 = __ftol();
            uVar1 = FUN_005b8d10(uVar1,uVar2,uVar3);
            *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + iVar6 * 4) + iVar8) = uVar1;
          }
          else if (*(int *)(param_1 + 0x328) == 2) {
            uVar5 = __ftol();
            uVar5 = __ftol(uVar5);
            uVar5 = __ftol(uVar5);
            uVar4 = FUN_005b58c0(uVar5);
            *(undefined2 *)(*(int *)(*(int *)(param_1 + 0x10) + iVar6 * 4) + iVar8 * 2) = uVar4;
          }
          iVar8 = iVar8 + 1;
          iVar7 = local_18;
        } while (iVar8 < local_18);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_2);
  }
  return;
}


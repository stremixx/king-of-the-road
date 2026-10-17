
/* WARNING: Removing unreachable block (ram,0x00453ff1) */
/* WARNING: Removing unreachable block (ram,0x00454018) */
/* WARNING: Removing unreachable block (ram,0x00453ffb) */
/* WARNING: Removing unreachable block (ram,0x00453f6d) */

int * FUN_00453ed0(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_3;
  piVar1 = param_2;
  puStack_8 = &LAB_0063e9d8;
  puVar3 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_1 != piVar1; param_1 = param_1 + 1) {
    if (*param_1 != iVar2) {
      if (puVar3 == (undefined4 *)0x0) {
        FUN_0045ae60(0,&param_1);
        puVar3 = local_14;
      }
      else {
        puVar4 = (undefined4 *)0x0;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = param_1;
          puVar4 = local_14;
        }
        local_14 = puVar4 + 1;
        puVar3 = local_14;
      }
    }
  }
  if (puVar3 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return piVar1;
  }
  uVar5 = (*(int *)(param_4 + 0xdc) + 1U) % 0x37;
  uVar6 = (*(int *)(param_4 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_4 + 0xdc) = uVar5;
  *(uint *)(param_4 + 0xe0) = uVar6;
  *(int *)(param_4 + uVar5 * 4) = *(int *)(param_4 + uVar5 * 4) - *(int *)(param_4 + uVar6 * 4);
  ExceptionList = local_c;
  return *(int **)((*(uint *)(param_4 + *(int *)(param_4 + 0xdc) * 4) % (uint)((int)puVar3 >> 2)) *
                  4);
}


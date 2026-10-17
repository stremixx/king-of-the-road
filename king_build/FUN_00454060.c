
/* WARNING: Removing unreachable block (ram,0x00454185) */
/* WARNING: Removing unreachable block (ram,0x004541ac) */
/* WARNING: Removing unreachable block (ram,0x0045418f) */
/* WARNING: Removing unreachable block (ram,0x004540fd) */

int * FUN_00454060(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar1 = param_2;
  puStack_8 = &LAB_0063e9f8;
  puVar2 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_1 != piVar1; param_1 = param_1 + 1) {
    if ((*(byte *)(*param_1 + 0x60) & 3) == 0) {
      if (puVar2 == (undefined4 *)0x0) {
        FUN_0045ae60(0,&param_1);
        puVar2 = local_14;
      }
      else {
        puVar3 = (undefined4 *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = param_1;
          puVar3 = local_14;
        }
        local_14 = puVar3 + 1;
        puVar2 = local_14;
      }
    }
  }
  if (puVar2 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return piVar1;
  }
  uVar4 = (*(int *)(param_4 + 0xdc) + 1U) % 0x37;
  uVar5 = (*(int *)(param_4 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_4 + 0xdc) = uVar4;
  *(uint *)(param_4 + 0xe0) = uVar5;
  *(int *)(param_4 + uVar4 * 4) = *(int *)(param_4 + uVar4 * 4) - *(int *)(param_4 + uVar5 * 4);
  ExceptionList = local_c;
  return *(int **)((*(uint *)(param_4 + *(int *)(param_4 + 0xdc) * 4) % (uint)((int)puVar2 >> 2)) *
                  4);
}



/* WARNING: Removing unreachable block (ram,0x00453cc0) */
/* WARNING: Removing unreachable block (ram,0x00453ce7) */
/* WARNING: Removing unreachable block (ram,0x00453cca) */
/* WARNING: Removing unreachable block (ram,0x00453c3c) */

undefined4 * FUN_00453b90(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar2 = param_3;
  puVar1 = param_2;
  puStack_8 = &LAB_0063e998;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    cVar3 = FUN_00404bd0(*param_1,uVar2);
    if (cVar3 != '\0') {
      if (local_14 == (undefined4 *)0x0) {
        FUN_0045ae60(0,&param_1);
      }
      else {
        if (local_14 != (undefined4 *)0x0) {
          *local_14 = param_1;
        }
        local_14 = local_14 + 1;
      }
    }
  }
  if (local_14 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return puVar1;
  }
  uVar4 = (*(int *)(param_4 + 0xdc) + 1U) % 0x37;
  uVar5 = (*(int *)(param_4 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_4 + 0xdc) = uVar4;
  *(uint *)(param_4 + 0xe0) = uVar5;
  *(int *)(param_4 + uVar4 * 4) = *(int *)(param_4 + uVar4 * 4) - *(int *)(param_4 + uVar5 * 4);
  ExceptionList = local_c;
  return *(undefined4 **)
          ((*(uint *)(param_4 + *(int *)(param_4 + 0xdc) * 4) % (uint)((int)local_14 >> 2)) * 4);
}


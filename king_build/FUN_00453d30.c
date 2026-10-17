
/* WARNING: Removing unreachable block (ram,0x00453e6b) */
/* WARNING: Removing unreachable block (ram,0x00453e92) */
/* WARNING: Removing unreachable block (ram,0x00453e75) */
/* WARNING: Removing unreachable block (ram,0x00453de7) */

int * FUN_00453d30(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_4;
  uVar2 = param_3;
  piVar1 = param_2;
  puStack_8 = &LAB_0063e9b8;
  puVar5 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_1 != piVar1; param_1 = param_1 + 1) {
    if ((*param_1 != iVar3) &&
       (cVar4 = FUN_00404bd0(*param_1,uVar2), puVar5 = local_14, cVar4 != '\0')) {
      if (local_14 == (undefined4 *)0x0) {
        FUN_0045ae60(0,&param_1);
      }
      else {
        if (local_14 != (undefined4 *)0x0) {
          *local_14 = param_1;
        }
        local_14 = local_14 + 1;
        puVar5 = local_14;
      }
    }
  }
  if (puVar5 == (undefined4 *)0x0) {
    ExceptionList = local_c;
    return piVar1;
  }
  uVar6 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
  uVar7 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_5 + 0xdc) = uVar6;
  *(uint *)(param_5 + 0xe0) = uVar7;
  *(int *)(param_5 + uVar6 * 4) = *(int *)(param_5 + uVar6 * 4) - *(int *)(param_5 + uVar7 * 4);
  ExceptionList = local_c;
  return *(int **)((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % (uint)((int)puVar5 >> 2)) *
                  4);
}


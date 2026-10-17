
/* WARNING: Removing unreachable block (ram,0x0045f055) */
/* WARNING: Removing unreachable block (ram,0x0045f07c) */
/* WARNING: Removing unreachable block (ram,0x0045f05f) */
/* WARNING: Removing unreachable block (ram,0x0045efc7) */

undefined4 *
FUN_0045ef00(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            int param_5)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_3;
  puStack_8 = &LAB_0063f248;
  local_14 = 0;
  local_4 = 0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (; param_2 != puVar1; param_2 = (undefined4 *)*param_2) {
    if (((param_2[0x19] != 0x100) && (param_2[0x19] != 0x101)) &&
       (cVar2 = FUN_00419040(param_2 + 2), cVar2 != '\0')) {
      if (local_14 == 0) {
        FUN_0045dd70(0,&param_2);
      }
      else {
        FUN_00460970(local_14,&param_2);
        local_14 = local_14 + 4;
      }
    }
  }
  if (local_14 == 0) {
    *param_1 = puVar1;
    ExceptionList = local_c;
    return param_1;
  }
  uVar3 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
  uVar4 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_5 + 0xdc) = uVar3;
  *(uint *)(param_5 + 0xe0) = uVar4;
  *(int *)(param_5 + uVar3 * 4) = *(int *)(param_5 + uVar3 * 4) - *(int *)(param_5 + uVar4 * 4);
  *param_1 = *(undefined4 *)
              ((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % (uint)(local_14 >> 2)) * 4);
  ExceptionList = local_c;
  return param_1;
}


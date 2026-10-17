
/* WARNING: Removing unreachable block (ram,0x0045d29c) */
/* WARNING: Removing unreachable block (ram,0x0045d2c3) */
/* WARNING: Removing unreachable block (ram,0x0045d2a6) */
/* WARNING: Removing unreachable block (ram,0x0045d20e) */

undefined4 *
FUN_0045d140(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_3;
  puStack_8 = &LAB_0063f108;
  local_14 = 0;
  local_4 = 0;
  local_c = ExceptionList;
  puVar1 = param_2;
  ExceptionList = &local_c;
  while (puVar1 != puVar2) {
    param_2 = puVar1;
    if (((puVar1[0x19] == 0x101) && (((uint)puVar1[0x18] >> 2 & 1) != 0)) &&
       (fVar5 = (float10)FUN_00401000(), (float10)*(double *)(puVar1 + 0x1c) <= fVar5)) {
      if (local_14 == 0) {
        FUN_0045dd70(0,&param_2);
      }
      else {
        FUN_00460970(local_14,&param_2);
        local_14 = local_14 + 4;
      }
    }
    puVar1 = (undefined4 *)*param_2;
  }
  if (local_14 == 0) {
    *param_1 = puVar2;
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


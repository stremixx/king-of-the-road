
/* WARNING: Removing unreachable block (ram,0x0045e1c5) */
/* WARNING: Removing unreachable block (ram,0x0045e1ed) */
/* WARNING: Removing unreachable block (ram,0x0045e1cf) */
/* WARNING: Removing unreachable block (ram,0x0045e135) */

undefined4 *
FUN_0045e030(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_3;
  puStack_8 = &LAB_0063f188;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_14 = 0;
  local_4 = 0;
  puVar1 = param_2;
  while (puVar1 != puVar2) {
    param_2 = puVar1;
    if (((((puVar1[0x15] == -1) || (iVar4 = FUN_004d89a0(puVar1[0x15]), iVar4 == 0)) &&
         ((*(byte *)(puVar1 + 0x18) & 1) == 0)) && ((puVar1[0x17] == 2 && (puVar1[0x19] != 0x100))))
       && ((puVar1[0x19] != 0x101 &&
           ((*(char *)(puVar1 + 0x7c) == '\0' && (cVar3 = FUN_004190a0(puVar1 + 2), cVar3 != '\0')))
           ))) {
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
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
  uVar5 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
  uVar6 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_5 + 0xdc) = uVar5;
  *(uint *)(param_5 + 0xe0) = uVar6;
  *(int *)(param_5 + uVar5 * 4) = *(int *)(param_5 + uVar5 * 4) - *(int *)(param_5 + uVar6 * 4);
  *param_1 = *(undefined4 *)
              ((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % (uint)(local_14 >> 2)) * 4);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


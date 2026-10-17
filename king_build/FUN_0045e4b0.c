
/* WARNING: Removing unreachable block (ram,0x0045e642) */
/* WARNING: Removing unreachable block (ram,0x0045e657) */
/* WARNING: Removing unreachable block (ram,0x0045e64c) */
/* WARNING: Removing unreachable block (ram,0x0045e5b4) */

undefined4 *
FUN_0045e4b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *unaff_FS_OFFSET;
  int local_14;
  undefined4 local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_4;
  puVar2 = param_3;
  puStack_8 = &LAB_0063f1a8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_c;
  local_14 = 0;
  local_4 = 0;
  puVar1 = param_2;
  while (puVar1 != puVar2) {
    param_2 = puVar1;
    if (((((puVar1[0x1a] != iVar3) && (cVar4 = FUN_00425d50(iVar3 + 8,puVar1 + 2), cVar4 != '\0'))
         && (cVar4 = FUN_00425ca0(puVar1 + 2), cVar4 != '\0')) &&
        ((puVar1[0x2c] != iVar3 &&
         ((puVar1[0x15] == -1 || (iVar5 = FUN_004d89a0(puVar1[0x15]), iVar5 == 0)))))) &&
       ((*(byte *)(puVar1 + 0x18) & 1) == 0)) {
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
  uVar6 = (*(int *)(param_5 + 0xdc) + 1U) % 0x37;
  uVar7 = (*(int *)(param_5 + 0xe0) + 1U) % 0x37;
  *(uint *)(param_5 + 0xdc) = uVar6;
  *(uint *)(param_5 + 0xe0) = uVar7;
  *(int *)(param_5 + uVar6 * 4) = *(int *)(param_5 + uVar6 * 4) - *(int *)(param_5 + uVar7 * 4);
  *param_1 = *(undefined4 *)
              ((*(uint *)(param_5 + *(int *)(param_5 + 0xdc) * 4) % (uint)(local_14 >> 2)) * 4);
  *unaff_FS_OFFSET = local_c;
  return param_1;
}


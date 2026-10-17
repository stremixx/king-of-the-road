
/* WARNING: Removing unreachable block (ram,0x0045ea84) */
/* WARNING: Removing unreachable block (ram,0x0045ea99) */
/* WARNING: Removing unreachable block (ram,0x0045e9f7) */
/* WARNING: Removing unreachable block (ram,0x0045ea8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_0045e880(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5,
            int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  void **ppvVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  float10 fVar13;
  int local_44;
  int local_3c [6];
  undefined1 local_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_4;
  puVar2 = param_3;
  puStack_8 = &LAB_0063f1e8;
  local_44 = 0;
  local_4 = 0;
  ppvVar4 = &local_c;
  local_c = ExceptionList;
  puVar1 = param_2;
  while (ExceptionList = ppvVar4, puVar1 != puVar2) {
    puVar10 = puVar1 + 2;
    param_2 = puVar1;
    if ((((puVar1[0x1a] != iVar3) && (cVar5 = FUN_00425d50(iVar3 + 8,puVar10), cVar5 != '\0')) &&
        (cVar5 = FUN_00425ca0(puVar10), cVar5 != '\0')) &&
       (((puVar1[0x19] == 4 && (iVar6 = FUN_00477850(puVar10), iVar6 != 0)) &&
        ((cVar5 = FUN_0045eae0(param_5 + 0x18), cVar5 != '\0' &&
         (*(int *)(iVar6 + 0xc) == *(int *)(param_5 + 0xc))))))) {
      if ((*(byte *)(puVar1 + 0x18) & 1) == 0) {
        piVar11 = puVar1 + 0x4e;
      }
      else {
        piVar11 = puVar1 + 0x9c;
      }
      piVar12 = local_3c;
      for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      uVar7 = FUN_0045be30(local_24,iVar3 + 0x270,local_3c);
      fVar13 = (float10)FUN_004577a0(uVar7);
      if (fVar13 < (float10)_DAT_0066b6a8) {
        if (local_44 == 0) {
          FUN_0045dd70(0,&param_2);
        }
        else {
          FUN_00460970(local_44,&param_2);
          local_44 = local_44 + 4;
        }
      }
    }
    ppvVar4 = ExceptionList;
    puVar1 = (undefined4 *)*param_2;
  }
  if (local_44 != 0) {
    uVar8 = (*(int *)(param_6 + 0xdc) + 1U) % 0x37;
    uVar9 = (*(int *)(param_6 + 0xe0) + 1U) % 0x37;
    *(uint *)(param_6 + 0xdc) = uVar8;
    *(uint *)(param_6 + 0xe0) = uVar9;
    *(int *)(param_6 + uVar8 * 4) = *(int *)(param_6 + uVar8 * 4) - *(int *)(param_6 + uVar9 * 4);
    *param_1 = *(undefined4 *)
                ((*(uint *)(param_6 + *(int *)(param_6 + 0xdc) * 4) % (uint)(local_44 >> 2)) * 4);
    ExceptionList = local_c;
    return param_1;
  }
  *param_1 = puVar2;
  ExceptionList = local_c;
  return param_1;
}


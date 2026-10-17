
undefined4 * FUN_00467130(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0063f704;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  uStack_7 = 0;
  puVar5 = param_3;
  for (puVar6 = param_1; iVar2 = 0, puVar6 != param_2; puVar6 = puVar6 + 9) {
    local_8 = 1;
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *puVar6;
      puVar5[1] = puVar6[1];
      puVar5[2] = puVar6[2];
      iVar4 = puVar6[4];
      iVar1 = puVar6[3];
      puVar5[3] = 0;
      iVar4 = iVar4 - iVar1;
      puVar5[4] = 0;
      puVar5[5] = 0;
      if (iVar4 != 0) {
        iVar2 = FUN_0044b6e0(iVar4);
      }
      puVar5[3] = iVar2;
      puVar5[4] = iVar2;
      puVar5[5] = iVar2 + iVar4;
      uVar3 = FUN_00407250(puVar6[3],puVar6[4],iVar2);
      puVar5[4] = uVar3;
      param_1 = (undefined4 *)CONCAT13(param_3._3_1_,param_1._0_3_);
      local_8 = 2;
      FUN_0048a730((int)(puVar6[7] - puVar6[6]) >> 2,(int)&param_1 + 3);
      local_8 = 3;
      uVar3 = FUN_0046b5a0(puVar6[6],puVar6[7],puVar5[6],param_3);
      puVar5[7] = uVar3;
    }
    puVar5 = puVar5 + 9;
  }
  *unaff_FS_OFFSET = local_10;
  return puVar5;
}



undefined4 * FUN_004abcc0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00643584;
  local_10 = ExceptionList;
  uStack_7 = 0;
  puVar4 = param_3;
  ExceptionList = &local_10;
  for (iVar3 = param_1; iVar3 != param_2; iVar3 = iVar3 + 0x2c) {
    if (puVar4 != (undefined4 *)0x0) {
      if ((*(uint *)(iVar3 + 0xc) & 0x10000) == 0) {
        puVar4[2] = 0;
        iVar1 = *(int *)(iVar3 + 4);
        if (iVar1 == 0) {
          puVar4[1] = 0;
          puVar4[3] = 0;
        }
        else {
          puVar4[1] = iVar1;
          puVar4[3] = *(undefined4 *)(iVar3 + 0xc);
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
        }
      }
      else {
        puVar4[3] = *(uint *)(iVar3 + 0xc);
        puVar4[1] = *(undefined4 *)(iVar3 + 4);
        puVar4[2] = *(undefined4 *)(iVar3 + 8);
      }
      param_1 = CONCAT13(param_3._3_1_,(undefined3)param_1);
      local_8 = 2;
      FUN_004abe00((*(int *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10)) / 0xc,(int)&param_1 + 3);
      local_8 = 3;
      uVar2 = FUN_004a2e60(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),puVar4[4],
                           param_3);
      puVar4[5] = uVar2;
      puVar4[7] = *(undefined4 *)(iVar3 + 0x1c);
      FUN_00455dc0(iVar3 + 0x20);
      *puVar4 = &PTR_FUN_0064af58;
    }
    puVar4 = puVar4 + 0xb;
  }
  ExceptionList = local_10;
  return puVar4;
}


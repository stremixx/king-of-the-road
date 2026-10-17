
void __thiscall FUN_004bc9a0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006448e3;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x20) != param_2) {
    ExceptionList = &local_c;
    *(int *)(param_1 + 0x20) = param_2;
    iVar3 = FUN_005ee8e0(param_2,s__TDTN_00671704);
    *(int *)(param_1 + 0x24) = iVar3;
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_00631d33(0x100);
      local_4 = 0;
      if (puVar4 != (undefined4 *)0x0) {
        piVar1 = *(int **)(param_1 + 0x20);
        FUN_005f1020(s__TDTN_00671704,5,1);
        puVar4[0xe] = 0;
        puVar4[0xf] = 0;
        local_4 = CONCAT31(local_4._1_3_,1);
        *puVar4 = &PTR_FUN_0064b348;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 0x14))(0,puVar4);
        }
        *(byte *)(puVar4 + 10) = *(byte *)(puVar4 + 10) & 0xfe;
        puVar4[5] = 0;
        puVar4[8] = 0;
        puVar4[6] = 0;
        puVar5 = puVar4 + 0x3e;
        puVar4[7] = 0;
        puVar6 = (undefined4 *)(param_1 + 0x18);
        iVar3 = 2;
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar5[-0x2e] = uVar2;
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(undefined4 **)(param_1 + 0x24) = puVar4;
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 0x24) = 0;
      ExceptionList = local_c;
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(0,iVar3);
  }
  ExceptionList = local_c;
  return;
}



undefined4 __fastcall FUN_006049d0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00649540;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffc0;
  local_28 = 1;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar2 = FUN_00604800(DAT_007230f0,
                       *(undefined4 *)(DAT_007230c4 + 0x14 + *(int *)(param_1 + 0x34) * 0x18),
                       (undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 8));
  if (iVar2 == 0) {
    local_2c = 0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_2c,&DAT_00667468);
  }
  piVar1 = *(int **)(param_1 + 0x38);
  iVar2 = (**(code **)(*piVar1 + 0x2c))
                    (piVar1,0,*(undefined4 *)(param_1 + 8),&local_24,&local_18,&local_20,&local_1c,0
                    );
  if (iVar2 == 0) {
    puVar4 = *(undefined4 **)(param_1 + 4);
    puVar5 = local_24;
    for (uVar3 = local_18 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = local_18 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    if (local_1c != 0) {
      puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + local_18);
      puVar5 = local_20;
      for (uVar3 = local_1c >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = local_1c & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
    }
    (**(code **)(**(int **)(param_1 + 0x38) + 0x4c))
              (*(int **)(param_1 + 0x38),local_24,local_18,local_20,local_1c);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x40))
              (*(int **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
    (**(code **)(**(int **)(param_1 + 0x38) + 0x3c))
              (*(int **)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44));
    (**(code **)(**(int **)(param_1 + 0x38) + 0x30))
              (*(int **)(param_1 + 0x38),0,0,*(int *)(param_1 + 0x28) != 0);
    ExceptionList = local_10;
    return local_28;
  }
  local_30 = 0;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_30,&DAT_00667468);
}


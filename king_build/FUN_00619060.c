
void __fastcall FUN_00619060(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006498bb;
  local_c = ExceptionList;
  piVar5 = (int *)(param_1 + 8);
  local_18 = 10;
  ExceptionList = &local_c;
  do {
    if (*piVar5 == 0) {
      puVar1 = (undefined4 *)FUN_00631d33(0x50);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        FUN_005eed00(s_sharpTerrainTree_0067e8c0,9);
        puVar1[0xf] = 0;
        puVar1[0x10] = 7;
        *puVar1 = &PTR_FUN_006522f8;
        puVar1[0x13] = piVar5;
      }
      *piVar5 = (int)puVar1;
      *(byte *)(puVar1 + 10) = *(byte *)(puVar1 + 10) | 1;
      local_4 = 0xffffffff;
      *(undefined4 *)(*piVar5 + 0x30) = 1;
      *(undefined4 *)(*piVar5 + 0x34) = 0x32;
      *(undefined4 *)(*piVar5 + 0x38) = 2;
      uVar2 = FUN_00631d33(8);
      *(undefined4 *)(*piVar5 + 0x3c) = uVar2;
      **(undefined4 **)(*piVar5 + 0x3c) = 0;
      *(undefined2 *)(*(int *)(*piVar5 + 0x3c) + 4) = 2;
      *(undefined2 *)(*(int *)(*piVar5 + 0x3c) + 6) = 0;
      *(undefined4 *)(*piVar5 + 0x44) = 2;
      iVar3 = FUN_00631d33(0x18);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        puVar1 = (undefined4 *)(iVar3 + 8);
        iVar4 = 2;
        do {
          puVar1[-2] = 0;
          puVar1[-1] = 0;
          *puVar1 = 0;
          puVar1 = puVar1 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(int *)(*piVar5 + 0x48) = iVar3;
    }
    piVar5 = piVar5 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  *(undefined4 *)(param_1 + 0x30) = 0;
  ExceptionList = local_c;
  return;
}


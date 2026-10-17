
void FUN_004c4e50(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644ba6;
  pvStack_c = ExceptionList;
  DAT_006951b0 = param_1;
  DAT_006951a4 = param_1;
  ExceptionList = &pvStack_c;
  if (DAT_006951a8 == (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    puVar4 = (undefined4 *)FUN_00631d33(0x2d54);
    local_4 = 0;
    if (puVar4 == (undefined4 *)0x0) {
      DAT_006951a8 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = 100;
      FUN_0061d173(puVar4 + 1,0x74,100,FUN_004c5080,thunk_FUN_005f9db0);
      DAT_006951a8 = puVar4 + 1;
    }
  }
  local_4 = 0xffffffff;
  piVar5 = (int *)FUN_005ee8e0(*(undefined4 *)(param_1 + 0x20c),s___ThatSortNode_00671678);
  uVar6 = 0;
  do {
    puVar4 = DAT_006951a8;
    *(undefined4 *)((int)DAT_006951a8 + uVar6 + 0x44) = 0;
    piVar1 = (int *)((int)puVar4 + uVar6);
    puVar4 = (undefined4 *)FUN_00631d33(0x2c);
    local_4 = 1;
    if (puVar4 == (undefined4 *)0x0) {
      puVar7 = (undefined4 *)0x0;
    }
    else {
      puVar7 = puVar4 + 1;
      *puVar4 = 1;
      FUN_0061d173(puVar7,0x28,1,&LAB_004c5060,FUN_004c4870);
    }
    local_4 = 0xffffffff;
    *(undefined2 *)puVar7 = 2;
    *(undefined2 *)(puVar7 + 1) = 4;
    puVar4 = (undefined4 *)FUN_00631d33(0x10);
    puVar7[2] = puVar4;
    *puVar4 = 0;
    *(undefined4 *)(puVar7[2] + 4) = 0x3f800000;
    *(undefined4 *)(puVar7[2] + 8) = 0x3f800000;
    *(undefined4 *)(puVar7[2] + 0xc) = 0;
    puVar4 = (undefined4 *)FUN_00631d33(0x10);
    puVar7[3] = puVar4;
    *puVar4 = 0x3f800000;
    *(undefined4 *)(puVar7[3] + 4) = 0x3f800000;
    *(undefined4 *)(puVar7[3] + 8) = 0;
    *(undefined4 *)(puVar7[3] + 0xc) = 0;
    puVar4 = (undefined4 *)FUN_00631d33(0x10);
    puVar7[4] = puVar4;
    *puVar4 = 0xc0b00000;
    *(undefined4 *)(puVar7[4] + 4) = 0x40b00000;
    *(undefined4 *)(puVar7[4] + 8) = 0x40b00000;
    *(undefined4 *)(puVar7[4] + 0xc) = 0xc0b00000;
    puVar7[6] = 0;
    puVar4 = (undefined4 *)FUN_00631d33(0x10);
    puVar7[5] = puVar4;
    *puVar4 = 0xc0b00000;
    *(undefined4 *)(puVar7[5] + 4) = 0xc0b00000;
    *(undefined4 *)(puVar7[5] + 8) = 0x40b00000;
    *(undefined4 *)(puVar7[5] + 0xc) = 0x40b00000;
    *(byte *)((int)puVar7 + 1) = *(byte *)((int)puVar7 + 1) | 1;
    *(undefined2 *)((int)puVar7 + 0x22) = 0xfff;
    puVar7[9] = 0;
    FUN_005f9b80(puVar7,1);
    (**(code **)(*piVar1 + 0x48))();
    (**(code **)(*piVar5 + 0x14))(0,piVar1);
    *(byte *)(piVar1 + 10) = *(byte *)(piVar1 + 10) | 1;
    *(undefined4 *)(*(int *)((int)DAT_006951a8 + uVar6 + 0x34) + 0x24) = 0;
    iVar2 = uVar6 + 0x28;
    iVar3 = uVar6 + 0x28;
    uVar6 = uVar6 + 0x74;
    *(byte *)((int)DAT_006951a8 + iVar3) = *(byte *)((int)DAT_006951a8 + iVar2) | 1;
  } while (uVar6 < 0x2d50);
  ExceptionList = pvStack_c;
  return;
}


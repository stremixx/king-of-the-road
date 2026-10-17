
void __thiscall
FUN_005db270(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648823;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d9a20(param_2,param_3,param_4,param_5);
  iVar1 = *(int *)(param_1 + 0x1d0);
  uVar2 = *(undefined4 *)(iVar1 + 0x2104);
  if (iVar1 != 0) {
    local_4 = 0;
    FUN_004843e0();
    local_4 = 0xffffffff;
    FUN_0061ccb5(iVar1 + 0x1850,0x50,0x14,FUN_004843e0);
    FUN_00631d5c(iVar1);
  }
  puVar3 = (undefined4 *)FUN_00631d33(0x5200);
  local_4 = 1;
  if (puVar3 != (undefined4 *)0x0) {
    FUN_005ecfa0(*(undefined4 *)(param_1 + 0xc));
    puVar3[0x147c] = param_1;
    *puVar3 = &PTR_LAB_00651270;
    puVar3[0x147e] = param_1;
    *(undefined4 **)(param_1 + 0x1d0) = puVar3;
    puVar3[0x841] = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  uRam00002104 = uVar2;
  ExceptionList = local_c;
  return;
}


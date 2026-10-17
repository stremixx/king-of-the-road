
void __fastcall FUN_004c45d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00644b00;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064b5f4;
  puVar1 = (undefined4 *)param_1[10];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x490] = &PTR_LAB_0064b658;
    FUN_004c1790();
    puVar1[0x10] = &PTR_LAB_0064b5e0;
    FUN_004c1790();
    *puVar1 = &PTR_LAB_0064b71c;
    if (puVar1[0xe] != 0) {
      FUN_00631d5c(puVar1[0xe]);
      puVar1[0xe] = 0;
    }
    FUN_00631d5c(puVar1);
    param_1[10] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xc];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x10] = &PTR_LAB_0064b62c;
    puVar1[0x11] = 0;
    *puVar1 = &PTR_LAB_0064b71c;
    if (puVar1[0xe] != 0) {
      FUN_00631d5c(puVar1[0xe]);
      puVar1[0xe] = 0;
    }
    FUN_00631d5c(puVar1);
    param_1[0xc] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xb];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_0064b58c;
    local_4._0_1_ = 1;
    if ((int *)puVar1[0x10] != (int *)0x0) {
      (**(code **)(*(int *)puVar1[0x10] + 8))(1);
      puVar1[0x10] = 0;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    *puVar1 = &PTR_LAB_0064b71c;
    if (puVar1[0xe] != 0) {
      FUN_00631d5c(puVar1[0xe]);
      puVar1[0xe] = 0;
    }
    FUN_00631d5c(puVar1);
    param_1[0xb] = 0;
  }
  if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[8])(1);
    param_1[8] = 0;
  }
  if ((undefined4 *)param_1[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[9])(1);
    param_1[9] = 0;
  }
  puVar1 = (undefined4 *)param_1[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[0x10] = &PTR_LAB_0064b62c;
    puVar1[0x11] = 0;
    *puVar1 = &PTR_LAB_0064b71c;
    if (puVar1[0xe] != 0) {
      FUN_00631d5c(puVar1[0xe]);
      puVar1[0xe] = 0;
    }
    FUN_00631d5c(puVar1);
    param_1[0xd] = 0;
  }
  local_4 = 0xffffffff;
  FUN_005d2940();
  ExceptionList = pvStack_c;
  return;
}


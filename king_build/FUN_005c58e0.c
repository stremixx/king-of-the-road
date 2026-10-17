
void __fastcall FUN_005c58e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [28];
  undefined4 uStack_10c;
  undefined1 uStack_108;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_006482d4;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_00650c24;
  param_1[0x40] = &PTR_LAB_00650bd8;
  local_4 = 0;
  if (param_1[0x58] != 0) {
    FUN_005d1860();
    if ((undefined4 *)param_1[0x58] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x58])(1);
    }
  }
  if (param_1[0x59] != 0) {
    FUN_005d1860();
    if ((undefined4 *)param_1[0x59] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x59])(1);
    }
  }
  if (param_1[0x5a] != 0) {
    FUN_005d1860();
    if ((undefined4 *)param_1[0x5a] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x5a])(1);
    }
  }
  if ((param_1[0x5d] == 0) &&
     ((*(int *)(DAT_00706ecc + 0x1a0) != 0 || (*(int *)(param_1[9] + 0x1ef8) != 0)))) {
    FUN_006022c0();
    local_4._0_1_ = 1;
    FUN_00602790(param_1[0x5b],0);
    FUN_005c2d10(auStack_128);
    FUN_005c52d0(param_1[0x5b]);
    iVar1 = FUN_00631d33(0x1c);
    local_4._0_1_ = 2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_006022c0();
    }
    uStack_10c = param_1[0x5b];
    local_4._0_1_ = 1;
    uStack_108 = 0;
    FUN_006027f0(0x388,&uStack_10c,5);
    FUN_005c3780(uVar2);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00602560();
  }
  local_4 = 0xffffffff;
  FUN_005a3ee0();
  ExceptionList = pvStack_c;
  return;
}



void __thiscall FUN_005c4400(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_28 [28];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648148;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_005aa810(param_1[0x7be]);
  if ((iVar1 < 0) || (1000000 < iVar1)) {
    FUN_005d2520(s_Animation_history_by_frame_has_t_0067e7f0,0);
  }
  uVar2 = FUN_00631d33(iVar1);
  FUN_0061d8bf(uVar2,iVar1,1,param_1[0x7be]);
  FUN_005aa810(param_1[0x7be]);
  FUN_006022c0();
  local_4 = 0;
  FUN_00602850(uVar2,iVar1);
  iVar1 = FUN_006029d0();
  while (iVar1 == 0) {
    (**(code **)(*param_1 + 0xdc))(local_28,param_2,param_3);
    iVar1 = FUN_006029e0();
  }
  FUN_00631d5c(uVar2);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = pvStack_c;
  return;
}



void __fastcall FUN_004d0b20(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined1 local_2bc [48];
  undefined1 local_28c [48];
  undefined4 local_25c [148];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00644eab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064bbec;
  param_1[4] = &PTR_LAB_0064bb00;
  param_1[0x44] = &PTR_LAB_0064bab4;
  param_1[0x62] = &PTR_LAB_0064bab0;
  local_4 = 0;
  if (param_1[0x4d] != 0) {
    FUN_00546140();
    if (param_1[0x1427] == DAT_0068a8f0) {
      puVar6 = param_1 + 0xb1;
      puVar7 = local_25c;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_0057d570();
      FUN_005ab130();
      FUN_005ab130();
      FUN_0057d570();
      FUN_0057d5d0();
      iVar5 = FUN_004e5437();
      uVar3 = *(undefined4 *)(iVar5 + 0xc);
      thunk_FUN_00554c10();
      FUN_0041d3f0(param_1 + 0x1427);
      puVar8 = local_2bc;
      uVar1 = FUN_004cf610(uVar3,puVar8);
      iVar5 = FUN_004cf630(uVar1);
      iVar2 = FUN_004cf620();
      FUN_004cd6a0(iVar2 + iVar5 * 1000,uVar1,uVar3,puVar8);
    }
    else {
      iVar5 = FUN_005e4980();
      if (iVar5 == 0) goto LAB_004d0d5b;
      thunk_FUN_00554c10();
      FUN_0041d3f0(param_1 + 0x1427);
      uVar3 = FUN_0057d570(local_28c);
      FUN_0057d5d0(uVar3);
      uVar1 = FUN_004cf600();
      uVar4 = FUN_004cf610(uVar1);
      iVar5 = FUN_004cf630(uVar4);
      iVar2 = FUN_004cf620();
      FUN_004cd6a0(iVar2 + iVar5 * 1000,uVar4,uVar1,uVar3);
    }
    FUN_005e48c0();
  }
LAB_004d0d5b:
  local_4 = 0xffffffff;
  FUN_0055e340();
  ExceptionList = local_c;
  return;
}


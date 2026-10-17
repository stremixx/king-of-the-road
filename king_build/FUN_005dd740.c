
void __fastcall FUN_005dd740(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006489a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d1bf0(s___TreeGenerator_00681e70,&LAB_005a9b40);
  FUN_005d1bf0(s___TreeGenerator1_00681e5c,&LAB_005c81b0);
  FUN_005d1bf0(s___SeaGenerator_00681e4c,FUN_005a9e20);
  FUN_005d1e70();
  piVar1 = (int *)FUN_00631d33(0x28);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005d2890(400,s_taskinternal_00681e3c);
    *piVar1 = (int)&PTR_FUN_00651508;
    piVar1[8] = param_1;
    piVar1[9] = 400;
  }
  local_4 = 0xffffffff;
  FUN_005d2c20(piVar1);
  (**(code **)(*piVar1 + 0x18))(0);
  piVar1 = (int *)FUN_00631d33(0x28);
  puStack_8 = (undefined1 *)0x1;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005d2890(0,s_taskinternal_00681e3c);
    *piVar1 = (int)&PTR_FUN_00651508;
    piVar1[8] = param_1;
    piVar1[9] = 0;
  }
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_005d2c20(piVar1);
  (**(code **)(*piVar1 + 0x18))(0);
  piVar1 = (int *)FUN_00631d33(0x28);
  local_c = (void *)0x2;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005d2890(0x14,s_taskinternal_00681e3c);
    *piVar1 = (int)&PTR_FUN_00651508;
    piVar1[8] = param_1;
    piVar1[9] = 0x14;
  }
  local_c = (void *)0xffffffff;
  FUN_005d2c20(piVar1);
  piVar5 = (int *)0x0;
  (**(code **)(*piVar1 + 0x18))(0);
  piVar1 = (int *)FUN_00631d33(0x28);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_005d2890(0x1e,s_taskinternal_00681e3c);
    *piVar1 = (int)&PTR_FUN_00651508;
    piVar1[8] = param_1;
    piVar1[9] = 0x1e;
  }
  FUN_005d2c20(piVar1);
  uVar4 = 0;
  (**(code **)(*piVar1 + 0x18))(0);
  piVar1 = (int *)FUN_00631d33(0x28);
  if (piVar1 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_005d2890(10,s_taskinternal_00681e3c);
    *piVar1 = (int)&PTR_FUN_00651508;
    piVar1[8] = param_1;
    piVar1[9] = 10;
    piVar2 = piVar1;
  }
  FUN_005d2c20(piVar2);
  uVar3 = 0;
  (**(code **)(*piVar2 + 0x18))(0);
  if ((DAT_00701dec & 0x100) != 0) {
    piVar1 = (int *)FUN_00631d33(0x28);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_005d2890(0x15,s_taskinternal_00681e3c);
      *piVar1 = (int)&PTR_FUN_00651508;
      piVar1[8] = param_1;
      piVar1[9] = 0x15;
    }
    FUN_005d2c20(piVar1);
    (**(code **)(*piVar1 + 0x18))(0);
    piVar1 = (int *)FUN_00631d33(0x28);
    if (piVar1 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    else {
      FUN_005d2890(0x1f,s_taskinternal_00681e3c);
      *piVar1 = (int)&PTR_FUN_00651508;
      piVar1[8] = param_1;
      piVar1[9] = 0x1f;
    }
    FUN_005d2c20(piVar1);
    (**(code **)(*piVar1 + 0x18))(0);
    piVar5 = (int *)FUN_00631d33(0x28);
    if (piVar5 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar1 = piVar5;
      FUN_005d2890(0xb,s_taskinternal_00681e3c);
      *piVar5 = (int)&PTR_FUN_00651508;
      piVar5[8] = param_1;
      piVar5[9] = 0xb;
      piVar2 = piVar5;
      piVar5 = piVar1;
    }
    piVar1 = (int *)0xffffffff;
    FUN_005d2c20(piVar2);
    (**(code **)(*piVar2 + 0x18))(0);
  }
  if (*(int *)(param_1 + 0xbe4) != 0) {
    piVar5 = (int *)FUN_00631d33(0x28,uVar3,uVar4,piVar5);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      FUN_005d2890(0x28,s_taskinternal_00681e3c);
      *piVar5 = (int)&PTR_FUN_00651508;
      piVar5[8] = param_1;
      piVar5[9] = 0x28;
    }
    FUN_005d2c20(piVar5);
    (**(code **)(*piVar5 + 0x18))(0);
  }
  ExceptionList = piVar1;
  return;
}


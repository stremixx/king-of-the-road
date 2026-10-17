
void __fastcall thunk_FUN_005df860(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006489fb;
  pvStack_c = ExceptionList;
  iVar1 = *(int *)(param_1[0x75] + 0x78);
  ExceptionList = &pvStack_c;
  param_1[0x7a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x9a] = 0;
  }
  else {
    param_1[0x9a] = *(int *)(iVar1 + 0x50);
  }
  if (param_1[0x9a] != 0) {
    FUN_005f1c30(param_1 + 0xa3);
  }
  if (param_1[0x7a] != 0) {
    param_1[0xaf] = *(int *)(param_1[0x7a] + 0x4c);
  }
  if (param_1[0xaf] == 0) {
    FUN_005d9f00();
  }
  if ((undefined4 *)param_1[0x85] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x85])(1);
  }
  iVar1 = FUN_005ee8e0(0,s_Viewer_object_00681e9c);
  param_1[0x85] = iVar1;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00631d33(0x58);
    uStack_4 = 0;
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      FUN_005eed00(0,0x11);
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      *puVar2 = &PTR_FUN_0064b7cc;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      puVar2[0x13] = 0;
      puVar2[0x14] = 0;
      puVar2[0x15] = 0xffffffff;
    }
    uStack_4 = 0xffffffff;
    puVar2[0x11] = param_1[0x9a];
    puVar2[0x10] = param_1[0x85];
    param_1[0x85] = (int)puVar2;
  }
  FUN_005d95c0();
  (**(code **)(*param_1 + 0x8c))();
  param_1[0x2f8] = 1;
  ExceptionList = pvStack_c;
  return;
}


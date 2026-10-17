
undefined4 __thiscall FUN_00611990(int *param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006497eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[0xc] = param_3;
  param_1[0xb] = param_2;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  pvVar2 = _malloc(iVar1 * 0x90 + 1);
  param_1[0x1f] = (int)pvVar2;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  pvVar2 = _malloc(iVar1 << 3);
  param_1[0x21] = (int)pvVar2;
  iVar1 = (**(code **)(*param_1 + 0xc))();
  pvVar2 = _malloc(iVar1 << 3);
  param_1[0x23] = (int)pvVar2;
  if ((param_1[0x1f] != 0) && (param_1[0x21] != 0)) {
    FUN_0060b1e0();
    param_1[0x26] = 0x46ea6000;
    param_1[0x27] = 0x46ea6000;
    iVar1 = FUN_00631d33(0x24);
    uStack_4 = 0;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_006124f0(DAT_00724d98,DAT_00724da4,0xffffff,param_1);
    }
    uStack_4 = 0xffffffff;
    param_1[0x1c] = iVar1;
    FUN_00612980(0xbf000000);
    FUN_00612990(8000);
    ExceptionList = pvStack_c;
    return 1;
  }
  FUN_0060a190(0x88762714,s_File____s__Line_____ld__Date_____006714b0,
               s_C__Nek_VRAPPLVS_marine_test_inl_00684bac,0x116,s_Mar_19_2002_006714f8);
  ExceptionList = pvStack_c;
  return 0;
}


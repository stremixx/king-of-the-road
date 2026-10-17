
void __thiscall CWnd::~CWnd(CWnd *this)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_00652af0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((((extraout_ECX[7] != 0) && (extraout_ECX != (undefined4 *)&DAT_0072c9b8)) &&
      (extraout_ECX != (undefined4 *)&DAT_0072c978)) &&
     ((extraout_ECX != (undefined4 *)&DAT_0072c938 && (extraout_ECX != (undefined4 *)&DAT_0072c8f8))
     )) {
    FUN_00633c81();
  }
  if ((int *)extraout_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)extraout_ECX[0xd] + 4))(1);
  }
  iVar1 = extraout_ECX[0xe];
  if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x24) == extraout_ECX)) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00632889();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


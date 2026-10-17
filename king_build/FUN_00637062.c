
void FUN_00637062(void)

{
  int iVar1;
  CWnd *this;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_00653174;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_00637106();
  iVar1 = FUN_00639805();
  if (*(CWnd **)(iVar1 + 0xc4) == this) {
    iVar1 = FUN_00639805();
    *(undefined4 *)(iVar1 + 0xc4) = 0;
  }
  if (*(int *)(this + 0xa4) != 0) {
    FUN_00631d5c(*(int *)(this + 0xa4));
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00635a91();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00631951();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


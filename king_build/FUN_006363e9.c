
void FUN_006363e9(void)

{
  HDC__ *hdc;
  CDC *this;
  int unaff_EBP;
  
  FUN_0061f6cc();
  *(CDC **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_LAB_00653398;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(this + 4) != 0) {
    hdc = CDC::Detach(this);
    DeleteDC(hdc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


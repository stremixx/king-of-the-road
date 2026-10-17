
void __fastcall FUN_00635a91(int *param_1)

{
  LONG LVar1;
  
  if ((undefined *)(*param_1 + -0xc) != PTR_DAT_00684f1c) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_00635980();
    }
  }
  return;
}


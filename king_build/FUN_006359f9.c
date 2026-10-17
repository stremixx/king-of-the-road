
void FUN_006359f9(LONG *param_1)

{
  LONG LVar1;
  
  if (param_1 != (LONG *)PTR_DAT_00684f1c) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      FUN_00635980();
    }
  }
  return;
}


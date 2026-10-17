
void FUN_00507500(undefined4 param_1)

{
  int iVar1;
  undefined4 unaff_EDI;
  
  if (DAT_006cd2cc != (code *)0x0) {
    (*DAT_006cd2cc)(param_1);
    return;
  }
  FUN_0061dd12(param_1);
  iVar1 = FUN_0061c356(s_err_log_00673a98,&DAT_0066b4f4);
  if (iVar1 != 0) {
    FUN_0061d86c(iVar1,param_1);
    FUN_0061c25a(iVar1);
  }
  FUN_0061df73(0);
  FUN_006304f2(unaff_EDI);
  FUN_0062fc10();
  return;
}


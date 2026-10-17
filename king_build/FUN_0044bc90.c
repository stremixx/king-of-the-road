
void FUN_0044bc90(size_t param_1)

{
  void *pvVar1;
  undefined1 local_c [12];
  
  pvVar1 = _malloc(param_1);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      return;
    }
    if (DAT_0068c16c == (code *)0x0) break;
    (*DAT_0068c16c)();
    pvVar1 = _malloc(param_1);
  }
  FUN_00448220(s_bad_allocation_0066e484);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_00658d50);
}


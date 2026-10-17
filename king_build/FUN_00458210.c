
void FUN_00458210(size_t param_1)

{
  void *pvVar1;
  undefined1 local_c [12];
  
  do {
    if (DAT_0068c16c == (code *)0x0) {
      FUN_00448220(s_bad_allocation_0066e484);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00658d50);
    }
    (*DAT_0068c16c)();
    pvVar1 = _malloc(param_1);
  } while (pvVar1 == (void *)0x0);
  return;
}



int * __fastcall FUN_004481b0(int *param_1)

{
  void *pvVar1;
  undefined1 local_c [12];
  
  pvVar1 = _malloc(1000);
  while( true ) {
    if (pvVar1 != (void *)0x0) {
      *param_1 = (int)pvVar1;
      *(void **)pvVar1 = pvVar1;
      *(int *)(*param_1 + 4) = *param_1;
      return param_1;
    }
    if (DAT_0068c16c == (code *)0x0) break;
    (*DAT_0068c16c)();
    pvVar1 = _malloc(1000);
  }
  FUN_00448220(s_bad_allocation_0066e484);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_c,&DAT_00658d50);
}


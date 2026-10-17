
void * FUN_00631d33(size_t param_1)

{
  void *pvVar1;
  int iVar2;
  
  while( true ) {
    pvVar1 = _malloc(param_1);
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
    if (PTR_FUN_00684d88 == (undefined *)0x0) break;
    iVar2 = (*(code *)PTR_FUN_00684d88)(param_1);
    if (iVar2 == 0) {
      return (void *)0x0;
    }
  }
  return (void *)0x0;
}



undefined * FUN_0061f231(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00622273();
  if (*(int *)(iVar1 + 0x24) == 0) {
    pvVar2 = _malloc(0x86);
    *(void **)(iVar1 + 0x24) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      puVar3 = &DAT_0072d0c8;
      goto LAB_0061f25b;
    }
  }
  puVar3 = *(undefined **)(iVar1 + 0x24);
LAB_0061f25b:
  iVar1 = DAT_006880d0;
  if ((-1 < param_1) && (param_1 < DAT_006880d0)) {
    iVar1 = param_1;
  }
  FUN_0061e950(puVar3,(&PTR_s_No_error_00688020)[iVar1]);
  return puVar3;
}


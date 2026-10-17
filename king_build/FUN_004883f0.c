
undefined4 FUN_004883f0(uint *param_1,int *param_2,undefined4 param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = _malloc(0x4000);
  if (pvVar1 == (void *)0x0) {
    return 2;
  }
  iVar2 = FUN_00628539(param_3,0x8000);
  if (iVar2 == -1) {
    return 1;
  }
  iVar3 = FUN_00624902(iVar2,pvVar1,0x4000);
  while (iVar3 != 0) {
    *param_2 = *param_2 + iVar3;
    FUN_004880c0(param_1,pvVar1,iVar3);
    iVar3 = FUN_00624902(iVar2,pvVar1,0x4000);
  }
  *param_1 = ~*param_1;
  FUN_00620954(iVar2);
  FUN_0061c888(pvVar1);
  return 0;
}


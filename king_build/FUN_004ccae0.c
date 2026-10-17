
undefined4 FUN_004ccae0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_430 [255];
  int iStack_34;
  int iStack_30;
  
  puVar1 = local_430;
  for (iVar2 = 0x10c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  iVar2 = (**(code **)(*DAT_0071f86c + 0x6c))(DAT_0071f86c,local_430,0);
  if (((-1 < iVar2) && (iStack_34 == 0x1002)) && (iStack_30 == 0x5144)) {
    return 1;
  }
  return 0;
}


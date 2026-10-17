
void FUN_005d3b00(void)

{
  int iVar1;
  
  if (DAT_0071f888 != 0) {
    iVar1 = (**(code **)(*DAT_0071f858 + 0x48))(DAT_0071f858,2);
    while (iVar1 != 0) {
      iVar1 = (**(code **)(*DAT_0071f858 + 0x48))(DAT_0071f858,2);
    }
    DAT_0071f888 = 0;
  }
  return;
}


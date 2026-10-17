
void FUN_005d7910(void)

{
  if (DAT_0071f86c != (int *)0x0) {
    if (DAT_0071f868 != (int *)0x0) {
      (**(code **)(*DAT_0071f868 + 8))(DAT_0071f868);
      DAT_0071f868 = (int *)0x0;
    }
    if (DAT_0071f854 != (int *)0x0) {
      (**(code **)(*DAT_0071f854 + 8))(DAT_0071f854);
      DAT_0071f854 = (int *)0x0;
    }
    if (DAT_0071f860 != (int *)0x0) {
      (**(code **)(*DAT_0071f860 + 8))(DAT_0071f860);
      DAT_0071f860 = (int *)0x0;
    }
    if ((DAT_0071f85c != (int *)0x0) && (DAT_0071f814 == 0)) {
      (**(code **)(*DAT_0071f85c + 8))(DAT_0071f85c);
      DAT_0071f85c = (int *)0x0;
      DAT_0071f808 = 0;
    }
    if (DAT_0071f858 != (int *)0x0) {
      (**(code **)(*DAT_0071f858 + 8))(DAT_0071f858);
      DAT_0071f858 = (int *)0x0;
    }
    if (DAT_0071f864 != (int *)0x0) {
      (**(code **)(*DAT_0071f864 + 8))(DAT_0071f864);
      DAT_0071f864 = (int *)0x0;
    }
    (**(code **)(*DAT_0071f870 + 0x4c))(DAT_0071f870);
    (**(code **)(*DAT_0071f86c + 8))(DAT_0071f86c);
    DAT_0071f86c = (int *)0x0;
    (**(code **)(*DAT_0071f870 + 0x50))(DAT_0071f870,DAT_0071f880,8);
    (**(code **)(*DAT_0071f870 + 8))(DAT_0071f870);
    DAT_0071f870 = (int *)0x0;
    DAT_0071f84c = 0;
    DAT_0071f850 = 0;
  }
  return;
}


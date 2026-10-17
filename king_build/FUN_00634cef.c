
void FUN_00634cef(LPRECT param_1,int param_2)

{
  uint dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  
  dwExStyle = FUN_00632db4();
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = FUN_00632d9a();
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}


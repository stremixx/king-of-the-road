
void FUN_005ac200(int param_1,int param_2)

{
  tagPOINT local_8;
  
  if (DAT_0071f880 != (HWND)0x0) {
    local_8.x = param_1;
    local_8.y = param_2;
    ClientToScreen(DAT_0071f880,&local_8);
    SetCursorPos(local_8.x,local_8.y);
  }
  return;
}



void FUN_006351d2(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageA(&local_20);
  }
  FUN_006333b8();
  return;
}


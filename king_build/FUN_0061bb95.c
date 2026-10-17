
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0061bb95(void)

{
  HMODULE hModule;
  bool bVar1;
  
  if (DAT_0072ca10 == 0) {
    hModule = GetModuleHandleA("USER32");
    if ((((hModule != (HMODULE)0x0) &&
         (_DAT_0072c9f8 = GetProcAddress(hModule,"GetSystemMetrics"), _DAT_0072c9f8 != (FARPROC)0x0)
         ) && (DAT_0072c9fc = GetProcAddress(hModule,"MonitorFromWindow"),
              DAT_0072c9fc != (FARPROC)0x0)) &&
       (((DAT_0072ca00 = GetProcAddress(hModule,"MonitorFromRect"), DAT_0072ca00 != (FARPROC)0x0 &&
         (_DAT_0072ca04 = GetProcAddress(hModule,"MonitorFromPoint"), _DAT_0072ca04 != (FARPROC)0x0)
         ) && ((_DAT_0072ca0c = GetProcAddress(hModule,"EnumDisplayMonitors"),
               _DAT_0072ca0c != (FARPROC)0x0 &&
               (DAT_0072ca08 = GetProcAddress(hModule,"GetMonitorInfoA"),
               DAT_0072ca08 != (FARPROC)0x0)))))) {
      DAT_0072ca10 = 1;
      return true;
    }
    _DAT_0072c9f8 = (FARPROC)0x0;
    DAT_0072c9fc = (FARPROC)0x0;
    DAT_0072ca00 = (FARPROC)0x0;
    _DAT_0072ca04 = (FARPROC)0x0;
    DAT_0072ca08 = (FARPROC)0x0;
    _DAT_0072ca0c = (FARPROC)0x0;
    DAT_0072ca10 = 1;
    bVar1 = false;
  }
  else {
    bVar1 = DAT_0072ca08 != (FARPROC)0x0;
  }
  return bVar1;
}


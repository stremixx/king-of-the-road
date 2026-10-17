
undefined4 __thiscall FUN_0063224c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  HANDLE hThread;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  HANDLE local_10;
  HANDLE local_c;
  int local_8;
  
  _memset(&local_20,0,0x1c);
  local_20 = FUN_00639805();
  local_1c = param_1;
  local_10 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_c = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
  local_18 = param_2;
  if (local_10 != (HANDLE)0x0) {
    if (local_c != (HANDLE)0x0) {
      hThread = (HANDLE)FUN_0061f716(param_4,param_3,FUN_00631f54,&local_20,param_2 | 4,
                                     param_1 + 0x2c);
      *(HANDLE *)(param_1 + 0x28) = hThread;
      if (hThread == (HANDLE)0x0) {
        return 0;
      }
      ResumeThread(hThread);
      WaitForSingleObject(local_10,0xffffffff);
      CloseHandle(local_10);
      if ((param_2 & 4) != 0) {
        SuspendThread(*(HANDLE *)(param_1 + 0x28));
      }
      if (local_8 == 0) {
        SetEvent(local_c);
        return 1;
      }
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x28),0xffffffff);
      CloseHandle(*(HANDLE *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
      goto LAB_00632320;
    }
    CloseHandle(local_10);
  }
  if (local_c == (HANDLE)0x0) {
    return 0;
  }
LAB_00632320:
  CloseHandle(local_c);
  return 0;
}


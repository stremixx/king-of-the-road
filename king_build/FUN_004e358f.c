
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e358f(int param_1)

{
  DWORD DVar1;
  HANDLE pvVar2;
  float10 fVar3;
  float *lpBaseAddress;
  float **lpBuffer;
  SIZE_T nSize;
  CONTEXT *lpContext;
  SIZE_T *lpNumberOfBytesRead;
  float *local_5cc;
  float *local_5c0;
  uint local_5bc;
  SIZE_T local_5b8;
  BOOL local_5b4;
  int local_5b0;
  float *local_4f8;
  uint local_4f4;
  int local_2e0;
  int local_2dc;
  CONTEXT local_2d8;
  int local_c;
  BOOL local_8;
  
  _memset(&local_2d8,0,0x2cc);
  local_2d8.ContextFlags = 0x10007;
  local_2e0 = 0;
  while( true ) {
    if (2 < local_2e0) goto LAB_004e362c;
    if ((&DAT_00696438)[local_2e0] == 0) break;
    local_2e0 = local_2e0 + 1;
  }
  for (local_5b0 = 0; local_5b0 < 3; local_5b0 = local_5b0 + 1) {
    (&DAT_00696438)[local_5b0] = 0;
  }
  FUN_004e2e5f();
LAB_004e362c:
  for (local_2e0 = 0; local_2e0 < 3; local_2e0 = local_2e0 + 1) {
    if ((&DAT_00696438)[local_2e0] == 0) {
      return;
    }
  }
  lpContext = &local_2d8;
  pvVar2 = GetCurrentThread();
  local_8 = GetThreadContext(pvVar2,lpContext);
  if (local_8 == 0) {
    FUN_0061dd12();
  }
  else {
    local_4f4 = local_2d8.Eip;
    local_4f8 = (float *)local_2d8.Ebp;
    local_c = FUN_0061c356(s_warn_log_006727d0);
    if (local_c != 0) {
      FUN_0061d86c(local_c,s_stack__006727dc);
      if (param_1 != 0) {
        FUN_0061d86c(local_c,s_at__s_006727e8,param_1);
      }
      FUN_0061d86c(local_c,s_when_absolute_time__f_006727f0,(double)_DAT_0069641c);
      if (DAT_00696424 != 0) {
        FUN_0061d86c(local_c,s___app_>absulute_time__f_00672808,
                     *(undefined4 *)(DAT_00696424 + 0xb98),*(undefined4 *)(DAT_00696424 + 0xb9c));
        fVar3 = (float10)FUN_004e1fd9();
        FUN_0061d86c(local_c,s_when_lengthFrame__f_00672824,(double)fVar3);
      }
    }
    for (local_2dc = 0; local_2dc < 100; local_2dc = local_2dc + 1) {
      if (local_c != 0) {
        FUN_0061d86c(local_c,s_eip__08X_ebp__08X_0067283c,local_2d8.Eip - (int)PTR_FUN_0067254c);
        FUN_0061eb00();
      }
      for (local_2e0 = 0; local_2e0 < 3; local_2e0 = local_2e0 + 1) {
        if ((((&DAT_00696438)[local_2e0] != 0) &&
            ((uint)(&DAT_00696438)[local_2e0] <= local_2d8.Eip)) &&
           (local_2d8.Eip < *(uint *)(&DAT_00696444 + local_2e0 * 4))) {
          if (local_c != 0) {
            FUN_0061d86c(local_c);
          }
          break;
        }
      }
      DVar1 = local_2d8.Ebp;
      if (local_2e0 != 3) break;
      if ((local_2d8.Ebp & 3) != 0) {
        if (local_c != 0) {
          FUN_0061d86c(local_c,s_break___Context_Ebp___3_00672878);
        }
        break;
      }
      if ((local_2dc != 0) && (local_2d8.Ebp <= local_4f8)) {
        if (local_c != 0) {
          FUN_0061d86c(local_c,s_break____i__0_____Context_Ebp_<__00672894);
        }
        break;
      }
      if ((float *)0x800000 < local_2d8.Ebp) {
        if (local_c != 0) {
          FUN_0061d86c(local_c,s_break__Context_Ebp_>_0x800000_006728c8);
        }
        break;
      }
      if (local_2d8.Ebp < local_2d8.Esp) {
        if (local_c != 0) {
          FUN_0061d86c(local_c,s_break__Context_Ebp_<_Context_Esp_006728e8);
        }
        break;
      }
      if (((DAT_00696438 != 0) && (local_c != 0)) &&
         ((local_2dc != 0 &&
          ((local_4f8 <= local_2d8.Ebp && ((int)((int)local_4f8 - local_2d8.Ebp) >> 2 < 0x1000))))))
      {
        for (local_5cc = local_4f8; local_5cc <= DVar1; local_5cc = local_5cc + 1) {
          FUN_0061d86c(local_c,s__08X__08X__e_0067290c,local_5cc,*local_5cc,(double)*local_5cc);
          FUN_0061eb00();
        }
      }
      local_4f4 = local_2d8.Eip;
      local_4f8 = (float *)local_2d8.Ebp;
      local_5b8 = 8;
      lpNumberOfBytesRead = &local_5b8;
      nSize = 8;
      lpBuffer = &local_5c0;
      lpBaseAddress = (float *)local_2d8.Ebp;
      pvVar2 = GetCurrentProcess();
      local_5b4 = ReadProcessMemory(pvVar2,lpBaseAddress,lpBuffer,nSize,lpNumberOfBytesRead);
      if (local_5b4 == 0) break;
      local_2d8.Eip = local_5bc;
      local_2d8.Ebp = (DWORD)local_5c0;
      if (local_5bc == 1) {
        if (local_c != 0) {
          FUN_0061d86c(local_c,s_break__Context_Eip__1_00672920);
        }
        break;
      }
    }
    if (local_c != 0) {
      FUN_0061c25a();
    }
  }
  return;
}



bool __thiscall
FUN_00633991(int *param_1,DWORD param_2,LPCSTR param_3,LPCSTR param_4,DWORD param_5,int param_6,
            int param_7,int param_8,int param_9,HWND param_10,HMENU param_11,LPVOID param_12)

{
  int iVar1;
  HWND pHVar2;
  bool bVar3;
  LPVOID local_34;
  HINSTANCE local_30;
  HMENU local_2c;
  HWND local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  DWORD local_14;
  LPCSTR local_10;
  LPCSTR local_c;
  DWORD local_8;
  
  local_8 = param_2;
  local_c = param_3;
  local_10 = param_4;
  local_14 = param_5;
  local_18 = param_6;
  local_1c = param_7;
  local_20 = param_8;
  local_24 = param_9;
  local_28 = param_10;
  local_2c = param_11;
  iVar1 = FUN_00639a37();
  local_30 = *(HINSTANCE *)(iVar1 + 8);
  local_34 = param_12;
  iVar1 = (**(code **)(*param_1 + 0x5c))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xa4))();
    bVar3 = false;
  }
  else {
    FUN_00633903(param_1);
    pHVar2 = CreateWindowExA(local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                             local_28,local_2c,local_30,local_34);
    iVar1 = FUN_0063394f();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0xa4))();
    }
    bVar3 = pHVar2 != (HWND)0x0;
  }
  return bVar3;
}


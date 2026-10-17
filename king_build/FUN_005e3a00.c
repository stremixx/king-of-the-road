
double * __thiscall FUN_005e3a00(double *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  float10 fVar3;
  _SECURITY_ATTRIBUTES local_c;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  fVar3 = (float10)thunk_FUN_00603580();
  *param_1 = (double)fVar3;
  uVar1 = FUN_00632097(&LAB_005e39b0,param_1,0,0,0,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  local_c.nLength = 0xc;
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  local_c.bInheritHandle = 1;
  pvVar2 = CreateEventA(&local_c,0,0,s_dlmpevent_006821dc);
  *(HANDLE *)((int)param_1 + 0x24) = pvVar2;
  return param_1;
}


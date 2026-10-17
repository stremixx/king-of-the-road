
undefined4 __fastcall FUN_00602f90(undefined4 *param_1)

{
  LPVOID *ppv;
  HRESULT HVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_20c [129];
  LPCSTR pCStack_8;
  
  FUN_006031f0();
  ppv = (LPVOID *)(param_1 + 2);
  HVar1 = CoCreateInstance((IID *)&DAT_006544b0,(LPUNKNOWN)0x0,1,(IID *)&DAT_006544c0,ppv);
  if (-1 < HVar1) {
    piVar3 = *ppv;
    piVar4 = local_20c;
    iVar2 = (**(code **)*piVar3)(piVar3,&DAT_006544a0);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(*piVar4 + 0x1c))(piVar4,param_1 + 4);
      (**(code **)(*piVar3 + 8))(piVar3);
      if (-1 < iVar2) {
        FUN_00603190();
        MultiByteToWideChar(0,0,pCStack_8,-1,(LPWSTR)&stack0xfffffdec,0x104);
        iVar2 = (**(code **)(*(int *)*ppv + 0x34))(*ppv,&stack0xfffffdec,0);
        if (iVar2 < 0) {
          param_1[1] = 2;
          FUN_006031f0();
          return 0xffffffff;
        }
        *param_1 = 1;
        return 0;
      }
    }
    (**(code **)(*(int *)*ppv + 8))(*ppv);
    *ppv = (LPVOID)0x0;
  }
  return 0xffffffff;
}


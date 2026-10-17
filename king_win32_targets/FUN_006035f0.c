
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006035f0(void)

{
  double dVar1;
  HANDLE pvVar2;
  int nPriority;
  DWORD DVar3;
  DWORD DVar4;
  float10 fVar5;
  float10 fVar6;
  int nPriority_00;
  undefined8 local_10;
  
  pvVar2 = GetCurrentThread();
  nPriority = GetThreadPriority(pvVar2);
  nPriority_00 = 2;
  pvVar2 = GetCurrentThread();
  SetThreadPriority(pvVar2,nPriority_00);
  fVar5 = (float10)FUN_00603580();
  DVar3 = timeGetTime();
  Sleep(2000);
  fVar6 = (float10)FUN_00603580();
  DVar4 = timeGetTime();
  local_10 = (ulonglong)DVar4;
  dVar1 = (double)local_10;
  local_10 = (ulonglong)DVar3;
  _DAT_00683330 = _DAT_00683330 / (((double)fVar6 - (double)fVar5) / (dVar1 - (double)local_10));
  pvVar2 = GetCurrentThread();
  SetThreadPriority(pvVar2,nPriority);
  return 0;
}


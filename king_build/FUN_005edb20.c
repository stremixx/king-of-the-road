
undefined4 __thiscall FUN_005edb20(int *param_1,int param_2)

{
  int iVar1;
  HGLOBAL hMem;
  LPVOID pvVar2;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
        hMem = GlobalAlloc(0,*(SIZE_T *)(iVar1 + 0x10));
        *(HGLOBAL *)(iVar1 + 0x34) = hMem;
        pvVar2 = GlobalLock(hMem);
        *(LPVOID *)(iVar1 + 0x30) = pvVar2;
        if (pvVar2 == (LPVOID)0x0) {
          FUN_005d2520(s_Not_enough_memory_for_overlay_sy_00682788,0);
        }
      }
    }
    for (param_1 = (int *)*param_1; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
      (**(code **)(*param_1 + 0x18))(param_1[0xc]);
    }
    return 1;
  }
  return 1;
}


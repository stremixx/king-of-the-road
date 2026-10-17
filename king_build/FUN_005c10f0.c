
undefined4 __thiscall FUN_005c10f0(int *param_1,DWORD param_2)

{
  int *piVar1;
  DWORD lDistanceToMove;
  DWORD nNumberOfBytesToRead;
  DWORD *pDVar2;
  DWORD DVar3;
  BOOL BVar4;
  int iVar5;
  LONG local_4;
  
  pDVar2 = (DWORD *)(param_2 * 0x10 + *param_1);
  local_4 = 0;
  lDistanceToMove = *pDVar2;
  nNumberOfBytesToRead = pDVar2[1];
  DVar3 = SetFilePointer((HANDLE)param_1[9],lDistanceToMove,&local_4,0);
  if (((DVar3 == lDistanceToMove) &&
      (BVar4 = ReadFile((HANDLE)param_1[9],(LPVOID)param_1[0x226],nNumberOfBytesToRead,&param_2,
                        (LPOVERLAPPED)0x0), BVar4 != 0)) && (param_2 == nNumberOfBytesToRead)) {
    piVar1 = param_1 + 0x115;
    param_1[0x10] = nNumberOfBytesToRead;
    param_1[0x11a] = param_1[0x117] * param_1[0x116] * 3;
    iVar5 = ICDecompress(param_1[0x220],0,param_1 + 0xb,param_1[0x226],piVar1,param_1[0x227]);
    if (iVar5 == 0) {
      if (*(short *)((int)param_1 + 0x462) == 8) {
        iVar5 = ICSendMessage(param_1[0x220],0x401e,param_1 + 0xb,piVar1);
        if (iVar5 != 0) {
          return 1;
        }
        if ((*(short *)((int)param_1 + 0x462) == 8) && (param_1[0x11d] != 0)) {
          ICSendMessage(param_1[0x220],0x401d,piVar1,0);
          FUN_005d3570(param_1[0x21f],0,param_1[0x11d]);
        }
      }
      return 0;
    }
  }
  return 1;
}


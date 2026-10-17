
undefined4 __thiscall FUN_005c1220(int param_1,LPVOID param_2,DWORD *param_3)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD *pDVar3;
  DWORD DVar4;
  BOOL BVar5;
  int *piVar6;
  DWORD *nNumberOfBytesToRead;
  int iVar7;
  undefined4 uVar8;
  DWORD local_8;
  LONG local_4;
  
  pDVar3 = param_3;
  if (*(int *)(param_1 + 0x8a0) == 0) {
    *param_3 = 0;
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0x8a0) == 1) {
    *param_3 = 0;
    return 0x80004005;
  }
  if (*(int *)(param_1 + 0xc) <= *(int *)(param_1 + 0x888)) {
    *param_3 = 0;
    return 0;
  }
  local_4 = 0;
  local_8 = 0;
  pDVar1 = (DWORD *)*param_3;
  do {
    if (pDVar1 == (DWORD *)0x0) {
LAB_005c13c6:
      *pDVar3 = local_8;
      return 0;
    }
    piVar6 = (int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x888) * 0x10);
    iVar7 = *(int *)(param_1 + 0x88c);
    iVar2 = *piVar6;
    nNumberOfBytesToRead = (DWORD *)(piVar6[1] - iVar7);
    if (pDVar1 < nNumberOfBytesToRead) {
      DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 0x28),iVar7 + iVar2,&local_4,0);
      if (((DVar4 != *(int *)(param_1 + 0x88c) + iVar2) ||
          (BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x28),param_2,*pDVar3,(LPDWORD)&param_3,
                            (LPOVERLAPPED)0x0), BVar5 == 0)) || (param_3 != (DWORD *)*pDVar3)) {
        uVar8 = 0;
        *pDVar3 = (int)param_3 + local_8;
LAB_005c141f:
        FUN_005d2250(s_error_in_read_avi_0067e358,uVar8);
        return 0x80004005;
      }
      local_8 = local_8 + (int)param_3;
      *(int *)(param_1 + 0x88c) = *(int *)(param_1 + 0x88c) + (int)param_3;
      *pDVar3 = 0;
    }
    else {
      DVar4 = SetFilePointer(*(HANDLE *)(param_1 + 0x28),iVar7 + iVar2,&local_4,0);
      if (((DVar4 != *(int *)(param_1 + 0x88c) + iVar2) ||
          (BVar5 = ReadFile(*(HANDLE *)(param_1 + 0x28),param_2,(DWORD)nNumberOfBytesToRead,
                            (LPDWORD)&param_3,(LPOVERLAPPED)0x0), BVar5 == 0)) ||
         (param_3 != nNumberOfBytesToRead)) {
        uVar8 = 1;
        *pDVar3 = (int)param_3 + local_8;
        goto LAB_005c141f;
      }
      *pDVar3 = *pDVar3 - (int)param_3;
      local_8 = local_8 + (int)param_3;
      iVar7 = *(int *)(param_1 + 0x888) + 1;
      param_2 = (LPVOID)((int)param_2 + (int)param_3);
      *(undefined4 *)(param_1 + 0x88c) = 0;
      *(int *)(param_1 + 0x888) = iVar7;
      if (*(int *)(param_1 + 0xc) <= iVar7) {
        if ((*(byte *)(param_1 + 0x8c0) & 2) != 0) {
          *(undefined4 *)(param_1 + 0x888) = 0;
          *pDVar3 = local_8;
          return 0;
        }
        goto LAB_005c13c6;
      }
    }
    pDVar1 = (DWORD *)*pDVar3;
  } while( true );
}


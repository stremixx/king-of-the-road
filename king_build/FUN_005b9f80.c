
undefined4 FUN_005b9f80(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  void *unaff_EDI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647ddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00701df8 != 0) {
    ExceptionList = &local_c;
    if (DAT_00701e08 == 0) {
      ExceptionList = &local_c;
      iVar1 = FUN_00631d33(0x46c);
      local_4 = 0;
      if (iVar1 == 0) {
        DAT_00701e08 = 0;
      }
      else {
        FUN_0061d173(iVar1,0xbc,6,&LAB_005ba0d0,FUN_005ba0e0);
        *(undefined4 *)(iVar1 + 0x468) = 0;
        DAT_00701e08 = iVar1;
      }
    }
    if ((*(uint *)(param_1 + 0x68) & 0x400000) == 0) {
      iVar1 = 0;
      if (0 < *(int *)(DAT_00701e08 + 0x468)) {
        piVar2 = (int *)(DAT_00701e08 + 0xc);
        do {
          if ((((*(int *)(param_1 + 8) == piVar2[-1]) && (*(int *)(param_1 + 0xc) == *piVar2)) &&
              (*(int *)(param_1 + 0x58) == piVar2[0x13])) &&
             (((*(int *)(param_1 + 0x5c) == piVar2[0x14] &&
               (*(int *)(param_1 + 0x60) == piVar2[0x15])) &&
              (*(int *)(param_1 + 100) == piVar2[0x16])))) {
            iVar4 = *(int *)(DAT_00701e08 + 0xb8 + iVar1 * 0xbc);
            iVar1 = DAT_00701e08 + iVar1 * 0xbc;
            if (iVar4 != 0) {
              iVar4 = iVar4 + -1;
              *(int *)(iVar1 + 0xb8) = iVar4;
              iVar1 = *(int *)(iVar1 + 0x7c + iVar4 * 4);
              goto LAB_005ba059;
            }
            break;
          }
          iVar1 = iVar1 + 1;
          piVar2 = piVar2 + 0x2f;
        } while (iVar1 < *(int *)(DAT_00701e08 + 0x468));
      }
    }
    iVar1 = 0;
LAB_005ba059:
    *param_2 = iVar1;
    if (iVar1 != 0) {
      ExceptionList = local_c;
      return 0;
    }
  }
  local_4 = 0xffffffff;
  DAT_00701e00 = DAT_00701e00 + 1;
  uVar3 = (**(code **)(*DAT_0071f86c + 0x18))(DAT_0071f86c,param_1,param_2,0);
  ExceptionList = unaff_EDI;
  return uVar3;
}


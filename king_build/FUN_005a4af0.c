
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005a4af0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_44 [48];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00647c66;
  pvStack_14 = ExceptionList;
  iVar6 = *(int *)(param_1 + 0x20);
  ExceptionList = &pvStack_14;
  if ((*(double *)(iVar6 + 0xb98) <= *(double *)(param_1 + 0x38) + *(double *)(param_1 + 0x30)) ||
     (ExceptionList = &pvStack_14, (*(byte *)(param_1 + 0x48) & 1) != 0)) goto LAB_005a4cc0;
  ExceptionList = &pvStack_14;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar6 + 0xb98);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar6 + 0xb9c);
  iVar6 = *(int *)(iVar6 + 0x210);
  iVar3 = _rand();
  fVar1 = (float)(iVar3 % 600 + -300);
  pfVar4 = (float *)FUN_005db380(local_44);
  fVar2 = pfVar4[3] * _DAT_0064c0b8 + pfVar4[6] * _DAT_0064b31c + fVar1 * *pfVar4 + pfVar4[9];
  fVar1 = pfVar4[4] * _DAT_0064c0b8 + pfVar4[7] * _DAT_0064b31c + fVar1 * pfVar4[1] + pfVar4[10];
  if (iVar6 == 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x20) + 0x1e8);
    if (iVar6 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(undefined4 *)(iVar6 + 0x4c);
    }
    iVar6 = FUN_00631d33(0xc0);
    local_c = 1;
    if (iVar6 == 0) goto LAB_005a4c93;
    piVar5 = (int *)FUN_005a47d0(*(undefined4 *)(param_1 + 0x20),uVar7,fVar2,fVar1,0x41a00000,0,
                                 0x40340000,*(undefined4 *)(param_1 + 0x28),
                                 *(undefined4 *)(param_1 + 0x24));
  }
  else {
    iVar3 = FUN_00631d33(0xc0);
    local_c = 0;
    if (iVar3 == 0) {
LAB_005a4c93:
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)FUN_005a47d0(*(undefined4 *)(param_1 + 0x20),iVar6,fVar2,fVar1,0x41a00000,0,
                                   0x40340000,*(undefined4 *)(param_1 + 0x28),
                                   *(undefined4 *)(param_1 + 0x24));
    }
  }
  local_c = 0xffffffff;
  piVar5[0x2e] = *(int *)(param_1 + 0x40);
  piVar5[0x2f] = *(int *)(param_1 + 0x44);
  (**(code **)(*piVar5 + 0x18))(1);
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) | 2;
LAB_005a4cc0:
  if (*(double *)(param_1 + 0x30) + _DAT_0064a660 < *(double *)(*(int *)(param_1 + 0x20) + 0xb98)) {
    *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x48) & 0xfffffffd;
  }
  FUN_005d29a0(1);
  ExceptionList = pvStack_14;
  return;
}


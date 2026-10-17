
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00429930(void)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_4;
  
  iVar4 = 1;
  FUN_00477c00(&local_4);
  if (local_4 != DAT_0068a8f0) {
    if (_DAT_0064a5a8 < *(double *)(local_4 + 0x300)) {
      iVar4 = 2;
    }
    if (_DAT_0064a830 < *(double *)(local_4 + 0x300)) {
      iVar4 = 4;
    }
  }
  DAT_0068aa04 = (DAT_0068aa04 + 1) % 0x37;
  DAT_0068aa08 = (DAT_0068aa08 + 1) % 0x37;
  (&DAT_0068a928)[DAT_0068aa04] = (&DAT_0068a928)[DAT_0068aa04] - (&DAT_0068a928)[DAT_0068aa08];
  uVar1 = 0x18 / (ulonglong)(longlong)iVar4;
  uVar2 = (undefined4)uVar1;
  uVar3 = (undefined4)((uint)(&DAT_0068a928)[DAT_0068aa04] / uVar1);
  iVar4 = (int)((ulonglong)(uint)(&DAT_0068a928)[DAT_0068aa04] % uVar1);
  if (iVar4 == 0) {
    uVar5 = 1;
    uVar3 = 0x4072c000;
    FUN_0041d3f0(&stack0x00000004);
    uVar3 = FUN_00477580(uVar2,iVar4,uVar3,uVar5);
  }
  return uVar3;
}


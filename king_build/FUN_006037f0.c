
void __fastcall FUN_006037f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar1 = DAT_00723084;
  FUN_00604120();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar1;
      if (*(ushort *)(iVar3 + 0x24) < *(ushort *)(param_1 + 0x24)) {
        *(int *)(param_1 + 0x14) = iVar2;
        *(int *)(param_1 + 0x10) = iVar3;
        iVar1 = param_1;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x10) = param_1;
          iVar1 = DAT_00723084;
        }
        DAT_00723084 = iVar1;
        bVar4 = iVar3 != 0;
        *(int *)(iVar3 + 0x14) = param_1;
        iVar3 = iVar2;
        if (bVar4) goto LAB_0060385d;
        break;
      }
      iVar2 = iVar3;
      iVar1 = *(int *)(iVar3 + 0x10);
    } while (*(int *)(iVar3 + 0x10) != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(int *)(param_1 + 0x14) = iVar3;
  DAT_00723088 = param_1;
  if (iVar3 == 0) {
    DAT_00723084 = param_1;
    FUN_00604130();
    return;
  }
  *(int *)(iVar3 + 0x10) = param_1;
LAB_0060385d:
  FUN_00604130();
  return;
}


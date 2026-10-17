
void FUN_00480ff0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00640108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00490cf0(param_1,&local_10,&local_18,&local_14);
  local_4 = 0;
  if (local_10 == DAT_0066eddc) {
    iVar2 = FUN_00473470(&DAT_0068c120);
    FUN_004747c0(uVar1);
    FUN_00480770(iVar2 + 0x310);
    FUN_00480770(iVar2 + 0x68);
    iVar4 = *(int *)(iVar2 + 0x88);
    if (iVar4 != *(int *)(iVar2 + 0x8c)) {
      do {
        FUN_00480770(iVar4);
        iVar4 = iVar4 + 8;
      } while (iVar4 != *(int *)(iVar2 + 0x8c));
    }
    iVar4 = *(int *)(iVar2 + 0x1fc);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + 0x1c), iVar3 != *(int *)(iVar4 + 0x20))) {
      iVar4 = iVar3 + 0x50;
      do {
        FUN_00480770(iVar4 + -8);
        FUN_00480770(iVar4);
        iVar3 = iVar3 + 0x90;
        iVar4 = iVar4 + 0x90;
      } while (iVar3 != *(int *)(*(int *)(iVar2 + 0x1fc) + 0x20));
    }
    iVar4 = *(int *)(iVar2 + 0x200);
    if ((iVar4 != 0) && (iVar3 = *(int *)(iVar4 + 0x1c), iVar3 != *(int *)(iVar4 + 0x20))) {
      iVar4 = iVar3 + 0x50;
      do {
        FUN_00480770(iVar4 + -8);
        FUN_00480770(iVar4);
        iVar3 = iVar3 + 0x90;
        iVar4 = iVar4 + 0x90;
      } while (iVar3 != *(int *)(*(int *)(iVar2 + 0x200) + 0x20));
    }
    FUN_00422480(&param_1,iVar2);
  }
  local_4 = 0xffffffff;
  FUN_00490d20(uVar1,local_18,local_14);
  ExceptionList = local_c;
  return;
}


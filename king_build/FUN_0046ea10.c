
void FUN_0046ea10(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar3 = param_5;
  iVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f928;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046ed00(param_1,param_2);
  local_4 = 0;
  if (local_10 == 0) {
    iVar2 = (param_2 - param_1) / 0xc;
    if (iVar2 < 0xf) {
      iVar2 = param_1;
      if (param_1 != param_2) {
        while (iVar2 = iVar2 + 0xc, iVar2 != param_2) {
          FUN_0046fbe0(param_1,iVar2,0,param_5);
        }
      }
    }
    else {
      iVar2 = param_1 + (iVar2 / 2) * 0xc;
      FUN_0046ee00(param_1,iVar2,param_5);
      FUN_0046ee00(iVar2,param_2,param_5);
      FUN_0046f5e0(param_1,iVar2,param_2,(iVar2 - param_1) / 0xc,(param_2 - iVar2) / 0xc,param_5);
    }
  }
  else {
    iVar4 = ((param_2 - param_1) / 0xc + 1) / 2;
    iVar1 = param_1 + iVar4 * 0xc;
    if (local_14 < iVar4) {
      FUN_0046f0c0(param_1,iVar1,local_10,local_14,param_5);
      FUN_0046f0c0(iVar1,param_2,local_10,local_14,param_5);
    }
    else {
      iVar4 = iVar1 - param_1;
      param_1 = 7;
      iVar4 = iVar4 / 0xc;
      FUN_0046fea0(iVar2,iVar1,7,param_5);
      if (7 < iVar4) {
        do {
          FUN_00470170(iVar2,iVar1,local_10,param_1,param_5);
          FUN_00470170(local_10,local_10 + iVar4 * 0xc,iVar2,param_1 * 2,param_5);
          param_1 = param_1 << 2;
        } while (param_1 < iVar4);
      }
      iVar4 = (param_2 - iVar1) / 0xc;
      param_5 = 7;
      FUN_0046fea0(iVar1,param_2,7,uVar3);
      if (7 < iVar4) {
        do {
          FUN_00470170(iVar1,param_2,local_10,param_5,uVar3);
          FUN_00470170(local_10,local_10 + iVar4 * 0xc,iVar1,param_5 * 2,uVar3);
          param_5 = param_5 << 2;
        } while (param_5 < iVar4);
      }
    }
    FUN_0046f8a0(iVar2,iVar1,param_2,(iVar1 - iVar2) / 0xc,(param_2 - iVar1) / 0xc,local_10,local_14
                 ,uVar3);
  }
  FUN_0061c888(local_10);
  ExceptionList = local_c;
  return;
}


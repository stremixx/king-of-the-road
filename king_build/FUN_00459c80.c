
void __fastcall FUN_00459c80(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1[4];
  if (((param_1[5] != iVar1) && (iVar1 != 0)) && (*param_1 + 1 != 0)) {
    FUN_0044b440(iVar1,*param_1 + 1);
  }
  uVar2 = *param_1 + 8U & 0xfffffff8;
  if (uVar2 != 0) {
    FUN_0044b440(param_1[5],uVar2);
  }
  return;
}


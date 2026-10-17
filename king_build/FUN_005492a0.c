
void __fastcall FUN_005492a0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0xc);
  if ((iVar1 == 1) || (iVar1 == 2)) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xc) = 4;
    fVar2 = (float10)FUN_004e2035();
    *(float *)(param_1 + 8) = (float)fVar2;
    (**(code **)(*DAT_0069518c + 0x40))(0);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      FUN_00549a20();
      FUN_00631d5c(iVar1);
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00561340(int param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar2 = __ftol();
  if ((iVar2 < 0x16) && (5 < iVar2)) {
    uVar5 = *(undefined4 *)(param_1 + 0xc60);
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xc60);
    bVar1 = true;
    uVar6 = 1;
  }
  FUN_004e409c(uVar5,uVar6);
  bVar3 = *(int *)(param_1 + 0xc54) == 0;
  if (bVar3) {
    uVar5 = *(undefined4 *)(param_1 + 0xc5c);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0xc5c);
  }
  FUN_004e409c(uVar5,!bVar3);
  fVar4 = (float10)FUN_004e2035();
  fVar4 = fVar4 - (float10)*(float *)(param_1 + 0xc50);
  if ((float10)_DAT_0064a830 < fVar4) {
    *(undefined4 *)(param_1 + 0xc54) = 0;
  }
  if ((float10)_DAT_0064a658 < fVar4) {
    if (*(int *)(param_1 + 0xc54) == 0) {
      fVar4 = (float10)FUN_004e2035();
      *(float *)(param_1 + 0xc50) = (float)fVar4;
    }
    *(undefined4 *)(param_1 + 0xc54) = 1;
  }
  if (bVar1) {
    FUN_004e409c(*(undefined4 *)(param_1 + 0xc58),1);
    return;
  }
  FUN_004e409c(*(undefined4 *)(param_1 + 0xc58),0);
  return;
}


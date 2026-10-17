
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00427a00(void)

{
  int iVar1;
  uint extraout_ECX;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_4;
  
  FUN_00477c00(&local_4);
  iVar1 = local_4;
  if ((local_4 != DAT_0068a8f0) && (*(int *)(local_4 + 100) == 5)) {
    uVar2 = *(uint *)(local_4 + 0x60);
    if ((uVar2 & 0x4000) != 0) {
      fVar3 = (float10)FUN_00401000();
      *(double *)(iVar1 + 0x328) = (double)(fVar3 - (float10)*(double *)(iVar1 + 0x318));
      uVar2 = extraout_ECX;
    }
    if (_DAT_0066b698 < *(double *)(local_4 + 0x328)) {
      uVar5 = 0;
      uVar4 = 0xd;
      FUN_0041d3f0(&local_4);
      FUN_004015a0(uVar2,uVar4,uVar5);
      FUN_00427510();
    }
  }
  return;
}


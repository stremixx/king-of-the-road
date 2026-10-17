
undefined4 FUN_00427510(void)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  float10 fVar4;
  int local_4;
  
  FUN_00477c00(&local_4);
  if (local_4 != DAT_0068a8f0) {
    if (*(int *)(local_4 + 100) == 5) {
      FUN_00417580(local_4);
      uVar3 = FUN_0040e1d0(s_DISQUALIFIED_0066ca60);
      FUN_0056a570(uVar3);
      cVar2 = FUN_00417560(local_4);
      if (cVar2 != '\0') {
        FUN_004257e0();
        *(undefined4 *)(local_4 + 0x20c) = 0;
        *(undefined4 *)(local_4 + 0x210) = 0;
        *(undefined4 *)(local_4 + 0x214) = 0xffffffff;
      }
      FUN_004772b0(local_4);
    }
    FUN_00419570();
    iVar1 = local_4;
    fVar4 = (float10)FUN_00401000();
    *(double *)(iVar1 + 0x328) = (double)(fVar4 - (float10)*(double *)(iVar1 + 0x318));
    if (DAT_0068c0e8 == 0) {
      *(undefined4 *)(local_4 + 0x218) = 0;
    }
    FUN_00427000(local_4);
  }
  return 0;
}


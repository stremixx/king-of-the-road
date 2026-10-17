
void FUN_00402be0(void)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  LONG LVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_31;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063adf0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044fdc0();
  uVar10 = 0;
  if (DAT_0068c03c - DAT_0068c038 >> 2 != 0) {
    do {
      local_30 = 0;
      piVar3 = *(int **)(DAT_0068c038 + uVar10 * 4);
      local_4 = 0;
      iVar9 = *piVar3;
      if (iVar9 == piVar3[1]) {
        iVar9 = 0;
      }
      uVar5 = FUN_0044f5f0(iVar9);
      FUN_0044a800(iVar9,uVar5);
      FUN_0044a7e0(&local_30,&local_31);
      local_4._0_1_ = 1;
      local_28 = uVar10;
      FUN_0044a940(&local_24,&local_2c);
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_2c != 0) {
        FUN_0044b580();
      }
      local_4 = 0xffffffff;
      if (local_30 != 0) {
        FUN_0044b580();
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(DAT_0068c03c - DAT_0068c038 >> 2));
  }
  FUN_0044fdc0();
  uVar10 = 0;
  if (DAT_0068be64 - DAT_0068be60 >> 2 != 0) {
    do {
      local_30 = 0;
      puVar4 = *(undefined4 **)(DAT_0068be60 + uVar10 * 4);
      local_4 = 2;
      pcVar8 = (char *)*puVar4;
      if (pcVar8 == (char *)puVar4[1]) {
        pcVar8 = (char *)0x0;
      }
      cVar2 = *pcVar8;
      pcVar6 = pcVar8;
      while (cVar2 != '\0') {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar1;
      }
      FUN_0044a800(pcVar8,(int)pcVar6 - (int)pcVar8);
      FUN_0044a7e0(&local_30,&local_31);
      local_4._0_1_ = 3;
      local_28 = uVar10;
      FUN_0044a940(&local_24,&local_2c);
      local_4 = CONCAT31(local_4._1_3_,2);
      if ((local_2c != 0) && (LVar7 = InterlockedDecrement((LONG *)(local_2c + 4)), LVar7 == 0)) {
        FUN_0044f150();
      }
      local_4 = 0xffffffff;
      if ((local_30 != 0) && (LVar7 = InterlockedDecrement((LONG *)(local_30 + 4)), LVar7 == 0)) {
        FUN_0044f150();
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(DAT_0068be64 - DAT_0068be60 >> 2));
  }
  FUN_0044fdc0();
  uVar10 = 0;
  if (DAT_0068c02c - DAT_0068c028 >> 2 != 0) {
    do {
      local_2c = 0;
      puVar4 = *(undefined4 **)(DAT_0068c028 + uVar10 * 4);
      local_4 = 4;
      pcVar8 = (char *)*puVar4;
      if (pcVar8 == (char *)puVar4[1]) {
        pcVar8 = (char *)0x0;
      }
      cVar2 = *pcVar8;
      pcVar6 = pcVar8;
      while (cVar2 != '\0') {
        pcVar1 = pcVar6 + 1;
        pcVar6 = pcVar6 + 1;
        cVar2 = *pcVar1;
      }
      FUN_0044a800(pcVar8,(int)pcVar6 - (int)pcVar8);
      local_24 = local_2c;
      if (local_2c != 0) {
        InterlockedIncrement((LONG *)(local_2c + 4));
      }
      local_4._0_1_ = 5;
      local_20 = uVar10;
      FUN_0044fa60(DAT_0068be80 + 1);
      FUN_0044f980(local_18,&local_24);
      local_4 = CONCAT31(local_4._1_3_,4);
      if ((local_24 != 0) && (LVar7 = InterlockedDecrement((LONG *)(local_24 + 4)), LVar7 == 0)) {
        FUN_0044f150();
      }
      local_4 = 0xffffffff;
      if ((local_2c != 0) && (LVar7 = InterlockedDecrement((LONG *)(local_2c + 4)), LVar7 == 0)) {
        FUN_0044f150();
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)(DAT_0068c02c - DAT_0068c028 >> 2));
  }
  ExceptionList = local_c;
  return;
}


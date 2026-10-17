
void __fastcall FUN_004019a0(int param_1)

{
  int *piVar1;
  void **ppvVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063ad47;
  local_c = ExceptionList;
  piVar1 = (int *)(param_1 + 4);
  piVar3 = (int *)**(int **)(param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (piVar3 != *(int **)(param_1 + 4)) {
    do {
      FUN_00631d5c(piVar3[2]);
      piVar3 = (int *)*piVar3;
      ppvVar2 = ExceptionList;
    } while (piVar3 != (int *)*piVar1);
  }
  ExceptionList = ppvVar2;
  piVar3 = *(int **)*piVar1;
  if (piVar3 != (undefined4 *)*piVar1) {
    do {
      piVar4 = piVar3;
      piVar3 = (int *)*piVar4;
      FUN_00401aa0();
      *piVar4 = (int)DAT_0068c128;
      DAT_0068c164 = 0;
      DAT_0068c128 = piVar4;
    } while (piVar3 != (int *)*piVar1);
  }
  local_4 = 0xffffffff;
  *(int *)*piVar1 = *piVar1;
  piVar3 = (int *)(-(uint)(param_1 != 0) & (uint)piVar1);
  *(int *)(*piVar1 + 4) = *piVar1;
  piVar1 = *(int **)*piVar3;
  if (piVar1 != (int *)*piVar3) {
    do {
      piVar4 = piVar1;
      piVar1 = (int *)*piVar4;
      FUN_00401aa0();
      *piVar4 = (int)DAT_0068c128;
      DAT_0068c164 = 0;
      DAT_0068c128 = piVar4;
    } while (piVar1 != (int *)*piVar3);
  }
  *(int *)*piVar3 = *piVar3;
  *(int *)(*piVar3 + 4) = *piVar3;
  piVar3 = (int *)*piVar3;
  FUN_00401aa0();
  *piVar3 = (int)DAT_0068c128;
  DAT_0068c128 = piVar3;
  DAT_0068c164 = 0;
  ExceptionList = local_c;
  return;
}


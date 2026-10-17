
void __fastcall FUN_00488780(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void **ppvVar3;
  uint uVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00640713;
  local_c = ExceptionList;
  local_4 = 1;
  piVar5 = *(int **)param_1[6];
  ExceptionList = &local_c;
  ppvVar3 = &local_c;
  if (piVar5 != (int *)param_1[6]) {
    do {
      piVar1 = (int *)*piVar5;
      FUN_0048a770(0);
      FUN_0044b440(piVar5,0x2c);
      piVar5 = piVar1;
      ppvVar3 = ExceptionList;
    } while (piVar1 != (int *)param_1[6]);
  }
  ExceptionList = ppvVar3;
  *(undefined4 *)param_1[6] = param_1[6];
  *(undefined4 *)(param_1[6] + 4) = param_1[6];
  puVar2 = (undefined4 *)param_1[6];
  FUN_00401aa0();
  *puVar2 = DAT_0068c138;
  DAT_0068c164 = 0;
  piVar5 = (int *)param_1[3];
  uVar4 = param_1[5] - (int)piVar5;
  DAT_0068c138 = puVar2;
  if (uVar4 != 0) {
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar5 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar5;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar5);
    }
  }
  piVar5 = (int *)*param_1;
  uVar4 = param_1[2] - (int)piVar5;
  if (uVar4 != 0) {
    if (0x80 < uVar4) {
      FUN_0061c888(piVar5);
      ExceptionList = local_c;
      return;
    }
    FUN_00401aa0();
    *piVar5 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar5;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}



void __fastcall FUN_00553d80(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x234;
  FUN_00580910(*(undefined4 *)(param_1 + 0x334),iVar1);
  FUN_00580980(param_1 + 0x1d4,s__Vehicle__returnToLast_00679300);
  FUN_00580db0(param_1 + 0x1e0,0);
  if (*(int *)(param_1 + 0x5464) != 0) {
    FUN_00561420(*(undefined4 *)(param_1 + 0x334),iVar1);
  }
  if ((*(int *)(param_1 + 0x5460) != 0) && (*(int *)(param_1 + 0x2aac) == 1)) {
    FUN_004f0840(*(undefined4 *)(param_1 + 0x334),iVar1);
    FUN_004f1650(param_1 + 0x1d4);
    FUN_004f16a0(param_1 + 0x1e0);
  }
  return;
}


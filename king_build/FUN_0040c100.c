
void __fastcall FUN_0040c100(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)param_1[0x16];
  uVar3 = param_1[0x18] - (int)piVar1;
  if (uVar3 != 0) {
    if (uVar3 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  if (((param_1[2] & 0x10000U) == 0) && (iVar2 = *param_1, iVar2 != 0)) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    param_1 = (int *)*param_1;
    if ((param_1[1] == 0) && (param_1 != (int *)0x0)) {
      (**(code **)(*param_1 + 0xc))(1);
    }
  }
  return;
}


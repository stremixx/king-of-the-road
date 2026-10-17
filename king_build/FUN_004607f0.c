
int * FUN_004607f0(int *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                  int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_stack_00000084;
  undefined4 *in_stack_00000088;
  int in_stack_0000008c;
  
  for (; (puVar1 = in_stack_00000084, param_1 != param_2 &&
         ((*param_1 != param_3 || (param_1[3] != param_6)))); param_1 = param_1 + 0x24) {
  }
  for (; puVar1 != in_stack_00000088; puVar1 = puVar1 + 4) {
    FUN_00460d40(puVar1);
  }
  iVar2 = in_stack_0000008c - (int)in_stack_00000084 >> 4;
  if (iVar2 != 0) {
    uVar3 = iVar2 * 0x10;
    if (0x80 < uVar3) {
      FUN_00457ad0(in_stack_00000084);
      return param_1;
    }
    iVar2 = FUN_0044b6d0(uVar3);
    FUN_0044b910();
    *in_stack_00000084 = *(undefined4 *)(&DAT_0068c124 + iVar2 * 4);
    *(undefined4 **)(&DAT_0068c124 + iVar2 * 4) = in_stack_00000084;
    FUN_0044ba20();
  }
  return param_1;
}


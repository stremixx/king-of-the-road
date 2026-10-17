
undefined4 __thiscall
FUN_00590d60(int param_1,int param_2,undefined4 param_3,int *param_4,int *param_5)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x2530) != 0) && (*(int *)(param_1 + 0x252c) != 0)) && (-1 < param_2))
     && (param_2 < *(int *)(param_1 + 0x252c))) {
    param_2 = param_2 * 0x14;
    iVar1 = *(int *)(*(int *)(param_1 + 0x2530) + param_2 + 4);
    FUN_00588b50(param_3);
    if (*(int *)(param_2 + 4 + *(int *)(param_1 + 0x2530)) != iVar1) {
      *param_4 = *param_4 + 1;
      if (*(int *)(param_2 + 4 + *(int *)(param_1 + 0x2530)) ==
          *(int *)(param_2 + 8 + *(int *)(param_1 + 0x2530))) {
        *param_5 = *param_5 + 1;
      }
      return 1;
    }
  }
  return 0;
}


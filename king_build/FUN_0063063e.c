
int * __thiscall FUN_0063063e(int *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = FUN_0062fde3(1);
  if (iVar2 != 0) {
    if (param_3 != 0) {
      if (param_3 != 1) {
        do {
          iVar2 = FUN_0062fd0e();
          if (iVar2 == -1) {
            puVar1 = (uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
            *puVar1 = *puVar1 | 1;
            if (uVar3 == 0) {
              puVar1 = (uint *)(*(int *)(*param_1 + 4) + 8 + (int)param_1);
              *puVar1 = *puVar1 | 2;
            }
            break;
          }
          if (iVar2 == param_4) {
            if (param_1[1] != 0) {
              param_1[2] = param_1[2] + 1;
              FUN_0062fcd5();
            }
            break;
          }
          if (param_2 != 0) {
            *(char *)(uVar3 + param_2) = (char)iVar2;
          }
          FUN_0062fcd5();
          uVar3 = uVar3 + 1;
        } while (uVar3 < param_3 - 1U);
      }
      param_1[2] = param_1[2] + uVar3;
    }
    FUN_0062ff90();
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    *(undefined1 *)(uVar3 + param_2) = 0;
  }
  param_1[1] = 0;
  return param_1;
}


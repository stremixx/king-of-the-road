
void FUN_0048b000(ushort *param_1,ushort *param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*param_1;
  if (uVar1 == *param_2) {
    param_1 = param_1 + uVar1 + 3;
    param_2 = param_2 + uVar1 + 3;
    if (uVar1 != 0) {
      do {
        uVar1 = uVar1 - 1;
        param_2 = param_2 + -1;
        param_1 = param_1 + -1;
        if (*param_1 != *param_2) {
          return;
        }
      } while (0 < (int)uVar1);
    }
  }
  return;
}



void __thiscall FUN_0061af60(int *param_1,int *param_2,undefined2 param_3)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_00631d33(2);
  if (puVar1 == (undefined2 *)0x0) {
    puVar1 = (undefined2 *)0x0;
  }
  else {
    *puVar1 = param_3;
  }
  *param_1 = (int)puVar1;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[1] = 0;
  return;
}



void __thiscall FUN_00565960(int param_1,int param_2)

{
  float10 fVar1;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0xcb0) = param_2;
    *(undefined4 *)(param_1 + 0xcb4) = 0;
    FUN_00565a00(6);
    fVar1 = (float10)FUN_004e2035();
    *(float *)(param_1 + 0xcd0) = (float)fVar1;
  }
  return;
}


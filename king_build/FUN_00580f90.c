
void __thiscall FUN_00580f90(int param_1,uint param_2)

{
  float10 fVar1;
  
  *(uint *)(param_1 + 0x37c) = *(uint *)(param_1 + 0x37c) | param_2;
  fVar1 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0x388) = (float)fVar1;
  return;
}


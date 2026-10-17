
void FUN_00604dec(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulonglong)uVar1 >> 0x20);
  return;
}


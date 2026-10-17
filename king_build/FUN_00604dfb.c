
/* WARNING: Removing unreachable block (ram,0x00604e01) */

void FUN_00604dfb(undefined4 *param_1)

{
  undefined8 uVar1;
  
  cpuid_basic_info(0);
  uVar1 = rdtsc();
  *param_1 = (int)uVar1;
  param_1[1] = (int)((ulonglong)uVar1 >> 0x20);
  return;
}


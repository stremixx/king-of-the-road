
/* WARNING: Removing unreachable block (ram,0x00513067) */
/* WARNING: Removing unreachable block (ram,0x0051305b) */

undefined8 FUN_00513050(void)

{
  undefined8 uVar1;
  
  cpuid_basic_info(0);
  uVar1 = rdtsc();
  cpuid_basic_info(0);
  return uVar1;
}


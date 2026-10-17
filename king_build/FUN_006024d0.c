
/* WARNING: Removing unreachable block (ram,0x006024eb) */
/* WARNING: Removing unreachable block (ram,0x006024f3) */
/* WARNING: Removing unreachable block (ram,0x00602505) */

void __fastcall FUN_006024d0(int param_1)

{
  undefined4 local_4;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (*(int *)(param_1 + 4) - *(int *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_4 = 8;
  FUN_0046e460(*(undefined4 *)(param_1 + 8),&local_4,&stack0x00000000);
  local_4 = 0;
  FUN_0046e460(*(undefined4 *)(param_1 + 8),&local_4,&stack0x00000000);
  *(undefined4 *)(param_1 + 0x18) = 8;
  return;
}


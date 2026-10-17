
void FUN_004e95c6(void)

{
  int local_8;
  
  DAT_0069642c = 0;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    if (*(int *)(&DAT_006964e0 + local_8 * 4) != 0) {
      FUN_0061c25a(*(undefined4 *)(&DAT_006964e0 + local_8 * 4));
    }
    *(undefined4 *)(&DAT_006964e0 + local_8 * 4) = 0;
  }
  return;
}


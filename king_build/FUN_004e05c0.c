
void FUN_004e05c0(int param_1)

{
  DAT_0067a1f4 = 0;
  DAT_006ee1ac = *(undefined4 *)(param_1 + 0xa94);
  DAT_006ee1b0 = *(undefined4 *)(param_1 + 0xa98);
  *(code **)(param_1 + 0xa94) = FUN_005448f0;
  *(undefined1 **)(param_1 + 0xa98) = &LAB_00544c80;
  if ((*(int *)(DAT_006cdbcc + 0x524) == 0) && (*(int *)(DAT_006cdbcc + 0x514) < 2)) {
    FUN_00568220(param_1);
  }
  DAT_006ce300 = *(undefined4 *)(param_1 + 0xa94);
  DAT_006ce304 = *(undefined4 *)(param_1 + 0xa98);
  *(code **)(param_1 + 0xa94) = FUN_0052e330;
  *(undefined1 **)(param_1 + 0xa98) = &LAB_0052e5e0;
  return;
}


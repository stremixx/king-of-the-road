
void FUN_005fc430(int param_1)

{
  if ((undefined4 *)(&DAT_00722a08)[param_1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(&DAT_00722a08)[param_1])();
    (&DAT_00722a08)[param_1] = 0;
  }
  return;
}


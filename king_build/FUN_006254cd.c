
void FUN_006254cd(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_006204a3();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_006204a3();
    *puVar1 = 0x22;
    return;
  }
  return;
}


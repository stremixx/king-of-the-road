
uint FUN_0062afd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  DAT_007355e0 = 0;
  puVar1 = (undefined4 *)FUN_006204a3();
  *puVar1 = 0;
  iVar2 = FUN_00629fe0(DAT_0072d590,&DAT_0072d594 + DAT_007355e0,0x8000 - DAT_007355e0);
  while (((iVar2 != 0 && (iVar2 != -1)) &&
         (DAT_007355e0 = DAT_007355e0 + iVar2, DAT_007355e0 < 0x8000))) {
    iVar2 = FUN_00629fe0(DAT_0072d590,&DAT_0072d594 + DAT_007355e0,0x8000 - DAT_007355e0);
  }
  if (DAT_007355e0 == 0) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    FUN_0062b1f0();
  }
  DAT_007355e4 = 1;
  DAT_00769ef8 = DAT_00769ef8 + DAT_007355e0;
  return (uint)DAT_0072d594;
}


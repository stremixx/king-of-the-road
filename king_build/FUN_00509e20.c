
undefined4 FUN_00509e20(void)

{
  int iVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  DAT_006cd2d0 = 0;
  iVar1 = FUN_0061c356(PTR_s___vehicle_tech_00673a62_2_00673a58,&DAT_0066f3e8);
  local_8 = 0;
  FUN_0061d8bf(&local_8,4,1,iVar1);
  if (DAT_006967c0 != 0) {
    if (iVar1 == 0) {
      return DAT_006cd2d0;
    }
    iVar2 = FUN_0061dd53(iVar1,local_8 + 0x2f32c + DAT_006cd28c * 4,0);
    if (((((iVar2 == 0) && (local_4 = iVar2, FUN_0061d8bf(&local_4,4,1,iVar1), local_4 == 0x36c)) &&
         (iVar2 = FUN_0061d8bf(&DAT_006cd2ac,1,4,iVar1), iVar2 == 4)) &&
        ((((iVar2 = FUN_0061d8bf(&DAT_006cd2b0,1,4,iVar1), iVar2 == 4 &&
           (iVar2 = FUN_0061d8bf(&DAT_006cd2b4,1,4,iVar1), iVar2 == 4)) &&
          ((iVar2 = FUN_0061d8bf(&DAT_006cd2b8,1,4,iVar1), iVar2 == 4 &&
           ((iVar2 = FUN_0061d8bf(&DAT_006cd2bc,1,4,iVar1), iVar2 == 4 &&
            (iVar2 = FUN_0061d8bf(&DAT_006cd2c0,1,4,iVar1), iVar2 == 4)))))) &&
         (iVar2 = FUN_0061d8bf(&DAT_006cd2c4,1,4,iVar1), iVar2 == 4)))) &&
       (((iVar2 = FUN_0061d8bf(&DAT_006cd2c8,1,4,iVar1), iVar2 == 4 &&
         (iVar2 = FUN_0061d8bf(&DAT_006c5ac8,0x36c,0x23,iVar1), iVar2 == 0x23)) &&
        ((*(byte *)(iVar1 + 0xc) & 0x10) == 0)))) {
      DAT_006cd2d0 = 1;
    }
  }
  if (iVar1 != 0) {
    FUN_0061c25a(iVar1);
  }
  return DAT_006cd2d0;
}


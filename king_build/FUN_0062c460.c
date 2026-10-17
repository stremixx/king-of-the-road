
undefined4 FUN_0062c460(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = DAT_007355e4;
  DAT_0072d590 = param_1;
  piVar1 = (int *)(&DAT_0072d594 + DAT_007355e4);
  DAT_007355e4 = *(ushort *)(&DAT_0072d5b0 + DAT_007355e4) + DAT_007355e4 + 0x1e +
                 (uint)*(ushort *)(&DAT_0072d5ae + DAT_007355e4);
  if ((DAT_007355e0 < DAT_007355e4) || (*piVar1 != 0x4034b50)) {
    pcVar3 = s__s___s__not_a_valid_zip_file_0068916c;
  }
  else {
    DAT_00688734 = (uint)(byte)(&DAT_0072d59c)[iVar2];
    if ((DAT_00688734 == 0) || (DAT_00688734 == 8)) {
      DAT_0077a41c = (byte)(&DAT_0072d59a)[iVar2] & 1;
      if (((&DAT_0072d59a)[iVar2] & 1) != 0) {
        FUN_0061d86c(&DAT_006852e0,s__s___s__encrypted_file____use_un_0068918c,DAT_00769efc,
                     &DAT_00769df4);
        DAT_00779f58 = 1;
        return 1;
      }
      DAT_0077a420 = 1;
      DAT_0077a424 = ((byte)(&DAT_0072d59a)[iVar2] & 8) >> 3;
      return 0;
    }
    pcVar3 = s__s___s__first_entry_not_deflated_006891b4;
  }
  FUN_0061d86c(&DAT_006852e0,pcVar3,DAT_00769efc,&DAT_00769df4);
  DAT_00779f58 = 1;
  return 1;
}


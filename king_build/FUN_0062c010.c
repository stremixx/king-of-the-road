
undefined4 FUN_0062c010(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  DAT_0072d590 = param_1;
  DAT_007355d4 = param_2;
  FUN_0062c200();
  FUN_0062c3b0();
  iVar1 = *(int *)(&DAT_0077a1cc + DAT_0077a3a0 * 4);
  uVar8 = 0;
  DAT_0077a410 = 0;
  DAT_0077a334 = 0;
  uVar10 = (1 << ((byte)DAT_0077a414 & 0x1f)) - 1;
  uVar6 = DAT_0077a414;
  uVar7 = DAT_007355e4;
  while( true ) {
    if (DAT_0077a410 < (int)uVar6) {
      do {
        if (uVar7 < DAT_007355e0) {
          uVar11 = (uint)(byte)(&DAT_0072d594)[uVar7];
          DAT_007355e4 = uVar7 + 1;
          DAT_0077a334 = uVar8;
        }
        else {
          uVar11 = FUN_0062afd0(0);
          uVar6 = DAT_0077a414;
        }
        DAT_0077a410 = DAT_0077a410 + 8;
        uVar8 = DAT_0077a334 << 8 | uVar11;
        uVar7 = DAT_007355e4;
        DAT_0077a334 = uVar8;
      } while (DAT_0077a410 < (int)uVar6);
    }
    uVar2 = uVar8 >> ((char)DAT_0077a410 - (char)uVar6 & 0x1fU) & uVar10;
    uVar11 = (uint)(byte)(&DAT_007355ec)[uVar2];
    if (uVar11 == 0) {
      param_1 = (uint *)(&DAT_0077a338 + DAT_0077a414 * 4);
      iVar3 = DAT_0077a410;
      uVar5 = uVar10;
      uVar11 = DAT_0077a414;
      do {
        uVar11 = uVar11 + 1;
        param_1 = param_1 + 1;
        uVar5 = uVar5 * 2 + 1;
        uVar9 = DAT_0077a334;
        iVar4 = DAT_0077a410;
        uVar6 = DAT_0077a414;
        while (DAT_0077a334 = uVar8, DAT_0077a410 = iVar3, DAT_0077a414 = uVar6,
              DAT_0077a410 < (int)uVar11) {
          if (uVar7 < DAT_007355e0) {
            uVar9 = (uint)(byte)(&DAT_0072d594)[uVar7];
            DAT_007355e4 = uVar7 + 1;
          }
          else {
            DAT_0077a334 = uVar9;
            DAT_0077a410 = iVar4;
            uVar9 = FUN_0062afd0(0);
          }
          uVar9 = DAT_0077a334 << 8 | uVar9;
          iVar4 = DAT_0077a410 + 8;
          uVar7 = DAT_007355e4;
          uVar8 = uVar9;
          uVar6 = DAT_0077a414;
          iVar3 = iVar4;
        }
        uVar2 = DAT_0077a334 >> ((char)DAT_0077a410 - (char)uVar11 & 0x1fU) & uVar5;
        iVar3 = DAT_0077a410;
        uVar8 = DAT_0077a334;
        DAT_0077a334 = uVar9;
        DAT_0077a410 = iVar4;
      } while (uVar2 < *param_1);
    }
    else {
      uVar2 = uVar2 >> ((char)uVar6 - (&DAT_007355ec)[uVar2] & 0x1fU);
      iVar3 = DAT_0077a410;
    }
    if ((uVar2 == iVar1 - 1U) && (uVar11 == DAT_0077a3a0)) break;
    *(undefined1 *)((int)&DAT_00759df0 + DAT_007355e8) =
         (&DAT_0077a234)[uVar2 + *(int *)(&DAT_0077a3a8 + uVar11 * 4)];
    DAT_007355e8 = DAT_007355e8 + 1;
    if (DAT_007355e8 == 0x8000) {
      FUN_0062b0d0();
      iVar3 = DAT_0077a410;
      uVar6 = DAT_0077a414;
      uVar7 = DAT_007355e4;
      uVar8 = DAT_0077a334;
    }
    DAT_0077a410 = iVar3 - uVar11;
  }
  FUN_0062b0d0();
  if (DAT_0077a3a4 != DAT_00739dec) {
    FUN_0062b1c0(s_invalid_compressed_data__length_e_006890f0);
  }
  return 0;
}


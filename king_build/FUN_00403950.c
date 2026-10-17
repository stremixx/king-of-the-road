
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00403950(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piStack_5c;
  undefined1 **ppuStack_58;
  undefined1 local_42;
  undefined1 local_41;
  undefined1 *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063af00;
  local_14 = ExceptionList;
  iVar5 = 0x9a4ec86;
  DAT_0068c04c = 0;
  puVar8 = &DAT_0068a928;
  ExceptionList = &local_14;
  for (iVar3 = 0x37; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  _DAT_0068aa00 = 0x9a4ec86;
  uVar7 = 0;
  iVar3 = 1;
  do {
    iVar6 = iVar5 - iVar3;
    uVar4 = uVar7 % 0x37;
    uVar7 = uVar7 + 0x15;
    (&DAT_0068a928)[uVar4] = iVar3;
    iVar5 = (&DAT_0068a928)[uVar4];
    iVar3 = iVar6;
  } while (uVar7 < 0x46e);
  iVar5 = 4;
  do {
    uVar7 = 0;
    piVar1 = &DAT_0068a928;
    do {
      uVar4 = uVar7 + 0x1f;
      uVar7 = uVar7 + 1;
      *piVar1 = *piVar1 - (&DAT_0068a928)[uVar4 % 0x37];
      piVar1 = piVar1 + 1;
    } while (uVar7 < 0x37);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ppuStack_58 = (undefined1 **)&local_42;
  DAT_0068aa04 = 0;
  piStack_5c = (int *)0xc;
  DAT_0068aa08 = 0x1f;
  DAT_0068bf48 = 0;
  DAT_0068bf4c = 0x40e38800;
  _DAT_0066b6f0 = 0;
  _DAT_0066b6f4 = 0x3ff00000;
  DAT_0068c0d8 = 0;
  local_40 = (undefined1 *)0x0;
  FUN_0048a730();
  ppuStack_58 = &local_40;
  piStack_5c = (int *)0xc;
  local_c = 0;
  local_34 = (int *)FUN_00469390(local_38);
  uVar7 = (int)local_34 - (int)local_38 >> 2;
  local_c = 1;
  if ((uint)((int)DAT_0068be90 - (int)DAT_0068be88 >> 2) < uVar7) {
    piStack_5c = local_38;
    ppuStack_58 = (undefined1 **)local_34;
    piVar1 = (int *)FUN_0044acb0(uVar7);
    iVar5 = (int)DAT_0068be90 - (int)DAT_0068be88 >> 2;
    if (iVar5 != 0) {
      ppuStack_58 = (undefined1 **)(iVar5 * 4);
      piStack_5c = DAT_0068be88;
      FUN_0044b440();
    }
    DAT_0068be90 = piVar1 + uVar7;
    DAT_0068be88 = piVar1;
  }
  else {
    ppuStack_58 = (undefined1 **)DAT_0068be88;
    if ((uint)((int)DAT_0068be8c - (int)DAT_0068be88 >> 2) < uVar7) {
      piStack_5c = local_38 + ((int)DAT_0068be8c - (int)DAT_0068be88 >> 2);
      FUN_00404270(local_38);
      FUN_00404270(local_38 + ((int)DAT_0068be8c - (int)DAT_0068be88 >> 2),local_34,DAT_0068be8c);
    }
    else {
      piStack_5c = local_34;
      FUN_00404270(local_38);
    }
  }
  local_c = 0xffffffff;
  DAT_0068be8c = DAT_0068be88 + uVar7;
  ppuStack_58 = (undefined1 **)0x403b40;
  FUN_00451450();
  DAT_0068be88[1] = 1;
  DAT_0068be88[2] = 8;
  DAT_0068be88[5] = 3;
  DAT_0068be88[6] = 3;
  DAT_0068be88[7] = 0;
  DAT_0068be88[8] = 0x32;
  DAT_0068be88[9] = 0x96;
  ppuStack_58 = (undefined1 **)0x403b9b;
  FUN_004042a0();
  local_2c = 0;
  local_24 = 0;
  ppuStack_58 = (undefined1 **)&local_42;
  piStack_5c = (int *)0xc;
  local_c = 3;
  FUN_004abe00();
  piStack_5c = &local_2c;
  ppuStack_58 = (undefined1 **)local_3c;
  local_c._0_1_ = 4;
  local_34 = (int *)FUN_004b6ab0(local_38,0xc);
  local_40 = (undefined1 *)(((int)local_34 - (int)local_38) / 0xc);
  local_c = CONCAT31(local_c._1_3_,5);
  if ((undefined1 *)(((int)DAT_006897a8 - (int)DAT_006897a0) / 0xc) < local_40) {
    piStack_5c = local_38;
    ppuStack_58 = (undefined1 **)local_34;
    piVar2 = (int *)FUN_00459780(local_40);
    piVar9 = DAT_006897a4;
    for (piVar1 = DAT_006897a0; piVar1 != piVar9; piVar1 = piVar1 + 3) {
      ppuStack_58 = (undefined1 **)0x0;
      piStack_5c = (int *)0x403c49;
      FUN_0046c860();
    }
    iVar5 = ((int)DAT_006897a8 - (int)DAT_006897a0) / 0xc;
    if (iVar5 != 0) {
      ppuStack_58 = (undefined1 **)(iVar5 * 0xc);
      piStack_5c = DAT_006897a0;
      FUN_0044b440();
    }
    DAT_006897a8 = piVar2 + (int)local_40 * 3;
    DAT_006897a0 = piVar2;
  }
  else {
    ppuStack_58 = (undefined1 **)DAT_006897a0;
    if ((undefined1 *)(((int)DAT_006897a4 - (int)DAT_006897a0) / 0xc) < local_40) {
      piStack_5c = local_38 + (((int)DAT_006897a4 - (int)DAT_006897a0) / 0xc) * 3;
      FUN_00457ae0(local_38);
      FUN_004a2e60(local_38 + (((int)DAT_006897a4 - (int)DAT_006897a0) / 0xc) * 3,local_34,
                   DAT_006897a4,local_3c);
    }
    else {
      piStack_5c = local_34;
      piVar1 = (int *)FUN_00457ae0(local_38);
      piVar9 = DAT_006897a4;
      for (; piVar1 != piVar9; piVar1 = piVar1 + 3) {
        ppuStack_58 = (undefined1 **)0x0;
        piStack_5c = (int *)0x403cdd;
        FUN_0046c860();
      }
    }
  }
  piVar9 = local_34;
  DAT_006897a4 = DAT_006897a0 + (int)local_40 * 3;
  local_c._0_1_ = 6;
  for (piVar1 = local_38; piVar1 != piVar9; piVar1 = piVar1 + 3) {
    ppuStack_58 = (undefined1 **)0x0;
    piStack_5c = (int *)0x403d71;
    FUN_0046c860();
  }
  local_c = CONCAT31(local_c._1_3_,3);
  ppuStack_58 = (undefined1 **)0x403d86;
  FUN_0044a4e0();
  local_c = 0xffffffff;
  ppuStack_58 = (undefined1 **)0x403d97;
  FUN_00492340();
  ppuStack_58 = (undefined1 **)DAT_006898e4;
  piStack_5c = DAT_006898e0;
  DAT_0068c0e8 = 0;
  DAT_0068c0b8 = 0;
  DAT_0066b68c = 1;
  DAT_0068be30 = 0;
  DAT_0068be34 = 0;
  DAT_0068be38 = 0;
  DAT_0068be3c = 0;
  _DAT_0068be50 = 2;
  _DAT_0068be54 = 0;
  DAT_0068be58 = 0;
  _DAT_0068be5c = 0;
  DAT_0068be40 = 1;
  DAT_0068be44 = 0;
  DAT_0068be48 = 0;
  DAT_0068be4c = 0;
  DAT_0068c0ac = 0;
  DAT_0068c0c0 = 3;
  FUN_0044a6a0();
  ppuStack_58 = (undefined1 **)DAT_0068bec4;
  piStack_5c = DAT_0068bec0;
  DAT_0068c0c4 = 0;
  FUN_0044a6a0();
  DAT_0066b6d8 = 0xffffffff;
  DAT_0066b6dc = 0x7fefffff;
  piVar1 = DAT_0068be24;
  piVar9 = DAT_0068be20;
  if (DAT_0068be20 != DAT_0068be24) {
    do {
      iVar5 = *piVar9;
      if (iVar5 != 0) {
        ppuStack_58 = (undefined1 **)0x403e6e;
        FUN_004042c0();
        piStack_5c = (int *)0x403e74;
        ppuStack_58 = (undefined1 **)iVar5;
        FUN_00631d5c();
        piVar1 = DAT_0068be24;
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar1);
  }
  piVar9 = DAT_0068be20;
  ppuStack_58 = (undefined1 **)DAT_0068be20;
  piStack_5c = piVar1;
  local_3c = FUN_00457bc0(piVar1);
  DAT_0068be24 = DAT_0068be24 + -((int)piVar1 - (int)piVar9 >> 2);
  piVar1 = DAT_0068bbfc;
  piVar9 = DAT_0068bbf8;
  if (DAT_0068bbf8 != DAT_0068bbfc) {
    do {
      iVar5 = *piVar9;
      if (iVar5 != 0) {
        ppuStack_58 = (undefined1 **)0x403ecb;
        FUN_00404450();
        piStack_5c = (int *)0x403ed1;
        ppuStack_58 = (undefined1 **)iVar5;
        FUN_00631d5c();
        piVar1 = DAT_0068bbfc;
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar1);
  }
  piVar9 = DAT_0068bbf8;
  ppuStack_58 = (undefined1 **)DAT_0068bbf8;
  piStack_5c = piVar1;
  local_3c = FUN_00457bc0(piVar1);
  DAT_0068bbfc = DAT_0068bbfc + -((int)piVar1 - (int)piVar9 >> 2);
  piVar1 = DAT_0068bb4c;
  piVar9 = DAT_0068bb48;
  if (DAT_0068bb48 != DAT_0068bb4c) {
    do {
      iVar5 = *piVar9;
      if (iVar5 != 0) {
        ppuStack_58 = (undefined1 **)0x403f29;
        FUN_00404590();
        piStack_5c = (int *)0x403f2f;
        ppuStack_58 = (undefined1 **)iVar5;
        FUN_00631d5c();
        piVar1 = DAT_0068bb4c;
      }
      piVar9 = piVar9 + 1;
    } while (piVar9 != piVar1);
  }
  piVar9 = DAT_0068bb48;
  ppuStack_58 = (undefined1 **)DAT_0068bb48;
  piStack_5c = piVar1;
  local_3c = FUN_00457bc0(piVar1);
  DAT_0068bb4c = DAT_0068bb4c + -((int)piVar1 - (int)piVar9 >> 2);
  ppuStack_58 = (undefined1 **)DAT_0068bb7c;
  piVar1 = DAT_0068bb78;
  if (DAT_0068bb78 != DAT_0068bb7c) {
    do {
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        ppuStack_58 = (undefined1 **)0x403f85;
        FUN_00404670();
        piStack_5c = (int *)0x403f8b;
        ppuStack_58 = (undefined1 **)iVar5;
        FUN_00631d5c();
        ppuStack_58 = (undefined1 **)DAT_0068bb7c;
      }
      piVar1 = piVar1 + 1;
    } while ((undefined1 **)piVar1 != ppuStack_58);
  }
  piStack_5c = DAT_0068bb78;
  FUN_0044a6a0();
  ppuStack_58 = (undefined1 **)DAT_0068be14;
  piVar1 = DAT_0068be10;
  if (DAT_0068be10 != DAT_0068be14) {
    do {
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        ppuStack_58 = (undefined1 **)0x403fc8;
        FUN_00404800();
        piStack_5c = (int *)0x403fce;
        ppuStack_58 = (undefined1 **)iVar5;
        FUN_00631d5c();
        ppuStack_58 = (undefined1 **)DAT_0068be14;
      }
      piVar1 = piVar1 + 1;
    } while ((undefined1 **)piVar1 != ppuStack_58);
  }
  piStack_5c = DAT_0068be10;
  FUN_0044a6a0();
  ppuStack_58 = (undefined1 **)DAT_006898d4;
  piVar1 = DAT_006898d0;
  if (DAT_006898d0 != DAT_006898d4) {
    do {
      iVar5 = *piVar1;
      if (iVar5 != 0) {
        ppuStack_58 = (undefined1 **)0x40400a;
        FUN_00404990();
        piStack_5c = (int *)0x404010;
        ppuStack_58 = (undefined1 **)iVar5;
        FUN_00631d5c();
        ppuStack_58 = (undefined1 **)DAT_006898d4;
      }
      piVar1 = piVar1 + 1;
    } while ((undefined1 **)piVar1 != ppuStack_58);
  }
  piStack_5c = DAT_006898d0;
  FUN_0044a6a0();
  ppuStack_58 = (undefined1 **)0x404036;
  FUN_00473540();
  if ((int *)*DAT_0068becc != DAT_0068becc) {
    do {
      local_40 = (undefined1 *)&piStack_5c;
      FUN_004af790(&piStack_5c);
      FUN_004042b0();
      piStack_5c = (int *)0x404064;
      FUN_0041ee50();
    } while ((int *)*DAT_0068becc != DAT_0068becc);
  }
  ppuStack_58 = (undefined1 **)0x40407a;
  FUN_00453b20();
  DAT_0068beb4 = 5;
  DAT_006898c4 = 5;
  DAT_0068c000 = 5;
  DAT_0068aab4 = 5;
  ppuStack_58 = (undefined1 **)&local_42;
  DAT_006898c8 = 0;
  piStack_5c = (int *)0xc;
  DAT_006898ec = 2;
  DAT_0068bf7c = 0;
  DAT_0068bf44 = 0;
  DAT_0068c044 = 0;
  DAT_0068be94 = 0;
  local_40 = (undefined1 *)0x0;
  FUN_0048a730();
  ppuStack_58 = &local_40;
  piStack_5c = (int *)0xc;
  local_c = 7;
  local_28 = FUN_00469390(local_2c);
  ppuStack_58 = (undefined1 **)&local_2c;
  local_c = 8;
  piStack_5c = (int *)0x404107;
  FUN_00452250();
  local_c = 0xffffffff;
  ppuStack_58 = (undefined1 **)0x404117;
  FUN_00451450();
  ppuStack_58 = (undefined1 **)&local_42;
  local_40 = (undefined1 *)0x0;
  piStack_5c = (int *)0xc;
  FUN_0048a730();
  ppuStack_58 = &local_40;
  piStack_5c = (int *)0xc;
  local_c = 9;
  local_28 = FUN_00469390(local_2c);
  ppuStack_58 = (undefined1 **)&local_2c;
  local_c = 10;
  piStack_5c = (int *)0x404162;
  FUN_00452250();
  local_c = 0xffffffff;
  ppuStack_58 = (undefined1 **)0x40416f;
  FUN_00449050();
  ppuStack_58 = (undefined1 **)&local_41;
  piStack_5c = &local_3c;
  DAT_0066e62a = 1;
  DAT_0068c27c = 0;
  DAT_0068c0ec = 0;
  local_3c = 0;
  ppuStack_58 = (undefined1 **)FUN_00448860(8);
  local_c = 0xb;
  piStack_5c = (int *)0x4041ae;
  FUN_00452250();
  local_c = 0xffffffff;
  ppuStack_58 = (undefined1 **)0x4041bb;
  FUN_00449050();
  DAT_0068c0f0 = 0;
  DAT_0068c0f4 = 0;
  DAT_0066b700 = 7;
  DAT_0066b6e0 = 3;
  DAT_0066b6f8 = 0;
  DAT_0066b6fc = 0x4072c000;
  _DAT_0068c088 = 0;
  _DAT_0068c08c = 0;
  DAT_0068c090 = 0;
  DAT_0066b60a = 1;
  DAT_0068c094 = 0;
  DAT_0068c098 = 0;
  DAT_0066b710 = 0x851eb852;
  DAT_0066b714 = 0x3fe051eb;
  iVar5 = DAT_006898b8;
  if (DAT_006898b8 != DAT_006898bc) {
    do {
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      *(undefined4 *)(iVar5 + 0x20) = 0;
      iVar5 = iVar5 + 0x38;
    } while (iVar5 != DAT_006898bc);
  }
  ExceptionList = local_14;
  return;
}


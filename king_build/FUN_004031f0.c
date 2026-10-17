
void FUN_004031f0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  char local_20 [4];
  char local_1c [2];
  char local_1a;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ae50;
  local_c = ExceptionList;
  DAT_0068c04c = 0;
  local_28 = 0;
  ExceptionList = &local_c;
  FUN_0048a730(0xc,&local_29);
  local_4 = 0;
  local_14 = FUN_00469390(local_18,0xc,&local_28);
  uVar9 = local_14 - local_18 >> 2;
  local_4 = 1;
  if ((uint)(DAT_0068beb0 - DAT_0068bea8 >> 2) < uVar9) {
    iVar6 = FUN_004599e0(uVar9,local_18,local_14);
    iVar7 = DAT_0068beb0 - DAT_0068bea8 >> 2;
    if (iVar7 != 0) {
      FUN_0044b440(DAT_0068bea8,iVar7 * 4);
    }
    DAT_0068beb0 = iVar6 + uVar9 * 4;
    DAT_0068bea8 = iVar6;
  }
  else if ((uint)(DAT_0068beac - DAT_0068bea8 >> 2) < uVar9) {
    FUN_00457bc0(local_18,local_18 + (DAT_0068beac - DAT_0068bea8 >> 2) * 4,DAT_0068bea8);
    FUN_00457bc0(local_18 + (DAT_0068beac - DAT_0068bea8 >> 2) * 4,local_14,DAT_0068beac);
  }
  else {
    FUN_00457bc0(local_18,local_14,DAT_0068bea8);
  }
  local_4 = 0xffffffff;
  DAT_0068beac = DAT_0068bea8 + uVar9 * 4;
  FUN_00451450();
  *(undefined **)(DAT_0068bea8 + 4) = &DAT_0066b8a8;
  *(undefined **)(DAT_0068bea8 + 8) = &DAT_0066b8a4;
  *(char **)(DAT_0068bea8 + 0x14) = s_POLICE_0066b89c;
  *(char **)(DAT_0068bea8 + 0x18) = s_MAFIA_0066b894;
  *(undefined **)(DAT_0068bea8 + 0x1c) = &DAT_0066b88c;
  *(char **)(DAT_0068bea8 + 0x20) = s_GHOST_0066b884;
  *(char **)(DAT_0068bea8 + 0x24) = s_DEALER_0066b87c;
  local_20[0] = s_DRIVER_0066b874[0];
  local_20[1] = s_DRIVER_0066b874[1];
  local_20[2] = s_DRIVER_0066b874[2];
  local_20[3] = s_DRIVER_0066b874[3];
  local_1c[0] = s_DRIVER_0066b874[4];
  local_1c[1] = s_DRIVER_0066b874[5];
  local_1a = s_DRIVER_0066b874[6];
  FUN_004471c0(DAT_0068c008,DAT_0068c00c);
  uVar9 = 0xffffffff;
  pcVar11 = local_20;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_0044c1c0(DAT_0068c00c,local_20,local_20 + ~uVar9);
  piVar8 = DAT_0068bf3c;
  piVar10 = DAT_0068bf38;
  if (DAT_0068bf38 != DAT_0068bf3c) {
    do {
      iVar6 = *piVar10;
      if (iVar6 != 0) {
        FUN_00403690();
        FUN_00631d5c(iVar6);
        piVar8 = DAT_0068bf3c;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar8);
  }
  FUN_0044a6a0(DAT_0068bf38,piVar8);
  piVar8 = DAT_0068be64;
  piVar10 = DAT_0068be60;
  if (DAT_0068be60 != DAT_0068be64) {
    do {
      iVar6 = *piVar10;
      if (iVar6 != 0) {
        FUN_00470b30();
        FUN_00631d5c(iVar6);
        piVar8 = DAT_0068be64;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar8);
  }
  piVar10 = DAT_0068be60;
  local_24 = FUN_00457bc0(piVar8,piVar8,DAT_0068be60);
  DAT_0068be64 = DAT_0068be64 + -((int)piVar8 - (int)piVar10 >> 2);
  FUN_0044fdc0();
  piVar8 = DAT_0068c03c;
  piVar10 = DAT_0068c038;
  if (DAT_0068c038 != DAT_0068c03c) {
    do {
      iVar6 = *piVar10;
      if (iVar6 != 0) {
        FUN_00403820();
        FUN_00631d5c(iVar6);
        piVar8 = DAT_0068c03c;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar8);
  }
  piVar10 = DAT_0068c038;
  local_24 = FUN_00457bc0(piVar8,piVar8,DAT_0068c038);
  DAT_0068c03c = DAT_0068c03c + -((int)piVar8 - (int)piVar10 >> 2);
  FUN_0044fdc0();
  piVar8 = DAT_0068c02c;
  piVar10 = DAT_0068c028;
  if (DAT_0068c028 != DAT_0068c02c) {
    do {
      iVar6 = *piVar10;
      if (iVar6 != 0) {
        FUN_004497b0();
        FUN_00631d5c(iVar6);
        piVar8 = DAT_0068c02c;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar8);
  }
  piVar10 = DAT_0068c028;
  local_24 = FUN_0046b1d0(piVar8,piVar8,DAT_0068c028,local_24,0);
  DAT_0068c02c = DAT_0068c02c + -((int)piVar8 - (int)piVar10 >> 2);
  FUN_0044fdc0();
  piVar8 = DAT_0068be9c;
  piVar10 = DAT_0068be98;
  if (DAT_0068be98 != DAT_0068be9c) {
    do {
      iVar6 = *piVar10;
      if (iVar6 != 0) {
        FUN_0047fba0();
        FUN_00631d5c(iVar6);
        piVar8 = DAT_0068be9c;
      }
      piVar10 = piVar10 + 1;
    } while (piVar10 != piVar8);
  }
  piVar10 = DAT_0068be98;
  local_24 = FUN_0046b1d0(piVar8,piVar8,DAT_0068be98,local_24,0);
  iVar4 = DAT_0068bc1c;
  iVar3 = DAT_0068bc18;
  DAT_0068be9c = DAT_0068be9c + -((int)piVar8 - (int)piVar10 >> 2);
  iVar6 = FUN_004616d0(DAT_0068bc1c,DAT_0068bc1c,DAT_0068bc18,local_24,0);
  iVar5 = DAT_0068bc1c;
  iVar7 = DAT_0068bb68;
  iVar2 = DAT_0068bb6c;
  for (; DAT_0068bb68 = iVar7, DAT_0068bb6c = iVar2, iVar6 != iVar5; iVar6 = iVar6 + 0x68) {
    FUN_0046c7e0(0);
    iVar7 = DAT_0068bb68;
    iVar2 = DAT_0068bb6c;
  }
  iVar6 = (int)((ulonglong)((longlong)(iVar4 - iVar3) * -0x4ec4ec4f) >> 0x20);
  DAT_0068bc1c = DAT_0068bc1c + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 0x68;
  iVar6 = FUN_00457fb0(iVar2,iVar2,iVar7);
  iVar3 = DAT_0068bb6c;
  for (; iVar6 != iVar3; iVar6 = iVar6 + 0x18) {
    FUN_0046c820(0);
  }
  iVar6 = (int)((ulonglong)((longlong)(iVar2 - iVar7) * -0x2aaaaaab) >> 0x20);
  DAT_0068bb6c = DAT_0068bb6c + ((iVar6 >> 2) - (iVar6 >> 0x1f)) * 0x18;
  FUN_004843e0();
  ExceptionList = local_c;
  return;
}


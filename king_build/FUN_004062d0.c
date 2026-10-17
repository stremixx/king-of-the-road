
/* WARNING: Removing unreachable block (ram,0x004064b8) */
/* WARNING: Removing unreachable block (ram,0x004064bc) */
/* WARNING: Removing unreachable block (ram,0x004064ee) */
/* WARNING: Removing unreachable block (ram,0x00406507) */
/* WARNING: Removing unreachable block (ram,0x004064f8) */

void FUN_004062d0(void)

{
  int *piVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *local_20;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b128;
  local_c = ExceptionList;
  piVar5 = DAT_0068be98;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (DAT_0068be98 != DAT_0068be9c) {
    do {
      piVar6 = *(int **)(*piVar5 + 0x78);
      if (piVar6 != *(int **)(*piVar5 + 0x7c)) {
        do {
          iVar3 = *(int *)(*piVar6 + 0x10);
          if (*(int *)(iVar3 + 0x2c) == *(int *)(iVar3 + 0x30)) {
            FUN_0044ce50(*(int *)(iVar3 + 0x2c),piVar5);
          }
          else {
            FUN_00460970();
            *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + 4;
          }
          piVar6 = piVar6 + 1;
        } while (piVar6 != *(int **)(*piVar5 + 0x7c));
      }
      piVar5 = piVar5 + 1;
      ppvVar2 = ExceptionList;
    } while (piVar5 != DAT_0068be9c);
  }
  ExceptionList = ppvVar2;
  local_20 = DAT_0068c038;
  if (DAT_0068c038 != DAT_0068c03c) {
    do {
      iVar3 = 0;
      local_14 = 0;
      local_4 = 0;
      piVar5 = *(int **)(*local_20 + 0x28);
      if (piVar5 != *(int **)(*local_20 + 0x2c)) {
        do {
          iVar8 = 0x70;
          do {
            iVar7 = 2;
            piVar6 = (int *)(*(int *)(*piVar5 + iVar8) + 0x18);
            do {
              iVar9 = piVar6[-1];
              if (iVar9 != *piVar6) {
                do {
                  if (iVar3 == 0) {
                    FUN_0044ce50(0,iVar9);
                  }
                  else {
                    FUN_00460970();
                    local_14 = local_14 + 4;
                  }
                  iVar9 = iVar9 + 4;
                  iVar3 = local_14;
                } while (iVar9 != *piVar6);
              }
              piVar6 = piVar6 + 3;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            iVar8 = iVar8 + 4;
          } while (iVar8 < 0x78);
          piVar5 = piVar5 + 1;
        } while (piVar5 != *(int **)(*local_20 + 0x2c));
      }
      FUN_0044d110(*(undefined4 *)(*local_20 + 0x2c),0,iVar3);
      iVar3 = *(int *)(*local_20 + 0x2c);
      iVar8 = *(int *)(*local_20 + 0x28);
      if (iVar8 != iVar3) {
        iVar7 = 0;
        for (iVar9 = iVar3 - iVar8 >> 2; iVar9 != 1; iVar9 = iVar9 >> 1) {
          iVar7 = iVar7 + 1;
        }
        FUN_0045b220(iVar8,iVar3,0,iVar7 * 2);
        if ((int)(iVar3 - iVar8 & 0xfffffffcU) < 0x41) {
          FUN_00463fb0(iVar8,iVar3);
        }
        else {
          FUN_00463fb0(iVar8,iVar8 + 0x40);
          FUN_00467730(iVar8 + 0x40,iVar3,0);
        }
      }
      piVar5 = *(int **)(*local_20 + 0x2c);
      piVar6 = *(int **)(*local_20 + 0x28);
      piVar4 = piVar5;
      if (piVar6 != piVar5) {
        do {
          piVar1 = piVar6 + 1;
          piVar4 = piVar5;
          if (piVar1 == piVar5) break;
          iVar3 = *piVar6;
          piVar4 = piVar6;
          piVar6 = piVar1;
        } while (iVar3 != *piVar1);
      }
      iVar8 = FUN_0045b320(piVar4,piVar5,piVar4);
      iVar3 = *local_20;
      *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + (*(int *)(iVar3 + 0x2c) - iVar8 >> 2) * -4;
      local_20 = local_20 + 1;
    } while (local_20 != DAT_0068c03c);
  }
  ExceptionList = local_c;
  return;
}


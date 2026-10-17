
void __fastcall FUN_0047fba0(undefined4 *param_1)

{
  uint uVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006400b3;
  pvStack_c = ExceptionList;
  piVar8 = (int *)param_1[0x1e];
  local_4 = 1;
  ExceptionList = &pvStack_c;
  ppvVar2 = &pvStack_c;
  if (piVar8 != (int *)param_1[0x1f]) {
    do {
      if ((int *)*piVar8 != (int *)0x0) {
        (**(code **)(*(int *)*piVar8 + 0x28))(1);
      }
      piVar8 = piVar8 + 1;
      ppvVar2 = ExceptionList;
    } while (piVar8 != (int *)param_1[0x1f]);
  }
  ExceptionList = ppvVar2;
  piVar8 = (int *)param_1[0x1e];
  local_4 = local_4 & 0xffffff00;
  iVar3 = param_1[0x20] - (int)piVar8 >> 2;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 4;
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar8 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar8;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar8);
    }
  }
  piVar8 = (int *)*param_1;
  uVar4 = param_1[2] - (int)piVar8;
  local_4 = 0xffffffff;
  if (uVar4 != 0) {
    if (0x80 < uVar4) {
      FUN_0061c888(piVar8);
      ExceptionList = pvStack_c;
      return;
    }
    iVar3 = FUN_00402af0(&DAT_0068c164,1);
    uVar1 = DAT_0066b83c;
    if (iVar3 != 0) {
      uVar7 = 0;
      if (DAT_0066b83c != 0) {
        uVar6 = DAT_0068c168 >> 1;
        do {
          if (((uVar6 <= uVar7) && (DAT_0068c164 == 0)) &&
             (iVar3 = FUN_00402af0(&DAT_0068c164,1), iVar3 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar7;
            goto LAB_0047fd78;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar1);
      }
      DAT_0066b83c = 0x1e;
      iVar3 = 6;
      while( true ) {
        iVar9 = iVar3;
        if (0x1b < iVar3) {
          iVar9 = 0x1b;
        }
        iVar5 = FUN_00402af0(&DAT_0068c164,1);
        if (iVar5 == 0) break;
        FUN_00402b10(iVar9);
        iVar3 = iVar3 + 1;
      }
    }
LAB_0047fd78:
    *piVar8 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar8;
    DAT_0068c164 = 0;
  }
  ExceptionList = pvStack_c;
  return;
}


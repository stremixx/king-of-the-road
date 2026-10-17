
void __fastcall FUN_00404800(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = param_1 + 3;
  }
  piVar1 = (int *)puVar3[1];
  uVar4 = puVar3[3] - (int)piVar1;
  if (uVar4 != 0) {
    if (uVar4 < 0x81) {
      FUN_00401aa0();
      *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar1);
    }
  }
  piVar1 = (int *)*param_1;
  uVar4 = param_1[2] - (int)piVar1;
  if (uVar4 != 0) {
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      return;
    }
    iVar5 = FUN_00402af0(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (iVar5 != 0) {
      uVar8 = 0;
      if (DAT_0066b83c != 0) {
        uVar7 = DAT_0068c168 >> 1;
        do {
          if (((uVar7 <= uVar8) && (DAT_0068c164 == 0)) &&
             (iVar5 = FUN_00402af0(&DAT_0068c164,1), iVar5 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar8;
            goto LAB_00404971;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar5 = 6;
      while( true ) {
        iVar9 = iVar5;
        if (0x1b < iVar5) {
          iVar9 = 0x1b;
        }
        iVar6 = FUN_00402af0(&DAT_0068c164,1);
        if (iVar6 == 0) break;
        FUN_00402b10(iVar9);
        iVar5 = iVar5 + 1;
      }
    }
LAB_00404971:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}


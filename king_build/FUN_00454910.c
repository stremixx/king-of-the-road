
void __fastcall FUN_00454910(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  *param_1 = &PTR_LAB_0064a61c;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = (undefined4 *)0x0;
  }
  else {
    param_1 = param_1 + 2;
  }
  piVar1 = (int *)param_1[8];
  iVar3 = param_1[10] - (int)piVar1 >> 3;
  if (iVar3 != 0) {
    uVar4 = iVar3 * 8;
    if (0x80 < uVar4) {
      FUN_0061c888(piVar1);
      return;
    }
    iVar3 = FUN_00402af0(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (iVar3 != 0) {
      uVar7 = 0;
      if (DAT_0066b83c != 0) {
        uVar6 = DAT_0068c168 >> 1;
        do {
          if (((uVar6 <= uVar7) && (DAT_0068c164 == 0)) &&
             (iVar3 = FUN_00402af0(&DAT_0068c164,1), iVar3 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar7;
            goto LAB_00454a4f;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar3 = 6;
      while( true ) {
        iVar8 = iVar3;
        if (0x1b < iVar3) {
          iVar8 = 0x1b;
        }
        iVar5 = FUN_00402af0(&DAT_0068c164,1);
        if (iVar5 == 0) break;
        FUN_00402b10(iVar8);
        iVar3 = iVar3 + 1;
      }
    }
LAB_00454a4f:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar4 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}


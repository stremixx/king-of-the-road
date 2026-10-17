
void __fastcall FUN_0056b240(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = (int *)*param_1;
  uVar3 = param_1[2] - (int)piVar1;
  if (uVar3 != 0) {
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      return;
    }
    iVar4 = FUN_00402af0(&DAT_0068c164,1);
    uVar2 = DAT_0066b83c;
    if (iVar4 != 0) {
      uVar7 = 0;
      if (DAT_0066b83c != 0) {
        uVar6 = DAT_0068c168 >> 1;
        do {
          if (((uVar6 <= uVar7) && (DAT_0068c164 == 0)) &&
             (iVar4 = FUN_00402af0(&DAT_0068c164,1), iVar4 == 0)) {
            DAT_0066b83c = 1000;
            DAT_0068c168 = uVar7;
            goto LAB_0056b367;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar2);
      }
      DAT_0066b83c = 0x1e;
      iVar4 = 6;
      while( true ) {
        iVar8 = iVar4;
        if (0x1b < iVar4) {
          iVar8 = 0x1b;
        }
        iVar5 = FUN_00402af0(&DAT_0068c164,1);
        if (iVar5 == 0) break;
        FUN_00402b10(iVar8);
        iVar4 = iVar4 + 1;
      }
    }
LAB_0056b367:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  return;
}


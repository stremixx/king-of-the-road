
void __fastcall FUN_00470b30(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063f9ae;
  local_c = ExceptionList;
  iVar4 = param_1[0x30];
  local_4 = 1;
  ExceptionList = &local_c;
  if (iVar4 != 0) {
    piVar1 = *(int **)(iVar4 + 0x28);
    uVar3 = *(int *)(iVar4 + 0x30) - (int)piVar1;
    ExceptionList = &local_c;
    if (uVar3 != 0) {
      if (uVar3 < 0x81) {
        ExceptionList = &local_c;
        FUN_00401aa0();
        *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
        *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
        FUN_00434030();
      }
      else {
        ExceptionList = &local_c;
        FUN_0061c888(piVar1);
      }
    }
    FUN_00631d5c(iVar4);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0061ccb5(param_1 + 5,0xc,2,FUN_00449a70);
  piVar1 = (int *)*param_1;
  uVar3 = param_1[2] - (int)piVar1;
  local_4 = 0xffffffff;
  if (uVar3 != 0) {
    if (0x80 < uVar3) {
      FUN_0061c888(piVar1);
      ExceptionList = local_c;
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
            goto LAB_00470cf2;
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
LAB_00470cf2:
    *piVar1 = *(int *)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4);
    *(int **)(&DAT_0068c120 + (uVar3 + 7 >> 3) * 4) = piVar1;
    DAT_0068c164 = 0;
  }
  ExceptionList = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00420130(void)

{
  int *piVar1;
  uint uVar2;
  double *pdVar3;
  double *pdVar4;
  int *piVar5;
  int *piVar6;
  LONG LVar7;
  int *extraout_ECX;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int *piStack_80;
  int local_60;
  int *local_50;
  int *local_4c;
  int local_48;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_0063cc58;
  local_14 = ExceptionList;
  piStack_80 = (int *)&stack0xffffff84;
  DAT_0068c098 = 0;
  ExceptionList = &local_14;
  FUN_004896a0();
  piStack_80 = extraout_ECX;
  FUN_004af790(&piStack_80);
  FUN_00456cd0(&local_50);
  local_c = 0;
  if ((uint)((int)local_4c - (int)local_50 >> 2) < 3) {
    local_c = 0xffffffff;
    if (local_48 - (int)local_50 >> 2 != 0) {
      piStack_80 = (int *)0x4201ca;
      FUN_0044b440();
      ExceptionList = local_14;
      return;
    }
  }
  else {
    local_60 = 0;
    piVar6 = local_50;
    piVar5 = local_50;
    piVar1 = local_4c;
    piVar12 = local_50;
    if (local_50 != local_4c) {
      do {
        for (; piVar6 != piVar12; piVar6 = piVar6 + 1) {
          piStack_80 = piVar6;
          FUN_0041d3f0();
          piStack_80 = (int *)0x420213;
          FUN_004042b0();
          piStack_80 = (int *)0x42021d;
          pdVar3 = (double *)FUN_0040b030();
          piStack_80 = piVar12;
          FUN_0041d3f0();
          piStack_80 = (int *)0x42023c;
          FUN_004042b0();
          piStack_80 = (int *)0x420246;
          pdVar4 = (double *)FUN_0040b030();
          if (SQRT((pdVar4[2] - pdVar3[2]) * (pdVar4[2] - pdVar3[2]) +
                   (pdVar4[1] - pdVar3[1]) * (pdVar4[1] - pdVar3[1]) +
                   (*pdVar4 - *pdVar3) * (*pdVar4 - *pdVar3)) < _DAT_0064a6e0) {
            uVar9 = *(uint *)(*piVar12 + 0x60);
            if ((uVar9 & 2) == 0) {
              *(uint *)(*piVar12 + 0x60) = uVar9 | 2;
              local_60 = local_60 + 1;
            }
            uVar9 = *(uint *)(*piVar6 + 0x60);
            if ((uVar9 & 2) == 0) {
              *(uint *)(*piVar6 + 0x60) = uVar9 | 2;
              local_60 = local_60 + 1;
            }
          }
          piVar5 = local_50;
          piVar1 = local_4c;
        }
        piVar12 = piVar12 + 1;
        piVar6 = piVar5;
      } while (piVar12 != piVar1);
      if (piVar5 != piVar1) {
        do {
          iVar8 = *piVar5;
          piVar5 = piVar5 + 1;
          *(uint *)(iVar8 + 0x60) = *(uint *)(iVar8 + 0x60) & 0xfffffffd;
          piVar6 = local_50;
        } while (piVar5 != local_4c);
      }
    }
    if (2 < local_60) {
      DAT_0068c098 = 1;
    }
    iVar8 = local_48 - (int)piVar6 >> 2;
    if (iVar8 != 0) {
      uVar9 = iVar8 * 4;
      if (0x80 < uVar9) {
        FUN_0061c888();
        ExceptionList = local_14;
        return;
      }
      piStack_80 = (int *)0x42035b;
      LVar7 = InterlockedExchange(&DAT_0068c164,1);
      uVar2 = DAT_0066b83c;
      if (LVar7 != 0) {
        uVar11 = 0;
        if (DAT_0066b83c != 0) {
          uVar10 = DAT_0068c168 >> 1;
          do {
            if ((uVar10 <= uVar11) && (DAT_0068c164 == 0)) {
              piStack_80 = (int *)0x420396;
              LVar7 = InterlockedExchange(&DAT_0068c164,1);
              if (LVar7 == 0) {
                DAT_0066b83c = 1000;
                DAT_0068c168 = uVar11;
                goto LAB_00420421;
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
        }
        DAT_0066b83c = 0x1e;
        while( true ) {
          piStack_80 = (int *)0x420401;
          LVar7 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar7 == 0) break;
          FUN_00402b10();
        }
      }
LAB_00420421:
      *piVar6 = *(int *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = piVar6;
      DAT_0068c164 = 0;
    }
  }
  ExceptionList = local_14;
  return;
}


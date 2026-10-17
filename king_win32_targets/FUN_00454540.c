
void __thiscall FUN_00454540(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  LONG LVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar7 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ea50;
  local_10 = ExceptionList;
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = puVar8[-3];
      puVar8[1] = puVar8[-2];
      puVar8[2] = puVar8[-1];
    }
    puVar8 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar8 + 3);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    puVar13 = puVar8 + -3;
    uVar3 = param_3[2];
    param_2 = (undefined4 *)(((int)puVar13 - (int)param_2) / 0xc);
    if (0 < (int)param_2) {
      do {
        puVar8[-3] = puVar13[-3];
        puVar8[-2] = puVar13[-2];
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar8[-1] = puVar13[-1];
        puVar13 = puVar13 + -3;
        puVar8 = puVar8 + -3;
      } while (param_2 != (undefined4 *)0x0);
    }
    *puVar7 = uVar1;
    puVar7[1] = uVar2;
    puVar7[2] = uVar3;
    return;
  }
  local_18 = ((int)puVar8 - *param_1) / 0xc;
  if (local_18 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = local_18 * 2;
    if (local_18 == 0) {
      local_1c = 0;
      ExceptionList = &local_10;
      goto LAB_00454658;
    }
  }
  ExceptionList = &local_10;
  local_1c = FUN_0044b6e0(local_18 * 0xc);
LAB_00454658:
  local_8 = 0;
  puVar8 = (undefined4 *)FUN_0046f490(*param_1,param_2,local_1c,param_2);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = *param_3;
    puVar8[1] = param_3[1];
    puVar8[2] = param_3[2];
  }
  iVar9 = FUN_0046f490(param_2,param_1[1],puVar8 + 3,param_2);
  for (iVar10 = *param_1; iVar10 != param_1[1]; iVar10 = iVar10 + 0xc) {
  }
  piVar4 = (int *)*param_1;
  iVar10 = (param_1[2] - (int)piVar4) / 0xc;
  if (iVar10 != 0) {
    uVar11 = iVar10 * 0xc;
    if (uVar11 < 0x81) {
      LVar12 = InterlockedExchange(&DAT_0068c164,1);
      uVar6 = DAT_0068c168;
      uVar5 = DAT_0066b83c;
      if (LVar12 != 0) {
        uVar14 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((uVar6 >> 1 <= uVar14) && (DAT_0068c164 == 0)) &&
               (LVar12 = InterlockedExchange(&DAT_0068c164,1), LVar12 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar14;
              goto LAB_004547de;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar5);
        }
        DAT_0066b83c = 0x1e;
        iVar10 = 0;
        while( true ) {
          iVar15 = iVar10 + 6;
          if (0x1b < iVar15) {
            iVar15 = 0x1b;
          }
          LVar12 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar12 == 0) break;
          if (iVar15 < 0x15) {
            Sleep(0);
            iVar10 = iVar10 + 1;
          }
          else {
            Sleep(1 << ((char)iVar15 - 0x14U & 0x1f));
            iVar10 = iVar10 + 1;
          }
        }
      }
LAB_004547de:
      *piVar4 = *(int *)(&DAT_0068c120 + (uVar11 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar11 + 7 >> 3) * 4) = piVar4;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar4);
    }
  }
  param_1[1] = iVar9;
  *param_1 = local_1c;
  param_1[2] = local_1c + local_18 * 0xc;
  ExceptionList = local_10;
  return;
}


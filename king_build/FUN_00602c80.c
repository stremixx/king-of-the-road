
void __thiscall FUN_00602c80(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int local_10;
  int local_c;
  
  puVar8 = (undefined1 *)param_1[1];
  if (puVar8 != (undefined1 *)param_1[2]) {
    if (puVar8 != (undefined1 *)0x0) {
      *puVar8 = puVar8[-1];
    }
    puVar9 = (undefined1 *)param_1[1];
    param_1[1] = (int)(puVar9 + 1);
    uVar2 = *param_3;
    puVar8 = puVar9 + -1;
    iVar5 = (int)puVar8 - (int)param_2;
    if (0 < iVar5) {
      do {
        puVar1 = puVar8 + -1;
        puVar8 = puVar8 + -1;
        puVar9 = puVar9 + -1;
        iVar5 = iVar5 + -1;
        *puVar9 = *puVar1;
      } while (iVar5 != 0);
    }
    *param_2 = uVar2;
    return;
  }
  if ((int)puVar8 - *param_1 == 0) {
    local_c = 1;
  }
  else {
    local_c = ((int)puVar8 - *param_1) * 2;
    if (local_c == 0) {
      local_10 = 0;
      goto LAB_00602d00;
    }
  }
  local_10 = FUN_0044b6e0(local_c);
LAB_00602d00:
  puVar8 = (undefined1 *)FUN_0046ecd0(*param_1,param_2,local_10,param_2,0);
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = *param_3;
  }
  iVar5 = FUN_0046ecd0(param_2,param_1[1],puVar8 + 1,param_2,0);
  piVar3 = (int *)*param_1;
  uVar6 = param_1[2] - (int)piVar3;
  if (uVar6 != 0) {
    if (uVar6 < 0x81) {
      LVar7 = InterlockedExchange(&DAT_0068c164,1);
      uVar4 = DAT_0066b83c;
      if (LVar7 != 0) {
        uVar12 = 0;
        if (DAT_0066b83c != 0) {
          uVar11 = DAT_0068c168 >> 1;
          do {
            if (((uVar11 <= uVar12) && (DAT_0068c164 == 0)) &&
               (LVar7 = InterlockedExchange(&DAT_0068c164,1), LVar7 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar12;
              goto LAB_00602e5d;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar4);
        }
        DAT_0066b83c = 0x1e;
        iVar13 = 6;
        while( true ) {
          iVar10 = iVar13;
          if (0x1b < iVar13) {
            iVar10 = 0x1b;
          }
          LVar7 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar7 == 0) break;
          FUN_00402b10(iVar10);
          iVar13 = iVar13 + 1;
        }
      }
LAB_00602e5d:
      *piVar3 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar3;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar3);
    }
  }
  *param_1 = local_10;
  param_1[1] = iVar5;
  param_1[2] = local_10 + local_c;
  return;
}


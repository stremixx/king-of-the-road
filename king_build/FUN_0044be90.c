
void __thiscall FUN_0044be90(int *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e4b0;
  local_10 = ExceptionList;
  puVar9 = (undefined1 *)param_1[1];
  if (puVar9 != (undefined1 *)param_1[2]) {
    if (puVar9 != (undefined1 *)0x0) {
      *puVar9 = puVar9[-1];
    }
    puVar10 = (undefined1 *)param_1[1];
    param_1[1] = (int)(puVar10 + 1);
    uVar2 = *param_3;
    puVar9 = puVar10 + -1;
    iVar6 = (int)puVar9 - (int)param_2;
    if (0 < iVar6) {
      do {
        puVar1 = puVar9 + -1;
        puVar9 = puVar9 + -1;
        puVar10 = puVar10 + -1;
        iVar6 = iVar6 + -1;
        *puVar10 = *puVar1;
      } while (iVar6 != 0);
    }
    *param_2 = uVar2;
    return;
  }
  if ((int)puVar9 - *param_1 == 0) {
    local_1c = 1;
  }
  else {
    local_1c = ((int)puVar9 - *param_1) * 2;
    if (local_1c == 0) {
      local_18 = 0;
      ExceptionList = &local_10;
      goto LAB_0044bf2e;
    }
  }
  ExceptionList = &local_10;
  local_18 = FUN_0044b6e0(local_1c);
LAB_0044bf2e:
  local_8 = 0;
  puVar9 = (undefined1 *)FUN_0046ecd0(*param_1,param_2,local_18,param_2,0);
  if (puVar9 != (undefined1 *)0x0) {
    *puVar9 = *param_3;
  }
  iVar6 = FUN_0046ecd0(param_2,param_1[1],puVar9 + 1,param_2,0);
  piVar3 = (int *)*param_1;
  uVar7 = param_1[2] - (int)piVar3;
  if (uVar7 != 0) {
    if (uVar7 < 0x81) {
      LVar8 = InterlockedExchange(&DAT_0068c164,1);
      uVar5 = DAT_0068c168;
      uVar4 = DAT_0066b83c;
      if (LVar8 != 0) {
        uVar12 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((uVar5 >> 1 <= uVar12) && (DAT_0068c164 == 0)) &&
               (LVar8 = InterlockedExchange(&DAT_0068c164,1), LVar8 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar12;
              goto LAB_0044c078;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar4);
        }
        DAT_0066b83c = 0x1e;
        iVar11 = 0;
        while( true ) {
          iVar13 = iVar11 + 6;
          if (0x1b < iVar13) {
            iVar13 = 0x1b;
          }
          LVar8 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar8 == 0) break;
          FUN_00402b10(iVar13);
          iVar11 = iVar11 + 1;
        }
      }
LAB_0044c078:
      *piVar3 = *(int *)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4) = piVar3;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar3);
    }
  }
  *param_1 = local_18;
  param_1[1] = iVar6;
  param_1[2] = local_18 + local_1c;
  ExceptionList = local_10;
  return;
}


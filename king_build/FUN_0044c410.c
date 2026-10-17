
void __thiscall FUN_0044c410(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  LONG LVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e4d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar6 = (undefined4 *)param_1[1];
  if (puVar6 != (undefined4 *)param_1[2]) {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = puVar6[-2];
      puVar6[1] = puVar6[-1];
    }
    puVar6 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar6 + 2);
    uVar1 = *param_3;
    iVar5 = (int)(puVar6 + -2) - (int)param_2 >> 3;
    puVar10 = puVar6 + -2;
    if (0 < iVar5) {
      do {
        iVar5 = iVar5 + -1;
        puVar6[-2] = puVar10[-2];
        puVar6[-1] = puVar10[-1];
        puVar10 = puVar10 + -2;
        puVar6 = puVar6 + -2;
      } while (iVar5 != 0);
    }
    *param_2 = uVar1;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_1c = (int)puVar6 - *param_1 >> 3;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_18 = 0;
      goto LAB_0044c4cb;
    }
  }
  local_18 = FUN_0044b6e0(local_1c * 8);
LAB_0044c4cb:
  local_8 = 0;
  puVar6 = (undefined4 *)FUN_0046b190(*param_1,param_2,local_18,param_2,0);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = *(undefined4 *)param_3;
    puVar6[1] = *(undefined4 *)((int)param_3 + 4);
  }
  iVar5 = FUN_0046b190(param_2,param_1[1],puVar6 + 2,param_2,0);
  piVar2 = (int *)*param_1;
  iVar7 = param_1[2] - (int)piVar2 >> 3;
  if (iVar7 != 0) {
    uVar8 = iVar7 * 8;
    if (uVar8 < 0x81) {
      LVar9 = InterlockedExchange(&DAT_0068c164,1);
      uVar4 = DAT_0068c168;
      uVar3 = DAT_0066b83c;
      if (LVar9 != 0) {
        uVar11 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((uVar4 >> 1 <= uVar11) && (DAT_0068c164 == 0)) &&
               (LVar9 = InterlockedExchange(&DAT_0068c164,1), LVar9 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar11;
              goto LAB_0044c623;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar3);
        }
        DAT_0066b83c = 0x1e;
        iVar7 = 0;
        while( true ) {
          iVar12 = iVar7 + 6;
          if (0x1b < iVar12) {
            iVar12 = 0x1b;
          }
          LVar9 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar9 == 0) break;
          FUN_00402b10(iVar12);
          iVar7 = iVar7 + 1;
        }
      }
LAB_0044c623:
      *piVar2 = *(int *)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4) = piVar2;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar2);
    }
  }
  *param_1 = local_18;
  param_1[1] = iVar5;
  param_1[2] = local_18 + local_1c * 8;
  *unaff_FS_OFFSET = local_10;
  return;
}


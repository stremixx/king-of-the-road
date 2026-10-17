
void __thiscall FUN_0047bbd0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  LONG LVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar8 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063ffb0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-4];
      puVar9[1] = puVar9[-3];
      puVar9[2] = puVar9[-2];
      puVar9[3] = puVar9[-1];
    }
    puVar14 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar14 + 4);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    puVar9 = puVar14 + -4;
    uVar4 = param_3[3];
    param_2 = (undefined4 *)((int)puVar9 - (int)param_2 >> 4);
    if (0 < (int)param_2) {
      do {
        puVar14[-4] = puVar9[-4];
        puVar14[-3] = puVar9[-3];
        puVar14[-2] = puVar9[-2];
        puVar14[-1] = puVar9[-1];
        param_2 = (undefined4 *)((int)param_2 + -1);
        puVar9 = puVar9 + -4;
        puVar14 = puVar14 + -4;
      } while (param_2 != (undefined4 *)0x0);
    }
    *puVar8 = uVar1;
    puVar8[1] = uVar2;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_18 = (int)puVar9 - *param_1 >> 4;
  if (local_18 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = local_18 * 2;
    if (local_18 == 0) {
      local_1c = 0;
      goto LAB_0047bce3;
    }
  }
  local_1c = FUN_0044b6e0(local_18 << 4);
LAB_0047bce3:
  local_8 = 0;
  puVar9 = (undefined4 *)FUN_00467290(*param_1,param_2,local_1c,param_2);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = *param_3;
    puVar9[1] = param_3[1];
    puVar9[2] = param_3[2];
    puVar9[3] = param_3[3];
  }
  iVar10 = FUN_00467290(param_2,param_1[1],puVar9 + 4,param_2);
  for (iVar11 = *param_1; iVar11 != param_1[1]; iVar11 = iVar11 + 0x10) {
  }
  piVar5 = (int *)*param_1;
  iVar11 = param_1[2] - (int)piVar5 >> 4;
  if (iVar11 != 0) {
    uVar12 = iVar11 * 0x10;
    if (uVar12 < 0x81) {
      LVar13 = InterlockedExchange(&DAT_0068c164,1);
      uVar7 = DAT_0068c168;
      uVar6 = DAT_0066b83c;
      if (LVar13 != 0) {
        uVar15 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((uVar7 >> 1 <= uVar15) && (DAT_0068c164 == 0)) &&
               (LVar13 = InterlockedExchange(&DAT_0068c164,1), LVar13 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar15;
              goto LAB_0047be5f;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar6);
        }
        DAT_0066b83c = 0x1e;
        iVar11 = 0;
        while( true ) {
          iVar16 = iVar11 + 6;
          if (0x1b < iVar16) {
            iVar16 = 0x1b;
          }
          LVar13 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar13 == 0) break;
          if (iVar16 < 0x15) {
            Sleep(0);
            iVar11 = iVar11 + 1;
          }
          else {
            Sleep(1 << ((char)iVar16 - 0x14U & 0x1f));
            iVar11 = iVar11 + 1;
          }
        }
      }
LAB_0047be5f:
      *piVar5 = *(int *)(&DAT_0068c120 + (uVar12 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar12 + 7 >> 3) * 4) = piVar5;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar5);
    }
  }
  *param_1 = local_1c;
  param_1[1] = iVar10;
  param_1[2] = local_18 * 0x10 + local_1c;
  *unaff_FS_OFFSET = local_10;
  return;
}


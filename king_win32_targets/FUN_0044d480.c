
void __thiscall FUN_0044d480(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  LONG LVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  undefined4 *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e570;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar7 = (undefined4 *)param_1[1];
  if (puVar7 != (undefined4 *)param_1[2]) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = puVar7[-1];
    }
    puVar11 = (undefined4 *)param_1[1];
    param_1[1] = (int)(puVar11 + 1);
    uVar2 = *param_3;
    puVar7 = puVar11 + -1;
    iVar6 = (int)puVar7 - (int)param_2 >> 2;
    if (0 < iVar6) {
      do {
        puVar1 = puVar7 + -1;
        puVar7 = puVar7 + -1;
        puVar11 = puVar11 + -1;
        iVar6 = iVar6 + -1;
        *puVar11 = *puVar1;
      } while (iVar6 != 0);
    }
    *param_2 = uVar2;
    *unaff_FS_OFFSET = local_10;
    return;
  }
  local_1c = (int)puVar7 - *param_1 >> 2;
  if (local_1c == 0) {
    local_1c = 1;
  }
  else {
    local_1c = local_1c * 2;
    if (local_1c == 0) {
      local_18 = 0;
      goto LAB_0044d52d;
    }
  }
  local_18 = FUN_0044b6e0(local_1c << 2);
LAB_0044d52d:
  local_8 = 0;
  puVar7 = (undefined4 *)FUN_0046b5a0(*param_1,param_2,local_18,param_2);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = *param_3;
  }
  iVar8 = FUN_0046b5a0(param_2,param_1[1],puVar7 + 1,param_2);
  for (iVar6 = *param_1; iVar6 != param_1[1]; iVar6 = iVar6 + 4) {
  }
  piVar3 = (int *)*param_1;
  iVar6 = param_1[2] - (int)piVar3 >> 2;
  if (iVar6 != 0) {
    uVar9 = iVar6 * 4;
    if (uVar9 < 0x81) {
      LVar10 = InterlockedExchange(&DAT_0068c164,1);
      uVar5 = DAT_0068c168;
      uVar4 = DAT_0066b83c;
      if (LVar10 != 0) {
        uVar12 = 0;
        if (DAT_0066b83c != 0) {
          do {
            if (((uVar5 >> 1 <= uVar12) && (DAT_0068c164 == 0)) &&
               (LVar10 = InterlockedExchange(&DAT_0068c164,1), LVar10 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar12;
              goto LAB_0044d692;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar4);
        }
        DAT_0066b83c = 0x1e;
        iVar6 = 0;
        while( true ) {
          iVar13 = iVar6 + 6;
          if (0x1b < iVar13) {
            iVar13 = 0x1b;
          }
          LVar10 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar10 == 0) break;
          if (iVar13 < 0x15) {
            Sleep(0);
            iVar6 = iVar6 + 1;
          }
          else {
            Sleep(1 << ((char)iVar13 - 0x14U & 0x1f));
            iVar6 = iVar6 + 1;
          }
        }
      }
LAB_0044d692:
      *piVar3 = *(int *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
      *(int **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = piVar3;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888(piVar3);
    }
  }
  *param_1 = local_18;
  param_1[1] = iVar8;
  param_1[2] = local_18 + local_1c * 4;
  *unaff_FS_OFFSET = local_10;
  return;
}


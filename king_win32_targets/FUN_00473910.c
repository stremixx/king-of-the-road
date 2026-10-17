
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00473910(int param_1,int param_2,uint param_3)

{
  undefined4 **ppuVar1;
  undefined4 **ppuVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  LONG LVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  float10 fVar15;
  undefined4 *local_ac;
  undefined4 *local_a0;
  int local_9c;
  int local_98;
  double local_94;
  undefined4 local_8c [2];
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_2c [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fc36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((param_3 & 1) == 0) {
    local_ac = (undefined4 *)&stack0xffffff40;
    ExceptionList = &local_c;
    fVar15 = (float10)FUN_00473720();
    local_94 = (double)fVar15;
    fVar15 = (float10)FUN_00473720();
    fVar15 = (float10)local_94 - fVar15;
    if (fVar15 <= (float10)_DAT_0064a668) {
      if ((*(int *)(param_1 + 0x5c) == 1) && ((float10)*(double *)(param_1 + 0x88) < -fVar15)) {
        uVar5 = FUN_0040e1d0();
        FUN_0056a570(uVar5);
        ExceptionList = local_c;
        return 0xffffffff;
      }
    }
    else if ((*(int *)(param_2 + 0x5c) == 1) && ((float10)*(double *)(param_2 + 0x88) < fVar15)) {
      uVar5 = FUN_0040e1d0();
      FUN_0056a570(uVar5);
      ExceptionList = local_c;
      return 0xfffffffe;
    }
    *(double *)(param_2 + 0x88) = (double)((float10)*(double *)(param_2 + 0x88) - fVar15);
    *(double *)(param_1 + 0x88) = (double)(fVar15 + (float10)*(double *)(param_1 + 0x88));
  }
  if ((param_3 & 1) == 0) {
    local_ac = (undefined4 *)&stack0xffffff40;
    FUN_00445290();
    FUN_00445290();
  }
  if (*(int *)(param_1 + 0x5c) == 1) {
    local_ac = (undefined4 *)&stack0xffffff40;
    FUN_004722f0();
  }
  if (*(int *)(param_2 + 0x5c) == 1) {
    local_ac = (undefined4 *)&stack0xffffff40;
    FUN_004722f0();
  }
  ppuVar1 = (undefined4 **)(param_1 + 0x18);
  FUN_004abe00((*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0xc);
  local_4 = 0;
  local_9c = FUN_0046f490(*ppuVar1,*(undefined4 *)(param_1 + 0x1c),local_a0);
  local_4 = 1;
  ppuVar2 = (undefined4 **)(param_2 + 0x18);
  if (ppuVar2 != ppuVar1) {
    puVar12 = *ppuVar2;
    uVar7 = (*(int *)(param_2 + 0x1c) - (int)puVar12) / 0xc;
    if ((uint)((*(int *)(param_1 + 0x20) - (int)*ppuVar1) / 0xc) < uVar7) {
      uVar5 = FUN_00459420(uVar7,puVar12);
      local_ac = *ppuVar1;
      local_94 = (double)CONCAT44(local_94._4_4_,uVar5);
      if ((*(int *)(param_1 + 0x20) - (int)local_ac) / 0xc != 0) {
        FUN_0044b440(local_ac);
      }
      *ppuVar1 = local_94._0_4_;
      *(undefined4 **)(param_1 + 0x20) = local_94._0_4_ + uVar7 * 3;
    }
    else {
      uVar9 = (*(int *)(param_1 + 0x1c) - (int)*ppuVar1) / 0xc;
      if (uVar9 < uVar7) {
        FUN_0045aa20(puVar12,puVar12 + uVar9 * 3);
        FUN_0046f490(*ppuVar2 + ((*(int *)(param_1 + 0x1c) - (int)*ppuVar1) / 0xc) * 3,
                     *(undefined4 *)(param_2 + 0x1c),*(int *)(param_1 + 0x1c),local_ac);
      }
      else {
        local_ac = (undefined4 *)FUN_0045aa20(puVar12,*(undefined4 *)(param_2 + 0x1c));
      }
    }
    *(undefined4 **)(param_1 + 0x1c) = *ppuVar1 + uVar7 * 3;
  }
  if (&local_a0 != ppuVar2) {
    uVar7 = (local_9c - (int)local_a0) / 0xc;
    if ((uint)((*(int *)(param_2 + 0x20) - (int)*ppuVar2) / 0xc) < uVar7) {
      uVar5 = FUN_00459420(uVar7,local_a0);
      local_94 = (double)CONCAT44(local_94._4_4_,uVar5);
      if ((*(int *)(param_2 + 0x20) - (int)*ppuVar2) / 0xc != 0) {
        FUN_0044b440(*ppuVar2);
      }
      *ppuVar2 = local_94._0_4_;
      *(undefined4 **)(param_2 + 0x20) = local_94._0_4_ + uVar7 * 3;
    }
    else {
      uVar9 = (*(int *)(param_2 + 0x1c) - (int)*ppuVar2) / 0xc;
      if (uVar9 < uVar7) {
        FUN_0045aa20(local_a0,local_a0 + uVar9 * 3);
        FUN_0046f490(local_a0 + ((*(int *)(param_2 + 0x1c) - (int)*ppuVar2) / 0xc) * 3,local_9c,
                     *(int *)(param_2 + 0x1c),local_ac);
      }
      else {
        FUN_0045aa20(local_a0,local_9c);
      }
    }
    *(undefined4 **)(param_2 + 0x1c) = *ppuVar2 + uVar7 * 3;
  }
  if (param_1 == -8) {
    iVar6 = 0;
  }
  else {
    iVar6 = param_1 + 0x48;
  }
  FUN_00473730(iVar6);
  puVar12 = (undefined4 *)(param_1 + 0x28);
  puVar14 = local_2c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_2 + 0x28);
  puVar14 = local_8c;
  for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  FUN_004742e0();
  FUN_004742e0();
  puVar12 = (undefined4 *)(param_1 + 0x228);
  puVar14 = local_8c;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_2 + 0x228);
  puVar14 = (undefined4 *)(param_1 + 0x228);
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = local_8c;
  puVar14 = (undefined4 *)(param_2 + 0x228);
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_2 + 0x54) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_2 + 0x204) = uVar5;
  uVar5 = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_2 + 0x208) = uVar5;
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  puVar11 = (undefined8 *)(param_1 + 0x120);
  puVar12 = local_8c;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar12 = *(undefined4 *)puVar11;
    puVar11 = (undefined8 *)((int)puVar11 + 4);
    puVar12 = puVar12 + 1;
  }
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x130);
  *(undefined8 *)(param_2 + 0x128) = local_84;
  *(undefined4 *)(param_2 + 0x120) = local_8c[0];
  *(undefined4 *)(param_2 + 0x124) = local_8c[1];
  *(undefined8 *)(param_2 + 0x130) = local_7c;
  uVar3 = *(undefined8 *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  *(undefined8 *)(param_2 + 0x150) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x15c);
  *(undefined8 *)(param_2 + 0x158) = uVar3;
  puVar12 = (undefined4 *)(param_1 + 0x178);
  puVar14 = local_8c;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_2 + 0x178);
  puVar14 = (undefined4 *)(param_1 + 0x178);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = local_8c;
  puVar14 = (undefined4 *)(param_2 + 0x178);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_1 + 0x1a0);
  puVar14 = local_8c;
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_2 + 0x1a0);
  puVar14 = (undefined4 *)(param_1 + 0x1a0);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = local_8c;
  puVar14 = (undefined4 *)(param_2 + 0x1a0);
  for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_1 + 200);
  puVar14 = local_8c;
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = (undefined4 *)(param_2 + 200);
  puVar14 = (undefined4 *)(param_1 + 200);
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  puVar12 = local_8c;
  puVar14 = (undefined4 *)(param_2 + 200);
  for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  if (*(int *)(param_1 + 0x5c) != 9) {
    FUN_00477e00();
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if (*(int *)(param_2 + 0x5c) != 9) {
    FUN_00477e00();
    *(undefined4 *)(param_2 + 100) = 0;
  }
  FUN_00425880();
  FUN_00425880();
  FUN_00419830();
  FUN_00419830();
  uVar7 = *(uint *)(param_1 + 0x60);
  uVar9 = *(uint *)(param_2 + 0x60);
  *(uint *)(param_1 + 0x60) = uVar7 & 0xfffffffe;
  *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | uVar9 & 1;
  *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | uVar7 & 1;
  if (*(int *)(param_1 + 0x5c) == 1) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
  }
  if (*(int *)(param_2 + 0x5c) == 1) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | 1;
  }
  if (*(int *)(param_1 + 0x5c) == 1) {
    FUN_004722c0();
  }
  if (*(int *)(param_2 + 0x5c) == 1) {
    FUN_004722c0();
  }
  cVar4 = FUN_00417560();
  if ((cVar4 != '\0') || (cVar4 = FUN_00417560(), cVar4 != '\0')) {
    FUN_0056eda0();
  }
  FUN_00442c30();
  FUN_00442c30();
  FUN_004772b0();
  FUN_004772b0();
  FUN_00401c50();
  iVar6 = (local_98 - (int)local_a0) / 0xc;
  if (iVar6 != 0) {
    uVar7 = iVar6 * 0xc;
    if (uVar7 < 0x81) {
      local_94 = (double)CONCAT44(local_94._4_4_,&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
      LVar8 = InterlockedExchange(&DAT_0068c164,1);
      uVar7 = DAT_0066b83c;
      if (LVar8 != 0) {
        uVar9 = 0;
        if (DAT_0066b83c != 0) {
          uVar13 = DAT_0068c168 >> 1;
          do {
            if (((uVar13 <= uVar9) && (DAT_0068c164 == 0)) &&
               (LVar8 = InterlockedExchange(&DAT_0068c164,1), LVar8 == 0)) {
              DAT_0066b83c = 1000;
              DAT_0068c168 = uVar9;
              goto LAB_0047416c;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        DAT_0066b83c = 0x1e;
        iVar6 = 6;
        while( true ) {
          iVar10 = iVar6;
          if (0x1b < iVar6) {
            iVar10 = 0x1b;
          }
          LVar8 = InterlockedExchange(&DAT_0068c164,1);
          if (LVar8 == 0) break;
          if (iVar10 < 0x15) {
            Sleep(0);
            iVar6 = iVar6 + 1;
          }
          else {
            Sleep(1 << ((char)iVar10 - 0x14U & 0x1f));
            iVar6 = iVar6 + 1;
          }
        }
      }
LAB_0047416c:
      *local_a0 = *local_94._0_4_;
      *local_94._0_4_ = local_a0;
      DAT_0068c164 = 0;
    }
    else {
      FUN_0061c888();
    }
  }
  ExceptionList = local_c;
  return 0;
}


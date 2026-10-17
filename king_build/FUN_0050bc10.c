
void FUN_0050bc10(int *param_1,int param_2,undefined1 param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int unaff_retaddr;
  int iStack_120;
  undefined1 auStack_118 [4];
  int iStack_114;
  int iStack_110;
  float fStack_10c;
  int local_108;
  int iStack_104;
  _SYSTEMTIME local_f0;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined4 auStack_8c [4];
  int iStack_7c;
  int iStack_68;
  int *piStack_c;
  int iStack_8;
  int iStack_4;
  
  puVar14 = &local_e0;
  for (iVar12 = 0x19; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  local_e0._0_1_ = (undefined1)param_2;
  local_e0._1_1_ = param_3;
  GetLocalTime(&local_f0);
  local_e0._3_1_ = (undefined1)local_f0.wMonth;
  local_e0._2_1_ = (undefined1)local_f0.wDay;
  local_d9 = (undefined1)local_f0.wSecond;
  local_da = (undefined1)local_f0.wMinute;
  local_dc = (undefined1)((ulonglong)(local_f0._0_4_ & 0xffff) % 100);
  local_db = (undefined1)local_f0.wHour;
  (**(code **)(*param_1 + 0x10))(param_1,&local_e0,100,&local_108);
  iVar12 = (**(code **)(*DAT_00695c00 + 0x14))();
  iStack_110 = (**(code **)(*DAT_00695c00 + 0x18))();
  iStack_110 = iStack_110 + -2;
  puVar14 = auStack_8c;
  for (iVar13 = 0x1f; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar14 = 0;
    puVar14 = puVar14 + 1;
  }
  auStack_8c[0] = 0x7c;
  auStack_8c[1] = 0x7ff9ee;
  iStack_104 = **(int **)(DAT_00695c00[0x92d] + 100);
  if (iStack_104 != 0) {
    if (unaff_retaddr == 0) {
      iVar6 = (**(code **)(*DAT_0071f85c + 100))(DAT_0071f85c,0,auStack_8c,0x11,0);
      iVar13 = iStack_7c;
      if (iVar6 != 0) {
        return;
      }
    }
    else {
      iStack_68 = *(int *)(DAT_006cd454 + 8);
      iVar13 = (uint)*(ushort *)(DAT_006cd454 + 0x18) * (uint)*(ushort *)(DAT_006cd454 + 0x14);
    }
    if ((iStack_68 != 0) &&
       (fStack_10c = (float)(iVar12 + -2) / (float)iStack_8, iVar12 = iStack_4,
       iStack_114 = iStack_68, 0 < iStack_4)) {
      do {
        iVar6 = __ftol();
        local_108 = iVar6 * iVar13 + iStack_114;
        iVar6 = local_108 + iVar13;
        iStack_120 = param_2;
        if (0 < param_2) {
          do {
            iVar11 = local_108;
            iVar7 = __ftol();
            uVar1 = *(undefined2 *)(iVar11 + iVar7 * 2);
            uVar2 = *(undefined2 *)(iVar11 + 2 + iVar7 * 2);
            uVar3 = *(undefined2 *)(iVar6 + iVar7 * 2);
            uVar4 = *(undefined2 *)(iVar6 + 2 + iVar7 * 2);
            bVar5 = FUN_005b59b0(uVar1);
            uVar8 = FUN_005b59b0(uVar2);
            uVar9 = FUN_005b59b0(uVar3);
            uVar10 = FUN_005b59b0(uVar4);
            iVar11 = (int)((uVar10 & 0xff) + (uint)bVar5 + (uVar8 & 0xff) + (uVar9 & 0xff)) >> 2;
            bVar5 = FUN_005b5970(uVar1,iVar11);
            uVar8 = FUN_005b5970(uVar2);
            uVar9 = FUN_005b5970(uVar3);
            uVar10 = FUN_005b5970(uVar4);
            iVar7 = (int)((uVar10 & 0xff) + (uint)bVar5 + (uVar8 & 0xff) + (uVar9 & 0xff)) >> 2;
            bVar5 = FUN_005b5930(uVar1,iVar7);
            uVar8 = FUN_005b5930(uVar2);
            uVar9 = FUN_005b5930(uVar3);
            uVar10 = FUN_005b5930(uVar4);
            FUN_005b8d10((int)((uVar10 & 0xff) + (uint)bVar5 + (uVar8 & 0xff) + (uVar9 & 0xff)) >> 2
                         ,iVar7,iVar11);
            (**(code **)(*piStack_c + 0x10))(piStack_c,&stack0xfffffecb,1,auStack_118);
            iStack_120 = iStack_120 + -1;
            param_2 = iStack_8;
          } while (iStack_120 != 0);
        }
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if (unaff_retaddr == 0) {
      (**(code **)(*DAT_0071f85c + 0x80))(DAT_0071f85c,0);
    }
  }
  return;
}


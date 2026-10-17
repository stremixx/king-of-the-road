
int __thiscall FUN_005c0aa0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  HRESULT HVar1;
  HANDLE pvVar2;
  LPCSTR lpFileName;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 unaff_BL;
  int *unaff_EBP;
  int *piVar11;
  int *unaff_EDI;
  int *piVar12;
  undefined1 *puVar13;
  int *piVar14;
  int **ppiVar15;
  int *piVar16;
  int *local_ac;
  LPCSTR local_a8;
  int iStack_a0;
  undefined4 auStack_9c [2];
  LPCSTR local_94;
  int iStack_80;
  uint uStack_7c;
  undefined4 auStack_60 [21];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00647fd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005c09a0();
  param_1[0x230] = param_4;
  local_ac = (int *)0x0;
  local_4 = 0;
  HVar1 = CoCreateInstance((IID *)&DAT_00650928,(LPUNKNOWN)0x0,7,(IID *)&DAT_0067e348,&local_ac);
  if (HVar1 != 0) {
    local_4 = 0xffffffff;
    if (local_ac == (int *)0x0) {
      ExceptionList = local_c;
      return HVar1;
    }
    (**(code **)(*local_ac + 8))();
    ExceptionList = local_c;
    return HVar1;
  }
  FUN_00635abb();
  local_4._0_1_ = 1;
  pvVar2 = CreateFileA(local_a8,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  param_1[9] = (int)pvVar2;
  if (pvVar2 == (HANDLE)0x0) {
LAB_005c0b55:
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00635a91();
    local_4 = 0xffffffff;
    if (local_ac != (int *)0x0) {
      (**(code **)(*local_ac + 8))();
      ExceptionList = local_c;
      return 1;
    }
  }
  else {
    lpFileName = (LPCSTR)FUN_005c1090();
    local_4._0_1_ = 2;
    piVar16 = local_ac;
    local_94 = lpFileName;
    iVar3 = (**(code **)(*local_ac + 0x1c))();
    if (iVar3 != 0) {
      Ordinal_6();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_00635a91();
      local_4 = 0xffffffff;
      if (local_ac == (int *)0x0) {
        ExceptionList = local_c;
        return iVar3;
      }
      (**(code **)(*local_ac + 8))();
      ExceptionList = local_c;
      return iVar3;
    }
    ppiVar15 = &local_ac;
    local_ac = (int *)0x0;
    (**(code **)(*unaff_EBP + 0x24))();
    if (unaff_EBP == (int *)0x1) {
      piVar11 = unaff_EDI;
      (**(code **)(*unaff_EDI + 0x34))();
      puVar4 = auStack_60;
      for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      (*(code *)(*ppiVar15)[0x15])();
      piVar12 = (int *)&stack0xffffff30;
      puVar4 = (undefined4 *)&stack0xffffff50;
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      puVar13 = &stack0xffffff50;
      (**(code **)(*piVar11 + 0x2c))(piVar11,0,puVar13,0x40);
      if (((uint)piVar16 & 0x10000) != 0) {
        FUN_005d2250(s_avi_has_palette_0067e338,0);
      }
      piVar11 = param_1 + 0x115;
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar11 = 0;
        piVar11 = piVar11 + 1;
      }
      (**(code **)(*piVar12 + 0x44))(piVar12,0,param_1 + 0xb,0x28,&stack0xffffff14);
      iVar3 = param_1[0xf];
      piVar11 = param_1 + 0xb;
      piVar12 = param_1 + 0x115;
      for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar12 = *piVar11;
        piVar11 = piVar11 + 1;
        piVar12 = piVar12 + 1;
      }
      iVar3 = ICOpen(0x63646976,iVar3,2);
      param_1[0x220] = iVar3;
      if (iVar3 == 0) {
        Ordinal_6(puVar13);
        goto LAB_005c0b55;
      }
      *(undefined2 *)((int)param_1 + 0x462) = (undefined2)auStack_60[0];
      param_1[0x119] = 0;
      param_1[0x21f] = param_1[0x115] + 0x454 + (int)param_1;
      iVar3 = ICSendMessage(iVar3,0x400b,param_1 + 0xb,param_1 + 0x115);
      if (iVar3 == 0) {
        iVar3 = ICSendMessage();
        if (iVar3 == 0) {
          iVar3 = param_1[2];
          puVar4 = (undefined4 *)FUN_00631d33();
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar7 = puVar4;
            if (-1 < iVar3 + -1) {
              do {
                puVar7[1] = 0;
                *puVar7 = 0;
                iVar3 = iVar3 + -1;
                puVar7 = puVar7 + 4;
              } while (iVar3 != 0);
            }
          }
          *param_1 = (int)puVar4;
          iVar3 = 0;
          if (0 < param_1[2]) {
            iVar9 = 0;
            do {
              iVar5 = (**(code **)(*unaff_EDI + 0x58))();
              *(LPCSTR *)(iVar9 + *param_1) = local_a8;
              *(int *)(iVar9 + 4 + *param_1) = iStack_a0;
              *(undefined4 *)(iVar9 + 8 + *param_1) = auStack_9c[0];
              *(undefined1 *)(iVar9 + 0xc + *param_1) = unaff_BL;
              if (iVar5 != 0) break;
              iVar3 = iVar3 + 1;
              iVar9 = iVar9 + 0x10;
            } while (iVar3 < param_1[2]);
          }
          param_1[0x221] = 0;
          iVar3 = FUN_00631d33();
          param_1[0x226] = iVar3;
          iVar3 = FUN_00631d33();
          param_1[0x227] = iVar3;
          local_ac = (int *)0x0;
          param_1[0x228] = 1;
          *(double *)(param_1 + 0x22c) = (double)uStack_7c / (double)iStack_80;
          if (puStack_8 == (undefined1 *)0x8) {
            DAT_0071f818 = 1;
          }
          (**(code **)(*unaff_EDI + 0x28))();
          if (iStack_a0 < 1) {
            Ordinal_6();
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00635a91();
          }
          else {
            FUN_005c2560();
            pvVar2 = CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0)
            ;
            param_1[10] = (int)pvVar2;
            piVar11 = (int *)&stack0xffffff44;
            puVar4 = auStack_9c;
            iVar9 = 0x40;
            piVar14 = (int *)0x0;
            (**(code **)(*piVar16 + 0x30))();
            piVar16 = param_1 + 3;
            (**(code **)(*piVar11 + 0x38))(piVar11,0);
            piVar12 = (int *)&stack0xffffff20;
            (**(code **)(*piVar14 + 0x48))(piVar14,0,param_1 + 4,0x12);
            DAT_00701eb4 = 0;
            FUN_005c1e50(param_1 + 4,&LAB_005c0a60,param_1);
            iVar3 = *piVar16;
            uVar6 = (uint)*(ushort *)((int)param_1 + 0x1e) * param_1[5];
            *(double *)(param_1 + 0x22e) = (double)uVar6;
            puVar7 = (undefined4 *)FUN_00631d33(iVar3 << 4);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              puVar10 = puVar7;
              if (-1 < iVar3 + -1) {
                do {
                  puVar10[1] = 0;
                  *puVar10 = 0;
                  iVar3 = iVar3 + -1;
                  puVar10 = puVar10 + 4;
                } while (iVar3 != 0);
              }
            }
            param_1[1] = (int)puVar7;
            iVar3 = 0;
            if (0 < *piVar16) {
              iVar5 = 0;
              do {
                iVar8 = (**(code **)(*piVar12 + 0x40))
                                  (piVar12,0,iVar3,&stack0xffffff20,&stack0xffffff10,
                                   &stack0xffffff24);
                *(uint *)(iVar5 + param_1[1]) = uVar6;
                *(int **)(iVar5 + 4 + param_1[1]) = piVar11;
                *(int *)(iVar5 + 8 + param_1[1]) = iVar9;
                if (iVar8 != 0) break;
                iVar3 = iVar3 + 1;
                iVar5 = iVar5 + 0x10;
              } while (iVar3 < *piVar16);
            }
            param_1[0x224] = 0;
            param_1[0x225] = 0;
            param_1[0x223] = 0;
            param_1[0x222] = 0;
            Ordinal_6(puVar4);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00635a91();
          }
          if (local_ac != (int *)0x0) {
            local_4 = 0xffffffff;
            (**(code **)(*local_ac + 8))();
          }
          ExceptionList = local_c;
          return 0;
        }
      }
      else {
        FUN_005d2250();
      }
    }
    Ordinal_6();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00635a91();
    local_4 = 0xffffffff;
    if (local_ac != (int *)0x0) {
      (**(code **)(*local_ac + 8))();
    }
  }
  ExceptionList = local_c;
  return 1;
}


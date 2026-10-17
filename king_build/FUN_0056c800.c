
undefined4 FUN_0056c800(int param_1,float *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float afStack_94 [4];
  double local_84;
  undefined8 local_7c;
  undefined4 *puStack_74;
  int iStack_70;
  undefined1 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 auStack_44 [11];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00646c5b;
  local_14 = ExceptionList;
  if (param_1 == 0x3b7) {
    puStack_68 = (undefined4 *)(uint)*(byte *)param_2;
    puStack_6c = (undefined1 *)0x56c838;
    ExceptionList = &local_14;
    FUN_0050c060();
    ExceptionList = local_14;
    return 0;
  }
  if (param_1 == 0x3b8) {
    if (*(byte *)param_2 == 6) {
      DAT_00695c00[0x2f7] = 1;
      return 0;
    }
    puStack_68 = (undefined4 *)(uint)*(byte *)param_2;
    puStack_6c = (undefined1 *)0x56c893;
    ExceptionList = &local_14;
    FUN_0051eb60();
    ExceptionList = local_14;
    return 0;
  }
  if (param_1 == 0x3b9) {
    puStack_68 = *(undefined4 **)((int)param_2 + 1);
    puStack_6c = (undefined1 *)(uint)*(byte *)param_2;
    iStack_70 = 0x56c8bf;
    ExceptionList = &local_14;
    FUN_00575d30();
    ExceptionList = local_14;
    return 0;
  }
  if (param_1 == 0x3bb) {
    if ((DAT_006f230c != 0) &&
       ((1 < *(int *)(DAT_006cdbcc + 0x514) || (*(int *)(DAT_006cdbcc + 0x524) == 2)))) {
      puStack_68 = (undefined4 *)0x3ff00000;
      puStack_6c = (undefined1 *)0x0;
      iStack_70 = 0x40380000;
      puStack_74 = (undefined4 *)0x0;
      local_7c = (double)param_2[1];
      local_84 = (double)*param_2;
      afStack_94[3] = 7.970021e-39;
      ExceptionList = &local_14;
      FUN_005a8030();
      if (8 < param_3) {
        *(float *)(DAT_006f230c + 0x220) = param_2[2];
        ExceptionList = local_14;
        return 0;
      }
    }
  }
  else if (param_1 == 0x3bc) {
    puStack_68 = (undefined4 *)*param_2;
    fVar7 = param_2[1];
    puStack_6c = (undefined1 *)0x56c979;
    ExceptionList = &local_14;
    (**(code **)(*DAT_00695c00 + 0x70))();
    puStack_6c = (undefined1 *)0x56c980;
    iVar1 = FUN_005e4980();
    if (iVar1 != 0) {
      *(float *)(*(int *)(iVar1 + 0x18) + 4) = fVar7;
      if ((*(int *)(iVar1 + 0x1c) != 0) &&
         (*(float *)(*(int *)(iVar1 + 0x1c) + 0x198) = fVar7, fVar7 == 2.8026e-45)) {
        puStack_68 = &uStack_50;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_48 = 0;
        puStack_6c = (undefined1 *)0x56c9cc;
        FUN_005a37a0();
        puStack_68 = (undefined4 *)0xc0;
        puStack_6c = (undefined1 *)0x56c9d6;
        iVar1 = FUN_00631d33();
        uStack_c = 0;
        if (iVar1 == 0) {
          piVar2 = (int *)0x0;
        }
        else {
          puStack_68 = (undefined4 *)0x3fb99999;
          puStack_6c = (undefined1 *)0x9999999a;
          iStack_70 = 3;
          puStack_74 = (undefined4 *)&DAT_0068c120;
          local_7c = 1.0530207191455762e-306;
          afStack_94[2] = (float)uStack_50;
          afStack_94[3] = (float)uStack_4c;
          local_84 = (double)(ulonglong)uStack_48;
          afStack_94[1] = 7.970378e-39;
          afStack_94[1] = (float)FUN_005eec70();
          afStack_94[0] = *(float *)(DAT_006cdbcc + 0x54c);
          piVar2 = (int *)FUN_005a45f0();
        }
        puStack_68 = (undefined4 *)0x1;
        uStack_c = 0xffffffff;
        puStack_6c = (undefined1 *)0x56ca55;
        (**(code **)(*piVar2 + 0x18))();
        ExceptionList = pvStack_18;
        return 0;
      }
    }
  }
  else {
    if (param_1 == 0x3c1) {
      puStack_68 = (undefined4 *)*param_2;
      fVar7 = param_2[1];
      puStack_6c = (undefined1 *)0x56ca84;
      ExceptionList = &local_14;
      (**(code **)(*DAT_00695c00 + 0x70))();
      puStack_6c = (undefined1 *)0x56ca8b;
      iVar1 = FUN_005e4980();
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      *(float *)(*(int *)(iVar1 + 0x18) + 4) = fVar7;
    }
    else {
      if (param_1 != 0x3c2) {
        if (param_1 != 0x3c3) {
          if (param_1 == 0x3be) {
            fVar7 = 0.0;
            if (0x44 < param_3) {
              fVar7 = param_2[0x1d];
            }
            DAT_00671984 = *param_2;
            pfVar8 = param_2 + 0x11;
            pfVar10 = afStack_94;
            for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
              *pfVar10 = *pfVar8;
              pfVar8 = pfVar8 + 1;
              pfVar10 = pfVar10 + 1;
            }
            ExceptionList = &local_14;
            FUN_0056efe0(*param_2,fVar7,param_2 + 1,param_2 + 9);
            ExceptionList = local_14;
            return 0;
          }
          if (param_1 == 0x3bf) {
            if (*(int *)(DAT_006cdbcc + 0x514) < 2) {
              return 0;
            }
            DAT_00671984 = *param_2;
            return 0;
          }
          if (param_1 != 0x3c0) {
            return 0;
          }
          DAT_0067a66c = (uint)*(byte *)param_2;
          return 0;
        }
        puStack_68 = (undefined4 *)*param_2;
        fVar7 = param_2[1];
        puStack_6c = (undefined1 *)0x56cb0d;
        ExceptionList = &local_14;
        (**(code **)(*DAT_00695c00 + 0x70))();
        puStack_6c = (undefined1 *)0x56cb14;
        iVar1 = FUN_005e4980();
        if (iVar1 == 0) {
          ExceptionList = local_14;
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 0x1c);
        if (iVar1 == 0) {
          ExceptionList = local_14;
          return 0;
        }
        if ((*(int *)(iVar1 + 0x1a0) == 0) && (fVar7 != 0.0)) {
          iVar3 = 0;
          fVar5 = fVar7;
          do {
            fVar5 = (float)((int)fVar5 >> 1);
            iVar3 = iVar3 + 1;
          } while (fVar5 != 0.0);
          iVar6 = 4;
          puVar4 = auStack_44 + 2;
          do {
            puVar4[-2] = 0;
            puVar4[-1] = 0;
            *puVar4 = 0;
            puVar4 = puVar4 + 3;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
          puVar4 = &DAT_00701550;
          puVar9 = auStack_44;
          for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar9 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar9 = puVar9 + 1;
          }
          puStack_68 = auStack_44;
          puStack_6c = (undefined1 *)0x56cb82;
          FUN_005a36c0();
          puStack_6c = &LAB_0056c7e0;
          puStack_74 = auStack_44;
          local_7c = (double)CONCAT44(0x56cb93,(undefined4)local_7c);
          iStack_70 = iVar3 / 2;
          puStack_68 = (undefined4 *)iVar1;
          FUN_004ba110();
        }
        *(float *)(iVar1 + 0x1a0) = fVar7;
        ExceptionList = local_14;
        return 0;
      }
      puStack_68 = (undefined4 *)*param_2;
      fVar7 = param_2[1];
      puStack_6c = (undefined1 *)0x56cad9;
      ExceptionList = &local_14;
      (**(code **)(*DAT_00695c00 + 0x70))();
      puStack_6c = (undefined1 *)0x56cae0;
      iVar1 = FUN_005e4980();
      if (iVar1 == 0) {
        ExceptionList = local_14;
        return 0;
      }
    }
    if (*(int *)(iVar1 + 0x1c) != 0) {
      *(float *)(*(int *)(iVar1 + 0x1c) + 0x198) = fVar7;
      ExceptionList = local_14;
      return 0;
    }
  }
  ExceptionList = local_14;
  return 0;
}


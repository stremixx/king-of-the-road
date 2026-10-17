
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_005f3ba0(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fStack_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006491ab;
  pvStack_c = ExceptionList;
  local_54 = 0.0;
  local_50 = 0.0;
  local_4c = 0.0;
  ExceptionList = &pvStack_c;
  (**(code **)(*param_2 + 0x28))(&local_54);
  pfVar6 = (float *)(param_1 + 0xe);
  fStack_40 = (float)param_2[5];
  fStack_3c = (float)param_2[6];
  fStack_38 = (float)param_2[7];
  fStack_34 = (float)param_2[8];
  if ((*pfVar6 * fStack_58 + (float)param_1[0xf] * local_54 + (float)param_1[0x10] * local_50 +
      (float)param_1[0x11]) - fStack_34 <= (float)_DAT_0064a668) {
    if (*pfVar6 * fStack_58 + (float)param_1[0xf] * local_54 + (float)param_1[0x10] * local_50 +
        fStack_34 + (float)param_1[0x11] < (float)_DAT_0064a668) {
      iVar5 = 2;
      goto LAB_005f3ea6;
    }
    if ((DAT_00701dec & 0x4000) == 0) {
      if (*pfVar6 * fStack_58 + (float)param_1[0xf] * local_54 + (float)param_1[0x10] * local_50 +
          (float)param_1[0x11] <= (float)_DAT_0064a668) {
        iVar5 = 2;
        iVar4 = 0;
      }
      else {
        iVar5 = 0;
        iVar4 = 2;
      }
      if ((((param_2[4] == 0x11) && (param_2[0x14] == 0)) && (param_2[0x13] == 0)) &&
         ((**(code **)(*param_2 + 0x28))(&fStack_40),
         ABS(*pfVar6 * fStack_40 +
             (float)param_1[0xf] * fStack_3c + (float)param_1[0x10] * fStack_38 +
             (float)param_1[0x11]) < fStack_34)) {
        puVar2 = (undefined4 *)FUN_00631d33(0x58);
        puStack_8 = (undefined1 *)0x0;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          FUN_005eed00(&DAT_0068c120,0x11);
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0xe] = 0;
          puVar2[0xf] = 0;
          *puVar2 = &PTR_FUN_0064b7cc;
          puVar2[0x10] = param_2;
          puVar2[0x11] = 0;
          puVar2[0x12] = 0;
          puVar2[0x13] = 0;
          puVar2[0x14] = 0;
          puVar2[0x15] = 0xffffffff;
          puVar2[9] = param_2[9];
        }
        puStack_8 = (undefined1 *)0xffffffff;
        *(byte *)(puVar2 + 10) = *(byte *)(puVar2 + 10) | *(byte *)(param_2 + 10) & 1;
        puVar2[5] = fStack_40;
        puVar2[6] = fStack_3c;
        puVar2[7] = fStack_38;
        puVar2[8] = fStack_34;
        puVar2[0x14] = 1;
        if (iVar4 == 2) {
          local_4c = -*pfVar6;
          fStack_48 = -(float)param_1[0xf];
          fStack_44 = -(float)param_1[0x10];
          fStack_24 = -(float)param_1[0x11];
          fStack_30 = local_4c;
          fStack_2c = fStack_48;
          fStack_28 = fStack_44;
          FUN_005cd110(&fStack_30);
        }
        else {
          FUN_005cd110(pfVar6);
          local_4c = -*pfVar6;
          fStack_48 = -(float)param_1[0xf];
          fStack_44 = -(float)param_1[0x10];
          fStack_14 = -(float)param_1[0x11];
          pfVar6 = &fStack_20;
          fStack_20 = local_4c;
          fStack_1c = fStack_48;
          fStack_18 = fStack_44;
        }
        FUN_005cd110(pfVar6);
        param_2[0x13] = (int)puVar2;
        for (piVar1 = *(int **)(param_1[0xc] + iVar4 * 4); piVar1 != (int *)0x0;
            piVar1 = (int *)piVar1[2]) {
          iVar3 = (**(code **)(*piVar1 + 0x1c))(puVar2);
          if (iVar3 != 0) {
            if (piVar1 != (int *)0x0) goto LAB_005f3ea6;
            break;
          }
        }
        (**(code **)(*param_1 + 0x14))(iVar4,puVar2);
      }
      goto LAB_005f3ea6;
    }
  }
  iVar5 = 0;
LAB_005f3ea6:
  piVar1 = *(int **)(param_1[0xc] + iVar5 * 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      (**(code **)(*param_1 + 0x14))(iVar5,param_2);
      ExceptionList = pvStack_10;
      return 1;
    }
    iVar4 = (**(code **)(*piVar1 + 0x1c))(param_2);
    if (iVar4 != 0) break;
    piVar1 = (int *)piVar1[2];
  }
  ExceptionList = pvStack_10;
  return 1;
}


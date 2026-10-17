
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_005ba910(int param_1,undefined4 *param_2,int param_3,undefined4 *param_4,int param_5,int param_6
            ,int param_7,double param_8,int param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  unkbyte10 extraout_ST0;
  float10 extraout_ST0_00;
  unkbyte10 extraout_ST1;
  int local_20;
  
  iVar5 = *(int *)(param_1 + 0x40);
  if (iVar5 == 2) {
    local_20 = 1;
  }
  else if (iVar5 == 5) {
    local_20 = 0;
  }
  else {
    if (iVar5 == 8) {
      local_20 = 2;
    }
    else if (local_20 != 2) goto LAB_005ba941;
    if (DAT_0071f824 != 0) {
      param_4 = (undefined4 *)0x0;
      if (param_6 < 1) {
        return;
      }
      fVar11 = (float10)param_8;
      do {
        param_9 = 0;
        fVar1 = (float)((float10)(int)param_4 / (float10)param_6 + fVar11);
        if (0 < param_7) {
          fVar12 = (float10)fVar1 * (float10)_DAT_0065076c * (float10)_DAT_0064c8f0;
          fVar13 = (float10)fVar1 * (float10)_DAT_00650768 * (float10)_DAT_0064c8f0;
          fsin(fVar13);
          fsin(fVar12);
          fcos(fVar13);
          fVar12 = (float10)fcos((float10)(double)fVar12);
          puVar9 = param_2;
          do {
            fVar11 = (float10)param_9 / (float10)param_7 + fVar11;
            fVar2 = (float)(fVar11 * (float10)_DAT_00650764 * (float10)_DAT_0064c8f0);
            fVar3 = (float)((fVar11 + (float10)fVar1) * (float10)_DAT_0064c3ec *
                           (float10)_DAT_0064c8f0);
            fVar4 = (float)(((float10)fVar1 - fVar11) * (float10)_DAT_00650760 *
                           (float10)_DAT_0064c8f0);
            fVar13 = (float10)(float)(fVar11 + (float10)fVar1) * (float10)_DAT_0064ba80 *
                     (float10)_DAT_0064c8f0;
            fcos((float10)(float)((float10)fVar1 - fVar11) * (float10)_DAT_0064b31c *
                 (float10)_DAT_0064c8f0);
            fsin(fVar13);
            fcos(fVar11 * (float10)_DAT_0064caa0 * (float10)_DAT_0064c8f0);
            fcos((float10)fVar4);
            fsin((float10)fVar3);
            fcos((float10)fVar2);
            fVar11 = fVar12;
            uVar6 = __ftol();
            fsin(extraout_ST0);
            *(undefined1 *)puVar9 = uVar6;
            fcos(extraout_ST1);
            fsin(fVar13);
            fsin((float10)fVar4);
            fcos((float10)fVar3);
            fsin((float10)fVar2);
            uVar6 = __ftol();
            *(undefined1 *)((int)puVar9 + 1) = uVar6;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            param_9 = param_9 + 1;
            fVar12 = extraout_ST0_00;
          } while (param_9 < param_7);
        }
        param_2 = (undefined4 *)((int)param_2 + param_3);
        param_4 = (undefined4 *)((int)param_4 + 1);
      } while ((int)param_4 < param_6);
      return;
    }
  }
LAB_005ba941:
  if ((param_3 == param_5) && (param_3 == (uint)*(ushort *)(param_1 + 0x18) * param_7)) {
    if (param_9 == 0) {
      puVar9 = param_2;
      for (uVar7 = (uint)(param_3 * param_6) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *param_4;
        param_4 = param_4 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = param_3 * param_6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
    }
    else {
      FUN_005e62a0((undefined1 *)(*(int *)(param_1 + 0x20) + (int)param_4),param_2,param_5 * param_6
                  );
    }
    FUN_005bac40(param_2,param_6 * param_7,param_8._0_4_,param_8._4_4_,local_20);
    return;
  }
  if (0 < param_6) {
    do {
      if (param_9 == 0) {
        uVar8 = (uint)*(ushort *)(param_1 + 0x18) * param_7;
        puVar9 = param_4;
        puVar10 = param_2;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      else {
        FUN_005e62a0((undefined1 *)(*(int *)(param_1 + 0x20) + (int)param_4),param_2,
                     (uint)*(ushort *)(param_1 + 0x18) * param_7);
      }
      FUN_005bac40(param_2,param_7,param_8._0_4_,param_8._4_4_,local_20);
      param_2 = (undefined4 *)((int)param_2 + param_3);
      param_4 = (undefined4 *)((int)param_4 + param_5);
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  return;
}


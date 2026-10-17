
undefined4 __thiscall FUN_005fb050(int param_1,int *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 *puVar7;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064924b;
  local_c = ExceptionList;
  if ((((*(int *)(param_1 + 0x80) != 0) && ((DAT_00701dec & 0x4000) == 0)) && (param_2[4] == 0x11))
     && ((param_2[0x14] == 0 && (param_2[0x13] == 0)))) {
    local_2c = (float)param_2[5];
    local_28 = (float)param_2[6];
    local_24 = (float)param_2[7];
    local_20 = (float)param_2[8];
    ExceptionList = &local_c;
    (**(code **)(*param_2 + 0x28))(&local_2c);
    pfVar1 = (float *)(param_1 + 0x30);
    fVar2 = -*(float *)(param_1 + 0x3c) * *pfVar1 +
            -*(float *)(param_1 + 0x44) * *(float *)(param_1 + 0x38) +
            -*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x34);
    fVar3 = *pfVar1 * local_2c +
            *(float *)(param_1 + 0x34) * local_28 + *(float *)(param_1 + 0x38) * local_24 + fVar2;
    if (ABS(fVar3) <= local_20) {
      fVar4 = local_24 - fVar3 * *(float *)(param_1 + 0x38);
      fVar5 = local_28 - fVar3 * *(float *)(param_1 + 0x34);
      iVar6 = FUN_005fae40(local_2c - fVar3 * *pfVar1,*(undefined4 *)(param_1 + 0x3c),
                           *(undefined4 *)(param_1 + 0x54));
      if (((iVar6 != 0) &&
          (iVar6 = FUN_005fae40(fVar5,*(undefined4 *)(param_1 + 0x40),
                                *(undefined4 *)(param_1 + 0x58)), iVar6 != 0)) &&
         (iVar6 = FUN_005fae40(fVar4,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x5c)
                              ), iVar6 != 0)) {
        puVar7 = (undefined4 *)FUN_00631d33(0x58);
        uStack_4 = 0;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          FUN_005eed00(&DAT_0068c120,0x11);
          puVar7[0xc] = 0;
          puVar7[0xd] = 0;
          puVar7[0xe] = 0;
          puVar7[0xf] = 0;
          *puVar7 = &PTR_FUN_0064b7cc;
          puVar7[0x10] = param_2;
          puVar7[0x11] = 0;
          puVar7[0x12] = 0;
          puVar7[0x13] = 0;
          puVar7[0x14] = 0;
          puVar7[0x15] = 0xffffffff;
          puVar7[9] = param_2[9];
        }
        uStack_4 = 0xffffffff;
        *(byte *)(puVar7 + 10) = *(byte *)(puVar7 + 10) | *(byte *)(param_2 + 10) & 1;
        puVar7[5] = local_2c;
        puVar7[6] = local_28;
        puVar7[7] = local_24;
        puVar7[8] = local_20;
        puVar7[0x14] = 1;
        fStack_3c = *pfVar1;
        fStack_38 = *(float *)(param_1 + 0x34);
        fStack_34 = *(float *)(param_1 + 0x38);
        fStack_30 = fVar2;
        FUN_005cd110(&fStack_3c);
        fStack_3c = -*pfVar1;
        fStack_38 = -*(float *)(param_1 + 0x34);
        fStack_34 = -*(float *)(param_1 + 0x38);
        fStack_10 = -fVar2;
        fStack_1c = fStack_3c;
        fStack_18 = fStack_38;
        fStack_14 = fStack_34;
        FUN_005cd110(&fStack_1c);
        param_2[0x13] = (int)puVar7;
        (**(code **)(**(int **)(param_1 + 0x80) + 0x1c))(puVar7);
      }
    }
  }
  ExceptionList = local_c;
  return 0;
}


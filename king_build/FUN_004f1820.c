
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004f1820(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined2 *puVar8;
  float *pfVar9;
  float *pfVar10;
  undefined2 *local_80;
  int local_7c;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_14;
  float local_10;
  undefined1 local_c [12];
  
  local_7c = 0;
  *(float *)(param_1 + 0xc4) = *param_4;
  *(float *)(param_1 + 200) = param_4[1];
  *(float *)(param_1 + 0xcc) = param_4[2];
  *(float *)(param_1 + 0xd0) = *param_4;
  *(float *)(param_1 + 0xd4) = param_4[1];
  *(float *)(param_1 + 0xd8) = param_4[2];
  if (0 < *(int *)(param_1 + 0xdd4)) {
    local_80 = (undefined2 *)(param_1 + 0x19a4);
    puVar8 = (undefined2 *)(param_1 + 0x110);
    puVar4 = (undefined4 *)(param_1 + 0xf68);
    pfVar7 = (float *)(param_1 + 0x1cc4);
    do {
      if (param_2 != 0) {
        pfVar7[-0x36f] = DAT_007015b0;
        pfVar7[-0x36e] = DAT_007015b4;
        pfVar7[-0x36d] = DAT_007015b8;
        puVar4[-0x20] = 0;
        *puVar4 = 0;
        puVar4[0x5ca] = 0x3c23d70a;
        puVar4[0x5c2] = 0x3f000000;
      }
      local_44 = DAT_00701594 * _DAT_0064b2e8;
      local_40 = DAT_00701598 * _DAT_0064b2e8;
      fVar1 = DAT_00701590 * _DAT_0064b2e8 + pfVar7[-2];
      fVar3 = local_44 + pfVar7[-1];
      fVar2 = local_40 + *pfVar7;
      local_74 = fVar1 * *(float *)(param_1 + 0x10) +
                 fVar3 * *(float *)(param_1 + 0x1c) + fVar2 * *(float *)(param_1 + 0x28) +
                 *(float *)(param_1 + 0x34);
      local_70 = fVar1 * *(float *)(param_1 + 0x14) +
                 fVar3 * *(float *)(param_1 + 0x20) + fVar2 * *(float *)(param_1 + 0x2c) +
                 *(float *)(param_1 + 0x38);
      local_6c = fVar1 * *(float *)(param_1 + 0x18) +
                 fVar3 * *(float *)(param_1 + 0x24) + fVar2 * *(float *)(param_1 + 0x30) +
                 *(float *)(param_1 + 0x3c);
      fVar1 = pfVar7[-2] - DAT_00701590 * _DAT_0064b2e8;
      fVar2 = pfVar7[-1] - local_44;
      fVar3 = *pfVar7 - local_40;
      local_68 = fVar1 * *(float *)(param_1 + 0x10) +
                 fVar2 * *(float *)(param_1 + 0x1c) + fVar3 * *(float *)(param_1 + 0x28) +
                 *(float *)(param_1 + 0x34);
      local_64 = fVar1 * *(float *)(param_1 + 0x14) +
                 fVar2 * *(float *)(param_1 + 0x20) + fVar3 * *(float *)(param_1 + 0x2c) +
                 *(float *)(param_1 + 0x38);
      local_60 = fVar2 * *(float *)(param_1 + 0x24) +
                 fVar3 * *(float *)(param_1 + 0x30) + fVar1 * *(float *)(param_1 + 0x18) +
                 *(float *)(param_1 + 0x3c);
      local_50 = local_68 - local_74;
      local_4c = local_64 - local_70;
      local_48 = local_60 - local_6c;
      local_38 = local_44;
      local_34 = local_40;
      local_30 = local_50;
      local_2c = local_4c;
      local_28 = local_48;
      local_14 = local_44;
      local_10 = local_40;
      FUN_005aaad0(&local_24,&local_30);
      if ((float)_DAT_0064c9a8 <=
          ABS(param_4[2] * local_1c + *param_4 * local_24 + local_20 * param_4[1])) {
        pfVar5 = (float *)FUN_004e5c4e(local_c,param_3,param_4,&local_74,&local_68);
        *(float *)(puVar8 + -0xc) = *pfVar5;
        *(float *)(puVar8 + -10) = pfVar5[1];
        *(float *)(puVar8 + -8) = pfVar5[2];
        *puVar8 = 1;
        *(float *)(puVar8 + -6) = *param_4;
        *(float *)(puVar8 + -4) = param_4[1];
        *(float *)(puVar8 + -2) = param_4[2];
        puVar8[1] = 0;
        *(undefined4 *)(puVar8 + 0x36) = 0;
        *(undefined4 *)(puVar8 + 0x6c) = 0;
        pfVar5 = pfVar7 + -0x718;
        *pfVar5 = *(float *)(puVar8 + -0xc);
        pfVar7[-0x717] = *(float *)(puVar8 + -10);
        pfVar7[-0x716] = *(float *)(puVar8 + -8);
        local_5c = *(float *)(param_1 + 0x900) * *pfVar5 +
                   *(float *)(param_1 + 0x90c) * pfVar7[-0x717] +
                   *(float *)(param_1 + 0x918) * pfVar7[-0x716] + *(float *)(param_1 + 0x924);
        local_58 = *(float *)(param_1 + 0x904) * *pfVar5 +
                   *(float *)(param_1 + 0x910) * pfVar7[-0x717] +
                   *(float *)(param_1 + 0x91c) * pfVar7[-0x716] + *(float *)(param_1 + 0x928);
        local_54 = *(float *)(param_1 + 0x908) * *pfVar5 +
                   *(float *)(param_1 + 0x914) * pfVar7[-0x717] +
                   *(float *)(param_1 + 0x920) * pfVar7[-0x716] + *(float *)(param_1 + 0x92c);
        pfVar7[-0x120] = local_5c;
        pfVar7[-0x11f] = local_58;
        pfVar7[-0x11e] = local_54;
        puVar4[-100] = (*pfVar7 - (float)puVar4[0x303]) - pfVar7[-0x11e];
        *local_80 = 0;
        if ((float)puVar4[-100] < _DAT_0064b254) {
          puVar4[-100] = 0;
        }
        if ((float)puVar4[0x40d] < (float)puVar4[-100]) {
          puVar4[-100] = puVar4[0x40d];
          *local_80 = 1;
        }
      }
      else {
        pfVar5 = (float *)(puVar8 + -0xc);
        puVar8[1] = 0;
        *puVar8 = 0;
        *pfVar5 = DAT_007015b0;
        *(float *)(puVar8 + -10) = DAT_007015b4;
        *(float *)(puVar8 + -8) = DAT_007015b8;
        *(float *)(puVar8 + -6) = DAT_007015b0;
        *(float *)(puVar8 + -4) = DAT_007015b4;
        *(float *)(puVar8 + -2) = DAT_007015b8;
        *(undefined4 *)(puVar8 + 0x36) = 0;
        *(undefined4 *)(puVar8 + 0x6c) = 0;
        pfVar9 = pfVar5;
        pfVar10 = (float *)(puVar8 + 0x784);
        for (iVar6 = 0x3e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *pfVar10 = *pfVar9;
          pfVar9 = pfVar9 + 1;
          pfVar10 = pfVar10 + 1;
        }
        *local_80 = 1;
        puVar4[-100] = puVar4[0x40d];
        pfVar7[-0x718] = *pfVar5;
        pfVar7[-0x717] = *(float *)(puVar8 + -10);
        pfVar7[-0x716] = *(float *)(puVar8 + -8);
        pfVar7[-0x138] = *pfVar5;
        pfVar7[-0x137] = *(float *)(puVar8 + -10);
        pfVar7[-0x136] = *(float *)(puVar8 + -8);
      }
      puVar4 = puVar4 + 1;
      local_80 = local_80 + 1;
      local_7c = local_7c + 1;
      puVar8 = puVar8 + 0x7c;
      pfVar7 = pfVar7 + 3;
    } while (local_7c < *(int *)(param_1 + 0xdd4));
  }
  return;
}


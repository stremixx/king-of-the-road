
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005b06d0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  float *pfVar8;
  undefined4 uVar9;
  int local_7c;
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  uint local_58;
  float local_54;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  float local_44;
  int iStack_40;
  int iStack_3c;
  uint uStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  uint uStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x21d8) == 0) {
    while (*(int *)(param_1 + 0x21dc) == 0) {
      if ((*(int *)(param_1 + 0x2054) <= param_5) || (*(int *)(param_2 + 0x34) < 0)) {
        if ((DAT_00701dcc == param_2) && (param_3 == DAT_0067decc)) {
          return;
        }
        iVar5 = thunk_FUN_005b5b70();
        if (iVar5 == 0) {
          return;
        }
        iVar5 = thunk_FUN_005b5b70();
        pbVar1 = (byte *)(iVar5 + (*(int *)(param_2 + 0x28) + 8) * 3);
        if (DAT_0071f864 == 0) {
          return;
        }
        local_7c = 1;
        pfVar8 = &local_44;
        for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
          *pfVar8 = 0.0;
          pfVar8 = pfVar8 + 1;
        }
        uVar2 = *(uint *)(param_2 + 0x20);
        if ((uVar2 & 1) == 0) {
          local_68 = (_DAT_0064b240 - *(float *)(param_2 + 0x58)) *
                     (float)*(byte *)(param_1 + 0x20f8) * _DAT_0064b478;
          if ((float)_DAT_0064ca48 < local_68) {
            local_68 = (float)_DAT_0064a660;
          }
          local_78 = (uint)pbVar1[2];
          local_5c = *(int *)(param_2 + 0x5c);
          local_74 = (float)*pbVar1 * (float)_DAT_00650748;
          local_70 = (float)pbVar1[1] * (float)_DAT_00650748;
          local_6c = (float)local_78 * (float)_DAT_00650748;
        }
        else {
          if ((((DAT_00701dcc != 0) && (*(uint *)(DAT_00701dcc + 0x20) == uVar2)) &&
              (*(int *)(DAT_00701dcc + 0x24) == *(int *)(param_2 + 0x24))) &&
             ((param_3 == DAT_0067decc && ((uVar2 & 0x1000) == 0)))) {
            local_7c = 0;
          }
          local_78 = (uint)*(byte *)(param_1 + 0x20f8);
          fVar4 = (_DAT_0064b240 - *(float *)(param_2 + 0x58)) * (float)local_78 * _DAT_0064b478;
          if ((float)_DAT_0064ca48 < fVar4) {
            fVar4 = (float)_DAT_0064a660;
          }
          if (param_4 == 0) {
            if ((uVar2 & 0x1000) == 0) {
              local_74 = 1.0;
              local_70 = 1.0;
              local_6c = 1.0;
              local_68 = fVar4;
            }
            else {
              local_78 = (uint)pbVar1[2];
              local_74 = (float)*pbVar1 * (float)_DAT_00650748;
              local_70 = (float)pbVar1[1] * (float)_DAT_00650748;
              local_6c = (float)local_78 * (float)_DAT_00650748;
              local_68 = fVar4;
            }
          }
          else if (param_4 == 1) {
            local_74 = 1.0;
            local_70 = 0.0;
            local_6c = 0.0;
            local_68 = fVar4;
          }
          else if (param_4 == 2) {
            local_74 = 0.0;
            local_70 = 1.0;
            local_6c = 0.0;
            local_68 = fVar4;
          }
          else if (param_4 == 3) {
            local_74 = 0.0;
            local_70 = 0.0;
            local_6c = 1.0;
            local_68 = fVar4;
          }
          local_5c = *(int *)(param_2 + 0x5c);
        }
        local_48 = 0;
        local_4c = 0;
        local_50 = 0;
        local_54 = 0.0;
        local_58 = 0;
        local_64 = local_5c;
        local_60 = local_5c;
        iVar6 = FUN_005afec0(param_2,DAT_00701dcc,0);
        iVar5 = 1;
        if (iVar6 == DAT_0067ded0) {
          iVar5 = local_7c;
        }
        DAT_0067ded0 = iVar6;
        if ((((param_3 == 0) || ((DAT_00701dec & 0x10) == 0)) ||
            ((DAT_0071f81c == 0 || ((*(uint *)(param_2 + 0x20) & 2) != 0)))) ||
           (((*(int *)(param_2 + 0x2c) != -1 && ((*(uint *)(param_2 + 0x20) & 0x20000) == 0)) ||
            (*(int *)(param_1 + 0x21b8) == 0)))) {
          *(undefined4 *)(param_1 + 0x21d0) = 0;
        }
        else {
          *(undefined4 *)(param_1 + 0x21d0) = 1;
          (**(code **)(*DAT_0071f868 + 0x8c))
                    (DAT_0071f868,1,*(undefined4 *)(*(int *)(param_1 + 0x21b8) + 0x4c));
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,0xb,1);
          piVar3 = *(int **)(*(int *)(param_1 + 0x21b8) + 0x48);
          iVar7 = (**(code **)(*piVar3 + 0x60))(piVar3);
          if (iVar7 == -0x7789fe3e) {
            FUN_005bb2a0(*(undefined4 *)(param_1 + 0x21c0),*(undefined4 *)(param_1 + 0x21c4));
          }
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,2,2);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,3,1);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,1,4);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,5,2);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,4,2);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,0x10,2);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,0x11,2);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,1,0xc,3);
          (**(code **)(*DAT_0071f868 + 0x8c))(DAT_0071f868,2,0);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,2,4,1);
          (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,2,1,1);
        }
        if (iVar5 != 0) {
          if ((((*(byte *)(param_2 + 0x20) & 0x20) == 0) && (*(char *)(param_1 + 0x20f8) == -1)) &&
             (iVar6 == 0)) {
            (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,0);
          }
          else {
            (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,1);
          }
          fStack_10 = (float)*(int *)(param_2 + 0x24);
          local_48 = local_78;
          fStack_30 = local_70;
          local_44 = local_74;
          fStack_2c = local_6c;
          fStack_28 = local_68;
          iStack_24 = local_64;
          iStack_20 = local_60;
          iStack_1c = local_5c;
          uStack_18 = local_58;
          fStack_14 = local_54;
          local_4c = local_7c;
          if (iStack_4 == 0) {
            iStack_40 = local_60;
            iStack_3c = local_5c;
            uStack_38 = local_58;
            fStack_34 = local_54;
            (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x94,1);
            iVar5 = *DAT_0071f868;
          }
          else {
            uStack_38 = local_78;
            iStack_3c = local_7c;
            fStack_34 = local_74;
            iStack_40 = unaff_EBX;
            (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x94,0);
            iVar5 = *DAT_0071f868;
          }
          (**(code **)(iVar5 + 0x50))(DAT_0071f868,0x91,iStack_4 == 0);
          (**(code **)(*DAT_0071f868 + 0x40))(DAT_0071f868,&local_68);
          if ((DAT_00701dec & 4) != 0) {
            if ((*(uint *)(param_2 + 0x20) & 0x100) == 0) {
              (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1c,1);
            }
            else {
              (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1c,0);
            }
          }
          if ((DAT_00701dec & 0x4000) != 0) {
            if ((*(uint *)(param_2 + 0x20) & 0x80) == 0) {
              if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
                (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,7,1);
                (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0xe,0);
                (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x17,4);
                DAT_00701dcc = param_2;
                DAT_0067decc = iStack_1c;
                return;
              }
              (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,7,1);
              (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0xe,1);
              uVar9 = 4;
              iVar5 = *DAT_0071f868;
            }
            else {
              (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,7,0);
              (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0xe,0);
              uVar9 = 8;
              iVar5 = *DAT_0071f868;
            }
            (**(code **)(iVar5 + 0x50))(DAT_0071f868,0x17,uVar9);
          }
        }
        DAT_00701dcc = param_2;
        DAT_0067decc = param_3;
        return;
      }
      param_5 = param_5 + 1;
      param_2 = *(int *)(param_1 + 0x2044) + *(int *)(param_2 + 0x34) * 0x7c;
    }
  }
  return;
}


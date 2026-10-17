
void FUN_005b6a50(ushort *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_retaddr;
  uint local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined1 local_50 [4];
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_4;
  
  iVar3 = FUN_005b5b70();
  if (*(int *)(param_1 + 0x3a) != 1) {
    if ((param_7 == 0) && (param_1[2] != 1)) {
      if (iVar3 == 0) {
        return;
      }
      param_6 = FUN_005b9aa0(param_6);
    }
    iVar3 = FUN_005b71a0(0,0,&param_2,&param_3,&param_4,&param_5);
    if ((((iVar3 == 0) &&
         (iVar3 = FUN_005b71a0(1,0,&param_2,&param_3,&param_4,&param_5), iVar3 == 0)) &&
        (iVar3 = FUN_005b71a0(2,*param_1 - 1,&param_2,&param_3,&param_4,&param_5), iVar3 == 0)) &&
       (iVar5 = FUN_005b71a0(3,param_1[1] - 1,&param_2,&param_3,&param_4,&param_5), iVar6 = param_3,
       iVar3 = param_2, iVar5 == 0)) {
      if (param_4 < param_2) {
        param_2 = param_4;
        param_3 = param_5;
        param_4 = iVar3;
        param_5 = iVar6;
      }
      uVar8 = param_5 - param_3 >> 0x1f;
      iVar3 = (param_5 - param_3 ^ uVar8) - uVar8;
      uVar7 = param_4 - param_2;
      uVar8 = uVar7;
      if (param_3 < param_5) {
        if (iVar3 < (int)uVar7) {
          local_78 = uVar7 - iVar3;
          local_68 = 1;
          local_5c = 1;
          uVar9 = (uint)param_1[2];
          uVar10 = (uint)param_1[3];
          local_64 = 0;
          uVar7 = uVar10 + uVar9;
          uVar8 = -iVar3;
          local_60 = uVar9;
        }
        else {
          local_78 = uVar7 - iVar3;
          local_64 = 1;
          local_5c = 1;
          uVar10 = (uint)param_1[3];
          uVar9 = (uint)param_1[2];
          local_68 = 0;
          uVar7 = uVar10 + uVar9;
          local_60 = uVar10;
        }
      }
      else {
        if ((int)uVar7 <= iVar3) {
          local_64 = -1;
          uVar10 = (uint)param_1[3];
          local_60 = -uVar10;
          uVar9 = (uint)param_1[2];
        }
        else {
          uVar9 = (uint)param_1[2];
          local_64 = 0;
          uVar10 = (uint)param_1[3];
          uVar8 = -iVar3;
          local_60 = uVar9;
        }
        local_78 = uVar7 - iVar3;
        local_5c = -1;
        local_68 = (uint)((int)uVar7 > iVar3);
        uVar7 = uVar9 - uVar10;
      }
      piVar4 = (int *)(*(int *)(param_1 + *(int *)(param_1 + 8) * 2 + 0xc) + uVar10 * param_3 +
                      uVar9 * param_2);
      local_6c = param_2;
      local_58 = param_3;
      if (param_2 <= param_4) {
        local_74 = local_78;
        local_70 = uVar8;
        do {
          uVar10 = (int)(local_58 - param_3) >> 0x1f;
          if (iVar3 < (int)((local_58 - param_3 ^ uVar10) - uVar10)) {
            return;
          }
          uVar2 = param_1[2];
          if (uVar2 == 1) {
            *(undefined1 *)piVar4 = (undefined1)param_6;
          }
          else if (uVar2 == 2) {
            *(undefined2 *)piVar4 = (undefined2)param_6;
          }
          else if (uVar2 == 4) {
            *piVar4 = param_6;
          }
          if ((int)((local_70 ^ (int)local_70 >> 0x1f) - ((int)local_70 >> 0x1f)) <
              (int)((local_74 ^ (int)local_74 >> 0x1f) - ((int)local_74 >> 0x1f))) {
            local_6c = local_6c + local_68;
            uVar10 = local_60;
            iVar6 = local_64;
            uVar9 = uVar8;
          }
          else {
            local_6c = local_6c + 1;
            uVar10 = uVar7;
            iVar6 = local_5c;
            uVar9 = local_78;
          }
          local_70 = local_70 + uVar9;
          local_74 = local_74 + uVar9;
          local_58 = local_58 + iVar6;
          piVar4 = (int *)((int)piVar4 + uVar10);
        } while (local_6c <= param_4);
      }
    }
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  piVar4 = (int *)FUN_005b5dc0(local_50);
  iVar3 = *piVar4;
  iVar5 = FUN_005b5dc0(local_50);
  iVar6 = param_6;
  local_5c = *(undefined4 *)(iVar5 + 4);
  if (param_7 == 0) {
    iVar6 = FUN_005b5b70();
    if (iVar6 == 0) {
      return;
    }
    pbVar1 = (byte *)(iVar6 + (param_6 + 8) * 3);
    if (*(int *)(param_1 + 0x28) != 2) {
      local_58 = (uint)*pbVar1;
      uVar7 = __ftol();
      local_58 = (uint)pbVar1[1];
      uVar8 = __ftol();
      uVar8 = (uVar7 | 0xffffff00) << 8 | uVar8;
      local_58 = (uint)pbVar1[2];
LAB_005b6cd2:
      uVar7 = __ftol();
      uVar7 = uVar8 << 8 | uVar7;
      (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,0);
      goto LAB_005b6cf4;
    }
    iVar6 = __ftol();
    local_58 = (uint)*pbVar1;
    uVar7 = __ftol();
    local_58 = (uint)pbVar1[1];
    uVar8 = __ftol();
    uVar8 = (iVar6 << 8 | uVar7) << 8 | uVar8;
    local_58 = (uint)pbVar1[2];
  }
  else {
    if (*(int *)(param_1 + 0x28) != 2) {
      local_58 = FUN_005b5930(param_6);
      local_58 = local_58 & 0xff;
      uVar7 = __ftol();
      local_58 = FUN_005b5970(iVar6);
      local_58 = local_58 & 0xff;
      uVar8 = __ftol();
      uVar8 = (uVar7 | 0xffffff00) << 8 | uVar8;
      local_58 = FUN_005b59b0(iVar6);
      local_58 = local_58 & 0xff;
      goto LAB_005b6cd2;
    }
    local_58 = FUN_005b5930(param_6);
    local_58 = local_58 & 0xff;
    uVar7 = __ftol();
    iVar5 = __ftol();
    local_58 = FUN_005b5970(iVar6);
    local_58 = local_58 & 0xff;
    uVar8 = __ftol();
    uVar8 = (uVar7 | iVar5 << 8) << 8 | uVar8;
    local_58 = FUN_005b59b0(iVar6);
    local_58 = local_58 & 0xff;
  }
  uVar7 = __ftol();
  uVar7 = uVar8 << 8 | uVar7;
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,1);
LAB_005b6cf4:
  uStack_44 = 0x38d1b717;
  uStack_40 = 0x3f800000;
  fStack_4c = (float)(iStack_4 + iVar3);
  fStack_48 = (float)(int)(local_68 + unaff_retaddr);
  local_64 = local_68 + param_2;
  fStack_2c = (float)(iVar3 + (int)param_1);
  uStack_38 = 0xff000000;
  uStack_18 = 0xff000000;
  fStack_28 = (float)local_64;
  uStack_30 = 0;
  uStack_34 = 0;
  uStack_24 = 0x38d1b717;
  uStack_20 = 0x3f800000;
  uStack_10 = 0;
  uStack_14 = 0;
  uStack_3c = uVar7;
  uStack_1c = uVar7;
  (**(code **)(*DAT_0071f868 + 0x8c))(DAT_0071f868,0,0);
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,0,1,1);
  (**(code **)(*DAT_0071f868 + 0x94))(DAT_0071f868,0,4,1);
  (**(code **)(*DAT_0071f868 + 100))(DAT_0071f868,2,0x1c4,&local_78,2,0);
  (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x1b,0);
  return;
}


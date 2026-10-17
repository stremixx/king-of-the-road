
int __thiscall FUN_00489ce0(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint uVar7;
  LONG LVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar9 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006407f0;
  iVar3 = *unaff_FS_OFFSET;
  local_10 = iVar3;
  *unaff_FS_OFFSET = (int)&local_10;
  local_14 = &stack0xffffffd0;
  if (param_3 != param_4) {
    uVar2 = (int)(param_4 - param_3) / 0x18;
    uVar7 = param_1[1];
    local_1c = uVar2;
    if ((uint)((int)(param_1[2] - uVar7) / 0x18) < uVar2) {
      param_3 = (int)(uVar7 - *param_1) / 0x18;
      puVar5 = &local_1c;
      if (uVar2 <= param_3) {
        puVar5 = &param_3;
      }
      local_1c = *puVar5 + param_3;
      if (local_1c == 0) {
        local_18 = 0;
      }
      else {
        local_18 = FUN_0044b6e0(local_1c * 0x18);
      }
      local_8 = 0;
      param_3 = local_18;
      uVar6 = FUN_0048a7d0(*param_1,param_2,local_18,local_18);
      uVar6 = FUN_0048a7d0(uVar9,param_4,uVar6,param_3);
      uVar7 = FUN_0048a7d0(param_2,param_1[1],uVar6,param_3);
      uVar9 = *param_1;
      local_8 = 0xffffffff;
      for (; uVar9 != param_1[1]; uVar9 = uVar9 + 0x18) {
      }
      piVar1 = (int *)*param_1;
      iVar3 = (int)(param_1[2] - (int)piVar1) / 0x18;
      if (iVar3 != 0) {
        uVar9 = iVar3 * 0x18;
        if (uVar9 < 0x81) {
          LVar8 = InterlockedExchange(&DAT_0068c164,1);
          uVar2 = DAT_0066b83c;
          if (LVar8 != 0) {
            param_4 = DAT_0068c168;
            param_3 = 0x11;
            uVar11 = 0;
            if (DAT_0066b83c != 0) {
              do {
                if ((uVar11 < param_4 >> 1) || (DAT_0068c164 != 0)) {
                  iVar3 = param_3 * param_3 * param_3 * param_3;
                  iVar3 = iVar3 * iVar3;
                  param_3 = iVar3 * iVar3;
                }
                else {
                  LVar8 = InterlockedExchange(&DAT_0068c164,1);
                  if (LVar8 == 0) {
                    DAT_0066b83c = 1000;
                    DAT_0068c168 = uVar11;
                    goto LAB_0048a01e;
                  }
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < uVar2);
            }
            DAT_0066b83c = 0x1e;
            iVar3 = 0;
            while( true ) {
              iVar10 = iVar3 + 6;
              if (0x1b < iVar10) {
                iVar10 = 0x1b;
              }
              LVar8 = InterlockedExchange(&DAT_0068c164,1);
              if (LVar8 == 0) break;
              FUN_00402b10(iVar10);
              iVar3 = iVar3 + 1;
            }
          }
LAB_0048a01e:
          *piVar1 = *(int *)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar9 + 7 >> 3) * 4) = piVar1;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar1);
        }
      }
      *param_1 = local_18;
      param_1[1] = uVar7;
      param_1[2] = local_18 + local_1c * 0x18;
      *unaff_FS_OFFSET = local_10;
      return local_18;
    }
    uVar9 = param_1[1];
    uVar7 = (int)(uVar7 - param_2) / 0x18;
    local_18 = uVar9;
    if (uVar2 < uVar7) {
      local_1c = uVar9 + uVar2 * -0x18;
      FUN_0048a7d0(local_1c,uVar9,uVar9,param_3);
      param_1[1] = param_1[1] + uVar2 * 0x18;
      FUN_0048a790(param_2,local_1c,uVar9,param_3,0);
      iVar3 = FUN_004608c0(param_3,param_4,param_2,param_3,0);
    }
    else {
      iVar10 = uVar7 * 0x18;
      local_1c = uVar7;
      FUN_0048a7d0(iVar10 + param_3,param_4,uVar9,param_3);
      uVar9 = param_1[1] + (uVar2 - local_1c) * 0x18;
      param_1[1] = uVar9;
      FUN_0048a7d0(param_2,local_18,uVar9,param_3);
      param_1[1] = param_1[1] + iVar10;
      iVar3 = uVar7 * 8;
      iVar10 = iVar10 / 0x18;
      if (0 < iVar10) {
        iVar3 = param_3 - param_2;
        do {
          iVar4 = FUN_00405ed0(iVar3 + param_2);
          param_2 = param_2 + 0x18;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        *unaff_FS_OFFSET = local_10;
        return iVar4;
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return iVar3;
}


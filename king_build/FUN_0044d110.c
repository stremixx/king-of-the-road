
void __thiscall FUN_0044d110(uint *param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  LONG LVar10;
  uint *puVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  undefined4 *unaff_FS_OFFSET;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e560;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_14 = &stack0xffffffd0;
  if (param_3 != param_4) {
    uVar7 = param_1[1];
    uVar13 = param_4 - param_3 >> 2;
    local_1c = uVar13;
    if ((uint)((int)(param_1[2] - uVar7) >> 2) < uVar13) {
      puVar11 = &local_1c;
      local_18 = (int)(uVar7 - *param_1) >> 2;
      if (uVar13 <= local_18) {
        puVar11 = &local_18;
      }
      local_1c = *puVar11 + local_18;
      if (local_1c == 0) {
        local_18 = 0;
        local_14 = &stack0xffffffd0;
      }
      else {
        local_18 = FUN_0044b6e0(local_1c * 4);
      }
      uVar13 = local_18;
      local_8 = 0;
      uVar8 = FUN_0046b5a0(*param_1,param_2,local_18,param_2);
      uVar8 = FUN_0046b5a0(param_3,param_4,uVar8,param_2);
      uVar9 = FUN_0046b5a0(param_2,param_1[1],uVar8,param_2);
      for (uVar7 = *param_1; uVar7 != param_1[1]; uVar7 = uVar7 + 4) {
      }
      piVar3 = (int *)*param_1;
      iVar6 = (int)(param_1[2] - (int)piVar3) >> 2;
      if (iVar6 != 0) {
        uVar7 = iVar6 * 4;
        if (uVar7 < 0x81) {
          LVar10 = InterlockedExchange(&DAT_0068c164,1);
          uVar5 = DAT_0068c168;
          uVar4 = DAT_0066b83c;
          if (LVar10 != 0) {
            uVar15 = 0;
            if (DAT_0066b83c != 0) {
              do {
                if (((uVar5 >> 1 <= uVar15) && (DAT_0068c164 == 0)) &&
                   (LVar10 = InterlockedExchange(&DAT_0068c164,1), LVar10 == 0)) {
                  DAT_0066b83c = 1000;
                  uVar13 = local_18;
                  DAT_0068c168 = uVar15;
                  goto LAB_0044d3ed;
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 < uVar4);
            }
            DAT_0066b83c = 0x1e;
            iVar6 = 0;
            while( true ) {
              iVar16 = iVar6 + 6;
              if (0x1b < iVar16) {
                iVar16 = 0x1b;
              }
              LVar10 = InterlockedExchange(&DAT_0068c164,1);
              uVar13 = local_18;
              if (LVar10 == 0) break;
              FUN_00402b10(iVar16);
              iVar6 = iVar6 + 1;
            }
          }
LAB_0044d3ed:
          *piVar3 = *(int *)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar7 + 7 >> 3) * 4) = piVar3;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar3);
        }
      }
      *param_1 = uVar13;
      param_1[1] = uVar9;
      param_1[2] = uVar13 + local_1c * 4;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    puVar2 = (undefined4 *)param_1[1];
    local_1c = (int)(uVar7 - (int)param_2) >> 2;
    if (uVar13 < local_1c) {
      local_1c = uVar13 * 4;
      puVar14 = puVar2 + -uVar13;
      local_14 = &stack0xffffffd0;
      FUN_0046b5a0(puVar14,puVar2,puVar2,param_2);
      param_1[1] = param_1[1] + local_1c;
      iVar6 = (int)puVar14 - (int)param_2 >> 2;
      if (0 < iVar6) {
        puVar12 = puVar2;
        do {
          puVar1 = (undefined4 *)((int)puVar14 + (-4 - (int)puVar2) + (int)puVar12);
          puVar12 = puVar12 + -1;
          iVar6 = iVar6 + -1;
          *puVar12 = *puVar1;
        } while (iVar6 != 0);
      }
      FUN_0046b1d0(param_3,param_4,param_2,param_2,0);
    }
    else {
      local_18 = local_1c * 4;
      local_14 = &stack0xffffffd0;
      FUN_0046b5a0(local_18 + param_3,param_4,puVar2,param_2);
      uVar7 = param_1[1] + (uVar13 - local_1c) * 4;
      param_1[1] = uVar7;
      FUN_0046b5a0(param_2,puVar2,uVar7,param_2);
      iVar6 = (int)local_18 >> 2;
      param_1[1] = param_1[1] + local_18;
      if (0 < iVar6) {
        param_3 = param_3 - (int)param_2;
        do {
          *param_2 = *(undefined4 *)(param_3 + (int)param_2);
          param_2 = param_2 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        *unaff_FS_OFFSET = local_10;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_10;
  return;
}


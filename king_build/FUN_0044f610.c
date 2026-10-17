
void __thiscall FUN_0044f610(int *param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar6 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e670;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd0;
  if (param_3 != 0) {
    iVar8 = param_1[1];
    if ((uint)(param_1[2] - iVar8 >> 2) < param_3) {
      local_1c = iVar8 - *param_1 >> 2;
      puVar9 = &param_3;
      if (param_3 <= local_1c) {
        puVar9 = &local_1c;
      }
      local_1c = *puVar9 + local_1c;
      if (local_1c == 0) {
        local_18 = 0;
        ExceptionList = &local_10;
      }
      else {
        ExceptionList = &local_10;
        local_18 = FUN_0044b6e0(local_1c * 4);
      }
      iVar10 = local_18;
      local_8 = 0;
      uVar4 = FUN_0046b5a0(*param_1,param_2,local_18,param_3);
      uVar4 = FUN_00466b90(uVar4,param_3,param_4,param_3);
      iVar5 = FUN_0046b5a0(param_2,param_1[1],uVar4,param_3);
      for (iVar8 = *param_1; iVar8 != param_1[1]; iVar8 = iVar8 + 4) {
      }
      piVar3 = (int *)*param_1;
      iVar8 = param_1[2] - (int)piVar3 >> 2;
      if (iVar8 != 0) {
        uVar6 = iVar8 * 4;
        if (uVar6 < 0x81) {
          LVar7 = InterlockedExchange(&DAT_0068c164,1);
          uVar2 = DAT_0066b83c;
          if (LVar7 != 0) {
            param_4 = (uint *)DAT_0068c168;
            param_3 = 0x11;
            uVar12 = 0;
            if (DAT_0066b83c != 0) {
              do {
                if ((uVar12 < (uint)param_4 >> 1) || (DAT_0068c164 != 0)) {
                  iVar8 = param_3 * param_3 * param_3 * param_3;
                  iVar8 = iVar8 * iVar8;
                  param_3 = iVar8 * iVar8;
                }
                else {
                  LVar7 = InterlockedExchange(&DAT_0068c164,1);
                  if (LVar7 == 0) {
                    DAT_0066b83c = 1000;
                    iVar10 = local_18;
                    DAT_0068c168 = uVar12;
                    goto LAB_0044f8dd;
                  }
                }
                uVar12 = uVar12 + 1;
              } while (uVar12 < uVar2);
            }
            DAT_0066b83c = 0x1e;
            iVar8 = 0;
            while( true ) {
              iVar13 = iVar8 + 6;
              if (0x1b < iVar13) {
                iVar13 = 0x1b;
              }
              LVar7 = InterlockedExchange(&DAT_0068c164,1);
              iVar10 = local_18;
              if (LVar7 == 0) break;
              if (iVar13 < 0x15) {
                Sleep(0);
                iVar8 = iVar8 + 1;
              }
              else {
                Sleep(1 << ((char)iVar13 - 0x14U & 0x1f));
                iVar8 = iVar8 + 1;
              }
            }
          }
LAB_0044f8dd:
          *piVar3 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar3;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar3);
        }
      }
      *param_1 = iVar10;
      param_1[1] = iVar5;
      param_1[2] = iVar10 + local_1c * 4;
      ExceptionList = local_10;
      return;
    }
    puVar9 = (uint *)param_1[1];
    uVar2 = *param_4;
    param_4 = (uint *)(iVar8 - (int)param_2 >> 2);
    if (param_3 < param_4) {
      iVar8 = param_3 * 4;
      param_4 = puVar9 + -param_3;
      ExceptionList = &local_10;
      param_3 = uVar2;
      FUN_0046b5a0(param_4,puVar9,puVar9,uVar2);
      param_1[1] = param_1[1] + iVar8;
      iVar8 = (int)param_4 - (int)param_2 >> 2;
      if (0 < iVar8) {
        puVar11 = puVar9;
        do {
          puVar1 = (uint *)((int)param_4 + (-4 - (int)puVar9) + (int)puVar11);
          puVar11 = puVar11 + -1;
          iVar8 = iVar8 + -1;
          *puVar11 = *puVar1;
        } while (iVar8 != 0);
      }
      puVar9 = param_2 + uVar6;
      for (; param_2 != puVar9; param_2 = param_2 + 1) {
        *param_2 = param_3;
      }
    }
    else {
      iVar8 = param_3 - (int)param_4;
      ExceptionList = &local_10;
      param_3 = uVar2;
      FUN_00466b90(puVar9,iVar8,&param_3,uVar2);
      iVar8 = param_1[1] + iVar8 * 4;
      param_1[1] = iVar8;
      FUN_0046b5a0(param_2,puVar9,iVar8,param_3);
      param_1[1] = param_1[1] + (int)param_4 * 4;
      if (param_2 != puVar9) {
        do {
          *param_2 = param_3;
          param_2 = param_2 + 1;
        } while (param_2 != puVar9);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}


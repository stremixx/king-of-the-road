
void * __thiscall FUN_004a1b40(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  void *pvVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar7 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00642940;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  pvVar4 = ExceptionList;
  if (param_3 != param_4) {
    uVar3 = (int)(param_4 - param_3) / 0xc;
    uVar6 = param_1[1];
    local_1c = uVar3;
    if ((uint)((int)(param_1[2] - uVar6) / 0xc) < uVar3) {
      param_3 = (int)(uVar6 - *param_1) / 0xc;
      puVar5 = &local_1c;
      if (uVar3 <= param_3) {
        puVar5 = &param_3;
      }
      local_1c = *puVar5 + param_3;
      if (local_1c == 0) {
        param_3 = 0;
        ExceptionList = &local_10;
      }
      else {
        ExceptionList = &local_10;
        param_3 = FUN_0044b6e0(local_1c * 0xc);
      }
      local_8 = 0;
      local_18 = param_3;
      local_18 = FUN_004a2e60(*param_1,param_2,param_3,param_3);
      local_18 = FUN_004a2e60(uVar7,param_4,local_18,param_3);
      uVar7 = FUN_004a2e60(param_2,param_1[1],local_18,param_3);
      piVar1 = (int *)param_1[1];
      piVar10 = (int *)*param_1;
      local_8 = 0xffffffff;
      for (; piVar10 != piVar1; piVar10 = piVar10 + 3) {
        if (((piVar10[2] & 0x10000U) == 0) && (iVar8 = *piVar10, iVar8 != 0)) {
          *(int *)(iVar8 + 4) = *(int *)(iVar8 + 4) + -1;
          piVar2 = (int *)*piVar10;
          if ((piVar2[1] == 0) && (piVar2 != (int *)0x0)) {
            (**(code **)(*piVar2 + 0xc))(1);
          }
        }
      }
      piVar1 = (int *)*param_1;
      iVar8 = (int)(param_1[2] - (int)piVar1) / 0xc;
      if (iVar8 != 0) {
        uVar6 = iVar8 * 0xc;
        if (uVar6 < 0x81) {
          FUN_00401aa0();
          *piVar1 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar1;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar1);
        }
      }
      param_1[1] = uVar7;
      *param_1 = param_3;
      pvVar4 = (void *)(param_3 + local_1c * 0xc);
      param_1[2] = (uint)pvVar4;
      ExceptionList = local_10;
      return pvVar4;
    }
    uVar7 = param_1[1];
    uVar6 = (int)(uVar6 - param_2) / 0xc;
    local_18 = uVar7;
    if (uVar3 < uVar6) {
      local_1c = uVar7 + uVar3 * -0xc;
      ExceptionList = &local_10;
      FUN_004a2e60(local_1c,uVar7,uVar7,param_3);
      param_1[1] = param_1[1] + uVar3 * 0xc;
      FUN_00462430(param_2,local_1c,uVar7,param_3,0);
      pvVar4 = (void *)FUN_004a2d60(param_3,param_4,param_2,param_3,0);
    }
    else {
      iVar8 = uVar6 * 0xc;
      ExceptionList = &local_10;
      local_1c = uVar6;
      FUN_004a2e60(iVar8 + param_3,param_4,uVar7,param_3);
      uVar7 = param_1[1] + (uVar3 - local_1c) * 0xc;
      param_1[1] = uVar7;
      FUN_004a2e60(param_2,local_18,uVar7,param_3);
      param_1[1] = param_1[1] + iVar8;
      pvVar4 = (void *)(uVar6 * 4);
      iVar8 = iVar8 / 0xc;
      if (0 < iVar8) {
        iVar9 = param_3 - param_2;
        do {
          pvVar4 = (void *)FUN_0040c060(iVar9 + param_2);
          param_2 = param_2 + 0xc;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        ExceptionList = local_10;
        return pvVar4;
      }
    }
  }
  ExceptionList = local_10;
  return pvVar4;
}


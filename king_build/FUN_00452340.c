
void __thiscall FUN_00452340(uint *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063e850;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  if (param_3 != param_4) {
    uVar3 = param_1[1];
    uVar6 = (int)(param_4 - param_3) >> 2;
    local_18 = uVar6;
    if ((uint)((int)(param_1[2] - uVar3) >> 2) < uVar6) {
      puVar5 = &param_4;
      local_1c = (int)(uVar3 - *param_1) >> 2;
      if (uVar6 <= local_1c) {
        puVar5 = &local_1c;
      }
      local_1c = *puVar5 + local_1c;
      if (local_1c == 0) {
        param_4 = 0;
        ExceptionList = &local_10;
      }
      else {
        ExceptionList = &local_10;
        param_4 = uVar6;
        param_4 = FUN_0044b6e0(local_1c * 4);
      }
      local_8 = 0;
      iVar4 = FUN_0046b1d0(*param_1,param_2,param_4,param_3,0);
      iVar7 = local_18 * 4;
      FUN_0061c980(iVar4,param_3,iVar7);
      uVar3 = FUN_0046b1d0(param_2,param_1[1],iVar4 + iVar7,param_3,0);
      piVar2 = (int *)*param_1;
      iVar7 = (int)(param_1[2] - (int)piVar2) >> 2;
      if (iVar7 != 0) {
        uVar6 = iVar7 * 4;
        if (uVar6 < 0x81) {
          FUN_00401aa0();
          *piVar2 = *(int *)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar6 + 7 >> 3) * 4) = piVar2;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar2);
        }
      }
      *param_1 = param_4;
      param_1[1] = uVar3;
      param_1[2] = param_4 + local_1c * 4;
      ExceptionList = local_10;
      return;
    }
    uVar1 = param_1[1];
    local_1c = (int)(uVar3 - param_2) >> 2;
    if (local_1c <= uVar6) {
      iVar7 = local_1c * 4;
      iVar4 = param_4 - (param_3 + iVar7);
      ExceptionList = &local_10;
      param_4 = uVar1;
      FUN_0061c980(uVar1,param_3 + iVar7,(iVar4 >> 2) << 2);
      uVar3 = param_1[1] + (uVar6 - local_1c) * 4;
      param_1[1] = uVar3;
      FUN_0046b1d0(param_2,param_4,uVar3,param_3,0);
      param_1[1] = param_1[1] + iVar7;
      FUN_0061c980(param_2,param_3,(iVar7 >> 2) << 2);
      ExceptionList = local_10;
      return;
    }
    param_4 = uVar6 * 4;
    iVar7 = uVar1 + uVar6 * -4;
    ExceptionList = &local_10;
    FUN_0046b1d0(iVar7,uVar1,uVar1,param_3,0);
    param_1[1] = param_1[1] + param_4;
    FUN_00468c90(param_2,iVar7,uVar1,param_3,0);
    FUN_0061c980(param_2,param_3,local_18 * 4);
  }
  ExceptionList = local_10;
  return;
}


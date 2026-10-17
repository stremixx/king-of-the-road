
void __thiscall FUN_0046e460(uint *param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  uint uVar8;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0063f900;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd8;
  if (param_3 != param_4) {
    uVar8 = param_4 - param_3;
    uVar3 = param_1[1];
    local_18 = uVar8;
    if (param_1[2] - uVar3 < uVar8) {
      puVar6 = &local_18;
      local_1c = uVar3 - *param_1;
      if (uVar8 <= local_1c) {
        puVar6 = &local_1c;
      }
      local_1c = *puVar6 + local_1c;
      if (local_1c == 0) {
        local_18 = 0;
        ExceptionList = &local_10;
        local_14 = &stack0xffffffd8;
      }
      else {
        ExceptionList = &local_10;
        local_18 = FUN_0044b6e0(local_1c);
      }
      local_8 = 0;
      iVar4 = FUN_0046ecd0(*param_1,param_2,local_18,param_3,0);
      FUN_0061c980(iVar4,param_3,uVar8);
      uVar3 = FUN_0046ecd0(param_2,param_1[1],iVar4 + (param_4 - param_3),param_3,0);
      piVar2 = (int *)*param_1;
      uVar8 = param_1[2] - (int)piVar2;
      if (uVar8 != 0) {
        if (uVar8 < 0x81) {
          FUN_00401aa0();
          *piVar2 = *(int *)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4);
          *(int **)(&DAT_0068c120 + (uVar8 + 7 >> 3) * 4) = piVar2;
          DAT_0068c164 = 0;
        }
        else {
          FUN_0061c888(piVar2);
        }
      }
      *param_1 = local_18;
      param_1[1] = uVar3;
      param_1[2] = local_18 + local_1c;
      ExceptionList = local_10;
      return;
    }
    uVar3 = uVar3 - param_2;
    puVar7 = (undefined1 *)param_1[1];
    local_1c = uVar8;
    if (uVar3 <= uVar8) {
      ExceptionList = &local_10;
      local_14 = &stack0xffffffd8;
      FUN_0061c980(puVar7,uVar3 + param_3,param_4 - (uVar3 + param_3));
      uVar8 = param_1[1] + (uVar8 - uVar3);
      param_1[1] = uVar8;
      FUN_0046ecd0(param_2,puVar7,uVar8,param_3,0);
      param_1[1] = param_1[1] + uVar3;
      FUN_0061c980(param_2,param_3,uVar3);
      ExceptionList = local_10;
      return;
    }
    iVar4 = (int)puVar7 - uVar8;
    ExceptionList = &local_10;
    local_14 = &stack0xffffffd8;
    FUN_0046ecd0(iVar4,puVar7,puVar7,param_3,0);
    param_1[1] = param_1[1] + uVar8;
    iVar5 = iVar4 - param_2;
    if (0 < iVar5) {
      iVar4 = iVar4 - (int)puVar7;
      do {
        puVar1 = puVar7 + iVar4 + -1;
        puVar7 = puVar7 + -1;
        iVar5 = iVar5 + -1;
        *puVar7 = *puVar1;
      } while (iVar5 != 0);
    }
    FUN_0061c980(param_2,param_3,local_1c);
  }
  ExceptionList = local_10;
  return;
}


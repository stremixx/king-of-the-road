
void FUN_005ea380(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  uVar3 = (uint)*(ushort *)(param_2 + 0x14);
  uVar1 = (uint)*(ushort *)(param_2 + 0x16);
  param_3 = param_3 % (int)uVar3;
  local_4 = uVar1;
  if (param_3 < 0) {
    local_10 = uVar3 + param_3;
    local_8 = uVar3 - 1;
    if (param_4 < local_8 - local_10) {
      local_8 = local_10 + -1 + param_4;
    }
    iVar2 = param_6 - uVar1;
    local_c = 0;
    FUN_005b7870(param_1,param_2,&local_10,param_5,iVar2);
    local_8 = param_3 + -1 + param_4;
    local_10 = 0;
    FUN_005b7870(param_1,param_2,&local_10,param_5 - param_3,iVar2);
  }
  else {
    local_10 = param_3;
    if ((int)uVar3 < param_4 + param_3) {
      iVar2 = param_6 - uVar1;
      local_8 = uVar3 - 1;
      local_c = 0;
      FUN_005b7870(param_1,param_2,&local_10,param_5,iVar2);
      local_8 = (param_3 - uVar3) + -1 + param_4;
      local_10 = 0;
      FUN_005b7870(param_1,param_2,&local_10,(uVar3 - param_3) + param_5,iVar2);
    }
    else {
      iVar2 = param_6 - uVar1;
      local_8 = param_4 + param_3 + -1;
      local_c = 0;
      FUN_005b7870(param_1,param_2,&local_10,param_5,iVar2);
    }
  }
  local_4 = iVar2 + -1;
  if ((-1 < param_7) && (-1 < (int)local_4)) {
    if (param_7 == 0) {
      param_7 = FUN_005b9e60(0,0);
    }
    local_8 = param_4 + -1 + param_5;
    local_10 = param_5;
    local_c = 0;
    FUN_005b6640(param_1,&local_10,param_7,1);
  }
  local_c = param_6;
  if ((-1 < param_8) && (param_6 < (int)(uint)*(ushort *)(param_1 + 2))) {
    if (param_8 == 0) {
      param_8 = FUN_005b9e60(0,uVar1 - 1);
    }
    local_10 = param_5;
    local_8 = param_4 + -1 + param_5;
    local_4 = (uint)*(ushort *)(param_1 + 2);
    FUN_005b6640(param_1,&local_10,param_8,1);
  }
  return;
}


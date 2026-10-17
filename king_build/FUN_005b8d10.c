
undefined4 __thiscall FUN_005b8d10(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int local_4;
  
  uVar1 = (param_4 & 0xff) - (uint)*(byte *)(param_1 + 0x1a);
  uVar5 = (int)uVar1 >> 0x1f;
  uVar2 = (param_3 & 0xff) - (uint)*(byte *)(param_1 + 0x19);
  uVar6 = (int)uVar2 >> 0x1f;
  uVar8 = param_2 & 0xff;
  local_4 = 0;
  uVar3 = uVar8 - *(byte *)(param_1 + 0x18);
  param_2 = 1;
  uVar7 = (int)uVar3 >> 0x1f;
  pbVar10 = (byte *)(param_1 + 0x1c);
  iVar9 = ((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) + ((uVar3 ^ uVar7) - uVar7);
  do {
    uVar1 = (param_4 & 0xff) - (uint)pbVar10[1];
    uVar5 = (int)uVar1 >> 0x1f;
    uVar2 = uVar8 - pbVar10[-1];
    uVar6 = (int)uVar2 >> 0x1f;
    uVar3 = (param_3 & 0xff) - (uint)*pbVar10;
    uVar7 = (int)uVar3 >> 0x1f;
    iVar4 = ((uVar1 ^ uVar5) - uVar5) + ((uVar2 ^ uVar6) - uVar6) + ((uVar3 ^ uVar7) - uVar7);
    if (iVar4 < iVar9) {
      local_4 = param_2;
      iVar9 = iVar4;
    }
    pbVar10 = pbVar10 + 3;
    param_2 = param_2 + 1;
  } while ((int)param_2 < 0x100);
  return CONCAT31((int3)(param_2 >> 8),(undefined1)local_4);
}


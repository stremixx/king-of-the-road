
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005126d0(int param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _MEMORYSTATUS _Stack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0064592b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (DAT_006cdc54 != (int *)0x0) {
    ExceptionList = &pvStack_c;
    (**(code **)(*DAT_006cdc54 + 0x24))();
  }
  DAT_006cdc58 = DAT_006cdc84;
  if ((*(uint *)(DAT_006cdbd0 + 0x198) & 0x100) != 0) {
    SetCursor((HCURSOR)0x0);
  }
  *(uint *)(param_1 + 0xbcc) = *(uint *)(param_1 + 0xbcc) | 0x4000;
  DAT_00701dec = DAT_00701dec | 0x4000;
  _DAT_006957d8 = 0xffffffff;
  uVar5 = 1;
  FUN_005b62a0();
  FUN_005b64b0(0,1);
  FUN_005d7f70();
  FUN_005b64b0(0,1);
  FUN_005d7f70();
  uVar3 = DAT_006957bc;
  DAT_006cdbc8 = 1;
  if (((byte)*(uint *)(DAT_006cdbd0 + 0x198) & 0xf) == 2) {
    uVar5 = 2;
  }
  uVar2 = *(uint *)(DAT_006cdbd0 + 0x198) & 0x1f0;
  if (uVar2 == 0x140) {
    uVar2 = FUN_0050b5f0();
    uVar3 = uVar2 | uVar3 | 0x4000;
    uVar7 = 0x4b0;
    uVar6 = 0x640;
  }
  else if (uVar2 == 0x130) {
    uVar2 = FUN_0050b5f0();
    uVar3 = uVar2 | uVar3 | 0x4000;
    uVar7 = 0x300;
    uVar6 = 0x400;
  }
  else if (uVar2 == 0x120) {
    uVar2 = FUN_0050b5f0();
    uVar3 = uVar2 | uVar3 | 0x4000;
    uVar7 = 600;
    uVar6 = 800;
  }
  else {
    if (uVar2 != 0x110) goto LAB_00512849;
    uVar2 = FUN_0050b5f0();
    uVar3 = uVar2 | uVar3 | 0x4000;
    uVar7 = 0x1e0;
    uVar6 = 0x280;
  }
  FUN_005dcf80(uVar6,uVar7,uVar5,uVar3);
LAB_00512849:
  if (DAT_0071f840 < 0x200000) {
    DAT_006cdbc8 = 0;
    FUN_005d2520(s_Not_enough_texture_memory_006758b0,0);
  }
  else if (DAT_0071f840 < 0x400000) {
    DAT_006cdbc8 = 1;
    DAT_006cdcd0 = 0;
  }
  else if ((DAT_0071f840 < 0x800000) || (DAT_0071f81c == 0)) {
    DAT_006cdbc8 = 2;
    iVar4 = FUN_005d68a0(DAT_0071f86c);
    DAT_006cdcd0 = (uint)(0x1fffff < iVar4);
  }
  else {
    DAT_006cdbc8 = 3;
    iVar4 = FUN_005d68a0(DAT_0071f86c);
    if (iVar4 < 0x200000) {
      DAT_006cdcd0 = 0;
    }
    else {
      iVar4 = FUN_005d68a0(DAT_0071f86c);
      if (iVar4 < 0x400000) {
        DAT_006cdcd0 = 1;
      }
      else {
        iVar4 = FUN_005d68a0(DAT_0071f86c);
        if (iVar4 < 0x1000000) {
          DAT_006cdcd0 = 2;
        }
        else {
          iVar4 = FUN_005d68a0(DAT_0071f86c);
          DAT_006cdcd0 = (0x1ffffff < iVar4) + 3;
        }
      }
    }
  }
  GlobalMemoryStatus(&_Stack_2c);
  if ((1 < (int)DAT_006cdcd0) && (_Stack_2c.dwTotalPhys < 0x3c00000)) {
    DAT_006cdcd0 = 1;
  }
  if ((*(uint *)(DAT_006cdbd0 + 0x198) & 0x100) != 0) {
    SetCursor((HCURSOR)0x0);
  }
  FUN_005d7b10(2,0xffffffff);
  DAT_006cdc84 = FUN_005e8290(s_matrix1_fon_006758a4);
  DAT_006cdc8c = FUN_005e8290(s_matrix2_fon_00675898);
  DAT_006cdc90 = FUN_005e8290(s_menublk_fon_0067588c);
  FUN_00527680(0,0);
  FUN_005b62a0();
  FUN_005b64b0(0,1);
  FUN_005d7f70();
  FUN_005b64b0(0,1);
  FUN_005d7f70();
  if (DAT_0071f838 == 0) {
    sVar1 = *(short *)(DAT_006cdbd0 + 0x1a6);
  }
  else {
    sVar1 = *(short *)(DAT_006cdbd0 + 0x1a4);
  }
  iVar4 = FUN_00631d33(0x10);
  uStack_4 = 0;
  if (iVar4 == 0) {
    DAT_006cd480 = 0;
  }
  else {
    DAT_006cd480 = FUN_004ccec0(((int)sVar1 << 2) / 100 + 4,DAT_0071f868);
  }
  ExceptionList = pvStack_c;
  return;
}


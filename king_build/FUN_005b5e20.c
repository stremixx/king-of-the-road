
void __thiscall
FUN_005b5e20(ushort *param_1,ushort param_2,ushort param_3,ushort param_4,uint param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  
  param_1[3] = param_4 * param_2;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(uint *)(param_1 + 6) = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[4] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f00;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  if ((param_5 & 0x1000) != 0) {
    DAT_00701df4 = FUN_005d3160();
    param_1[0x3a] = 1;
    param_1[0x3b] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    return;
  }
  if ((param_5 & 0x200) == 0) {
    uVar2 = FUN_00631d33((uint)param_4 * (uint)param_3 * (uint)param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
  }
  else {
    uVar2 = FUN_005d3690((uint)param_4 * (uint)param_3 * (uint)param_2);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar1 = FUN_005d31b0();
    param_1[3] = uVar1;
    if ((param_1[6] & 1) != 0) {
      uVar2 = FUN_005d3690((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
      *(undefined4 *)(param_1 + 0xe) = uVar2;
      uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
      *(undefined4 *)(param_1 + 0x1e) = uVar2;
      uVar2 = FUN_005d3690((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
      *(undefined4 *)(param_1 + 0x20) = uVar2;
      param_1[8] = 1;
      param_1[9] = 0;
      if ((*(uint *)(param_1 + 6) & 0x100) == 0) {
        param_1[10] = 3;
        param_1[0xb] = 0;
      }
      else {
        uVar2 = FUN_005d3690((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
        *(undefined4 *)(param_1 + 0x12) = uVar2;
        uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
        *(undefined4 *)(param_1 + 0x22) = uVar2;
        uVar2 = FUN_005d3690((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
        *(undefined4 *)(param_1 + 0x14) = uVar2;
        uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
        *(undefined4 *)(param_1 + 0x24) = uVar2;
        uVar2 = FUN_005d3690((uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
        *(undefined4 *)(param_1 + 0x16) = uVar2;
        uVar2 = FUN_0062a170(uVar2,(uint)param_1[2] * (uint)param_1[1] * (uint)*param_1);
        *(undefined4 *)(param_1 + 0x26) = uVar2;
        param_1[10] = 6;
        param_1[0xb] = 0;
      }
      goto LAB_005b60a0;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 1;
  param_1[0xb] = 0;
LAB_005b60a0:
  if ((*(uint *)(param_1 + 6) & 0x4000) != 0) {
    uVar2 = FUN_00631d33((uint)param_1[1] * (uint)*param_1 * 2);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    param_1[4] = *param_1;
    return;
  }
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


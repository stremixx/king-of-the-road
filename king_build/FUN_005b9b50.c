
undefined4 * __thiscall FUN_005b9b50(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_0065075c;
  param_1[0xf] = 0;
  *(short *)(param_1 + 5) = (short)param_2;
  *(short *)((int)param_1 + 0x16) = (short)param_3;
  *(short *)(param_1 + 6) = (short)param_4;
  param_1[0xe] = 0;
  switch(param_4) {
  case 1:
    param_1[0x10] = 1;
    break;
  case 2:
    param_1[0x10] = 3;
    break;
  case 3:
    param_1[0x10] = 6;
    break;
  case 4:
    param_1[0x10] = 7;
    break;
  default:
    param_1[0x10] = 0;
  }
  uVar1 = FUN_00631d33(param_2 * param_3 * param_4);
  param_1[2] = uVar1;
  param_1[3] = 0;
  iVar2 = FUN_00631d33(0x330);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_005b8b90();
  }
  param_1[4] = uVar1;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x11] = 1;
  uVar1 = FUN_0062a170(param_1[2],
                       (uint)*(ushort *)(param_1 + 6) * (uint)*(ushort *)(param_1 + 5) *
                       (uint)*(ushort *)((int)param_1 + 0x16));
  param_1[7] = uVar1;
  param_1[0xd] = 1;
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  if (param_2 == param_3) {
    for (; param_2 != 0; param_2 = param_2 >> 1) {
      *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + 1;
    }
    *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + -1;
  }
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}


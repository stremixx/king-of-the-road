
short * __thiscall FUN_005b5be0(short *param_1,ushort *param_2,int *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(int *)(param_1 + 0x32) = *param_3;
  *(int *)(param_1 + 0x36) = param_3[2];
  *(int *)(param_1 + 0x34) = param_3[1];
  *(int *)(param_1 + 0x38) = param_3[3];
  *(uint *)(param_1 + 6) = *(uint *)(param_2 + 6) & 0xffffb4fe | param_4 | 0x20;
  iVar5 = param_3[2];
  if ((int)(uint)*param_2 <= iVar5) {
    iVar5 = *param_2 - 1;
  }
  iVar2 = param_3[3];
  param_3[2] = iVar5;
  if ((int)(uint)param_2[1] <= iVar2) {
    iVar2 = param_2[1] - 1;
  }
  param_3[3] = iVar2;
  if (iVar5 < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_3;
  }
  *param_3 = iVar4;
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_3[1];
  }
  param_3[1] = iVar3;
  if ((((iVar4 <= iVar5) && (iVar3 <= iVar2)) && (-1 < iVar5)) && (-1 < iVar2)) {
    *param_1 = ((short)param_3[2] - (short)*param_3) + 1;
    param_1[1] = ((short)param_3[3] - (short)param_3[1]) + 1;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0x3f00;
    *(undefined1 *)(param_1 + 0x2e) = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    *(ushort **)(param_1 + 0x30) = param_2;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 1;
    param_1[0xb] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    if ((*(uint *)(param_2 + 6) & 0x1000) != 0) {
      DAT_00701df4 = FUN_005d3160();
      param_1[0x3a] = 1;
      param_1[0x3b] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      return param_1;
    }
    if ((*(uint *)(param_1 + 6) & 0x4000) == 0) {
      param_1[0x18] = 0;
      param_1[0x19] = 0;
    }
    else {
      *(uint *)(param_1 + 0x18) =
           *(int *)(param_2 + 0x18) + ((uint)param_2[4] * param_3[1] + *param_3) * 2;
    }
    if (*(int *)(param_2 + 0xc) == 0) {
      param_1[0xc] = 0;
      param_1[0xd] = 0;
    }
    else {
      *(uint *)(param_1 + 0xc) =
           (uint)(ushort)param_1[2] * *param_3 +
           *(int *)(param_2 + 0xc) + (uint)param_2[3] * param_3[1];
    }
    uVar1 = FUN_0062a170(*(undefined4 *)(param_1 + 0xc),
                         (uint)(ushort)param_1[3] * (uint)(ushort)param_1[1]);
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    return param_1;
  }
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}


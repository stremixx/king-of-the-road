
void FUN_0062e3d0(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_0062e300();
  if (param_3 != 0) {
    bVar3 = (byte)param_2;
    (&DAT_007355ec)[DAT_007355e8] = bVar3;
    iVar1 = DAT_007355e8 + 1;
    bVar4 = (byte)((uint)param_2 >> 8);
    if (DAT_007355e8 < 0x3ffe) {
      (&DAT_007355ed)[DAT_007355e8] = bVar4;
      uVar2 = DAT_007355e8 + 2;
    }
    else {
      DAT_007355e8 = iVar1;
      if (iVar1 == 0x4000) {
        FUN_0062b090();
      }
      uVar2 = DAT_007355e8 + 1;
      (&DAT_007355ec)[DAT_007355e8] = bVar4;
      if (uVar2 == 0x4000) {
        DAT_007355e8 = uVar2;
        FUN_0062b090();
        uVar2 = DAT_007355e8;
      }
    }
    if (uVar2 < 0x3ffe) {
      (&DAT_007355ec)[uVar2] = ~bVar3;
      (&DAT_007355ed)[uVar2] = ~bVar4;
      DAT_007355e8 = uVar2 + 2;
    }
    else {
      DAT_007355e8 = uVar2 + 1;
      (&DAT_007355ec)[uVar2] = ~bVar3;
      if (DAT_007355e8 == 0x4000) {
        FUN_0062b090();
      }
      (&DAT_007355ec)[DAT_007355e8] = ~bVar4;
      DAT_007355e8 = DAT_007355e8 + 1;
      if (DAT_007355e8 == 0x4000) {
        FUN_0062b090();
      }
    }
  }
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (&DAT_007355ec)[DAT_007355e8] = *param_1;
    DAT_007355e8 = DAT_007355e8 + 1;
    param_1 = param_1 + 1;
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
    }
  }
  return;
}


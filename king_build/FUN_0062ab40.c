
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0062ab40(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_0072d590 = param_1;
  DAT_007355ed = DAT_00688bec._1_1_;
  DAT_007355ef = 0;
  local_4 = 0;
  local_8 = 0;
  DAT_007355d4 = param_2;
  DAT_00688734 = 8;
  DAT_007355ec = (undefined1)DAT_00688bec;
  DAT_007355ee = 8;
  if (DAT_0072d484 != 0) {
    DAT_007355ef = 8;
  }
  DAT_007355f0 = (undefined1)DAT_0072d480;
  DAT_007355f1 = (undefined1)((uint)DAT_0072d480 >> 8);
  DAT_007355f3 = (undefined1)((uint)DAT_0072d480 >> 0x18);
  DAT_007355f2 = (undefined1)((uint)DAT_0072d480 >> 0x10);
  DAT_007355e8 = 8;
  DAT_00779f74 = FUN_0062af60(0,0);
  FUN_0062e1d0(param_2);
  FUN_0062d290(&local_4,&DAT_00688734);
  FUN_0062c9d0(DAT_00688738,&local_8);
  (&DAT_007355ec)[DAT_007355e8] = (undefined1)local_8;
  DAT_007355e8 = DAT_007355e8 + 1;
  if (DAT_007355e8 == 0x4000) {
    FUN_0062b090();
  }
  (&DAT_007355ec)[DAT_007355e8] = 0xb;
  DAT_007355e8 = DAT_007355e8 + 1;
  if (DAT_007355e8 == 0x4000) {
    FUN_0062b090();
  }
  if (DAT_0072d484 != 0) {
    pcVar2 = (char *)FUN_0062b180(&DAT_00769df4);
    do {
      (&DAT_007355ec)[DAT_007355e8] = *pcVar2;
      DAT_007355e8 = DAT_007355e8 + 1;
      if (DAT_007355e8 == 0x4000) {
        FUN_0062b090();
      }
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  _DAT_00779f78 = DAT_007355e8;
  FUN_0062cd40();
  uVar6 = DAT_00779f74;
  (&DAT_007355ec)[DAT_007355e8] = (char)DAT_00779f74;
  iVar3 = DAT_007355e8 + 1;
  if (DAT_007355e8 < 0x3ffe) {
    (&DAT_007355ed)[DAT_007355e8] = (char)((uint)uVar6 >> 8);
    DAT_007355e8 = DAT_007355e8 + 2;
  }
  else {
    if (iVar3 == 0x4000) {
      DAT_007355e8 = iVar3;
      FUN_0062b090();
      iVar3 = DAT_007355e8;
      uVar6 = DAT_00779f74;
    }
    DAT_007355e8 = iVar3 + 1;
    (&DAT_007355ec)[iVar3] = (char)((uint)uVar6 >> 8);
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
      uVar6 = DAT_00779f74;
    }
  }
  uVar5 = (undefined1)((uint)uVar6 >> 0x10);
  if (DAT_007355e8 < 0x3ffe) {
    (&DAT_007355ec)[DAT_007355e8] = uVar5;
    (&DAT_007355ed)[DAT_007355e8] = (char)((uint)uVar6 >> 0x18);
    uVar4 = DAT_007355e8 + 2;
  }
  else {
    (&DAT_007355ec)[DAT_007355e8] = uVar5;
    DAT_007355e8 = DAT_007355e8 + 1;
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
      uVar6 = DAT_00779f74;
    }
    uVar4 = DAT_007355e8 + 1;
    (&DAT_007355ec)[DAT_007355e8] = (char)((uint)uVar6 >> 0x18);
    if (uVar4 == 0x4000) {
      DAT_007355e8 = uVar4;
      FUN_0062b090();
      uVar4 = DAT_007355e8;
    }
  }
  uVar6 = DAT_00769ef8;
  (&DAT_007355ec)[uVar4] = (char)DAT_00769ef8;
  DAT_007355e8 = uVar4 + 1;
  if (uVar4 < 0x3ffe) {
    DAT_007355e8 = uVar4 + 2;
    (&DAT_007355ed)[uVar4] = (char)((uint)uVar6 >> 8);
  }
  else {
    iVar3 = DAT_007355e8;
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
      iVar3 = DAT_007355e8;
      uVar6 = DAT_00769ef8;
    }
    DAT_007355e8 = iVar3 + 1;
    (&DAT_007355ec)[iVar3] = (char)((uint)uVar6 >> 8);
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
      uVar6 = DAT_00769ef8;
    }
  }
  uVar5 = (undefined1)((uint)uVar6 >> 0x10);
  if (DAT_007355e8 < 0x3ffe) {
    (&DAT_007355ec)[DAT_007355e8] = uVar5;
    (&DAT_007355ed)[DAT_007355e8] = (char)((uint)uVar6 >> 0x18);
    DAT_007355e8 = DAT_007355e8 + 2;
  }
  else {
    (&DAT_007355ec)[DAT_007355e8] = uVar5;
    DAT_007355e8 = DAT_007355e8 + 1;
    if (DAT_007355e8 == 0x4000) {
      FUN_0062b090();
      uVar6 = DAT_00769ef8;
    }
    iVar3 = DAT_007355e8 + 1;
    (&DAT_007355ec)[DAT_007355e8] = (char)((uint)uVar6 >> 0x18);
    DAT_007355e8 = iVar3;
    if (iVar3 == 0x4000) {
      FUN_0062b090();
    }
  }
  _DAT_00779f78 = _DAT_00779f78 + 8;
  FUN_0062b090();
  return 0;
}


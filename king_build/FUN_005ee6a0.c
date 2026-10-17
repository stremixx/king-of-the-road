
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_005ee6a0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  FUN_0061e41f(&DAT_0072184c,0x46,param_1);
  if ((*(byte *)(param_1 + 0xc) & 0x10) != 0) {
    return '\x04';
  }
  _DAT_00720830 = &DAT_0072184c;
  DAT_00722100 = (byte *)FUN_005aa880(&DAT_00720830);
  *param_2 = DAT_00722100;
  if (DAT_00722100 == (byte *)0x0) {
    return '\x05';
  }
  pbVar4 = &DAT_00682aa4;
  pbVar2 = DAT_00722100;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005ee72e:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005ee733;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005ee72e;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005ee733:
  if (iVar3 == 0) {
    return '\0';
  }
  bVar1 = *DAT_00722100;
  _DAT_00720830 = DAT_00722100;
  while (bVar1 != 0) {
    _DAT_00720830 = _DAT_00720830 + 1;
    bVar1 = *_DAT_00720830;
  }
  bVar1 = *_DAT_00720830;
  while (bVar1 != 0x2e) {
    if (_DAT_00720830 <= DAT_00722100) {
      return '\x06';
    }
    _DAT_00720830 = _DAT_00720830 + -1;
    bVar1 = *_DAT_00720830;
  }
  if (_DAT_00720830 <= DAT_00722100) {
    return '\x06';
  }
  _DAT_00720830 = _DAT_00720830 + 1;
  pbVar4 = &DAT_00682aa0;
  pbVar2 = _DAT_00720830;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005ee7b2:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005ee7b7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005ee7b2;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005ee7b7:
  if (iVar3 == 0) {
    return '\x01';
  }
  pbVar4 = &DAT_00682a9c;
  pbVar2 = _DAT_00720830;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005ee7f4:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005ee7f9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005ee7f4;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005ee7f9:
  if (iVar3 == 0) {
    return '\x01';
  }
  pbVar4 = &DAT_00677a08;
  pbVar2 = _DAT_00720830;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005ee836:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005ee83b;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005ee836;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005ee83b:
  if (iVar3 == 0) {
    return '\x02';
  }
  pbVar4 = &DAT_00682a98;
  pbVar2 = _DAT_00720830;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_005ee878:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_005ee87d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_005ee878;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_005ee87d:
  if (iVar3 == 0) {
    return '\x03';
  }
  pbVar4 = &DAT_00682a94;
  pbVar2 = _DAT_00720830;
  while( true ) {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) break;
    if (bVar1 == 0) {
      return '\a';
    }
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) {
      return '\a';
    }
  }
  return (1 - bVar5 != (uint)(bVar5 != 0)) + '\a';
}



uint __thiscall FUN_00560800(int param_1,undefined4 param_2,undefined4 *param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20 [8];
  
  FUN_004365d0(&local_24,param_2);
  if (local_24 == -1) {
    return 0xffffffff;
  }
  FUN_00437470(local_20,local_24,*param_3,param_3[1],param_3[2]);
  if (local_20[0] == -1) {
    return 0xfffffffe;
  }
  iVar5 = *(int *)(DAT_0068be98 + local_20[0] * 4);
  sVar1 = *(short *)(*(int *)(iVar5 + 0x70) + 0x10);
  sVar2 = *(short *)(*(int *)(iVar5 + 0x74) + 0x10);
  iVar5 = 0;
  do {
    sVar3 = FUN_00560660(iVar5);
    iVar6 = iVar5 + 1;
    sVar4 = FUN_00560660(iVar6);
    if (((sVar1 == sVar3) && (sVar2 == sVar4)) || ((sVar1 == sVar4 && (sVar2 == sVar3)))) {
      iVar6 = *(int *)(param_1 + 3000) - iVar5;
      if (*(char *)(iVar6 + 2000 + param_1) != '\0') {
        *(undefined1 *)(iVar6 + 2000 + param_1) = 0;
      }
      FUN_005606e0(iVar5);
      return (uint)(iVar5 != 0);
    }
  } while ((sVar4 != 0) && (iVar5 = iVar6, iVar6 < *(int *)(param_1 + 3000)));
  sVar4 = FUN_00560660(0);
  sVar3 = FUN_00560660(1);
  if (((*(char *)(*(int *)(param_1 + 3000) + 1999 + param_1) != '\0') &&
      ((sVar1 != sVar4 && (sVar2 != sVar4)))) && ((sVar1 == sVar3 || (sVar2 == sVar3)))) {
    FUN_005607d0();
    sVar4 = FUN_00560660(0);
    sVar3 = FUN_00560660(1);
  }
  if ((sVar1 == sVar3) || (sVar2 == sVar3)) {
    FUN_005606e0(1);
    sVar4 = FUN_00560660(0);
    FUN_00560660(1);
  }
  if (sVar1 != sVar4) {
    if (sVar2 != sVar4) {
      iVar5 = FUN_00560780(sVar1,sVar2);
      return (-(uint)(iVar5 != 0) & 5) - 3;
    }
    iVar5 = FUN_00560740(sVar1);
    if (iVar5 != 0) {
      return 3;
    }
  }
  if ((sVar2 != sVar4) && (iVar5 = FUN_00560740(sVar2), iVar5 != 0)) {
    return 4;
  }
  FUN_004e1e9c(s__Way__PushPos_0067a208);
  return 0xfffffffc;
}


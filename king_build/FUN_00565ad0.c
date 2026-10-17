
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00565ad0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100 [48];
  undefined1 local_d0 [116];
  int local_5c;
  
  if (*(int *)(param_1 + 0xcb0) == 0) {
    *(undefined4 *)(param_1 + 0xccc) = 0xffffffff;
    return 0xffffffff;
  }
  fVar4 = (float10)FUN_004e2035();
  fVar4 = fVar4 - (float10)*(float *)(param_1 + 0xcd0);
  fVar1 = (float)fVar4;
  if (fVar4 <= (float10)_DAT_0064a660) {
    return *(undefined4 *)(param_1 + 0xccc);
  }
  FUN_005eebf0();
  puVar6 = local_d0;
  iVar2 = FUN_0057d570(local_100);
  uVar3 = FUN_004e6d06(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0xd98),0,
                       param_1 + 0x24,iVar2 + 0x24,puVar6);
  if (((uVar3 & 1) != 0) && (local_5c != 0)) {
    iVar2 = FUN_0053eeb0(local_5c);
    if (iVar2 == *(int *)(param_1 + 0xcb0)) goto LAB_00565c2b;
    iVar2 = FUN_0053eeb0(local_5c);
    if (iVar2 == *(int *)(param_1 + 0xcb4)) goto LAB_00565c2b;
  }
  iVar2 = *(int *)(param_1 + 0xcb0);
  local_10c = *(undefined4 *)(iVar2 + 0x1b0);
  local_108 = *(undefined4 *)(iVar2 + 0x1b4);
  local_104 = *(undefined4 *)(iVar2 + 0x1b8);
  fVar4 = (float10)FUN_005aabc0(&local_10c);
  fVar5 = (float10)FUN_005aabc0(param_1 + 100);
  if (_DAT_0064b3f4 < fVar1) {
    *(undefined4 *)(param_1 + 0xccc) = 1;
    return 1;
  }
  if ((fVar5 + (float10)(float)fVar4) * (float10)_DAT_0064a830 + (float10)_DAT_0064dd80 <
      (float10)fVar1) {
    *(undefined4 *)(param_1 + 0xccc) = 2;
    return 2;
  }
LAB_00565c2b:
  fVar4 = (float10)FUN_004e2035();
  *(float *)(param_1 + 0xcd0) = (float)fVar4;
  *(undefined4 *)(param_1 + 0xccc) = 0;
  return 0;
}


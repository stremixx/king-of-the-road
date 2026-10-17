
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00595fb0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [48];
  undefined1 local_30 [48];
  
  local_6c = *(float *)(param_1 + 0xd4) - *(float *)(param_1 + 0xa4);
  local_68 = *(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xa8);
  local_64 = *(float *)(param_1 + 0xdc) - *(float *)(param_1 + 0xac);
  local_78 = local_6c * (float)_DAT_0064ed10;
  local_74 = local_68 * (float)_DAT_0064fa88;
  local_70 = local_64 * (float)_DAT_0064fa88;
  fVar5 = (float10)FUN_005aabc0(&local_78);
  if ((fVar5 < (float10)_DAT_0064a5a8) && (DAT_006f5874 == 1)) {
    *(undefined4 *)(param_1 + 0x144) = 1;
  }
  uVar1 = FUN_005ab330(local_60,local_78,local_74,local_70,param_1 + 0x80);
  puVar2 = (undefined4 *)FUN_005ab130(local_30,uVar1);
  puVar4 = (undefined4 *)(param_1 + 0xb0);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_005ab130(param_2,(undefined4 *)(param_1 + 0xb0),param_1 + 0x50);
  return param_2;
}



void FUN_004871e0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  void **ppvVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 **ppuVar6;
  undefined4 auStack_a0 [7];
  undefined4 uStack_84;
  undefined1 *apuStack_80 [5];
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 *local_50 [2];
  int local_48;
  undefined1 local_44 [24];
  void *local_2c [9];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006405b8;
  local_2c[8] = ExceptionList;
  puStack_60 = (undefined4 *)param_3;
  local_2c[0] = (void *)0xffffffff;
  local_2c[1] = param_2;
  local_2c[2] = (void *)0x0;
  local_2c[3] = (void *)0x0;
  local_2c[4] = (void *)0x0;
  local_2c[5] = (void *)0x0;
  local_2c[6] = (void *)0x0;
  local_2c[7] = (void *)0xffffffff;
  ppvVar3 = local_2c;
  ppuVar6 = apuStack_80;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar6 = *ppvVar3;
    ppvVar3 = ppvVar3 + 1;
    ppuVar6 = ppuVar6 + 1;
  }
  puVar4 = (undefined4 *)(param_1 + 0x28);
  puVar5 = auStack_a0;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = local_2c + 8;
  puStack_60 = (undefined4 *)FUN_004859b0(local_50,0);
  local_4 = 0;
  uStack_64 = 0x487278;
  FUN_004719e0();
  iVar2 = (local_48 - (int)local_50[0]) / 0xc;
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    uVar1 = iVar2 * 0xc;
    if (uVar1 < 0x81) {
      puStack_60 = (undefined4 *)0x4872cb;
      FUN_00401aa0();
      *local_50[0] = *(undefined4 *)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4);
      *(undefined4 **)(&DAT_0068c120 + (uVar1 + 7 >> 3) * 4) = local_50[0];
      DAT_0068c164 = 0;
    }
    else {
      puStack_60 = local_50[0];
      uStack_64 = 0x4872af;
      FUN_0061c888();
    }
  }
  apuStack_80[0] = local_44;
  puVar4 = (undefined4 *)(param_1 + 0x28);
  ppuVar6 = apuStack_80 + 1;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar6 = (undefined1 *)*puVar4;
    puVar4 = puVar4 + 1;
    ppuVar6 = ppuVar6 + 1;
  }
  uStack_84 = 0x4872f4;
  puStack_60 = (undefined4 *)FUN_00435cd0();
  puStack_68 = &param_1;
  param_2 = &uStack_64;
  uStack_6c = 0x487309;
  FUN_0041d3f0();
  puStack_68 = (undefined4 *)0x48730e;
  FUN_0043dd40();
  ExceptionList = local_2c[8];
  return;
}



void __thiscall FUN_00580740(int param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 auStack_d8 [12];
  undefined4 *puStack_a8;
  undefined4 *puStack_a4;
  float *pfStack_a0;
  undefined4 *puStack_9c;
  undefined4 *puStack_98;
  undefined4 *puStack_94;
  float local_80;
  float local_7c;
  float local_78;
  undefined1 local_74 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38 [52];
  
  *(undefined4 *)(param_1 + 800) = param_2;
  puVar2 = param_3;
  puVar7 = (undefined4 *)(param_1 + 500);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  puStack_94 = &local_40;
  puStack_98 = &local_48;
  puStack_9c = &local_50;
  pfStack_a0 = (float *)&local_58;
  puStack_a4 = &local_60;
  puStack_a8 = &local_68;
  puVar2 = auStack_d8;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_005de000();
  puVar2 = (undefined4 *)
           FUN_005da010(local_38,local_68,local_64,local_60,local_5c,local_58,local_54,local_50,
                        local_4c,local_48,local_44,local_40,local_3c);
  puStack_94 = (undefined4 *)(param_1 + 500);
  puVar7 = puStack_94;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  puStack_98 = (undefined4 *)local_38;
  pfVar5 = (float *)(param_1 + 0x254);
  puStack_9c = (undefined4 *)0x580830;
  pfVar3 = (float *)FUN_005aba00();
  pfVar6 = pfVar5;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar6 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    pfVar6 = pfVar6 + 1;
  }
  local_80 = *pfVar5 * *(float *)(param_1 + 0x1b8) +
             *(float *)(param_1 + 0x260) * *(float *)(param_1 + 0x1bc) +
             *(float *)(param_1 + 0x26c) * *(float *)(param_1 + 0x1c0);
  puStack_9c = (undefined4 *)(param_1 + 0x194);
  puStack_a4 = (undefined4 *)local_74;
  local_7c = *(float *)(param_1 + 600) * *(float *)(param_1 + 0x1b8) +
             *(float *)(param_1 + 0x264) * *(float *)(param_1 + 0x1bc) +
             *(float *)(param_1 + 0x270) * *(float *)(param_1 + 0x1c0);
  pfStack_a0 = &local_80;
  local_78 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x1b8) +
             *(float *)(param_1 + 0x268) * *(float *)(param_1 + 0x1bc) +
             *(float *)(param_1 + 0x274) * *(float *)(param_1 + 0x1c0);
  puStack_a8 = (undefined4 *)0x5808bb;
  puVar2 = (undefined4 *)FUN_004e29c2();
  *(undefined4 *)(param_1 + 0x1ac) = *puVar2;
  *(undefined4 *)(param_1 + 0x1b0) = puVar2[1];
  uVar1 = puVar2[2];
  *(undefined4 *)(param_1 + 0xd68) = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x1b4) = uVar1;
  puVar2 = (undefined4 *)(param_1 + 500);
  puVar7 = (undefined4 *)(param_1 + 0xd08);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar7 = puVar7 + 1;
  }
  pfVar3 = (float *)(param_1 + 0xd38);
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar3 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
  }
  return;
}


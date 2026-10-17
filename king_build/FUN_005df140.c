
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005df140(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined **ppuStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int iStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_108;
  undefined4 local_104 [9];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_d8;
  undefined4 local_d4 [12];
  undefined4 local_a4 [12];
  undefined1 local_74 [48];
  undefined1 auStack_44 [48];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_006489db;
  local_14 = ExceptionList;
  puVar1 = local_104 + 2;
  iVar3 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = local_a4 + 2;
  puVar5 = &DAT_00701550;
  puVar6 = local_104;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = local_d4 + 2;
  puVar5 = &DAT_00701550;
  puVar6 = local_a4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = 4;
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  puVar1 = &DAT_00701550;
  puVar5 = local_d4;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = &local_14;
  FUN_005d3b00();
  if (param_1[0x7a] != 0) {
    if (param_1[0x79] != 0) {
      FUN_005db580(*(undefined4 *)(param_1[0x7a] + 0x4c),param_1[0x91],param_1[0x92],param_1[0x93],
                   &LAB_005df5a0,param_1[0x79]);
    }
    puVar1 = (undefined4 *)FUN_005db3f0(local_74);
    puVar5 = local_d4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar1 = local_d4;
    puVar5 = local_a4;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar5 = puVar5 + 1;
    }
    fVar7 = (float10)thunk_FUN_00603580();
    local_1a4 = (float)fVar7;
    FUN_005f1c30(local_104);
    (**(code **)(*param_1 + 0x60))(local_104,&local_1a8,&local_1a0,&local_19c);
    if ((DAT_00701dec & 0x100) != 0) {
      FUN_005ad380(param_1[0x89]);
    }
    iVar3 = param_1[0x76];
    uStack_194 = *(undefined4 *)(iVar3 + 4);
    uStack_190 = *(undefined4 *)(iVar3 + 8);
    uStack_188 = *(undefined4 *)(iVar3 + 0x10);
    uStack_184 = *(undefined4 *)(iVar3 + 0x14);
    uStack_180 = *(undefined4 *)(iVar3 + 0x18);
    uStack_17c = *(undefined4 *)(iVar3 + 0x1c);
    uStack_178 = *(undefined4 *)(iVar3 + 0x20);
    uStack_174 = *(undefined4 *)(iVar3 + 0x24);
    uStack_170 = *(undefined4 *)(iVar3 + 0x28);
    uStack_16c = *(undefined4 *)(iVar3 + 0x2c);
    uStack_168 = *(undefined4 *)(iVar3 + 0x30);
    uStack_164 = *(undefined4 *)(iVar3 + 0x34);
    uStack_160 = *(undefined4 *)(iVar3 + 0x38);
    uStack_15c = *(undefined4 *)(iVar3 + 0x3c);
    uStack_158 = *(undefined4 *)(iVar3 + 0x40);
    uStack_154 = *(undefined4 *)(iVar3 + 0x44);
    uStack_150 = *(undefined4 *)(iVar3 + 0x48);
    iStack_14c = *(int *)(iVar3 + 0x4c);
    uStack_148 = *(undefined4 *)(iVar3 + 0x50);
    uStack_144 = *(undefined4 *)(iVar3 + 0x54);
    uStack_140 = *(undefined4 *)(iVar3 + 0x58);
    uStack_138 = *(undefined4 *)(iVar3 + 0x60);
    uStack_134 = *(undefined4 *)(iVar3 + 100);
    uStack_130 = *(undefined4 *)(iVar3 + 0x68);
    uStack_12c = *(undefined4 *)(iVar3 + 0x6c);
    uStack_128 = *(undefined4 *)(iVar3 + 0x70);
    uStack_124 = *(undefined4 *)(iVar3 + 0x74);
    uStack_120 = *(undefined4 *)(iVar3 + 0x78);
    uStack_11c = *(undefined4 *)(iVar3 + 0x7c);
    uStack_118 = *(undefined4 *)(iVar3 + 0x80);
    uStack_114 = *(undefined4 *)(iVar3 + 0x84);
    ppuStack_198 = &PTR_FUN_00651528;
    uStack_c = 0;
    iVar4 = *(int *)(param_1[0x7a] + 0x4c);
    if (((*(int *)(iVar4 + 0x10) == 0xf) && (iVar4 = *(int *)(iVar4 + 0x38), iVar4 != 0)) &&
       (iVar4 = *(int *)(iVar4 + 0x18), iVar4 != -2)) {
      iStack_14c = iVar4;
    }
    if (*(int *)(iVar3 + 0x4c) < 0) {
      iVar3 = param_1[0x78];
      iVar4 = 0;
    }
    else {
      FUN_005ea570(param_1[0x7a],local_1a8,local_1a0,local_19c,param_1[0x74],&ppuStack_198);
      iVar3 = param_1[0x78];
      iVar4 = iStack_14c + 1;
    }
    FUN_005e10c0(iVar3,iVar4);
    iVar3 = param_1[0x74];
    *(int *)(iVar3 + 0x2120) = param_1[0x2e4];
    *(int *)(iVar3 + 0x2124) = param_1[0x2e5];
    iVar3 = param_1[0x74];
    *(int *)(iVar3 + 0x2128) = param_1[0x2e6];
    *(int *)(iVar3 + 0x212c) = param_1[0x2e7];
    iVar3 = param_1[0x76];
    fStack_108 = (fStack_d8 - (float)*(double *)(iVar3 + 0x60)) * (float)*(double *)(iVar3 + 0x68) +
                 (float)*(double *)(iVar3 + 0x60);
    uVar2 = FUN_005ab330(auStack_44,uStack_e0,uStack_dc,fStack_108);
    FUN_005e1060(param_1[0x77],0,uVar2);
    if (param_1[0x84] != 0) {
      FUN_005ea940(param_1[0x7a],param_1[0x84],param_1[0x76],1,param_1[0x74]);
    }
    if (param_1[0x84] != 0) {
      FUN_005ad7f0(&DAT_00701550,&DAT_00701550);
      (**(code **)(*(int *)param_1[0x84] + 0x38))
                ((-(uint)(*(int *)(DAT_007206b0 + 0x158) != 0) & 0xfffffffc) + 5,local_a4,local_d4,
                 param_1[0x74]);
    }
    fVar7 = (float10)thunk_FUN_00603580();
    _DAT_007206a4 = (float)(fVar7 - (float10)local_1a4);
  }
  ExceptionList = local_14;
  return;
}


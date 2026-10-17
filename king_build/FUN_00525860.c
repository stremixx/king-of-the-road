
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00525860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  float10 fVar6;
  undefined1 *puVar7;
  int local_1bc;
  undefined8 local_1b8;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  undefined1 local_188 [48];
  undefined1 local_158 [48];
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [8];
  int local_c0;
  
  FUN_0050b880();
  FUN_0052f780();
  FUN_0050b5a0();
  FUN_004e1230(0);
  FUN_005d7cc0();
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  iVar1 = DAT_0068a8f0;
  local_1bc = DAT_0068a8f0;
  *(int *)(param_1 + 0x18c) = DAT_0068a8f0;
  *(int *)(param_1 + 0x188) = iVar1;
  *(int *)(param_1 + 0x184) = iVar1;
  *(int *)(param_1 + 0x180) = iVar1;
  *(int *)(param_1 + 0x17c) = iVar1;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0x40590000;
  *(undefined4 *)(param_1 + 0x1ac) = 0x40590000;
  *(undefined4 *)(param_1 + 0x1a4) = 0x40590000;
  *(undefined4 *)(param_1 + 0x19c) = 0x40590000;
  *(undefined4 *)(param_1 + 0x194) = 0x40590000;
  iVar1 = FUN_0057d570(local_188);
  local_1ac = *(float *)(iVar1 + 0x24);
  local_1a8 = *(float *)(iVar1 + 0x28);
  local_1a4 = *(float *)(iVar1 + 0x2c);
  iVar1 = FUN_005410a0();
  do {
    if (iVar1 == 0) {
      return;
    }
    iVar2 = FUN_00541090();
    iVar3 = DAT_0068a8f0;
    if ((iVar2 != *(int *)(DAT_006d0fd8 + 0x268)) &&
       (iVar2 = FUN_00541090(), *(int *)(iVar2 + 0x509c) != iVar3)) {
      puVar7 = local_188;
      FUN_00541090(puVar7);
      iVar3 = FUN_0057d570(puVar7);
      local_1a0 = *(float *)(iVar3 + 0x24) - local_1ac;
      local_19c = *(float *)(iVar3 + 0x28) - local_1a8;
      local_198 = *(float *)(iVar3 + 0x2c) - local_1a4;
      local_194 = local_1a0;
      local_190 = local_19c;
      local_18c = local_198;
      fVar6 = (float10)FUN_005aabc0(&local_194);
      local_1b8 = (double)fVar6;
      if (fVar6 <= (float10)_DAT_0064a690) {
        puVar7 = local_f8;
        FUN_00541090(puVar7);
        FUN_0057d570(puVar7);
        uVar4 = FUN_0057d570(local_158);
        FUN_005aba00(local_128,uVar4);
        iVar3 = FUN_00541090();
        local_1bc = *(int *)(iVar3 + 0x509c);
        puVar7 = local_c8;
        uVar4 = extraout_ECX;
        FUN_0041d3f0(&local_1bc);
        FUN_0043fd20(uVar4,puVar7);
        if (local_c0 == 5) {
          if (local_1b8 <= *(double *)(param_1 + 400)) {
            *(undefined4 *)(param_1 + 400) = (undefined4)local_1b8;
            *(undefined4 *)(param_1 + 0x194) = local_1b8._4_4_;
            *(int *)(param_1 + 0x17c) = local_1bc;
            *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 1;
            *(undefined4 *)(param_1 + 0x174) = 0;
            goto LAB_00525c2e;
          }
        }
        else if (local_c0 == 6) {
          if (local_1b8 <= *(double *)(param_1 + 0x198)) {
            *(undefined4 *)(param_1 + 0x198) = (undefined4)local_1b8;
            *(undefined4 *)(param_1 + 0x19c) = local_1b8._4_4_;
            *(int *)(param_1 + 0x180) = local_1bc;
            *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 2;
            *(undefined4 *)(param_1 + 0x174) = 1;
            goto LAB_00525c2e;
          }
        }
        else {
          uVar5 = FUN_0043f700(local_1bc);
          if ((uVar5 & 0x80) == 0) {
            uVar5 = FUN_0043f700(local_1bc);
            if ((uVar5 & 0x40) == 0) {
              if (local_1b8 <= *(double *)(param_1 + 0x1b0)) {
                *(undefined4 *)(param_1 + 0x1b0) = (undefined4)local_1b8;
                *(undefined4 *)(param_1 + 0x1b4) = local_1b8._4_4_;
                *(int *)(param_1 + 0x18c) = local_1bc;
                *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 0x10;
                *(undefined4 *)(param_1 + 0x174) = 4;
                goto LAB_00525c2e;
              }
            }
            else if (local_1b8 <= *(double *)(param_1 + 0x1a8)) {
              *(undefined4 *)(param_1 + 0x1a8) = (undefined4)local_1b8;
              *(undefined4 *)(param_1 + 0x1ac) = local_1b8._4_4_;
              *(int *)(param_1 + 0x188) = local_1bc;
              *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 8;
              *(undefined4 *)(param_1 + 0x174) = 3;
LAB_00525c2e:
              *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + 1;
            }
          }
          else if (local_1b8 <= *(double *)(param_1 + 0x1a0)) {
            *(undefined4 *)(param_1 + 0x1a0) = (undefined4)local_1b8;
            *(undefined4 *)(param_1 + 0x1a4) = local_1b8._4_4_;
            *(int *)(param_1 + 0x184) = local_1bc;
            *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 4;
            *(undefined4 *)(param_1 + 0x174) = 2;
            goto LAB_00525c2e;
          }
        }
      }
    }
    if (*(int *)(iVar1 + 8) == 0) {
      return;
    }
    iVar1 = *(int *)(iVar1 + 8) + -4;
  } while( true );
}


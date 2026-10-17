
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056f2e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined4 auStack_190 [7];
  undefined4 uStack_174;
  undefined4 *puStack_170;
  int *piStack_16c;
  int iStack_168;
  float *local_164;
  int local_150;
  undefined4 local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  int local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined1 local_120 [48];
  undefined1 local_f0 [48];
  undefined1 local_c0 [36];
  undefined4 local_9c;
  
  if ((*(int *)(DAT_006cdbcc + 0x514) < 2) && (*(int *)(DAT_006cdbcc + 0x524) == 0)) {
    local_150 = DAT_0068a8f0;
    local_164 = (float *)0x56f328;
    iVar1 = FUN_005410a0();
    if (iVar1 != 0) {
      do {
        local_164 = (float *)0x56f339;
        iVar2 = FUN_00541090();
        if ((iVar2 != *(int *)(DAT_006d0fd8 + 0x268)) &&
           (local_164 = *(float **)(iVar2 + 0x509c), local_150 = (int)local_164,
           local_164 != (float *)DAT_0068a8f0)) {
          iStack_168 = 0x56f36e;
          uVar3 = FUN_0043f700();
          if ((uVar3 & 0x100) == 0) {
            local_164 = *(float **)(local_150 + 0x54);
            iStack_168 = 0x56f399;
            local_130 = FUN_005e4980();
            local_164 = (float *)local_150;
            iStack_168 = 0x56f3ab;
            uVar3 = FUN_0043f700();
            if ((uVar3 & 0x40) == 0) {
              local_164 = (float *)local_150;
              iStack_168 = 0x56f3c0;
              uVar3 = FUN_0043f700();
              if ((uVar3 & 0x400) == 0) goto LAB_0056f45f;
            }
            local_164 = (float *)local_f0;
            iStack_168 = 0x56f3d9;
            iVar4 = FUN_0057d570();
            local_13c = *(float *)(iVar4 + 0x24);
            local_164 = (float *)local_120;
            local_138 = *(float *)(iVar4 + 0x28);
            local_134 = *(float *)(iVar4 + 0x2c);
            iStack_168 = 0x56f409;
            iVar4 = FUN_0057d570();
            local_148 = *(float *)(iVar4 + 0x24) - local_13c;
            local_144 = *(float *)(iVar4 + 0x28) - local_138;
            local_140 = *(float *)(iVar4 + 0x2c) - local_134;
            local_164 = &local_12c;
            iStack_168 = 0x56f44f;
            local_12c = local_148;
            local_128 = local_144;
            local_124 = local_140;
            fVar7 = (float10)FUN_005aabc0();
            if (fVar7 < (float10)_DAT_0064b31c) {
              if (iVar2 == 0) {
                return;
              }
              local_164 = (float *)&DAT_006f1cf8;
              iStack_168 = DAT_006f2394;
              piStack_16c = &local_150;
              *(undefined4 *)(DAT_006f2394 + 0x24) = 0xffffffff;
              puStack_170 = (undefined4 *)0x56f4a1;
              FUN_0041d3f0();
              piStack_16c = (int *)0x56f4a6;
              iVar1 = FUN_00441d40();
              if (iVar1 != 0) {
                return;
              }
              local_164 = (float *)local_150;
              iStack_168 = 0x56f4bf;
              uVar3 = FUN_0043f700();
              *(uint *)(DAT_006f2394 + 0x20) = (-(uint)((uVar3 & 0x400) != 0) & 6) + 0x12;
              *(undefined4 *)(DAT_006f2394 + 0x24) = 0;
              if (DAT_006f2354 == 0) {
                return;
              }
              local_164 = (float *)&local_14c;
              DAT_006f2354 = 0;
              iVar1 = *(int *)(DAT_006d0fd8 + 0x268);
              iStack_168 = 0x56f50b;
              FUN_00568670();
              local_164 = (float *)local_c0;
              piStack_16c = &local_150;
              puStack_170 = (undefined4 *)0x56f523;
              FUN_0041d3f0();
              piStack_16c = (int *)0x56f528;
              FUN_0043fd20();
              if (local_150 == DAT_0068a8f0) {
                return;
              }
              local_164 = (float *)local_150;
              iStack_168 = 0x56f546;
              uVar3 = FUN_0043f700();
              if ((uVar3 & 0x40) == 0) {
                local_164 = (float *)local_150;
                iStack_168 = 0x56f66f;
                uVar3 = FUN_0043f700();
                if ((uVar3 & 0x400) == 0) {
                  return;
                }
                iStack_168 = local_150;
                piStack_16c = &local_14c;
                local_164 = (float *)local_150;
                puStack_170 = (undefined4 *)0x56f68d;
                FUN_0041d3f0();
                piStack_16c = (int *)0x56f692;
                FUN_00476c60();
                return;
              }
              local_164 = (float *)0x56f556;
              FUN_004d9020();
              local_164 = (float *)0x56f55b;
              FUN_004e5738();
              local_164 = (float *)0x0;
              piStack_16c = &local_150;
              puStack_170 = (undefined4 *)0x56f569;
              iStack_168 = extraout_ECX;
              FUN_0041d3f0();
              puStack_170 = &local_14c;
              uStack_174 = 0x56f576;
              piStack_16c = (int *)extraout_ECX_00;
              FUN_0041d3f0();
              puStack_170 = (undefined4 *)0x56f57b;
              iVar4 = FUN_00473910();
              if (iVar4 != 0) {
                return;
              }
              if (*(int *)(*(int *)(DAT_006d0fd8 + 0x268) + 0x5578) != 0) {
                local_164 = (float *)0x0;
                piStack_16c = (int *)0x56f5a0;
                iStack_168 = *(int *)(DAT_006d0fd8 + 0x268);
                FUN_0055ebf0();
              }
              puVar5 = &DAT_00701550;
              puVar6 = auStack_190;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + 1;
                puVar6 = puVar6 + 1;
              }
              FUN_0056f1b0(local_9c,*(undefined4 *)(local_130 + 4),0,0);
              iStack_168 = 0x56f5dc;
              local_164 = (float *)iVar2;
              FUN_005313f0();
              *(undefined2 *)(*(int *)(iVar2 + 0x5460) + 0x2740) = 1;
              *(undefined4 *)(*(int *)(iVar2 + 0x5460) + 0x2760) = 1;
              *(undefined4 *)(iVar2 + 0x509c) = local_14c;
              iStack_168 = 0x56f60f;
              local_164 = (float *)iVar2;
              FUN_00596c60();
              local_164 = (float *)0x1;
              iStack_168 = 1;
              piStack_16c = (int *)0x56f622;
              FUN_004eb320();
              *(undefined2 *)(*(int *)(iVar1 + 0x5460) + 0x2746) = 100;
              *(undefined2 *)(*(int *)(iVar1 + 0x5460) + 0x2740) = 0;
              *(undefined4 *)(*(int *)(iVar1 + 0x5460) + 0x2760) = 0;
              *(undefined4 *)(iVar1 + 0x509c) = DAT_006f1d20;
              return;
            }
          }
        }
LAB_0056f45f:
        if (*(int *)(iVar1 + 8) == 0) {
          return;
        }
        iVar1 = *(int *)(iVar1 + 8) + -4;
        if (iVar1 == 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}


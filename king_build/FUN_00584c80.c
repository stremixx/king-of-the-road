
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00584c80(float param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float unaff_retaddr;
  undefined4 uStack00000030;
  int iStack00000034;
  int in_stack_00000b90;
  int *in_stack_00001998;
  float *in_stack_000019a0;
  float *in_stack_000019a4;
  int in_stack_000019a8;
  byte in_stack_000019ac;
  
  FUN_0061d4f0();
  if ((in_stack_00001998[0x62] != 2) && (in_stack_00001998[0x62] != 1)) {
    return 0;
  }
  FUN_0057d570();
  FUN_0041ce10();
  FUN_0057d5d0();
  iVar4 = FUN_004e5437();
  if (iVar4 == 0) {
    FUN_0057d5d0();
    (**(code **)(*in_stack_00001998 + 0x1c))();
  }
  uVar5 = FUN_004e6089();
  if ((uVar5 & 1) == 0) {
    uVar5 = FUN_00583c50();
    if ((uVar5 & 1) == 0) {
      uVar5 = FUN_004e65d1();
      if ((uVar5 & 1) == 0) {
        if ((in_stack_000019ac & 0x40) != 0) {
          return 0;
        }
        FUN_00587370();
        iVar4 = FUN_00584830();
        if (iVar4 == 0) {
          return 0;
        }
        uStack00000030 = 4;
        iStack00000034 = 0;
        if (0 < in_stack_00000b90) {
          pfVar7 = (float *)&stack0x00000a90;
          puVar6 = (undefined4 *)&stack0x00000394;
          do {
            if (pfVar7[0x41] != 0.0) {
              *in_stack_000019a4 = *pfVar7;
              FUN_0041ce10();
              FUN_0041ce10();
              FUN_0041ce10();
              uVar1 = puVar6[-0xc1];
              uVar2 = puVar6[-0xc0];
              *(undefined4 *)(in_stack_000019a8 + 0x74) = 0;
              *(undefined4 *)(in_stack_000019a8 + 0x34) = uVar1;
              uVar1 = puVar6[-0xbf];
              *(undefined4 *)(in_stack_000019a8 + 0x38) = uVar2;
              *(undefined4 *)(in_stack_000019a8 + 0x3c) = uVar1;
              uVar1 = *puVar6;
              *(undefined4 *)(in_stack_000019a8 + 0x40) = puVar6[-1];
              uVar2 = puVar6[1];
              *(undefined4 *)(in_stack_000019a8 + 0x44) = uVar1;
              *(undefined4 *)(in_stack_000019a8 + 0x48) = uVar2;
            }
            iStack00000034 = iStack00000034 + 1;
            pfVar7 = pfVar7 + 1;
            puVar6 = puVar6 + 3;
          } while (iStack00000034 < in_stack_00000b90);
        }
      }
      else {
        uStack00000030 = 3;
        FUN_0041ce10();
        FUN_0041ce10();
        FUN_0041ce10();
        *in_stack_000019a4 =
             *(float *)(in_stack_000019a8 + 0x40) * unaff_retaddr +
             *(float *)(in_stack_000019a8 + 0x48) * param_2 +
             *(float *)(in_stack_000019a8 + 0x44) * param_1;
        FUN_0041ce10();
        FUN_0041ce10();
        FUN_0041ce10();
      }
    }
    else {
      uStack00000030 = 2;
      FUN_0041ce10();
      FUN_0041ce10();
      FUN_0041ce10();
      *in_stack_000019a4 =
           unaff_retaddr * *(float *)(in_stack_000019a8 + 0x40) +
           *(float *)(in_stack_000019a8 + 0x48) * param_2 +
           *(float *)(in_stack_000019a8 + 0x44) * param_1;
      FUN_0041ce10();
      FUN_0041ce10();
      FUN_0041ce10();
    }
  }
  else {
    uStack00000030 = 1;
    FUN_004bdd80();
    FUN_004bddd0();
    FUN_004bde20();
    fVar8 = (float10)FUN_004e1080();
    *in_stack_000019a4 = (float)fVar8;
    FUN_004bdd80();
    FUN_004bddd0();
    FUN_004bde20();
  }
  fVar8 = (float10)FUN_004e1080();
  fVar9 = (float10)FUN_004e1080();
  if (((float10)_DAT_0064a6c8 <= fVar9) && ((float)_DAT_0064a6c8 <= (float)fVar8)) {
    fVar3 = (float)fVar9 / (float)fVar8;
    if ((float)_DAT_0064a660 < fVar3) {
      fVar3 = _DAT_0064b240;
    }
    *in_stack_000019a0 = SQRT(fVar3) * *in_stack_000019a0;
    return uStack00000030;
  }
  *in_stack_000019a0 = 0.0;
  return uStack00000030;
}


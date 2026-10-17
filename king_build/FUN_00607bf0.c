
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00607bf0(int param_1,ushort *param_2,ushort *param_3,ushort *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006495cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar14 = (undefined4 *)FUN_00631d33(0x4c);
  local_4 = 0;
  if (puVar14 == (undefined4 *)0x0) {
    puVar14 = (undefined4 *)0x0;
  }
  else {
    puVar1 = puVar14 + 1;
    puVar14[2] = puVar1;
    *puVar1 = puVar1;
    FUN_00608110();
    *puVar14 = &PTR_FUN_00651ef0;
    puVar14[0x11] = 0;
    puVar14[0x10] = 0;
    puVar14[0xf] = 0;
    puVar14[0x12] = 0;
    puVar14[0xe] = 0;
  }
  local_4 = 0xffffffff;
  if (puVar14 != (undefined4 *)0x0) {
    puVar14[4] = param_2;
    puVar14[5] = param_3;
    puVar14[6] = param_4;
    puVar14[9] = param_5;
    iVar18 = *(int *)(param_1 + 0xc);
    uVar3 = *(uint *)((uint)*param_2 * 0x10 + 8 + iVar18);
    iVar19 = (uint)*param_2 * 0x10 + iVar18;
    iVar20 = (uint)*param_4 * 0x10 + iVar18;
    iVar18 = (uint)*param_3 * 0x10 + iVar18;
    uVar17 = *(uint *)(iVar20 + 8);
    uVar15 = __ftol();
    uVar4 = *(uint *)(iVar19 + 0xc);
    uVar5 = *(uint *)(iVar20 + 0xc);
    uVar16 = __ftol();
    iVar6 = *(int *)(param_1 + 4);
    fVar10 = (float)uVar3 * *(float *)(iVar6 + 0x9cd8) + *(float *)(iVar6 + 0x9cc8);
    fVar12 = (float)uVar4 * *(float *)(iVar6 + 0x9cdc) + *(float *)(iVar6 + 0x9cd4);
    fVar2 = (float)*(uint *)(iVar18 + 8) * *(float *)(iVar6 + 0x9cd8) + *(float *)(iVar6 + 0x9cc8);
    fVar7 = (float)*(uint *)(iVar18 + 0xc) * *(float *)(iVar6 + 0x9cdc) + *(float *)(iVar6 + 0x9cd4)
    ;
    fVar8 = (float)uVar17 * *(float *)(iVar6 + 0x9cd8) + *(float *)(iVar6 + 0x9cc8);
    fVar9 = (float)uVar5 * *(float *)(iVar6 + 0x9cdc) + *(float *)(iVar6 + 0x9cd4);
    fVar11 = (fVar8 + fVar2 + fVar10) * _DAT_0064b8f4;
    fVar13 = (fVar9 + fVar7 + fVar12) * _DAT_0064b8f4;
    fVar12 = fVar12 - fVar13;
    fVar10 = fVar10 - fVar11;
    fVar10 = fVar12 * fVar12 + fVar10 * fVar10;
    fVar7 = fVar7 - fVar13;
    fVar2 = fVar2 - fVar11;
    fVar2 = fVar7 * fVar7 + fVar2 * fVar2;
    if (fVar10 <= fVar2) {
      fVar10 = fVar2;
    }
    fVar9 = fVar9 - fVar13;
    fVar8 = fVar8 - fVar11;
    fVar2 = fVar9 * fVar9 + fVar8 * fVar8;
    if (fVar10 <= fVar2) {
      fVar10 = fVar2;
    }
    puVar14[0xb] = fVar11;
    puVar14[0xc] = fVar13;
    puVar14[0xd] = SQRT(fVar10);
    uVar3 = *(uint *)(iVar19 + 0xc);
    uVar17 = *(uint *)(iVar19 + 8);
    iVar18 = FUN_00608170(uVar17,uVar3);
    fVar2 = *(float *)(iVar18 + ((uVar17 % 0x101) * 0x101 + uVar3 % 0x101) * 0x10);
    uVar3 = *(uint *)(iVar20 + 0xc);
    uVar17 = *(uint *)(iVar20 + 8);
    iVar18 = FUN_00608170(uVar17,uVar3);
    fVar2 = (*(float *)(iVar18 + ((uVar17 % 0x101) * 0x101 + uVar3 % 0x101) * 0x10) + fVar2) *
            _DAT_0064b248;
    iVar18 = FUN_00608170(uVar15,uVar16);
    fVar2 = fVar2 - *(float *)(iVar18 + ((uVar15 % 0x101) * 0x101 + uVar16 % 0x101) * 0x10);
    if (fVar2 < _DAT_0064b254) {
      fVar2 = -fVar2;
    }
    puVar14[8] = fVar2;
    iVar18 = *(int *)(param_1 + 4);
    *(short *)(param_1 + 0x2a) = *(short *)(param_1 + 0x2a) + 1;
    uVar3 = puVar14[9];
    uVar17 = FUN_00606970();
    fVar2 = _DAT_0064b254;
    if (uVar3 < uVar17) {
      fVar2 = (float)puVar14[0xc] - *(float *)(iVar18 + 8);
      fVar7 = (float)puVar14[0xb] - *(float *)(iVar18 + 4);
      fVar7 = SQRT(fVar2 * fVar2 + fVar7 * fVar7) - (float)puVar14[0xd];
      fVar2 = _DAT_0064c7a8;
      if (((_DAT_0064b254 < fVar7) && (fVar2 = _DAT_0064b254, fVar7 <= _DAT_00651eec)) &&
         (fVar2 = _DAT_0064c7a8, _DAT_0064b438 <= fVar7)) {
        fVar8 = (float)puVar14[0xb] - *(float *)(iVar18 + 4);
        fVar9 = (float)puVar14[0xc] - *(float *)(iVar18 + 8);
        fVar10 = -(float)puVar14[0xd];
        fVar2 = _DAT_0064b254;
        if ((fVar10 <= fVar9 * *(float *)(iVar18 + 0x3c) - fVar8 * *(float *)(iVar18 + 0x40)) &&
           (fVar10 <= fVar9 * *(float *)(iVar18 + 0x44) - fVar8 * *(float *)(iVar18 + 0x48))) {
          if ((uint)puVar14[9] < 8) {
            fVar2 = _DAT_0064b440 / (fVar7 + _DAT_0064b240);
          }
          else if ((fVar7 < _DAT_00651ee8) ||
                  (iVar18 = FUN_00607b20(*(float *)(iVar18 + 4),*(float *)(iVar18 + 8),
                                         *(undefined4 *)(iVar18 + 0x4c),
                                         *(undefined4 *)(iVar18 + 0x50),
                                         *(undefined4 *)(iVar18 + 0x54),
                                         *(undefined4 *)(iVar18 + 0x58)), iVar18 != 0)) {
            fVar2 = (float)puVar14[8] / fVar7;
          }
          else {
            fVar2 = ((float)puVar14[8] * _DAT_0064b248) / fVar7;
          }
        }
      }
    }
    puVar14[7] = fVar2;
    FUN_00612a00(puVar14);
    ExceptionList = local_c;
    return puVar14;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005937f0(int param_1,int param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint local_48;
  
  if ((*(int *)(param_1 + 0x68) != 0) && (local_48 = 0, param_3 != 0)) {
    do {
      iVar8 = FUN_005937d0();
      if (iVar8 == 0) {
        return;
      }
      iVar9 = _rand();
      fVar1 = (float)iVar9 * _DAT_0064b244;
      iVar9 = _rand();
      fVar1 = (float)iVar9 * _DAT_0064b244 - fVar1;
      iVar9 = _rand();
      fVar2 = (float)iVar9 * _DAT_0064b244;
      iVar9 = _rand();
      fVar2 = (float)iVar9 * _DAT_0064b244 - fVar2;
      iVar9 = _rand();
      fVar3 = (float)iVar9 * _DAT_0064b244;
      iVar9 = _rand();
      fVar3 = (float)iVar9 * _DAT_0064b244 - fVar3;
      fVar4 = fVar3 * DAT_00701598;
      fVar6 = DAT_00701588 * fVar2;
      fVar7 = DAT_007015a8 * fVar1;
      fVar5 = DAT_007015a0 * fVar1 + DAT_00701580 * fVar2 + DAT_00701590 * fVar3;
      fVar1 = DAT_00701594 * fVar3 + DAT_00701584 * fVar2 + DAT_007015a4 * fVar1;
      *(float *)(iVar8 + 0x28) = fVar5;
      fVar4 = fVar4 + fVar6 + fVar7;
      *(float *)(iVar8 + 0x2c) = fVar1;
      *(float *)(iVar8 + 0x30) = fVar4;
      *(float *)(iVar8 + 4) = fVar5;
      *(float *)(iVar8 + 8) = fVar1;
      *(float *)(iVar8 + 0xc) = fVar4;
      *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(iVar8 + 0x34) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(iVar8 + 0x3c) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      uVar10 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(iVar8 + 0x78) = 1;
      *(undefined4 *)(iVar8 + 0x24) = uVar10;
      *(float *)(iVar8 + 0x40) = (float)*(double *)(*(int *)(param_1 + 0x60) + 0xb98);
      iVar9 = _rand();
      if (_DAT_0064b438 <= (float)iVar9 * _DAT_0064f95c) {
        *(undefined4 *)(iVar8 + 0x44) = DAT_006f55f8;
        *(undefined4 *)(iVar8 + 0x48) = DAT_006f55fc;
        *(undefined4 *)(iVar8 + 0x4c) = DAT_006f5600;
        *(undefined4 *)(iVar8 + 0x50) = DAT_006f5604;
        *(undefined4 *)(iVar8 + 0x54) = DAT_006f55b8;
        *(undefined4 *)(iVar8 + 0x58) = DAT_006f55bc;
        *(undefined4 *)(iVar8 + 0x5c) = DAT_006f55c0;
        *(undefined4 *)(iVar8 + 0x60) = DAT_006f55c4;
        *(undefined4 *)(iVar8 + 100) = DAT_006f55a8;
        *(undefined4 *)(iVar8 + 0x68) = DAT_006f55ac;
        *(undefined4 *)(iVar8 + 0x6c) = DAT_006f55b0;
        uVar10 = DAT_006f55b4;
      }
      else {
        *(undefined4 *)(iVar8 + 0x44) = DAT_006f55c8;
        *(undefined4 *)(iVar8 + 0x48) = DAT_006f55cc;
        *(undefined4 *)(iVar8 + 0x4c) = DAT_006f55d0;
        *(undefined4 *)(iVar8 + 0x50) = DAT_006f55d4;
        *(undefined4 *)(iVar8 + 0x54) = DAT_006f55e8;
        *(undefined4 *)(iVar8 + 0x58) = DAT_006f55ec;
        *(undefined4 *)(iVar8 + 0x5c) = DAT_006f55f0;
        *(undefined4 *)(iVar8 + 0x60) = DAT_006f55f4;
        *(undefined4 *)(iVar8 + 100) = DAT_006f55d8;
        *(undefined4 *)(iVar8 + 0x68) = DAT_006f55dc;
        *(undefined4 *)(iVar8 + 0x6c) = DAT_006f55e0;
        uVar10 = DAT_006f55e4;
      }
      *(undefined4 *)(iVar8 + 0x70) = uVar10;
      local_48 = local_48 + 1;
      *(undefined4 *)(iVar8 + 0x74) = 0x3f800000;
    } while (local_48 < param_3);
  }
  return;
}


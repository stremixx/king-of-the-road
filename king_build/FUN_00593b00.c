
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00593b00(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puVar1 = *(undefined4 **)(param_1 + 0x6c);
  puVar5 = (undefined4 *)0x0;
  while (puVar8 = puVar1, puVar8 != (undefined4 *)0x0) {
    fVar2 = (float)*(double *)(*(int *)(param_1 + 0x60) + 0xb98) - (float)puVar8[0x10];
    if (puVar8[0x1e] == 0) {
LAB_00593b48:
      if (_DAT_0064f8e8 < fVar2) goto LAB_00593b59;
LAB_00593bb3:
      fVar3 = _DAT_006f559c * fVar2 * fVar2 * _DAT_0064b248;
      fVar4 = _DAT_006f55a0 * fVar2 * fVar2 * _DAT_0064b248;
      puVar8[7] = ((float)puVar8[4] + (float)puVar8[10]) * fVar2 + (float)puVar8[0xd] +
                  _DAT_006f5598 * fVar2 * fVar2 * _DAT_0064b248;
      puVar8[8] = fVar3 + ((float)puVar8[0xb] + (float)puVar8[5]) * fVar2 + (float)puVar8[0xe];
      puVar8[9] = fVar4 + ((float)puVar8[0xc] + (float)puVar8[6]) * fVar2 + (float)puVar8[0xf];
      FUN_0041ce10(_DAT_006f5598 * fVar2 + (float)puVar8[10],
                   _DAT_006f559c * fVar2 + (float)puVar8[0xb],
                   _DAT_006f55a0 * fVar2 + (float)puVar8[0xc]);
      puVar8[1] = local_14;
      puVar8[2] = local_10;
      puVar8[3] = local_c;
      fVar2 = (float)puVar8[0x1d] -
              (float)*(double *)(*(int *)(param_1 + 0x60) + 0xb90) * _DAT_0064b954;
      puVar8[0x1d] = fVar2;
      if (fVar2 < _DAT_0064b254) {
        puVar8[0x1d] = 0;
      }
    }
    else {
      if (fVar2 <= _DAT_0064f8ec) {
        if (puVar8[0x1e] == 0) goto LAB_00593b48;
        goto LAB_00593bb3;
      }
LAB_00593b59:
      puVar1 = (undefined4 *)*puVar8;
      if ((puVar8[0x1e] == 0) && (iVar6 = _rand(), _DAT_0064e328 < (float)iVar6 * _DAT_0064f95c)) {
        _rand();
        uVar7 = __ftol();
        FUN_005937f0(puVar8,uVar7);
      }
      FUN_00593790(puVar8,puVar5);
      puVar8 = puVar1;
    }
    if (puVar8 == (undefined4 *)0x0) break;
    puVar5 = puVar8;
    puVar1 = (undefined4 *)*puVar8;
  }
  FUN_00594340((float)*(double *)(*(int *)(param_1 + 0x60) + 0xb98));
  FUN_005d29a0(1);
  return;
}


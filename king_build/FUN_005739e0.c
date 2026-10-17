
/* WARNING: Type propagation algorithm not settling */

void FUN_005739e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  double dVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint ***extraout_ECX;
  uint ***pppuVar7;
  int iVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined4 ****local_3bc;
  uint ***local_3a8;
  uint ***local_3a4;
  int local_3a0;
  int local_39c;
  uint **local_398 [2];
  int local_390;
  undefined4 local_330;
  undefined4 local_32c;
  uint local_2d8 [60];
  undefined8 local_1e8;
  undefined8 local_1e0;
  
  puVar3 = local_2d8;
  iVar6 = 0x3c;
  do {
    *puVar3 = (uint)DAT_0068a8f0;
    puVar3 = puVar3 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_3bc = &local_3a4;
  iVar6 = 0;
  FUN_004364a0();
  pppuVar7 = local_3a4;
  if (local_3a4 != DAT_0068a8f0) {
    puVar9 = &local_1e8;
    puVar3 = local_2d8;
    do {
      if (0x3b < iVar6) break;
      local_3bc = (undefined4 ****)local_398;
      FUN_0041d3f0(&local_3a4);
      FUN_0043fd20(pppuVar7);
      if ((local_390 == 1) || (local_390 == 2)) {
        local_3bc = (undefined4 ****)local_3a4;
        uVar4 = FUN_0043f700();
        if ((uVar4 & 0x800) == 0) {
          *puVar3 = (uint)local_3a4;
          *(undefined4 *)puVar9 = local_330;
          *(undefined4 *)((int)puVar9 + 4) = local_32c;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 1;
          puVar9 = puVar9 + 1;
        }
      }
      local_3bc = (undefined4 ****)local_3a4;
      puVar5 = (uint *)FUN_004364d0(&local_3a0);
      local_3a4 = (uint ***)*puVar5;
      pppuVar7 = DAT_0068a8f0;
    } while (local_3a4 != DAT_0068a8f0);
  }
  local_3a0 = iVar6 + -1;
  local_39c = iVar6;
  do {
    bVar2 = false;
    if (local_3a0 < 1) break;
    puVar3 = local_2d8;
    pdVar10 = (double *)&local_1e0;
    iVar6 = local_3a0;
    do {
      puVar3 = puVar3 + 1;
      pppuVar7 = local_398;
      local_3bc = (undefined4 ****)pppuVar7;
      FUN_0041d3f0(puVar3);
      FUN_0043fd20(pppuVar7);
      if ((pdVar10[-1] < *pdVar10) ||
         ((pppuVar7 = extraout_ECX, pdVar10[-1] == *pdVar10 && (local_390 == 1)))) {
        pppuVar7 = (uint ***)*puVar3;
        dVar1 = pdVar10[-1];
        *(undefined4 *)(pdVar10 + -1) = *(undefined4 *)pdVar10;
        *(undefined4 *)((int)pdVar10 + -4) = *(undefined4 *)((int)pdVar10 + 4);
        uVar4 = puVar3[-1];
        *pdVar10 = dVar1;
        puVar3[-1] = (uint)pppuVar7;
        *puVar3 = uVar4;
        bVar2 = true;
      }
      pdVar10 = pdVar10 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  } while (bVar2);
  iVar6 = 0;
  local_3a8 = (uint ***)0x0;
  if (0 < local_39c) {
    puVar3 = local_2d8;
    iVar8 = param_3;
    do {
      if (param_4 <= iVar6) break;
      local_3bc = (undefined4 ****)*puVar3;
      uVar4 = FUN_00573860(param_1,param_2,iVar8);
      pppuVar7 = (uint ***)((uint)local_3a8 | uVar4);
      if ((iVar6 == param_4 + -2) && (pppuVar7 == (uint ***)0x0)) {
        iVar6 = iVar6 + 1;
        goto LAB_00573bc5;
      }
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
      iVar8 = iVar8 + 0x21;
      local_3a8 = pppuVar7;
    } while (iVar6 < local_39c);
    if (local_3a8 != (uint ***)0x0) {
      return;
    }
  }
LAB_00573bc5:
  local_3bc = (undefined4 ****)pppuVar7;
  FUN_00568670(&local_3bc);
  FUN_00573860(param_1,param_2,param_3 + iVar6 * 0x21);
  return;
}


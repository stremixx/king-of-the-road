
undefined4 * __thiscall FUN_00592b30(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  bool bVar11;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006472ee;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005d2890(0x62,s_Particles_0067d040);
  puVar1 = param_1 + 8;
  local_4 = 0;
  FUN_005f1020(s_Particles_0067d040,5,1);
  *puVar1 = &PTR_FUN_0064b25c;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  local_4._0_1_ = 1;
  *param_1 = &PTR_FUN_0064f93c;
  *puVar1 = &PTR_LAB_0064f8f0;
  iVar3 = FUN_00631d33(0x20010);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    puVar4 = (undefined4 *)(iVar3 + 8);
    iVar8 = 0x2001;
    do {
      puVar4[-2] = 0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4 = puVar4 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  param_1[0x1c] = iVar3;
  puVar4 = (undefined4 *)FUN_00631d33(0x7c04);
  local_4._0_1_ = 2;
  if (puVar4 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = puVar4 + 1;
    *puVar4 = 0x100;
    FUN_0061d173(puVar10,0x7c,0x100,&LAB_00592d10,FUN_004030a0);
  }
  uVar5 = 0;
  param_1[0x19] = puVar10;
  local_4 = CONCAT31(local_4._1_3_,1);
  for (iVar3 = 0x1f00; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  do {
    *(uint *)(uVar5 + param_1[0x19]) = uVar5 + 0x7c + param_1[0x19];
    uVar5 = uVar5 + 0x7c;
  } while (uVar5 < 0x7b84);
  *(undefined4 *)(param_1[0x19] + 0x7b84) = 0;
  param_1[0x1a] = param_1[0x19];
  param_1[0x1b] = 0;
  if (*(int **)(param_2 + 0x20c) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x20c) + 0x14))
              (0,-(uint)(param_1 != (undefined4 *)0x0) & (uint)puVar1);
  }
  iVar3 = FUN_005d8940(s_common_00671688);
  param_1[0x1d] = 0;
  uVar5 = 0;
  if (*(uint *)(iVar3 + 0x48) != 0) {
    pbVar7 = *(byte **)(iVar3 + 0x4c);
    do {
      pbVar9 = &DAT_0067b0b8;
      pbVar6 = pbVar7;
      do {
        bVar2 = *pbVar6;
        bVar11 = bVar2 < *pbVar9;
        if (bVar2 != *pbVar9) {
LAB_00592ca5:
          iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
          goto LAB_00592caa;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar11 = bVar2 < pbVar9[1];
        if (bVar2 != pbVar9[1]) goto LAB_00592ca5;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar2 != 0);
      iVar8 = 0;
LAB_00592caa:
      if (iVar8 == 0) {
        param_1[0x1d] = *(byte **)(iVar3 + 0x4c) + uVar5 * 0x7c;
        break;
      }
      uVar5 = uVar5 + 1;
      pbVar7 = pbVar7 + 0x7c;
    } while (uVar5 < *(uint *)(iVar3 + 0x48));
  }
  param_1[0x18] = param_2;
  FUN_005d2c20(param_1);
  FUN_005d2a80(1);
  ExceptionList = pvStack_c;
  return param_1;
}


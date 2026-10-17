
int __thiscall FUN_005b1000(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint unaff_ESI;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piStack_e4;
  int *piStack_e0;
  undefined4 *puStack_dc;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 auStack_6c [4];
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  int iStack_8;
  undefined4 uStack_4;
  
  if (0x3ff < param_5) {
    puStack_dc = (undefined4 *)param_2;
    piStack_e0 = (int *)s_quantity_of_verts_too_many_0067dfc4;
    piStack_e4 = (int *)0x5b102d;
    FUN_005d2520();
  }
  if (param_5 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x2050);
  uVar6 = *(uint *)(param_4 + 8);
  if (uVar1 == 0) {
    puStack_dc = (undefined4 *)0x0;
    piStack_e0 = (int *)0x88;
    piStack_e4 = DAT_0071f868;
    (**(code **)(*DAT_0071f868 + 0x50))();
  }
  else {
    local_bc = 0;
    local_c0 = 1;
    if ((uVar1 & 1) != 0) {
      local_bc = 0x20;
    }
    if ((uVar1 & 0x20) != 0) {
      local_bc = local_bc | 0x10;
    }
    if ((uVar1 & 2) != 0) {
      local_bc = local_bc | 1;
    }
    if ((uVar1 & 0x10) != 0) {
      local_bc = local_bc | 2;
    }
    if ((uVar1 & 4) != 0) {
      local_bc = local_bc | 4;
    }
    if ((uVar1 & 8) != 0) {
      local_bc = local_bc | 8;
    }
    puStack_dc = &local_c0;
    local_b8 = 0xbf800000;
    local_b4 = 0x3f800000;
    local_b0 = 0xbf800000;
    local_ac = 0x3f800000;
    local_a8 = 0;
    local_a4 = 0x3f800000;
    piStack_e0 = DAT_0071f868;
    piStack_e4 = (int *)0x5b1100;
    (**(code **)(*DAT_0071f868 + 0x6c))();
    piStack_e4 = (int *)0x1;
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868,0x88);
  }
  if (*(code **)(param_1 + 0x21b4) != (code *)0x0) {
    (**(code **)(param_1 + 0x21b4))(param_4);
  }
  if ((DAT_0071f834 == 0) && (*(int *)(iStack_8 + 0x2c) != -1)) {
    puVar7 = *(undefined4 **)(param_4 + 4);
    puVar5 = puVar7;
    puVar8 = (undefined4 *)&stack0xffffff34;
    for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    local_ac = puVar7[*(int *)(iStack_8 + 0x30) * 2 + 8];
    local_a8 = puVar7[*(int *)(iStack_8 + 0x30) * 2 + 9];
    iVar4 = (**(code **)(*DAT_0071f868 + 0x74))
                      (DAT_0071f868,uStack_4,unaff_ESI,&stack0xffffff34,param_2,0);
    uVar1 = *(uint *)(iStack_8 + 0x20);
    while (((uVar1 & 0x4000) == 0 && (iVar2 = FUN_005b0df0(iStack_8), iStack_20 = iVar2, iVar2 != 0)
           )) {
      local_c0 = *(undefined4 *)(*(int *)(param_4 + 4) + 0x24 + *(int *)(iVar2 + 0x30) * 8);
      iVar4 = (**(code **)(*DAT_0071f868 + 0x74))
                        (DAT_0071f868,uStack_1c,param_2,&piStack_e4,uStack_14,0);
      uVar1 = *(uint *)(iVar2 + 0x20);
      iStack_8 = iStack_20;
    }
  }
  else {
    if (*(int *)(param_1 + 0x21d0) != 0) {
      if (0x400 < param_5) {
        FUN_005d2520(s_Buffer_for_global_intensity_map_t_0067df98,0);
      }
      uVar6 = uVar6 & 0xfffffeff | 0x200;
      *(int *)(*(int *)(param_4 + 4) + 0x28) = param_1 + 0x21f0;
      *(undefined4 *)(*(int *)(param_4 + 4) + 0x2c) = 8;
      puVar7 = *(undefined4 **)(param_4 + 4);
      uVar3 = FUN_005ab130(&stack0xffffff34,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1,
                           param_1 + 0x2174);
      FUN_005b0ea0(param_1 + 0x21f0,*puVar7,puVar7[1],param_1 + 0x21e0,param_2,uVar3);
      param_5 = param_2;
      unaff_ESI = uVar6;
    }
    if (*(int *)(param_1 + 0x21d8) != 0) {
      if (0x400 < param_5) {
        FUN_005d2520(s_Buffer_for_global_intensity_map_t_0067df98,0);
      }
      uVar6 = uVar6 & 0xffffffef | 0x40;
      *(int *)(*(int *)(param_4 + 4) + 0x10) = param_1 + 0x41f0;
      *(undefined4 *)(*(int *)(param_4 + 4) + 0x14) = 4;
      puVar7 = *(undefined4 **)(param_4 + 4);
      uVar3 = FUN_005ab130(&stack0xffffff34,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1,
                           param_1 + 0x2174);
      FUN_005b0f20(param_1 + 0x41f0,*puVar7,puVar7[1],param_2,uVar3);
      param_5 = param_2;
      unaff_ESI = uVar6;
    }
    if (*(int *)(param_1 + 0x21dc) != 0) {
      if (0x400 < param_5) {
        FUN_005d2520(s_Buffer_for_global_intensity_map_t_0067df98,0);
      }
      iVar4 = *(int *)(param_1 + 0x202c);
      puVar7 = *(undefined4 **)(param_4 + 4);
      puVar5 = auStack_6c;
      for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar7 = *(undefined4 **)(param_4 + 4);
      uStack_48 = 8;
      iStack_4c = param_1 + 0x21f0;
      uVar3 = FUN_005ab130(&stack0xffffff34,iVar4 * 0x30 + 0x1460 + param_1,param_1 + 0x2174);
      FUN_005b0f90(param_1 + 0x21f0,*puVar7,puVar7[1],param_2,uVar3);
      puVar7 = *(undefined4 **)(param_4 + 4);
      uStack_58 = 4;
      iStack_5c = param_1 + 0x41f0;
      uVar3 = FUN_005ab130(&stack0xffffff34,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1,
                           param_1 + 0x2174);
      FUN_005b0f20(param_1 + 0x41f0,*puVar7,puVar7[1],param_2,uVar3);
      iVar4 = (**(code **)(*DAT_0071f868 + 0x74))
                        (DAT_0071f868,uStack_4,unaff_ESI & 0xffffffef | 0x40,auStack_6c,param_2,0);
      return iVar4;
    }
    iVar4 = (**(code **)(*DAT_0071f868 + 0x74))
                      (DAT_0071f868,uStack_4,uVar6,*(undefined4 *)(param_4 + 4),param_5,0);
  }
  if (iVar4 != 0) {
    uVar3 = FUN_005d42c0(iVar4,0,0);
    FUN_005d2250(uVar3);
  }
  return iVar4;
}



int __thiscall
FUN_005b14a0(int param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,ushort *param_5)

{
  ushort uVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_EBP;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  ushort *unaff_retaddr;
  uint uVar12;
  ushort *puStack_ec;
  int *piStack_e8;
  int *piStack_e4;
  uint *puStack_e0;
  uint auStack_cc [24];
  undefined4 auStack_6c [4];
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_4c;
  undefined4 uStack_48;
  int iStack_28;
  undefined4 uStack_24;
  int iStack_8;
  undefined4 uStack_4;
  
  if (0x3ff < *param_4) {
    puStack_e0 = (uint *)param_2;
    piStack_e4 = (int *)s_quantity_of_verts_too_many_0067dfc4;
    piStack_e8 = (int *)0x5b14cc;
    FUN_005d2520();
  }
  uVar12 = *(uint *)(param_1 + 0x2050);
  uVar8 = *(uint *)(param_5 + 4);
  auStack_cc[1] = uVar8;
  if (uVar12 == 0) {
    puStack_e0 = (uint *)0x0;
    piStack_e4 = (int *)0x88;
    piStack_e8 = DAT_0071f868;
    puStack_ec = (ushort *)0x5b14f9;
    (**(code **)(*DAT_0071f868 + 0x50))();
  }
  else {
    auStack_cc[4] = 0;
    auStack_cc[3] = 1;
    if ((uVar12 & 1) != 0) {
      auStack_cc[4] = 0x20;
    }
    if ((uVar12 & 0x20) != 0) {
      auStack_cc[4] = auStack_cc[4] | 0x10;
    }
    if ((uVar12 & 2) != 0) {
      auStack_cc[4] = auStack_cc[4] | 1;
    }
    if ((uVar12 & 0x10) != 0) {
      auStack_cc[4] = auStack_cc[4] | 2;
    }
    if ((uVar12 & 4) != 0) {
      auStack_cc[4] = auStack_cc[4] | 4;
    }
    if ((uVar12 & 8) != 0) {
      auStack_cc[4] = auStack_cc[4] | 8;
    }
    puStack_e0 = auStack_cc + 3;
    auStack_cc[5] = 0xbf800000;
    auStack_cc[6] = 0x3f800000;
    auStack_cc[7] = 0xbf800000;
    auStack_cc[8] = 0x3f800000;
    auStack_cc[9] = 0;
    auStack_cc[10] = 0x3f800000;
    piStack_e4 = DAT_0071f868;
    piStack_e8 = (int *)0x5b158c;
    (**(code **)(*DAT_0071f868 + 0x6c))();
    piStack_e8 = (int *)0x1;
    puStack_ec = (ushort *)0x88;
    (**(code **)(*DAT_0071f868 + 0x50))(DAT_0071f868);
  }
  if (*(code **)(param_1 + 0x21b4) != (code *)0x0) {
    puStack_ec = param_5;
    (**(code **)(param_1 + 0x21b4))();
  }
  if ((DAT_0071f834 == 0) && (*(int *)(iStack_8 + 0x2c) != -1)) {
    puVar2 = *(uint **)(param_5 + 2);
    puVar7 = puVar2;
    puVar10 = auStack_cc;
    for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
    }
    puStack_ec = (ushort *)0x0;
    auStack_cc[8] = puVar2[*(int *)(iStack_8 + 0x30) * 2 + 8];
    auStack_cc[9] = puVar2[*(int *)(iStack_8 + 0x30) * 2 + 9];
    uVar12 = *(uint *)(unaff_retaddr + 0x10);
    iVar6 = (**(code **)(*DAT_0071f868 + 0x78))
                      (DAT_0071f868,uStack_4,*(uint *)(unaff_retaddr + 4) | unaff_EBP,auStack_cc,
                       *param_5,uVar12,*unaff_retaddr);
    uVar8 = *(uint *)(iStack_8 + 0x20);
    while (((uVar8 & 0x4000) == 0 && (iVar4 = FUN_005b0df0(iStack_8), iStack_28 = iVar4, iVar4 != 0)
           )) {
      auStack_cc[0] = *(uint *)(*(int *)(param_5 + 2) + 0x20 + *(int *)(iVar4 + 0x30) * 8);
      auStack_cc[1] = *(uint *)(*(int *)(param_5 + 2) + 0x24 + *(int *)(iVar4 + 0x30) * 8);
      iVar6 = (**(code **)(*DAT_0071f868 + 0x78))
                        (DAT_0071f868,uStack_24,*(uint *)(unaff_retaddr + 4) | uVar12,&puStack_ec,
                         *param_5,*(undefined4 *)(unaff_retaddr + 0x10),*unaff_retaddr,0);
      uVar8 = *(uint *)(iVar4 + 0x20);
      iStack_8 = iStack_28;
    }
  }
  else {
    uVar1 = *param_5;
    if (*(int *)(param_1 + 0x21d0) == 0) {
      uVar8 = uVar8 | *(uint *)(param_4 + 4);
    }
    else {
      if (0x400 < uVar1) {
        puStack_ec = (ushort *)0x0;
        FUN_005d2520(s_Buffer_for_global_intensity_map_t_0067df98);
      }
      uVar8 = uVar8 | 0x200;
      *(int *)(*(int *)(param_5 + 2) + 0x28) = param_1 + 0x21f0;
      puStack_ec = (ushort *)(param_1 + 0x2174);
      *(undefined4 *)(*(int *)(param_5 + 2) + 0x2c) = 8;
      puVar3 = *(undefined4 **)(param_5 + 2);
      uVar5 = FUN_005ab130(auStack_cc,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1);
      FUN_005b0ea0(param_1 + 0x21f0,*puVar3,puVar3[1],param_1 + 0x21e0,*param_5,uVar5);
      param_4 = unaff_retaddr;
    }
    if (*(int *)(param_1 + 0x21d8) != 0) {
      if (0x400 < uVar1) {
        puStack_ec = (ushort *)0x0;
        FUN_005d2520(s_Buffer_for_global_intensity_map_t_0067df98);
      }
      uVar8 = uVar8 & 0xffffffef | 0x40;
      puStack_ec = (ushort *)(param_1 + 0x2174);
      *(int *)(*(int *)(param_5 + 2) + 0x10) = param_1 + 0x41f0;
      *(undefined4 *)(*(int *)(param_5 + 2) + 0x14) = 4;
      puVar3 = *(undefined4 **)(param_5 + 2);
      uVar5 = FUN_005ab130(auStack_cc,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1);
      FUN_005b0f20(param_1 + 0x41f0,*puVar3,puVar3[1],uVar1,uVar5);
      param_4 = unaff_retaddr;
    }
    if (*(int *)(param_1 + 0x21dc) != 0) {
      if (0x400 < uVar1) {
        puStack_ec = (ushort *)0x0;
        FUN_005d2520(s_Buffer_for_global_intensity_map_t_0067df98);
      }
      iVar6 = *(int *)(param_1 + 0x202c);
      puVar3 = *(undefined4 **)(param_5 + 2);
      puVar9 = *(undefined4 **)(param_5 + 2);
      puVar11 = auStack_6c;
      for (iVar4 = 0x18; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      uStack_48 = 8;
      puStack_ec = (ushort *)(param_1 + 0x2174);
      iStack_4c = param_1 + 0x21f0;
      uVar5 = FUN_005ab130(auStack_cc,iVar6 * 0x30 + 0x1460 + param_1);
      FUN_005b0f90(param_1 + 0x21f0,*puVar3,puVar3[1],uVar1,uVar5);
      puVar3 = *(undefined4 **)(param_5 + 2);
      uStack_58 = 4;
      iStack_5c = param_1 + 0x41f0;
      uVar5 = FUN_005ab130(auStack_cc,*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1,
                           (ushort *)(param_1 + 0x2174));
      FUN_005b0f20(param_1 + 0x41f0,*puVar3,puVar3[1],uVar1,uVar5);
      puStack_ec = (ushort *)0x0;
      iVar6 = (**(code **)(*DAT_0071f868 + 0x78))
                        (DAT_0071f868,uStack_4,uVar8 & 0xffffffef | 0x40,auStack_6c,*param_5,
                         *(undefined4 *)(unaff_retaddr + 0x10),*unaff_retaddr);
      return iVar6;
    }
    puStack_ec = (ushort *)0x0;
    iVar6 = (**(code **)(*DAT_0071f868 + 0x78))
                      (DAT_0071f868,uStack_4,uVar8,*(undefined4 *)(param_5 + 2),*param_5,
                       *(undefined4 *)(param_4 + 0x10),*param_4);
  }
  if (iVar6 != 0) {
    uVar5 = FUN_005d42c0(iVar6,0,0);
    FUN_005d2250(uVar5);
  }
  return iVar6;
}



undefined4 __thiscall FUN_005ba4e0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  int unaff_EDI;
  undefined4 *puVar5;
  uint *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc [6];
  undefined4 local_e4;
  undefined4 local_b4 [8];
  uint local_94;
  undefined1 auStack_90 [16];
  undefined1 local_80 [128];
  
  if ((*(byte *)(param_1 + 0x34) & 2) != 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (((DAT_0071f868 == 0) || ((param_2 & 2) != 0)) ||
     ((*(short *)(param_1 + 0x1a) == 0 &&
      ((*(short *)(param_1 + 0x14) != 1 || (*(short *)(param_1 + 0x16) != 1)))))) {
    if ((DAT_0071f864 != 0) && ((param_2 & 2) != 0)) {
      FUN_005d7a00();
      puVar6 = local_fc;
      for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      local_fc[0] = 0x7c;
      local_fc[3] = (uint)*(ushort *)(param_1 + 0x14);
      local_94 = (-(uint)(*(int *)(param_1 + 0x38) != 0) & 0x10003800) + 0x800;
      local_fc[2] = (uint)*(ushort *)(param_1 + 0x16);
      local_fc[1] = 7;
      iVar4 = (**(code **)(*DAT_0071f86c + 0x18))(DAT_0071f86c,local_fc,&local_108,0);
      if (iVar4 == 0) {
        if (unaff_EDI == 0) {
          FUN_005d2520(s_can_not_create_surface_0067e068,0);
        }
        *(int *)(param_1 + 0x48) = unaff_EDI;
        FUN_005bad10(param_2 & 1,0,0,0x3ff00000);
        *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
        return 1;
      }
      FUN_0061c369(auStack_90,&DAT_0067e064,*(undefined4 *)(param_1 + 4));
      uVar3 = FUN_005d42c0(iVar4,auStack_90);
      FUN_005d2520(s_Alloc_surface_0067e080,uVar3);
      return 0;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_005d6df0(*(int *)(param_1 + 0x2c));
    }
    iVar4 = FUN_005d6e00(*(undefined2 *)(param_1 + 0x14),*(undefined2 *)(param_1 + 0x16),
                         *(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 0x2c) = iVar4;
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x48) = iVar4;
      *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    return 0;
  }
  FUN_005d7a00();
  puVar6 = local_fc;
  for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_fc[0] = 0x7c;
  local_fc[1] = -(uint)(DAT_0071f820 != 0) & 0x20000 | 0x1007;
  if (DAT_0071f83c == 1) {
    local_94 = 0x1800;
  }
  else if ((DAT_0071f83c == 2) || (DAT_0071f83c == 3)) {
    local_94 = 0x5000;
  }
  else {
    FUN_005d2520(s_d3d_device_unsupported_texture_0067e1a0,0);
  }
  if (DAT_0071f820 != 0) {
    local_e4 = *(undefined4 *)(param_1 + 0x44);
    local_94 = local_94 | 0x400008;
  }
  local_fc[3] = (uint)*(ushort *)(param_1 + 0x14);
  local_fc[2] = (uint)*(ushort *)(param_1 + 0x16);
  switch(*(undefined4 *)(param_1 + 0x40)) {
  case 2:
    uVar2 = FUN_005d31a0();
    if ((uVar2 & 2) != 0) {
      puVar8 = &DAT_0071f0a8;
      puVar5 = local_b4;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      goto LAB_005ba692;
    }
    pcVar7 = s___texture_format_565_is_unsuppor_0067e160;
    goto LAB_005ba686;
  case 3:
    uVar2 = FUN_005d31a0();
    if ((uVar2 & 4) != 0) {
      puVar8 = &DAT_0071f7d0;
      puVar5 = local_b4;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      goto LAB_005ba692;
    }
    uVar3 = *(undefined4 *)(param_1 + 4);
    pcVar7 = s___texture_format_555_is_unsuppor_0067e0e0;
    break;
  default:
    pcVar7 = s___unknown_texture_format_0067e0c4;
LAB_005ba686:
    uVar3 = *(undefined4 *)(param_1 + 4);
    break;
  case 5:
    uVar2 = FUN_005d31a0();
    if ((uVar2 & 0x10) != 0) goto LAB_005ba628;
    uVar3 = *(undefined4 *)(param_1 + 4);
    pcVar7 = s___texture_format_4444_is_unsuppo_0067e120;
    break;
  case 8:
    uVar2 = FUN_005d31a0();
    iVar4 = 8;
    if ((uVar2 & 0x80) != 0) {
      puVar8 = &DAT_0071f688;
      puVar5 = local_b4;
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar5 = puVar5 + 1;
      }
      goto LAB_005ba692;
    }
LAB_005ba628:
    puVar8 = &DAT_0071f088;
    puVar5 = local_b4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
    }
    goto LAB_005ba692;
  }
  FUN_005d2520(uVar3,pcVar7);
LAB_005ba692:
  iVar4 = FUN_005b9f80(local_fc,&local_108);
  if (iVar4 == 0) {
    if (local_108 == (int *)0x0) {
      FUN_005d2520(s_can_not_create_texture_surface_0067e0a4,0);
    }
    if ((*(byte *)(param_1 + 0x34) & 8) == 0) {
      iVar4 = *local_108;
      puVar8 = (undefined4 *)0x0;
    }
    else {
      local_104 = 0;
      puVar8 = &local_104;
      local_100 = 0;
      iVar4 = *local_108;
    }
    (**(code **)(iVar4 + 0x74))(local_108,8,puVar8);
    *(undefined4 *)(param_1 + 0x48) = unaff_ESI;
    FUN_005bad10(param_2 & 1,0,0,0x3ff00000);
    piVar1 = *(int **)(param_1 + 0x48);
    *(int **)(param_1 + 0x4c) = piVar1;
    (**(code **)(*piVar1 + 4))(piVar1);
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
    return 1;
  }
  FUN_0061c369(local_80,s__s__texsize__d___0067e090,*(undefined4 *)(param_1 + 4),DAT_00701dfc);
  uVar3 = FUN_005d42c0(iVar4,local_80);
  FUN_005d2520(s_Alloc_surface_0067e080,uVar3);
  return 0;
}


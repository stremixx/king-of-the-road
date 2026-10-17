
int FUN_005d64f0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_EDI;
  undefined4 *puVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 auStack_540 [4];
  undefined4 uStack_53c;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 local_52c [5];
  undefined4 uStack_518;
  undefined4 auStack_4e4 [8];
  uint uStack_4c4;
  undefined1 auStack_4b0 [1200];
  
  if (((param_1[3] & 0x400) == 0) ||
     (iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x54))
                        ((int *)param_1[0xb],*param_1,param_1[1],param_1[2] << 3,0,0), iVar2 == 0))
  {
    puVar4 = local_52c;
    for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_52c[0] = 0x7c;
    auStack_4e4[0] = 0x20;
    if ((param_1[3] & 0x2000) == 0) {
      local_52c[1] = 1;
      uStack_4c4 = 0x200;
    }
    else {
      local_52c[1] = 0x21;
      uStack_4c4 = 0x218;
      uStack_518 = 1;
    }
    puVar4 = param_1 + 0xe;
    uStack_4c4 = uStack_4c4 | (param_1[3] & 0x1000) << 1;
    iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x18))((int *)param_1[0xb],local_52c,puVar4,0);
    if (iVar2 == 0) {
      FUN_005d4190(*puVar4);
      uVar1 = param_1[3];
      if ((uVar1 & 0x2000) == 0) {
        puVar6 = local_52c;
        for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        local_52c[0] = 0x7c;
        local_52c[1] = 7;
        if ((uVar1 & 0x1000) == 0) {
          uStack_4c4 = 0x800;
        }
        else {
          uVar9 = 0;
          (**(code **)(*(int *)param_1[0xb] + 0x10))((int *)param_1[0xb],0,auStack_540,0);
          (**(code **)(*unaff_EDI + 0x20))(unaff_EDI,0,DAT_0071f880);
          (**(code **)(*(int *)*puVar4 + 0x70))((int *)*puVar4,uVar9);
          uStack_4c4 = 0x2040;
        }
        local_52c[3] = *param_1;
        local_52c[2] = param_1[1];
        iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x18))
                          ((int *)param_1[0xb],local_52c,param_1 + 0xf,0);
      }
      else {
        uStack_538 = 0;
        uStack_534 = 0;
        uStack_530 = 0;
        uStack_53c = 4;
        iVar2 = (**(code **)(*(int *)*puVar4 + 0x30))((int *)*puVar4,&uStack_53c,param_1 + 0xf);
      }
      if (iVar2 == 0) {
        if (((param_1[3] & 0x4000) != 0) && ((param_1[3] & 0x1000) != 0)) {
          uVar9 = param_1[1];
          puVar4 = local_52c;
          for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          local_52c[3] = *param_1;
          local_52c[0] = 0x7c;
          uStack_4c4 = 0x24000;
          local_52c[1] = 0x1007;
          local_52c[2] = uVar9;
          iVar2 = (**(code **)(*(int *)param_1[0xc] + 0x18))
                            ((int *)param_1[0xc],param_1[0x19],&LAB_005d64c0,param_1);
          if (iVar2 != 0) {
            pcVar10 = s_can_not_enum_z_formats_00681814;
            goto LAB_005d6846;
          }
          piVar5 = (int *)param_1[0xb];
          puVar4 = param_1 + 0x11;
          puVar6 = auStack_4e4;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar6 = puVar6 + 1;
          }
          iVar2 = (**(code **)(*piVar5 + 0x18))(piVar5,local_52c,param_1 + 0x10,0);
          if (iVar2 != 0) {
            pcVar10 = s_can_not_create_zbuffer_0068182c;
            goto LAB_005d6846;
          }
          iVar2 = (**(code **)(*(int *)param_1[0xf] + 0xc))((int *)param_1[0xf],param_1[0x10]);
          if (iVar2 != 0) {
            pcVar10 = s_can_not_attach_zbuffer_for_d3d_00681844;
            goto LAB_005d6846;
          }
        }
        if ((int)param_1[2] < 2) {
          puVar3 = auStack_4b0 + 1;
          iVar2 = 0x100;
          do {
            puVar3[-1] = 0;
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 4;
            puVar3 = puVar3 + 4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          iVar2 = (**(code **)(*(int *)param_1[0xb] + 0x14))
                            ((int *)param_1[0xb],0x44,auStack_4b0,param_1 + 0x1e,0);
          if (iVar2 != 0) {
            pcVar10 = s_can_not_create_palette_006817e8;
            goto LAB_005d6846;
          }
          iVar2 = (**(code **)(*(int *)param_1[0xe] + 0x7c))((int *)param_1[0xe],param_1[0x1e]);
          if (iVar2 != 0) {
            pcVar10 = s_can_not_set_palette_00681800;
            goto LAB_005d6846;
          }
        }
        if ((param_1[3] & 0x1000) == 0) {
          return 0;
        }
        iVar2 = (**(code **)(*(int *)param_1[0xc] + 0x10))
                          ((int *)param_1[0xc],param_1[0x19],param_1[0xf],param_1 + 0xd);
        if (iVar2 == 0) {
          iVar2 = 4;
          bVar8 = true;
          piVar5 = &DAT_00654470;
          piVar7 = (int *)param_1[0x19];
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar8 = *piVar5 == *piVar7;
            piVar5 = piVar5 + 1;
            piVar7 = piVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            DAT_0071f838 = 1;
          }
          (**(code **)(*(int *)param_1[0xd] + 0x10))((int *)param_1[0xd],&LAB_005d7a10,param_1);
          if (((param_1[9] & 2) != 0) && ((param_1[9] & 0x10) != 0)) {
            return 0;
          }
          FUN_0061c369(param_1 + 0x1f,s_can_not_find_565_or_4444_texture_006817c0);
          return -0x7ff8ffa9;
        }
        pcVar10 = s_can_not_create_d3d_device_006817a4;
      }
      else {
        pcVar10 = s_can_not_create_back_buffer_00681788;
      }
    }
    else {
      pcVar10 = s_can_not_create_front_buffer_00681768;
    }
  }
  else {
    pcVar10 = s_can_not_set_resolution_00681750;
  }
LAB_005d6846:
  FUN_0061c369(param_1 + 0x1f,pcVar10);
  return iVar2;
}


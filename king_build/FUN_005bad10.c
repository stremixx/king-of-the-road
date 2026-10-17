
void __thiscall FUN_005bad10(int param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBX;
  int iVar5;
  int unaff_EBP;
  int *unaff_ESI;
  undefined4 *puVar6;
  int *unaff_EDI;
  int **ppiVar7;
  undefined4 *puVar8;
  int unaff_retaddr;
  char *pcVar9;
  int *piVar10;
  int *piVar11;
  int *local_1bc;
  int iStack_1b8;
  int local_1b4;
  uint local_1b0;
  int *piStack_1ac;
  int iStack_1a8;
  int local_1a4;
  uint local_1a0;
  uint local_19c;
  int iStack_198;
  int *piStack_194;
  code *local_190;
  int iStack_18c;
  int iStack_188;
  int *piStack_184;
  code *pcStack_180;
  int iStack_17c;
  int *apiStack_160 [3];
  uint uStack_154;
  undefined4 auStack_118 [8];
  undefined4 uStack_f8;
  undefined1 auStack_f4 [16];
  int aiStack_e4 [4];
  int iStack_d4;
  int iStack_d0;
  int iStack_c0;
  undefined4 auStack_80 [28];
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((DAT_0071f868 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
    local_1b4 = param_1;
    local_1b0 = FUN_005d7a00();
    local_190 = (code *)(param_2 & 1);
    local_1a4 = 0;
    local_1a0 = 0;
    if (local_190 == (code *)0x0) {
      local_1bc = *(int **)(param_1 + 8);
    }
    else {
      local_1bc = *(int **)(param_1 + 0x24);
    }
    local_19c = (uint)*(ushort *)(param_1 + 0x14);
    piVar3 = (int *)(uint)*(ushort *)(param_1 + 0x16);
    iVar5 = local_19c * local_1b0;
    if (param_3 != (int *)0x0) {
      local_1bc = (int *)param_3[5];
      local_19c = param_3[4];
      iVar5 = param_3[2];
      piVar3 = (int *)param_3[3];
      local_1a4 = *param_3;
      local_1a0 = param_3[1];
    }
    piVar11 = *(int **)(param_1 + 0x48);
    iVar1 = (**(code **)(*piVar11 + 0x60))(piVar11);
    if (iVar1 == -0x7789fe3e) {
      (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))(*(int **)(param_1 + 0x48));
    }
    local_1bc = *(int **)(param_1 + 0x48);
    local_1b0 = (uint)*(ushort *)(param_1 + 0x14);
    iStack_198 = *(int *)(param_1 + 0x44);
    piStack_1ac = (int *)(uint)*(ushort *)(param_1 + 0x16);
    do {
      piVar10 = aiStack_e4;
      for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar10 = 0;
        piVar10 = piVar10 + 1;
      }
      aiStack_e4[0] = 0x7c;
      aiStack_e4[1] = 0x7ff9ee;
      if (piStack_194 != (int *)0x0) {
        FUN_005e61f0(*(int *)(param_1 + 0x20) + unaff_EBX,(int)piVar3 * iVar5);
      }
      if ((unaff_retaddr == 0) ||
         (iVar1 = (**(code **)(*local_1bc + 100))(local_1bc,0,aiStack_e4,0x21,0), iVar1 != 0)) {
        ppiVar7 = apiStack_160;
        for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *ppiVar7 = (int *)0x0;
          ppiVar7 = ppiVar7 + 1;
        }
        apiStack_160[0] = (int *)0x7c;
        uStack_154 = local_1b0;
        apiStack_160[1] = (int *)0x1007;
        apiStack_160[2] = piStack_1ac;
        uStack_f8 = 0x1800;
        switch(*(undefined4 *)(param_1 + 0x40)) {
        case 2:
          uVar2 = FUN_005d31a0();
          if ((uVar2 & 2) == 0) {
            pcVar9 = s___texture_format_565_is_unsuppor_0067e160;
            goto LAB_005bafc5;
          }
          puVar6 = &DAT_0071f0a8;
          puVar8 = auStack_118;
          for (iVar1 = 8; param_1 = iStack_1b8, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          break;
        case 3:
          uVar2 = FUN_005d31a0();
          if ((uVar2 & 4) == 0) {
            uVar4 = *(undefined4 *)(param_1 + 4);
            pcVar9 = s___texture_format_555_is_unsuppor_0067e0e0;
            goto LAB_005bafc9;
          }
          puVar6 = &DAT_0071f7d0;
          puVar8 = auStack_118;
          for (iVar1 = 8; param_1 = iStack_1b8, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          break;
        default:
          pcVar9 = s___unknown_texture_format_0067e0c4;
LAB_005bafc5:
          uVar4 = *(undefined4 *)(param_1 + 4);
LAB_005bafc9:
          FUN_005d2520(uVar4,pcVar9);
          break;
        case 5:
          uVar2 = FUN_005d31a0();
          if ((uVar2 & 0x10) == 0) {
            uVar4 = *(undefined4 *)(param_1 + 4);
            pcVar9 = s___texture_format_4444_is_unsuppo_0067e120;
            goto LAB_005bafc9;
          }
LAB_005baf52:
          puVar6 = &DAT_0071f088;
          puVar8 = auStack_118;
          for (iVar1 = 8; param_1 = iStack_1b8, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          break;
        case 8:
          uVar2 = FUN_005d31a0();
          iVar1 = 8;
          if ((uVar2 & 0x80) == 0) goto LAB_005baf52;
          puVar6 = &DAT_0071f688;
          puVar8 = auStack_118;
          for (; param_1 = iStack_1b8, iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        piVar10 = (int *)0x0;
        iVar1 = (**(code **)(*DAT_0071f86c + 0x18))(DAT_0071f86c,apiStack_160,&local_19c);
        if (iVar1 == 0) {
          iVar1 = (**(code **)(*piStack_1ac + 100))(piStack_1ac,0,auStack_f4,0x21,0);
          if (iVar1 == 0) {
            iVar1 = iStack_1b8 * unaff_EBP + iStack_d0 + aiStack_e4[0] * local_1b4;
            if (iVar1 != 0) {
              FUN_005ba910(iVar1,aiStack_e4[0],piVar11,iVar5,piVar3,local_1b0,uStack_8,uStack_4,
                           uStack_10);
            }
            (**(code **)(*piStack_1ac + 0x80))(piStack_1ac,0);
            puVar6 = auStack_80;
            for (iVar1 = 0x19; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
            auStack_80[0] = 100;
            iStack_18c = (int)local_1bc + (int)piVar3;
            auStack_80[2] = 0xcc0020;
            piStack_194 = local_1bc;
            piStack_184 = local_1bc;
            local_190 = (code *)(iVar5 / (int)unaff_EDI + unaff_EBX);
            iStack_198 = unaff_EBX;
            iStack_188 = unaff_EBX;
            pcStack_180 = local_190;
            iStack_17c = iStack_18c;
            iVar5 = (**(code **)(*piVar10 + 0x14))
                              (piVar10,&iStack_198,local_1b4,&iStack_188,0x1000000,auStack_80);
            if (iVar5 != 0) {
              FUN_005d2250(s_can_not_Load_Texture_from_sysmem_0067e1f4,0);
              uVar4 = FUN_005d42c0(iVar5,0,0);
              FUN_005d2250(uVar4);
            }
            (**(code **)(*unaff_EDI + 8))(unaff_EDI);
            param_1 = iStack_1b8;
            goto LAB_005bb159;
          }
          FUN_005d2250(s_can_not_Lock_Texture_0067e1dc,0);
        }
        pcVar9 = (char *)FUN_005d42c0(iVar1,0,0);
LAB_005bb151:
        FUN_005d2250(pcVar9,piVar10);
      }
      else {
        iVar1 = iStack_1a8 * local_1b4 + iStack_c0 + iStack_d4 * local_1a4;
        if (iVar1 == 0) {
          piVar10 = (int *)0x0;
          pcVar9 = s_hload_ptr_NULL_0067e218;
          goto LAB_005bb151;
        }
        FUN_005ba910(iVar1,iStack_d4,unaff_EBX,iVar5,piVar3,local_1a0,param_3,param_4,unaff_retaddr)
        ;
        (**(code **)(*local_1bc + 0x80))(local_1bc,0);
      }
LAB_005bb159:
      if (piStack_194 != (int *)0x0) {
        FUN_005e61e0();
      }
      if (iStack_198 < 2) {
        return;
      }
      if (DAT_0071f820 == 0) {
        return;
      }
      if (local_1bc == *(int **)(param_1 + 0x48)) {
        if (unaff_retaddr == 0) {
          unaff_EBX = *(int *)(param_1 + 0xc);
        }
        else {
          unaff_EBX = *(int *)(param_1 + 0x28);
        }
      }
      else {
        unaff_EBX = unaff_EBX + (int)piStack_1ac * local_1b0 * local_1b4;
      }
      local_190 = FUN_00401000;
      iStack_18c = 0;
      iStack_188 = 0;
      piStack_184 = (int *)0x0;
      iVar5 = (**(code **)(*local_1bc + 0x30))(local_1bc,&local_190,&local_1bc);
      if ((iVar5 != 0) || (unaff_ESI == (int *)0x0)) {
        FUN_005d2250(s_can_not_GetAttachedSurface_0067e1c0,local_1bc);
        uVar4 = FUN_005d42c0(iVar5,0,0);
        FUN_005d2250(uVar4);
        return;
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
      local_1b0 = (int)local_1b0 / 2;
      iVar5 = local_1b0 * local_1b4;
      piVar3 = (int *)((int)piStack_1ac / 2);
      iStack_198 = iStack_198 + -1;
      piStack_1ac = piVar3;
      local_1a0 = local_1b0;
    } while (local_1bc != (int *)0x0);
  }
  return;
}


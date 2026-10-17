
undefined4 * __thiscall FUN_004c8690(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644bb8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005eed00(s_Reflection_006718d0,0x18);
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_0064b8a4;
  param_1[0x17] = param_3;
  iVar2 = FUN_00631d33(0x194);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004c8070();
  }
  param_1[0x13] = uVar3;
  if (*(int **)(param_2 + 0x20c) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 0x20c) + 0x14))(0,param_1);
  }
  iVar2 = FUN_005d8940(&DAT_0066bd44);
  param_1[0x16] = iVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_2 = 0;
  if (*(int *)(iVar2 + 0x48) != 0) {
    iVar6 = 0;
    do {
      pcVar7 = s_effect_Refl3_006718c0;
      pbVar4 = (byte *)(*(int *)(iVar2 + 0x4c) + iVar6);
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_004c876b:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004c8770;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_004c876b;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004c8770:
      if (iVar5 == 0) {
        param_1[0x14] = iVar6 + *(int *)(iVar2 + 0x4c);
      }
      pcVar7 = s_effect_Refl32_006718b0;
      pbVar4 = (byte *)(*(int *)(iVar2 + 0x4c) + iVar6);
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_004c87af:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004c87b4;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_004c87af;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004c87b4:
      if (iVar5 == 0) {
        param_1[0x15] = iVar6 + *(int *)(iVar2 + 0x4c);
      }
      pcVar7 = s_effect_ReflNoise_0067189c;
      pbVar4 = (byte *)(*(int *)(iVar2 + 0x4c) + iVar6);
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_004c87f6:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004c87fb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_004c87f6;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004c87fb:
      if (iVar5 == 0) {
        iStack_14 = iVar6 + *(int *)(iVar2 + 0x4c);
      }
      param_2 = param_2 + 1;
      iVar6 = iVar6 + 0x7c;
    } while (param_2 < *(uint *)(iVar2 + 0x48));
  }
  if (((param_1[0x14] == 0) || (param_1[0x15] == 0)) || (iStack_14 == 0)) {
    FUN_0060a190(0x88762715,s_File____s__Line_____ld__Date_____006714b0,
                 s_C__Nek_VRAPPLVS_TRUCK_aeffects_c_006714d4,0x1509,s_Mar_19_2002_006714f8);
  }
  *(uint *)(param_1[0x14] + 0x20) = *(uint *)(param_1[0x14] + 0x20) & 0xffffff7f;
  *(uint *)(param_1[0x14] + 0x20) = *(uint *)(param_1[0x14] + 0x20) | 0x40040;
  *(uint *)(iStack_14 + 0x20) = *(uint *)(iStack_14 + 0x20) | 0x40;
  *(uint *)(param_1[0x15] + 0x20) = *(uint *)(param_1[0x15] + 0x20) & 0xffffff7f;
  *(uint *)(param_1[0x15] + 0x20) = *(uint *)(param_1[0x15] + 0x20) | 0x40000;
  ExceptionList = pvStack_c;
  return param_1;
}


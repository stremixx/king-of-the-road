
void __thiscall FUN_005adc90(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((DAT_007019d9 & 1) == 0) {
    DAT_007019d9 = DAT_007019d9 | 1;
    iVar4 = 4;
    do {
      FUN_004042a0();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = &DAT_00701550;
    puVar5 = &DAT_007019a8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_0061c439(&DAT_005adfa0);
  }
  if ((DAT_007019d9 & 2) == 0) {
    DAT_007019d9 = DAT_007019d9 | 2;
    iVar4 = 4;
    do {
      FUN_004042a0();
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    puVar2 = &DAT_00701550;
    puVar5 = &DAT_00701970;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    FUN_0061c439(&DAT_005adf90);
  }
  iVar4 = *(int *)(param_1 + 0x202c);
  if ((iVar4 < 0x12) && (*(int *)(param_1 + 0x2020) < 0x12)) {
    if (param_3 == 0) {
      puVar2 = param_2;
      puVar5 = (undefined4 *)(iVar4 * 0x30 + 0x1490 + param_1);
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      *(int *)(param_1 + 0x202c) = *(int *)(param_1 + 0x202c) + 1;
      uVar1 = FUN_005ab130(local_70,param_2,param_1 + 0x1070,
                           *(int *)(param_1 + 0x2024) * 0x30 + 0x10a0 + param_1);
      puVar2 = &local_40;
    }
    else {
      puVar2 = (undefined4 *)FUN_005ab130(&local_40,param_2,iVar4 * 0x30 + 0x1460 + param_1);
      puVar5 = (undefined4 *)(*(int *)(param_1 + 0x202c) * 0x30 + 0x1490 + param_1);
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      iVar4 = *(int *)(param_1 + 0x202c) + 1;
      *(int *)(param_1 + 0x202c) = iVar4;
      uVar1 = FUN_005ab130(&local_40,iVar4 * 0x30 + 0x1460 + param_1,param_1 + 0x1070,
                           *(int *)(param_1 + 0x2024) * 0x30 + 0x10a0 + param_1);
      puVar2 = local_70;
    }
    puVar2 = (undefined4 *)FUN_005ab130(puVar2,uVar1);
    puVar5 = &DAT_007019a8;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    puVar2 = &DAT_007019a8;
    puVar5 = (undefined4 *)(*(int *)(param_1 + 0x2020) * 0x30 + 0x8f0 + param_1);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
    }
    if (DAT_0071f864 != 0) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1);
      puVar5 = local_70;
      for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_3c = local_70[1];
      local_38 = local_70[2];
      local_40 = local_70[0];
      local_2c = local_60;
      local_28 = local_5c;
      local_30 = local_70[3];
      local_1c = local_54;
      local_18 = local_50;
      local_20 = local_58;
      local_c = local_48;
      local_8 = local_44;
      local_34 = 0;
      local_24 = 0;
      local_14 = 0;
      local_10 = local_4c;
      local_4 = 0x3f800000;
      iVar4 = (**(code **)(*DAT_0071f868 + 0x2c))(DAT_0071f868,1,&local_40);
      if (iVar4 != 0) {
        FUN_005d2250(s_set_matr_inv_par_0067ded4,0);
      }
    }
    FUN_005abba0(&DAT_00701970,&DAT_007019a8);
    FUN_005abd10(*(int *)(param_1 + 0x2020) * 0x30 + 0xcb0 + param_1,&DAT_00701970);
    *(int *)(param_1 + 0x2020) = *(int *)(param_1 + 0x2020) + 1;
    DAT_0067dec8 = DAT_0067dec8 + 1;
    *(int *)(param_1 + 0x20fc) = DAT_0067dec8;
  }
  return;
}


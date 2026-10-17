
void __fastcall FUN_005adfb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  
  if ((1 < *(int *)(param_1 + 0x2020)) && (1 < *(int *)(param_1 + 0x202c))) {
    *(int *)(param_1 + 0x2020) = *(int *)(param_1 + 0x2020) + -1;
    *(int *)(param_1 + 0x202c) = *(int *)(param_1 + 0x202c) + -1;
    DAT_0067dec8 = DAT_0067dec8 + 1;
    *(int *)(param_1 + 0x20fc) = DAT_0067dec8;
    if (DAT_0071f864 != 0) {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x202c) * 0x30 + 0x1460 + param_1);
      puVar3 = local_70;
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
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
      (**(code **)(*DAT_0071f868 + 0x2c))(DAT_0071f868,1,&local_40);
    }
  }
  return;
}


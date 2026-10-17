
undefined4 * __fastcall FUN_00576a90(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 **ppuVar3;
  undefined1 *puVar4;
  char *pcStack_178;
  undefined4 *apuStack_168 [9];
  undefined4 *puStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  char **ppcStack_138;
  undefined4 auStack_130 [2];
  undefined4 uStack_128;
  CHAR aCStack_124 [20];
  undefined1 local_110 [272];
  
  puVar1 = param_1 + 1;
  *param_1 = 0;
  *puVar1 = 0;
  if ((DAT_006f3ae8 != (int *)0x0) && (DAT_006f3ae0 != 0)) {
    pcStack_178 = s_JOYSTICK__cFFBEF_offRoad__enumer_0067b638;
    FUN_00576420();
    pcStack_178 = (char *)0x3;
    puVar4 = &LAB_00578680;
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x4c))(DAT_006f3ae8,&LAB_00578680,local_110);
    if (iVar2 < 0) {
      FUN_00576420(s_JOYSTICK__cFFBEF_offRoad__enumer_0067b54c);
      *puVar1 = 0;
      return param_1;
    }
    ppuVar3 = apuStack_168;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar3 = (undefined4 *)0x0;
      ppuVar3 = ppuVar3 + 1;
    }
    apuStack_168[8] = auStack_130;
    puStack_144 = &uStack_128;
    ppcStack_138 = &pcStack_178;
    apuStack_168[2] = (undefined4 *)0xf4240;
    apuStack_168[0] = (undefined4 *)0x38;
    apuStack_168[3] = (undefined4 *)0x0;
    apuStack_168[5] = (undefined4 *)0xffffffff;
    apuStack_168[6] = (undefined4 *)0x0;
    apuStack_168[4] = (undefined4 *)0x2710;
    auStack_130[0] = 0;
    uStack_128 = 1;
    apuStack_168[1] = (undefined4 *)0x12;
    apuStack_168[7] = (undefined4 *)0x1;
    uStack_140 = 0;
    uStack_13c = 0x10;
    pcStack_178 = (char *)0x7d0;
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x48))(DAT_006f3ae8,&DAT_00654380,apuStack_168,puVar1,0);
    if (iVar2 < 0) {
      wsprintfA(aCStack_124,s_CreateEffect_offRoad__failed_____0067b610,iVar2);
      FUN_00576420(aCStack_124);
      *puVar1 = 0;
      return param_1;
    }
    FUN_00592690(param_1);
    param_1[2] = 0;
    param_1[3] = puVar4;
  }
  return param_1;
}


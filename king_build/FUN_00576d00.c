
undefined4 * __fastcall FUN_00576d00(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char **ppcVar3;
  char *pcStack_168;
  CHAR aCStack_124 [20];
  undefined1 local_110 [260];
  undefined4 uStack_c;
  
  puVar1 = param_1 + 1;
  *param_1 = 0;
  *puVar1 = 0;
  if ((DAT_006f3ae8 != (int *)0x0) && (DAT_006f3ae0 != 0)) {
    pcStack_168 = s_JOYSTICK__cFFBEF_ToCenter__enume_0067b6d8;
    FUN_00576420();
    pcStack_168 = (char *)0x4;
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x4c))(DAT_006f3ae8,&LAB_00578680,local_110);
    if (iVar2 < 0) {
      FUN_00576420(s_JOYSTICK__cFFBEF_ToCenter__enume_0067b698);
      *puVar1 = 0;
      return param_1;
    }
    ppcVar3 = &pcStack_168;
    for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppcVar3 = (char *)0x0;
      ppcVar3 = ppcVar3 + 1;
    }
    param_1[4] = 0;
    param_1[2] = 10000;
    param_1[5] = uStack_c;
    param_1[6] = uStack_c;
    param_1[7] = 10000;
    param_1[8] = 10000;
    param_1[9] = 0;
    param_1[3] = 0;
    pcStack_168 = (char *)0x38;
    iVar2 = (**(code **)(*DAT_006f3ae8 + 0x48))(DAT_006f3ae8,&DAT_00654370,&pcStack_168,puVar1,0);
    if (iVar2 < 0) {
      wsprintfA(aCStack_124,s_CreateEffect_offRoad__failed_____0067b670,iVar2);
      FUN_00576420(aCStack_124);
      *puVar1 = 0;
      return param_1;
    }
    FUN_00592690(param_1);
  }
  return param_1;
}


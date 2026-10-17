
int __thiscall FUN_005d8d70(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EDI;
  int *piVar7;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  int *local_28c;
  int local_288 [98];
  undefined1 auStack_100 [8];
  int local_f8;
  int local_f4;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [68];
  undefined4 uStack_c;
  
  local_298 = 0;
  local_29c = 0;
  local_2a0 = 0;
  local_294 = 0;
  local_290 = 0;
  local_f4 = 0;
  local_f8 = 0;
  piVar7 = local_288;
  for (iVar6 = 100; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
    piVar7 = piVar7 + 1;
  }
  local_28c = param_1;
  iVar6 = (**(code **)(*param_1 + 0x70))();
  if (*(int *)(param_1[0x7a] + 0x4c) != 0) {
    puVar2 = *(undefined4 **)(*(int *)(param_1[0x7a] + 0x4c) + 0x24);
    FUN_005ea330(&LAB_005d90d0,&local_2a0);
    if (local_f8 != local_f4) {
      do {
        if ((undefined4 *)local_288[local_f4] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)local_288[local_f4])(1);
        }
        local_288[local_f4] = 0;
        local_f4 = (local_f4 + 1) % 100;
      } while (local_f8 != local_f4);
    }
    if (iVar6 != 0) {
      FUN_005e49f0(puVar2[0xf]);
    }
    FUN_005d8be0(puVar2);
    FUN_005d1860();
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  (**(code **)(*param_1 + 0x58))(param_2,auStack_a0,auStack_f0,auStack_50);
  iVar6 = FUN_005da550(auStack_b0,auStack_100,auStack_60);
  if (iVar6 == 0) {
    FUN_005d2520(s_Incorrect_module_name_00681b08,param_2);
  }
  iVar3 = FUN_005d1e70();
  if (iVar3 != 0) {
    FUN_005d2520(iVar3,0);
  }
  if (unaff_EDI != 0) {
    if ((DAT_007206c8 != 0) &&
       (pcVar4 = s_before_addmod_00681af8, cVar1 = s_before_addmod_00681af8[0], DAT_0071d774 != 0))
    {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar4;
      }
    }
    FUN_005e4570(*(undefined4 *)(iVar6 + 0x3c));
    if ((DAT_007206c8 != 0) &&
       (pcVar4 = s_before_preparemod_00681ae4, cVar1 = s_before_preparemod_00681ae4[0],
       DAT_0071d774 != 0)) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar4;
      }
    }
    (**(code **)(*param_1 + 0x5c))(iVar6);
    if ((DAT_007206c8 != 0) &&
       (pcVar4 = s_before_load_00681ad4, cVar1 = s_before_load_00681ad4[0], DAT_0071d774 != 0)) {
      for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
        cVar1 = *pcVar4;
      }
    }
    FUN_005e4a10(*(undefined4 *)(iVar6 + 0x3c));
  }
  if ((DAT_007206c8 != 0) &&
     (pcVar4 = s_before_dLink_00681ac4, cVar1 = s_before_dLink_00681ac4[0], DAT_0071d774 != 0)) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  (**(code **)(*param_1 + 0x50))(iVar6);
  if ((DAT_007206c8 != 0) &&
     (pcVar4 = s_after_addmod_00681ab4, cVar1 = s_after_addmod_00681ab4[0], DAT_0071d774 != 0)) {
    for (; (cVar1 != '\0' && (DAT_0071d778 < DAT_0071d770)); DAT_0071d778 = DAT_0071d778 + 1) {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *(char *)(DAT_0071d778 + DAT_0071d774) = cVar1;
      cVar1 = *pcVar4;
    }
  }
  uVar5 = FUN_005ee9c0(uStack_c);
  *(undefined4 *)(param_1[0x7a] + 0x4c) = uVar5;
  if (*(int *)(param_1[0x7a] + 0x4c) == 0) {
    FUN_005d2520(s_Module_has_not_needed_room_00681a98,0);
  }
  *(undefined4 *)(param_1[0x79] + 8) = 0xffffffff;
  return iVar6;
}


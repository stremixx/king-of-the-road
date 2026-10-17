
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d22b0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int local_f4;
  char local_f0 [120];
  char local_78 [120];
  
  puVar10 = &DAT_0071d7b8;
  for (iVar5 = 1000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = s_Internal_error__please_contact_0067eae4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  DAT_0071d7b8 = (char *)FUN_00631d33(~uVar6);
  uVar6 = 0xffffffff;
  pcVar4 = s_Internal_error__please_contact_0067eae4;
  do {
    pcVar9 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar9 + -uVar6;
  pcVar9 = DAT_0071d7b8;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = s_Internal_error__please_contact_0067eae4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  DAT_0071d7bc = (char *)FUN_00631d33(~uVar6);
  uVar6 = 0xffffffff;
  pcVar4 = s_Internal_error__please_contact_0067eae4;
  do {
    pcVar9 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar9 + -uVar6;
  pcVar9 = DAT_0071d7bc;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0xffffffff;
  pcVar4 = s_Internal_error__please_contact_0067eae4;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  _DAT_0071d7c0 = (char *)FUN_00631d33(~uVar6);
  uVar6 = 0xffffffff;
  pcVar4 = s_Internal_error__please_contact_0067eae4;
  do {
    pcVar9 = pcVar4;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar9 = pcVar4 + 1;
    cVar2 = *pcVar4;
    pcVar4 = pcVar9;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6;
  pcVar4 = pcVar9 + -uVar6;
  pcVar9 = _DAT_0071d7c0;
  for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar9 = pcVar9 + 1;
  }
  iVar5 = FUN_0061c356(s_mess_txt_0067ead8,&DAT_00675198);
  if (iVar5 != 0) {
    local_f4 = 0;
    do {
      if ((*(byte *)(iVar5 + 0xc) & 0x10) == 0) {
LAB_005d23ad:
        FUN_0061e41f(local_f0,100,iVar5);
        iVar3 = 0;
        cVar2 = local_f0[0];
        while ((cVar2 != '\0' && (cVar2 != '\"'))) {
          iVar8 = iVar3 + 1;
          iVar3 = iVar3 + 1;
          cVar2 = local_f0[iVar8];
        }
        if (local_f0[iVar3] != '\"') goto code_r0x005d23dc;
        iVar8 = 0;
        pcVar4 = local_f0 + iVar3 + 1;
        cVar2 = local_f0[iVar3 + 1];
        while ((cVar2 != '\0' && (cVar2 != '\"'))) {
          if (*pcVar4 == '\\') {
            pcVar9 = pcVar4 + 1;
            pcVar11 = pcVar4 + 2;
            pcVar1 = pcVar4 + 3;
            pcVar4 = pcVar4 + 3;
            local_78[iVar8] = *pcVar1 + *pcVar9 * '@' + (*pcVar11 + '\x10') * '\b' + -0x30;
          }
          else {
            local_78[iVar8] = *pcVar4;
          }
          pcVar9 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
          iVar8 = iVar8 + 1;
          cVar2 = *pcVar9;
        }
        local_78[iVar8] = '\0';
        if (*(int *)((int)&DAT_0071d7b8 + local_f4) != 0) {
          FUN_00631d5c(*(int *)((int)&DAT_0071d7b8 + local_f4));
        }
        uVar6 = 0xffffffff;
        pcVar4 = local_78;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        pcVar4 = (char *)FUN_00631d33(~uVar6);
        *(char **)((int)&DAT_0071d7b8 + local_f4) = pcVar4;
        uVar6 = 0xffffffff;
        pcVar9 = local_78;
        do {
          pcVar11 = pcVar9;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar11 = pcVar9 + 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar11;
        } while (cVar2 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar11 + -uVar6;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar4 = pcVar4 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
LAB_005d249f:
      local_f4 = local_f4 + 4;
    } while (local_f4 < 4000);
  }
  return;
code_r0x005d23dc:
  if ((*(byte *)(iVar5 + 0xc) & 0x10) != 0) goto LAB_005d249f;
  goto LAB_005d23ad;
}


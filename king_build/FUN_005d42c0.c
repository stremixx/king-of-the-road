
undefined4 * FUN_005d42c0(int param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_2 == (char *)0x0) {
    DAT_0071f578._0_1_ = 0;
  }
  else {
    uVar2 = 0xffffffff;
    do {
      pcVar7 = param_2;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar7 = param_2 + 1;
      cVar1 = *param_2;
      param_2 = pcVar7;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    pcVar7 = pcVar7 + -uVar2;
    pcVar6 = (char *)&DAT_0071f578;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
    uVar2 = 0xffffffff;
    pcVar7 = &DAT_0067a7ec;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  if (param_1 == -0x7fffbffe) {
    uVar2 = 0xffffffff;
    pcVar7 = s__nointerface__00681740;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd44) {
    uVar2 = 0xffffffff;
    pcVar7 = s_BADMAJORVERSION_00681728;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd43) {
    uVar2 = 0xffffffff;
    pcVar7 = s_BADMINORVERSION_00681710;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e2) {
    uVar2 = 0xffffffff;
    pcVar7 = s_CONFLICTINGTEXTUREFILTER_006816f4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7da) {
    uVar2 = 0xffffffff;
    pcVar7 = s_CONFLICTINGTEXTUREPALETTE_006816d8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7df) {
    uVar2 = 0xffffffff;
    pcVar7 = s_CONFLICTINGRENDERSTATE_006816c0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7fe) {
    uVar2 = 0xffffffff;
    pcVar7 = s_COLORKEYATTACHED_006816ac;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd3d) {
    uVar2 = 0xffffffff;
    pcVar7 = s_DEVICEAGGREGATED_00681694;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd33) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_CLIPPED_FAILED_0068167c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd3a) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_CREATE_FAILED_00681664;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd39) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_DESTROY_FAILED_0068164c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd34) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_FAILED_00681634;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd38) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_LOCK_FAILED_0068161c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd36) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_LOCKED_00681604;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd35) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_NOT_LOCKED_006815ec;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd37) {
    uVar2 = 0xffffffff;
    pcVar7 = s_EXECUTE_UNLOCK_FAILED_006815d4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd3e) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INITFAILED_006815bc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fcfe) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INBEGIN_006815a4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7cb) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INBEGINSTATEBLOCK_00681580;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd3f) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALID_DEVICE_00681568;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd21) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDCURRENTVIEWPORT_00681550;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd18) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDPALETTE_00681538;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7dc) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDMATRIX_00681520;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd20) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDPRIMITIVETYPE_00681508;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd1d) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDRAMPTEXTURE_006814f0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd1f) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDVERTEXTYPE_006814d8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f800) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDVERTEXFORMAT_006814c0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7cc) {
    uVar2 = 0xffffffff;
    pcVar7 = s_INVALIDSTATEBLOCK_006814a8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd12) {
    uVar2 = 0xffffffff;
    pcVar7 = s_LIGHT_SET_FAILED_00681490;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd11) {
    uVar2 = 0xffffffff;
    pcVar7 = s_LIGHTHASVIEWPORT_00681478;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd10) {
    uVar2 = 0xffffffff;
    pcVar7 = s_LIGHTNOTINTHISVIEWPORT_00681460;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd1c) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATERIAL_CREATE_FAILED_00681448;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd1b) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATERIAL_DESTROY_FAILED_00681430;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd19) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATERIAL_GETDATA_FAILED_00681418;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd1a) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATERIAL_SETDATA_FAILED_00681400;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd26) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATRIX_CREATE_FAILED_006813e8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd25) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATRIX_DESTROY_FAILED_006813d0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd23) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATRIX_GETDATA_FAILED_006813b8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd24) {
    uVar2 = 0xffffffff;
    pcVar7 = s_MATRIX_SETDATA_FAILED_006813a0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fcf9) {
    uVar2 = 0xffffffff;
    pcVar7 = s_NOCURRENTVIEWPORT_00681388;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fcfd) {
    uVar2 = 0xffffffff;
    pcVar7 = s_NOTINBEGIN_00681370;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7ca) {
    uVar2 = 0xffffffff;
    pcVar7 = s_NOTINBEGINSTATEBLOCK_00681358;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fcfc) {
    uVar2 = 0xffffffff;
    pcVar7 = s_NOVIEWPORTS_00681340;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd06) {
    uVar2 = 0xffffffff;
    pcVar7 = s_SCENE_BEGIN_FAILED_00681328;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd05) {
    uVar2 = 0xffffffff;
    pcVar7 = s_SCENE_END_FAILED_00681310;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd08) {
    uVar2 = 0xffffffff;
    pcVar7 = s_SCENE_IN_SCENE_006812f8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd07) {
    uVar2 = 0xffffffff;
    pcVar7 = s_SCENE_NOT_IN_SCENE_006812e0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd22) {
    uVar2 = 0xffffffff;
    pcVar7 = s_SETVIEWPORTDATA_FAILED_006812c8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd15) {
    uVar2 = 0xffffffff;
    pcVar7 = s_SURFACENOTINVIDMEM_006812b0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd1e) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_BADSIZE_00681298;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd2f) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_CREATE_FAILED_00681280;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd2e) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_DESTROY_FAILED_00681268;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd27) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_GETSURF_FAILED_00681250;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd2b) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_LOAD_FAILED_00681238;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd2d) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_LOCK_FAILED_00681220;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd29) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_LOCKED_00681208;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd30) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_NO_SUPPORT_006811f0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd28) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_NOT_LOCKED_006811d8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd2a) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_SWAP_FAILED_006811c0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd2c) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TEXTURE_UNLOCK_FAILED_006811a8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e3) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TOOMANYOPERATIONS_0068118c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7dd) {
    uVar2 = 0xffffffff;
    pcVar7 = s_TOOMANYPRIMITIVES_00681170;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e4) {
    uVar2 = 0xffffffff;
    pcVar7 = s_UNSUPPORTEDALPHAARG_00681154;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e5) {
    uVar2 = 0xffffffff;
    pcVar7 = s_UNSUPPORTEDALPHAOPERATION_00681138;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e6) {
    uVar2 = 0xffffffff;
    pcVar7 = s_UNSUPPORTEDCOLORARG_0068111c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e7) {
    uVar2 = 0xffffffff;
    pcVar7 = s_UNSUPPORTEDCOLOROPERATION_00681100;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e1) {
    uVar2 = 0xffffffff;
    pcVar7 = s_UNSUPPORTEDFACTORVALUE_006810e4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7de) {
    uVar2 = 0xffffffff;
    pcVar7 = s_UNSUPPORTEDTEXTUREFILTER_006810c8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7f3) {
    uVar2 = 0xffffffff;
    pcVar7 = s_VBUF_CREATE_FAILED_006810b4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7f2) {
    uVar2 = 0xffffffff;
    pcVar7 = s_VERTEXBUFFERLOCKED_006810a0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7f4) {
    uVar2 = 0xffffffff;
    pcVar7 = s_VERTEXBUFFEROPTIMIZED_00681088;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7f1) {
    uVar2 = 0xffffffff;
    pcVar7 = s_VERTEXBUFFERUNLOCKFAILED_0068106c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fcfb) {
    uVar2 = 0xffffffff;
    pcVar7 = s_VIEWPORTDATANOTSET_00681054;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fcfa) {
    uVar2 = 0xffffffff;
    pcVar7 = s_VIEWPORTHASNODEVICE_0068103c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7e8) {
    uVar2 = 0xffffffff;
    pcVar7 = s_WRONGTEXTUREFORMAT_00681020;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd17) {
    uVar2 = 0xffffffff;
    pcVar7 = s_ZBUFF_NEEDS_SYSTEMMEMORY_00681004;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd16) {
    uVar2 = 0xffffffff;
    pcVar7 = s_ZBUFF_NEEDS_VIDEOMEMORY_00680fe8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789f7ea) {
    uVar2 = 0xffffffff;
    pcVar7 = s_ZBUFFER_NOTPRESENT_00680fd4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fffb) {
    uVar2 = 0xffffffff;
    pcVar7 = s_already_initialized_00680fc0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc2) {
    uVar2 = 0xffffffff;
    pcVar7 = s_A_DirectDrawClipper_object_is_at_00680f3c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fff6) {
    uVar2 = 0xffffffff;
    pcVar7 = s_A_surface_cannot_be_attached_to_a_00680f00;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ffec) {
    uVar2 = 0xffffffff;
    pcVar7 = s_A_surface_cannot_be_detached_fro_00680ec0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdb7) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Windows_cannot_create_any_more_d_00680e88;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdb9) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Primary_and_3_D_surfaces__or_sur_00680e2c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fe4d) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Access_to_this_surface_is_refuse_00680dbc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd80) {
    uVar2 = 0xffffffff;
    pcVar7 = s_An_attempt_to_page_lock_a_surfac_00680d3c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd6c) {
    uVar2 = 0xffffffff;
    pcVar7 = s_An_attempt_to_page_unlock_a_surf_00680cb8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc9) {
    uVar2 = 0xffffffff;
    pcVar7 = s_An_attempt_was_made_to_set_a_cli_00680c44;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fe70) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_source_color_key_is_specified_00680c0c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ffd8) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_support_is_currently_availabl_00680be8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd94) {
    uVar2 = 0xffffffff;
    pcVar7 = s_A_device_context__DC__has_alread_00680b74;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd45) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Surfaces_created_by_one_direct_d_00680b10;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdce) {
    uVar2 = 0xffffffff;
    pcVar7 = s_A_DirectDraw_object_representing_00680ab4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ffc9) {
    uVar2 = 0xffffffff;
    pcVar7 = s_An_exception_was_encountered_whi_00680a6c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdbb) {
    uVar2 = 0xffffffff;
    pcVar7 = s_An_attempt_was_made_to_set_the_c_00680a14;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7fffbffb) {
    uVar2 = 0xffffffff;
    pcVar7 = s_There_is_an_undefined_error_cond_006809ec;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ffa6) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_height_of_the_provided_recta_00680998;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc5) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_DirectDraw_cooperative_level_00680908;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc6) {
    uVar2 = 0xffffffff;
    pcVar7 = s_DirectDraw_is_prevented_from_res_0068088c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdb4) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_surface_cannot_be_restored_b_0068083c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ffa1) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_primary_surface_creation_req_006807e4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff9c) {
    uVar2 = 0xffffffff;
    pcVar7 = s_One_or_more_of_the_capability_bi_00680790;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff92) {
    uVar2 = 0xffffffff;
    pcVar7 = s_DirectDraw_does_not_support_the_p_00680758;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdcf) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_globally_unique_identifier___006806dc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff88) {
    uVar2 = 0xffffffff;
    pcVar7 = s_DirectDraw_does_not_support_the_r_006806a8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff7e) {
    uVar2 = 0xffffffff;
    pcVar7 = s_DirectDraw_received_a_pointer_th_00680660;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7ff8ffa9) {
    uVar2 = 0xffffffff;
    pcVar7 = s_One_or_more_of_the_parameters_pa_0068061c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff6f) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_pixel_format_was_invalid_as_s_006805f0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdbd) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_position_of_the_overlay_on_t_006805ac;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff6a) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_provided_rectangle_was_inval_00680584;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdb0) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_requested_operation_could_no_00680528;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff60) {
    uVar2 = 0xffffffff;
    pcVar7 = s_One_or_more_surfaces_are_locked__006804d4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd4e) {
    uVar2 = 0xffffffff;
    pcVar7 = s_There_is_more_data_available_tha_0068048c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff56) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_3_D_hardware_or_emulation_is_p_00680460;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff4c) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_alpha_acceleration_hardware_i_006803f4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc1) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_blitter_hardware_is_present__006803d0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff33) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_clip_list_is_available__006803b4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc8) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_DirectDrawClipper_object_is_a_00680374;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff2e) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_operation_cannot_be_carried_o_00680310;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff29) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_surface_does_not_currently_h_006802dc;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff24) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_operation_cannot_be_carried_o_00680270;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff2c) {
    uVar2 = 0xffffffff;
    pcVar7 = s_A_create_function_is_called_with_00680210;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdb6) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_DC_has_ever_been_created_for_t_006801e0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc0) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_DirectDraw_raster_operation___006801a0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdcd) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Hardware_only_DirectDraw_object_c_00680138;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff22) {
    uVar2 = 0xffffffff;
    pcVar7 = s_DirectDraw_support_is_not_possib_006800f0;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdcb) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Software_emulation_is_not_availa_006800c8;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff1f) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_operation_requires_the_appli_00680054;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff1a) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Flipping_visible_surfaces_is_not_00680024;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff10) {
    uVar2 = 0xffffffff;
    pcVar7 = s_No_GDI_is_present__00680010;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdc7) {
    uVar2 = 0xffffffff;
    pcVar7 = s_Clipper_notification_requires_a_w_0067ff8c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdb1) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_operation_cannot_be_carried_o_0067ff20;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789ff06) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_operation_cannot_be_carried_o_0067fec4;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fd8a) {
    uVar2 = 0xffffffff;
    pcVar7 = s_An_attempt_was_made_to_allocate_n_0067fe50;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fda8) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_device_does_not_support_opti_0067fe20;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else if (param_1 == -0x7789fdbe) {
    uVar2 = 0xffffffff;
    pcVar7 = s_The_IDirectDrawSurface3__GetOver_0067fd6c;
    do {
      pcVar6 = pcVar7;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      pcVar6 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar6;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2;
    iVar4 = -1;
    pcVar7 = (char *)&DAT_0071f578;
    do {
      pcVar5 = pcVar7;
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      pcVar5 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar5;
    } while (cVar1 != '\0');
    pcVar7 = pcVar6 + -uVar2;
    pcVar6 = pcVar5 + -1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar6 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  else {
    if (param_1 == -0x7789fefc) {
      pcVar7 = s_The_operation_cannot_be_carried_o_0067fd10;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdc4) {
      pcVar7 = s_No_palette_object_is_attached_to_0067fce0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdc3) {
      pcVar7 = s_There_is_no_hardware_support_for_0067fca0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fee8) {
      pcVar7 = s_The_operation_cannot_be_carried_o_0067fc30;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fede) {
      pcVar7 = s_The_operation_cannot_be_carried_o_0067fbd4;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789feca) {
      pcVar7 = s_The_operation_cannot_be_carried_o_0067fb78;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fec4) {
      pcVar7 = s_The_DirectDrawSurface_object_is_n_0067faf8;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fec3) {
      pcVar7 = s_The_DirectDrawSurface_object_is_n_0067fa6c;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fec0) {
      pcVar7 = s_The_DirectDrawSurface_object_is_n_0067f9ec;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdbc) {
      pcVar7 = s_An_overlay_component_is_called_f_0067f9b0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789feb6) {
      pcVar7 = s_The_operation_cannot_be_carried_o_0067f94c;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdba) {
      pcVar7 = s_An_attempt_has_been_made_to_flip_0067f908;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789ff01) {
      pcVar7 = s_The_requested_item_was_not_found_0067f8e4;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7ffbfe10) {
      pcVar7 = s_An_attempt_was_made_to_call_an_i_0067f85c;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fda7) {
      pcVar7 = s_The_surface_is_an_optimized_surf_0067f808;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdb8) {
      pcVar7 = s_An_attempt_is_made_to_unlock_a_s_0067f7c8;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fd58) {
      pcVar7 = s_An_attempt_is_made_to_page_unloc_0067f778;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdb3) {
      pcVar7 = s_The_surface_being_used_is_not_a_p_0067f740;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789feb1) {
      pcVar7 = s_The_operation_cannot_be_carried_o_0067f6c8;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789feac) {
      pcVar7 = s_The_operation_to_create_a_z_buff_0067f620;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fea2) {
      pcVar7 = s_The_overlay_surfaces_cannot_be_z_0067f5a0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe98) {
      pcVar7 = s_The_hardware_needed_for_the_requ_0067f550;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7ff8fff2) {
      pcVar7 = s_DirectDraw_does_not_have_enough_m_0067f50c;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe84) {
      pcVar7 = s_DirectDraw_does_not_have_enough_d_0067f4c0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe82) {
      pcVar7 = s_The_hardware_does_not_support_cl_0067f48c;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe80) {
      pcVar7 = s_An_attempt_was_made_to_have_more_0067f440;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdbf) {
      pcVar7 = s_The_IDirectDrawSurface3__GetOver_0067f3ec;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe7d) {
      pcVar7 = s_Access_to_this_palette_is_refuse_0067f398;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdcc) {
      pcVar7 = s_This_process_has_already_created_0067f360;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdca) {
      pcVar7 = s_The_region_passed_to_the_IDirect_0067f310;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe66) {
      pcVar7 = s_An_attempt_was_made_to_attach_a_s_0067f2b0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe5c) {
      pcVar7 = s_An_attempt_was_made_to_make_a_su_0067f244;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe52) {
      pcVar7 = s_Access_to_the_surface_is_refused_0067f1f0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe48) {
      pcVar7 = s_Access_to_the_surface_is_refused_0067f1ac;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe3e) {
      pcVar7 = s_Access_to_the_surface_is_refused_0067f0ec;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe34) {
      pcVar7 = s_The_requested_surface_is_not_att_0067f0c4;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe2a) {
      pcVar7 = s_The_height_requested_by_DirectDr_0067f090;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe20) {
      pcVar7 = s_The_size_requested_by_DirectDraw_0067f02c;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe16) {
      pcVar7 = s_The_width_requested_by_DirectDra_0067eff8;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7fffbfff) {
      pcVar7 = s_The_operation_is_not_supported__0067efd4;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fe02) {
      pcVar7 = s_The_FourCC_format_requested_is_n_0067ef94;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdf8) {
      pcVar7 = s_The_bitmask_in_the_pixel_format_r_0067ef48;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdb2) {
      pcVar7 = s_The_display_is_currently_in_an_u_0067ef14;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fde7) {
      pcVar7 = s_A_vertical_blank_is_in_progress__0067eef0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fd49) {
      pcVar7 = s_The_video_port_is_not_active__0067eed0;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fde4) {
      pcVar7 = s_The_previous_blit_operation_that_0067ee68;
      goto LAB_005d6484;
    }
    if (param_1 == -0x7789fdb5) {
      pcVar7 = s_This_surface_cannot_be_restored_b_0067ee18;
      goto LAB_005d6484;
    }
    pcVar7 = s_The_provided_rectangle_was_not_h_0067edc8;
    if (param_1 == -0x7789fdd0) goto LAB_005d6484;
  }
  pcVar7 = s__unknown__0067edbc;
LAB_005d6484:
  uVar2 = 0xffffffff;
  do {
    pcVar6 = pcVar7;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  iVar4 = -1;
  pcVar7 = (char *)&DAT_0071f578;
  do {
    pcVar5 = pcVar7;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  pcVar7 = pcVar6 + -uVar2;
  pcVar6 = pcVar5 + -1;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar7;
    pcVar7 = pcVar7 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  }
  return &DAT_0071f578;
}


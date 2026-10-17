
void FUN_00430a20(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    pcVar2 = (char *)FUN_0040e420(s_VIOLATION_WRONG_SIDE_0066cf5c);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 2) != 0) {
    pcVar2 = (char *)FUN_0040e420(s_VIOLATION_REVERSE_GEAR_0066cf44);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 4) != 0) {
    pcVar2 = (char *)FUN_0040e420(s_VIOLATION_ILLEGAL_PARKING_0066cf28);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 8) != 0) {
    pcVar2 = (char *)FUN_0040e420(s_VIOLATION_CROSSING_FULL_LINE_0066cf08);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 0x10) != 0) {
    pcVar2 = (char *)FUN_0040e420(s_VIOLATION_CHANGING_LANE_0066cef0);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    pcVar5 = param_2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar5 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
    pcVar2 = (char *)FUN_0040e1d0(s_VIOLATION_NEGLIGENCE_0066ced8);
    uVar3 = 0xffffffff;
    do {
      pcVar5 = pcVar2;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar5 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar5;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar2 = pcVar5 + -uVar3;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)param_2 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + 4;
      param_2 = param_2 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_2 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      param_2 = param_2 + 1;
    }
  }
  return;
}


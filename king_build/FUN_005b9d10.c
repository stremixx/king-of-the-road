
undefined4 * __thiscall
FUN_005b9d10(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  
  *param_1 = &PTR_FUN_0065075c;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[0xe] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == (char *)0x0) {
    param_1[1] = 0;
  }
  else {
    uVar3 = 0xffffffff;
    pcVar2 = param_2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00631d33(~uVar3);
    param_1[1] = pcVar2;
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_2;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_2 + 1;
        cVar1 = *param_2;
        param_2 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar2 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar2 = pcVar2 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar2 = pcVar2 + 1;
      }
    }
  }
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = param_3;
  param_1[8] = param_4;
  param_1[0x11] = 1;
  return param_1;
}


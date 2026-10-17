
void __thiscall
FUN_005541a0(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,undefined4 *param_5,
            undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,char *param_9,
            undefined4 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  
  if ((-1 < param_2) && (param_2 < 0x32)) {
    param_2 = *(int *)(param_1 + 0x2ab8) - param_2;
    if (param_2 < 0) {
      param_2 = param_2 + 0x32;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x2abc + param_2 * 4);
    *param_4 = *(undefined4 *)(param_1 + 0x2b84 + param_2 * 4);
    iVar2 = param_2 * 0x30 + param_1;
    puVar7 = (undefined4 *)(iVar2 + 0x31c4);
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_5 = *puVar7;
      puVar7 = puVar7 + 1;
      param_5 = param_5 + 1;
    }
    iVar3 = param_1 + param_2 * 0xc;
    *param_6 = *(undefined4 *)(iVar3 + 0x4484);
    param_6[1] = *(undefined4 *)(iVar3 + 0x4488);
    param_6[2] = *(undefined4 *)(iVar3 + 0x448c);
    puVar7 = (undefined4 *)(iVar2 + 0x3b24);
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_7 = *puVar7;
      puVar7 = puVar7 + 1;
      param_7 = param_7 + 1;
    }
    *param_8 = *(undefined4 *)(param_1 + 0x46dc + param_2 * 4);
    uVar5 = 0xffffffff;
    pcVar8 = (char *)(param_2 * 0x21 + 0x486c + param_1);
    do {
      pcVar9 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar9 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar9;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar9 + -uVar5;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)param_9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      param_9 = param_9 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *param_9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      param_9 = param_9 + 1;
    }
    *param_10 = *(undefined4 *)(iVar3 + 0x2d14);
    param_10[1] = *(undefined4 *)(iVar3 + 0x2d18);
    param_10[2] = *(undefined4 *)(iVar3 + 0x2d1c);
    *param_11 = *(undefined4 *)(iVar3 + 0x2f6c);
    param_11[1] = *(undefined4 *)(iVar3 + 0x2f70);
    param_11[2] = *(undefined4 *)(iVar3 + 0x2f74);
    *param_12 = *(undefined4 *)(param_1 + 0x2c4c + param_2 * 4);
  }
  return;
}


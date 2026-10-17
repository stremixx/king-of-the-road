
void __fastcall FUN_0052f520(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = 0xffffffff;
  pcVar2 = s_KEYBOARD_only_00677770;
  do {
    pcVar6 = pcVar2;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar2 = pcVar6 + -uVar3;
  pcVar6 = param_1;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar6 = pcVar6 + 1;
  }
  param_1[0x104] = -1;
  param_1[0x105] = -1;
  param_1[0x106] = -1;
  param_1[0x107] = -1;
  iVar5 = 0x2f;
  pcVar2 = param_1 + 0x1c4;
  do {
    pcVar2[-0xffffffff000000bc] = '\0';
    pcVar2[-0xffffffff000000bb] = '\0';
    pcVar2[-0xffffffff000000ba] = '\0';
    pcVar2[-0xffffffff000000b9] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined **)(param_1 + 0x108) = &DAT_006d08f4;
  *(undefined **)(param_1 + 0x10c) = &DAT_006d08f2;
  *(undefined **)(param_1 + 0x110) = &DAT_006d08f6;
  *(undefined **)(param_1 + 0x114) = &DAT_006d08f8;
  *(undefined1 **)(param_1 + 0x118) = &DAT_006d08ca;
  *(undefined **)(param_1 + 0x11c) = &DAT_006d092a;
  *(undefined **)(param_1 + 0x120) = &DAT_006d095c;
  *(undefined **)(param_1 + 0x124) = &DAT_006d0958;
  *(undefined1 **)(param_1 + 0x128) = &DAT_006d090a;
  *(undefined1 **)(param_1 + 300) = &DAT_006d090c;
  *(undefined1 **)(param_1 + 0x130) = &DAT_006d090e;
  *(undefined1 **)(param_1 + 0x134) = &DAT_006d0910;
  *(undefined1 **)(param_1 + 0x138) = &DAT_006d0912;
  *(undefined1 **)(param_1 + 0x13c) = &DAT_006d0914;
  *(undefined1 **)(param_1 + 0x140) = &DAT_006d0916;
  *(undefined1 **)(param_1 + 0x144) = &DAT_006d0918;
  *(undefined1 **)(param_1 + 0x148) = &DAT_006d091a;
  *(undefined1 **)(param_1 + 0x14c) = &DAT_006d0908;
  *(undefined **)(param_1 + 0x158) = &DAT_006d0954;
  *(undefined **)(param_1 + 0x15c) = &DAT_006d0938;
  *(undefined **)(param_1 + 0x160) = &DAT_006d092c;
  *(undefined **)(param_1 + 0x164) = &DAT_006d0940;
  *(undefined **)(param_1 + 0x168) = &DAT_006d08f0;
  *(undefined **)(param_1 + 0x16c) = &DAT_006d08ee;
  *(undefined **)(param_1 + 0x170) = &DAT_006d0904;
  *(undefined **)(param_1 + 0x174) = &DAT_006d08ec;
  *(undefined **)(param_1 + 0x178) = &DAT_006d0942;
  *(undefined **)(param_1 + 0x17c) = &DAT_006d0996;
  *(undefined **)(param_1 + 0x180) = &DAT_006d0998;
  *(undefined **)(param_1 + 0x184) = &DAT_006d0990;
  *(undefined **)(param_1 + 0x188) = &DAT_006d0992;
  *(undefined **)(param_1 + 0x18c) = &DAT_006d097e;
  *(undefined **)(param_1 + 400) = &DAT_006d0982;
  *(undefined **)(param_1 + 0x194) = &DAT_006d08ba;
  *(undefined **)(param_1 + 0x198) = &DAT_006d098a;
  *(undefined **)(param_1 + 0x19c) = &DAT_006d098c;
  *(undefined1 **)(param_1 + 0x1a0) = &DAT_006d0956;
  *(undefined **)(param_1 + 0x1a4) = &DAT_006d0988;
  *(undefined **)(param_1 + 0x1a8) = &DAT_006d0950;
  *(undefined **)(param_1 + 0x1ac) = &DAT_006d08e8;
  *(undefined1 **)(param_1 + 0x1b0) = &DAT_006d08b8;
  *(undefined1 **)(param_1 + 0x1b4) = &DAT_006d0948;
  *(undefined **)(param_1 + 0x1b8) = &DAT_006d098e;
  pcVar2 = param_1 + 0x28c;
  iVar5 = 3;
  do {
    pcVar2[-0xffffffff0000000c] = '\0';
    pcVar2[-0xffffffff0000000b] = '\0';
    pcVar2[-0xffffffff0000000a] = '\0';
    pcVar2[-0xffffffff00000009] = '\0';
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  param_1[0x2b0] = '\0';
  param_1[0x2b1] = '\0';
  param_1[0x2b2] = '\0';
  param_1[0x2b3] = '\0';
  param_1[0x2a4] = '\0';
  param_1[0x2a5] = '\0';
  param_1[0x2a6] = '\0';
  param_1[0x2a7] = '\0';
  param_1[0x2a8] = '\0';
  param_1[0x2a9] = '\0';
  param_1[0x2aa] = '\0';
  param_1[0x2ab] = '\0';
  param_1[0x2b4] = '\0';
  param_1[0x2b5] = '\0';
  param_1[0x2b6] = '\0';
  param_1[0x2b7] = '\0';
  param_1[0x2ac] = '\x04';
  param_1[0x2ad] = '\0';
  param_1[0x2ae] = '\0';
  param_1[0x2af] = '\0';
  param_1[0x298] = '\x01';
  param_1[0x299] = '\0';
  param_1[0x29a] = '\0';
  param_1[0x29b] = '\0';
  param_1[0x29c] = '\x01';
  param_1[0x29d] = '\0';
  param_1[0x29e] = '\0';
  param_1[0x29f] = '\0';
  param_1[0x2a0] = '\x01';
  param_1[0x2a1] = '\0';
  param_1[0x2a2] = '\0';
  param_1[0x2a3] = '\0';
  pcVar2 = param_1 + 0x1c4;
  for (iVar5 = 0x2f; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  return;
}


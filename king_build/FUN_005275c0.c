
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005275c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char local_24 [36];
  
  uVar4 = 0xffffffff;
  pcVar6 = (char *)(DAT_006cdc38 + 0x278);
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = local_24;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar7 = pcVar7 + 1;
  }
  uVar2 = FUN_0050b470(local_24);
  piVar3 = (int *)FUN_0051b780(uVar2,1);
  if (piVar3 == (int *)0x0) {
    *(undefined4 *)(DAT_006cdbcc + 0x500) = 0;
    FUN_00603330(s_EFFECTS_00671998,s_control_00675768,0,DAT_006957c8);
    (**(code **)(*(int *)(DAT_006cdc38 + 0x40) + 0x3c))(1);
  }
  else {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  FUN_00512ce0();
  _DAT_006957d8 = 0;
  FUN_005b9a80();
  return;
}


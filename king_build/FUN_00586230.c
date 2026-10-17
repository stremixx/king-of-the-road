
void __thiscall FUN_00586230(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_124 [28];
  undefined4 local_108;
  undefined4 local_104;
  char local_100 [244];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064723b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006022c0();
  local_108 = *(undefined4 *)(param_1 + 0x4a4);
  uVar2 = 0xffffffff;
  pcVar5 = param_2;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  local_104 = 0xc;
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = local_100;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  local_4 = 0;
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  uVar2 = 0xffffffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *param_2;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = local_100 + ~uVar2;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pcVar5 = *param_3;
    param_3 = param_3 + 1;
    pcVar5 = pcVar5 + 4;
  }
  FUN_006027f0((int)DAT_0067c04a,&local_108,~uVar2 + 0x38);
  FUN_005c2d10(local_124);
  local_4 = 0xffffffff;
  FUN_00602560();
  ExceptionList = local_c;
  return;
}



undefined4 * __fastcall FUN_0053da50(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_124 [28];
  char local_108 [160];
  int local_68;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00646786;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005d2890(100,s__Traffic_Light_00678224);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064e418;
  FUN_0053d960();
  iVar4 = (int)DAT_00671d84;
  FUN_005c29d0(iVar4,param_1 + 9,4);
  FUN_006022c0();
  uVar2 = 0xffffffff;
  pcVar5 = s_Traffic_Light_00671bd0;
  do {
    pcVar6 = pcVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar6 = pcVar5 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2;
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar5 = pcVar6 + -uVar2;
  pcVar6 = local_108;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
    pcVar5 = pcVar5 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    pcVar6 = pcVar6 + 1;
  }
  local_68 = iVar4;
  FUN_006027f0(900,local_108,0xfa);
  FUN_005c2d10(local_124);
  local_4 = local_4 & 0xffffff00;
  FUN_00602560();
  ExceptionList = local_c;
  return param_1;
}



void FUN_0051d0d0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_24;
  int *piStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  char *pcStack_14;
  undefined1 local_4 [4];
  
  FUN_004d9020();
  pcStack_14 = (char *)(DAT_006cdc38 + 0x278);
  uStack_18 = 0x51d0ed;
  piVar2 = (int *)FUN_0051b780();
  if (piVar2 == (int *)0x0) {
    pcStack_14 = s_Unable_open_file_for_player__006757e0;
    uStack_18 = 0x51d0fe;
    FUN_005d2520();
  }
  pcStack_14 = local_4;
  iVar1 = *piVar2;
  uStack_18 = 0;
  uStack_1c = 0;
  piStack_20 = (int *)0x11;
  uStack_24 = 0;
  uVar3 = FUN_0050b500(s_listofgames_006757d4);
  piVar5 = piVar2;
  (**(code **)(iVar1 + 0x18))(piVar2,uVar3);
  if (piStack_20 == (int *)0x0) {
    FUN_005d2520(s_old_version_of_format_006766c4,0);
  }
  iVar1 = *piStack_20;
  piVar4 = (int *)0x1011;
  uVar3 = FUN_0050b500(uStack_18,0x1011,0,0,&uStack_24);
  (**(code **)(iVar1 + 0x14))(piStack_20,uVar3);
  if (piVar4 == (int *)0x0) {
    FUN_005d2520(s_Can_not_create_storage_for_savin_0067669c,0);
  }
  FUN_00483470(piVar4);
  FUN_0051ceb0(piVar4,piVar5);
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}



void FUN_0051d1c0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 local_4 [4];
  
  FUN_004d9020();
  piVar2 = (int *)FUN_0051b780(DAT_006cdc38 + 0x278,2);
  if (piVar2 == (int *)0x0) {
    FUN_005d2520(s_Unable_open_file_for_player__006757e0,0);
  }
  iVar1 = *piVar2;
  uVar6 = 0;
  piVar5 = (int *)0x0;
  uVar3 = FUN_0050b500(s_listofgames_006757d4,0,0x11,0,0,local_4);
  piVar4 = piVar2;
  (**(code **)(iVar1 + 0x18))(piVar2,uVar3);
  if (piVar5 == (int *)0x0) {
    FUN_005d2520(s_old_version_of_format_006766c4,0);
  }
  iVar1 = *piVar5;
  uVar3 = FUN_0050b500(uVar6);
  (**(code **)(iVar1 + 0x30))(piVar5,uVar3);
  (**(code **)(*piVar4 + 8))(piVar4);
  (**(code **)(*piVar2 + 8))(piVar2);
  return;
}

